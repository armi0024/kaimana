// combo_animatinos.h
//
//   Created:  October 25, 2013    zonbipanda // gmail.com
//   Revised:  October 25, 2013    zonbipanda // gmail.com
//

#ifndef __animations_h__
#define __animations_h__


#include <avr/io.h>
#include "arduino.h"
#include "kaimana.h"
#include "kaimana_custom.h"

extern Kaimana kaimana;


#define IDLE_SIZE           768    // size of animation array
#define IDLE_OFFSET_2       512    // used to create animation -- see code
#define IDLE_OFFSET_1       256    // used to create animation -- see code
#define IDLE_OFFSET_0         0    // used to create animation -- see code
#define IDLE_OFFSET          12    // used to create animation -- see code

#define FIREBALL_SIZE       768    // size of animation array
#define FIREBALL_OFFSET_3   288    // used to create animation -- see code
#define FIREBALL_OFFSET_2   192    // used to create animation -- see code
#define FIREBALL_OFFSET_1    96    // used to create animation -- see code
#define FIREBALL_DELAY      350    // value in microseconds



// street figher 4 - ryu's special moves (combos)
// http://www.eventhubs.com/guides/2008/jul/06/ryu-street-fighter-4-character-guide/
//
void animation_combo_1(void);    // Hadouken (Fireball)
void animation_combo_2(void);    // Shoryuken (Dragon Punch)
void animation_combo_3(void);    // Tatsumaki Senpukyaku (Hurricane Kick)
void animation_combo_4(void);    // Super — Shinkuu Hadouken
void animation_combo_5(void);    // Ultra 1 — Metsu Hadouken
void animation_combo_6(void);    // Ultra 2 — Metsu Hadouken


// other function prototypes
int animation_idle(void);


#endif
