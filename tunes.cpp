#include "upTune.h"

const note_t short_beep[] PROGMEM = {REST S64TH, A_6 TH32ND, END};
const note_t triple_beep[] PROGMEM = {REST S64TH,  D_6 TH32ND, REST TH32ND, D_6 TH32ND,
                                      REST TH32ND, D_6 TH32ND, REST TH32ND, END};
const note_t d_major_arp_up[] PROGMEM = {REST S64TH,  D_6 TH32ND, REST TH32ND, FS_6 TH32ND,
                                         REST TH32ND, A_6 TH32ND, REST TH32ND, END};
const note_t d_major_arp_down[] PROGMEM = {REST S64TH,  A_6 TH32ND, REST TH32ND, FS_6 TH32ND,
                                           REST TH32ND, D_6 TH32ND, REST TH32ND, END};

#ifndef BEEP_ONLY
// ABBA - Dancing Queen
const note_t dancing_queen[] PROGMEM = {
    CS_6 HALF DOT,   B_5 QUARTER,     D_6 HALF DOT,     CS_6 S16TH,      B_5 EIGHTH,   A_5 S16TH,
    B_5 EIGHTH DOT,  CS_6 EIGHTH DOT, CS_6 QUARTER DOT, A_6 TH32ND DOT,  REST S64TH,   A_6 EIGHTH DOT,
    GS_6 TH32ND DOT, REST S64TH,      GS_6 EIGHTH DOT,  FS_6 TH32ND DOT, REST S64TH,   FS_6 HALF DOT,
    CS_6 HALF DOT,   B_5 QUARTER,     D_6 HALF,         CS_6 S16TH,      B_5 EIGHTH,   A_5 S16TH,
    B_5 EIGHTH DOT,  CS_6 EIGHTH DOT, CS_6 QUARTER DOT, B_5 QUARTER,     A_5 HALF DOT, END};
const note_t dancing_queen_alt[] PROGMEM = {
    REST WHOLE,  CS_5 HALF DOT, B_4 QUARTER,    D_5 HALF DOT, CS_5 S16TH,       B_4 S16TH,   REST S16TH,
    A_4 TH32ND,  REST TH32ND,   B_4 QUARTER,    CS_5 EIGHTH,  CS_5 WHOLE,       REST EIGHTH, REST HALF,
    REST EIGHTH, REST QUARTER,  CS_5 HALF DOT,  B_4 QUARTER,  D_5 HALF DOT,     CS_5 S16TH,  B_4 S16TH,
    A_4 S16TH,   B_4 QUARTER,   CS_5 S16TH DOT, REST TH32ND,  CS_5 QUARTER DOT, B_4 QUARTER, A_4 WHOLE,
    END};
#endif /* !BEEP_ONLY */
