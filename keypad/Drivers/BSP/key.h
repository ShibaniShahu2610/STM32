#ifndef KEY_H
#define KEY_H

#include <stdint.h>
#include <stdbool.h>

#define OPEN LOW
#define CLOSED HIGH

typedef uint8_t boolean;
typedef enum { IDLE, PRESSED, HOLD, RELEASED } KeyState;

extern const char NO_KEY;

typedef struct {
    char kchar;
    int kcode;
    KeyState kstate;
    bool stateChanged;
    uint32_t startTime; // Add startTime member
} Key;


void Key_init(Key *key);
void Key_initChar(Key *key, char userKeyChar);
void Key_keyUpdate(Key *key, char kchar, KeyState kstate, bool stateChanged);

#endif

/*
|| @changelog
|| | 1.0 2012-06-04 - Mark Stanley : Initial Release
|| #
*/
