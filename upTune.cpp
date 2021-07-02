#include <Arduino.h>

#include <aprintf.h>

#include "upTune.h"
// -------
#include "intern/notes.h"

#define WHOLENOTE_DURATION(tempo) ((60 * 1000L / tempo) * 4)
#define NOTE_GAP 5 // ms
#define NOTE_DURATION(note) (((note)&0x7F00) >> 8)
#define NOTE_IS_DOTTED(note) (((note)&0x8000) >> 15)
#define NOTE_DURATION_MS(note, tempo)                                                                  \
  ((WHOLENOTE_DURATION(tempo) / (float)NOTE_DURATION(note)) * (NOTE_IS_DOTTED(note) ? 1.5 : 1))
#define NOTE_INDEX(note) ((note)&0xFF)
#define NOTE_FREQ(note) (pgm_read_word_near(note_freq + NOTE_INDEX(note)))

void upTune::jump(uint8_t pos) {
  this->pos = pos;

  aprintf(F("jump!\n"));

  const note_t note = pgm_read_word_near(song + pos);

  if (note != END) {
    uint32_t duration = NOTE_DURATION_MS(note, tempo);
    // aprintf(F("duration: %d  (whole=%d; symbolix=%d)\n"), duration, WHOLENOTE_DURATION(tempo),
    //         NOTE_DURATION(note));
    // aprintf(F("WHOLE: %d\n"), WHOLENOTE_DURATION(tempo));
    aprintf(F("DUR: %d\n"), NOTE_DURATION(note));
    aprintf(F("DUR_MS: %d\n"), duration);
    next_note_time = millis() + duration;
    // sound.tone(NOTE_FREQ(note), duration - (duration > 40 ? NOTE_GAP : 0));
    sound.tone(NOTE_FREQ(note), duration);
  } else {
    next_note_time = 0;
  }
}

void upTune::play(const note_t *song, uint8_t tempo = 112) {
  this->tempo = tempo;
  this->song = song;
  jump(0);
}

void upTune::setup() {}

void upTune::loop() {
  if (next_note_time != 0) {
    if (millis() > next_note_time) {
      jump(pos + 1);
    }
  }
}
