#pragma once

#include <stdint.h>
#include <uPlugin.h>
#include <upSound.h>

#include "notes.h"

// Note definition:
// 1 byte / duration 1 (full); 2 (half); 3 (triplet); 4 (quarter) ; msb denotes dot
// 1 byte / note 1 - A0, 2 - AS0 ; 0 means off
typedef uint16_t note_t;

// clang-format off
#define WHOLE   | (1 << 8)
#define HALF    | (2 << 8)
#define TRIPLET | (3 << 8)
#define QUARTER | (4 << 8)
#define EIGHTH  | (8 << 8)
#define S16TH   | (16 << 8)
#define TH32ND  | (32 << 8)
#define S64TH   | (64 << 8)

#define DOT     | (0x80 << 8)

#define END     0xFF00
// clang-format on

#include "tunes.h"

class upTune : public uPlugin {
private:
  upSound &sound;
  const note_t *song;
  uint8_t pos;
  uint8_t tempo; // unit for tempo is BPM
  uint32_t next_note_time;

  void jump(uint8_t pos);

public:
  upTune(upSound &sound) : sound(sound) {}

  void setup();
  void loop();

  void play(const note_t *song, uint8_t tempo = 112);
};
