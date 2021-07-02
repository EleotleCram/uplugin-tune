#pragma once

#include <avr/pgmspace.h>

extern const note_t short_beep[] PROGMEM;
extern const note_t triple_beep[] PROGMEM;
extern const note_t d_major_arp_up[] PROGMEM;
extern const note_t d_major_arp_down[] PROGMEM;

#ifndef BEEP_ONLY
extern const note_t dancing_queen[] PROGMEM;
extern const note_t dancing_queen_alt[] PROGMEM;
#endif /* !BEEP_ONLY */
