#pragma once

#include <avr/pgmspace.h>

// Note: The frequencies are a bit off due to rounding errors
const uint16_t note_freq[] PROGMEM = {
    0, // OFF
#ifndef BEEP_ONLY
    28,   // A0   (For completeness, Atmega 328p cannot go this low)
    29,   // AS0  (For completeness, Atmega 328p cannot go this low)
    31,   // B0
    33,   // C1
    35,   // CS1
    37,   // D1
    39,   // DS1
    41,   // E1
    44,   // F1
    46,   // FS1
    49,   // G1
    52,   // GS1
    55,   // A1
    58,   // AS1
    62,   // B1
    65,   // C2
    69,   // CS2
    73,   // D2
    78,   // DS2
    82,   // E2
    87,   // F2
    93,   // FS2
    98,   // G2
    104,  // GS2
    110,  // A2
    117,  // AS2
    123,  // B2
    131,  // C3
    139,  // CS3
    147,  // D3
    156,  // DS3
    165,  // E3
    175,  // F3
    185,  // FS3
    196,  // G3
    208,  // GS3
    220,  // A3
    233,  // AS3
    247,  // B3
    262,  // C4
    277,  // CS4
    294,  // D4
    311,  // DS4
    330,  // E4
    349,  // F4
    370,  // FS4
    392,  // G4
    415,  // GS4
    440,  // A4
    466,  // AS4
    494,  // B4
    523,  // C5
    554,  // CS5
    587,  // D5
    622,  // DS5
    659,  // E5
    698,  // F5
    740,  // FS5
    784,  // G5
    831,  // GS5
    880,  // A5
    932,  // AS5
    988,  // B5
    1047, // C6
    1109, // CS6
#endif
    1175, // D6
#ifndef BEEP_ONLY
    1245, // DS6
    1319, // E6
    1397, // F6
#endif
    1480, // FS6
#ifndef BEEP_ONLY
    1568, // G6
    1661, // GS6
#endif
    1760, // A6
#ifndef BEEP_ONLY
    1865, // AS6
    1976, // B6
    2093, // C7
    2217, // CS7
    2349, // D7
    2489, // DS7
    2637, // E7
    2794, // F7
    2960, // FS7
    3136, // G7
    3322, // GS7
    3520, // A7
    3729, // AS7
    3951, // B7
    4186, // C8
    4435, // CS8
    4699, // D8
    4978, // DS8
#endif
};
