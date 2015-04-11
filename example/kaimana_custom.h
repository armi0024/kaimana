//  kaimana_local.h
//
//  Copyright 2013 Paradise Arcade Shop, ParadiseArcadeShop.com
//  All rights reserved.  Use is subject to license terms.
//
//  Code is provided for entertainment purposes and use with the Kaimana controller.
//  Code may be copied, modified, resused with this Copyright notice.
//  No commercial use without written permission from Paradise Arcade Shop.
//
//  Paradise Arcade Shop Kaimana LED Driver Board
//  Initial Release October 15, 2013
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//  Kaimana localization file based on original source released by ParadiseArcadeShop.com October 15, 2013
//
//  Created:  October 24, 2013    zonbipanda // gmail.com  -- Arduino 1.0.5 Support
//  Revised:  October 29, 2013    zonbipanda // gmail.com
//  Revised:  April   11, 2015    zonbipanda // gmail.com  -- Arduino 1.6.3 Support
//

#ifndef __kaimana_local_h__
#define __kaimana_local_h__

#define __PROG_TYPES_COMPAT__
#include <avr/io.h>
#include <avr/pgmspace.h>
#include "Arduino.h"
#include "kaimana.h"


// uncomment exactly one of the _LED_ORDER_*_ choices below or make your own 
// based on the order you have your LEDs connected to the Kaimana board
//
#define  _LED_ORDER_DEFAULT_  true
//#define  _LED_ORDER_JWYDER_   true


#ifdef _LED_ORDER_DEFAULT_
  // Map function names to default LED index numbers
  // specific to ParadiseArcadeShop.com Kaimana board (PS360+LED)
  // change or expand as needed
  //
  //   KAIMANA->LED_JOY->LED_HOME->LED_SELECT->LED_START->LED_P1->LED-P2->LED_P3->LED-P4->LED_K1->LED-K2->LED_K3->LED-K4
  //
  #define  LED_JOY     0
  #define  LED_HOME    1
  #define  LED_GUIDE   1
  #define  LED_SELECT  2
  #define  LED_BACK    2
  #define  LED_START   3
  #define  LED_P1      4
  #define  LED_P2      5
  #define  LED_P3      6
  #define  LED_P4      7
  #define  LED_K1      8
  #define  LED_K2      9
  #define  LED_K3      10
  #define  LED_K4      11
#endif


#ifdef _LED_ORDER_JWYDER_
  // Map function names to LED index numbers 
  // example for just K4-K1 and P1-P4 are connected first to the Kaimana board
  // submitted by jwyder
  //
  //   KAIMANA->LED-K4->LED_K3->LED_K2->LED_K1->LED-P1->LED_P2->LED-P3->LED_P4->LED_JOY->LED_HOME->LED_SELECT->LED_START
  //
  #define  LED_K4      0
  #define  LED_K3      1
  #define  LED_K2      2
  #define  LED_K1      3
  #define  LED_P1      4
  #define  LED_P2      5
  #define  LED_P3      6
  #define  LED_P4      7
  #define  LED_JOY     8
  #define  LED_HOME    9
  #define  LED_GUIDE   9
  #define  LED_SELECT  10
  #define  LED_BACK    10
  #define  LED_START   11
#endif


// maximum number of LEDs attached to Kaimana board
// best to leave value untouched at 12 unless you understand why
#define  LED_COUNT   12


// general definitions for delays and other customizable features
// specific to ParadiseArcadeShop.com Kaimana board (PS360+LED)
#define  BOOT_COLOR_DELAY         250    // value in miliseconds
#define  BOOT_COMPLETE_DELAY      500    // value in miliseconds
#define  MAIN_LOOP_DELAY           50    // value in miliseconds - used main loop
#define  IDLE_TIMEOUT_SECONDS      30    // value in seconds - normally 60 or 30 seconds but set very short for testing
#define  IDLE_ANIMATION_DELAY       8    // value in miliseconds - use smaller value for faster idle animation playback


// definitions of RGB values use by random color generator: setLEDRandomColor(int)
#define  COLOR_RANDOM_1    127,220,000    // lime green
#define  COLOR_RANDOM_2    127,000,220    // purple
#define  COLOR_RANDOM_3    000,220,220    // blue
#define  COLOR_RANDOM_4    000,255,127    // cyan
#define  COLOR_RANDOM_5    000,127,255    // cobalt blue
#define  COLOR_RANDOM_6    255,000,000    // red
#define  COLOR_RANDOM_7    220,127,000    // orange
#define  COLOR_RANDOM_8    220,000,127    // magenta


// definitions for combo switch patterns
//
//   test for switches in reverse order (newest to oldest)
//
//   street figher 4 - ryu's special moves
//   http://www.eventhubs.com/guides/2008/jul/06/ryu-street-fighter-4-character-guide/
//
#define  COMBO_PATTERN_1A    ATTACK_RIGHT + ATTACK_P1, ATTACK_RIGHT, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN
#define  COMBO_PATTERN_1B    ATTACK_RIGHT + ATTACK_P2, ATTACK_RIGHT, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN
#define  COMBO_PATTERN_2A    ATTACK_DOWN + ATTACK_RIGHT + ATTACK_P1, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN, ATTACK_NONE,  ATTACK_RIGHT
#define  COMBO_PATTERN_2B    ATTACK_DOWN + ATTACK_RIGHT + ATTACK_P2, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN, ATTACK_NONE,  ATTACK_RIGHT
#define  COMBO_PATTERN_3A    ATTACK_LEFT + ATTACK_K1, ATTACK_LEFT, ATTACK_DOWN + ATTACK_LEFT, ATTACK_DOWN
#define  COMBO_PATTERN_3B    ATTACK_LEFT + ATTACK_K2, ATTACK_LEFT, ATTACK_DOWN + ATTACK_LEFT, ATTACK_DOWN
#define  COMBO_PATTERN_4A    ATTACK_RIGHT + ATTACK_P1, ATTACK_RIGHT, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN, ATTACK_NONE, ATTACK_RIGHT, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN
#define  COMBO_PATTERN_5A    ATTACK_RIGHT + ATTACK_P3, ATTACK_RIGHT, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN, ATTACK_NONE, ATTACK_RIGHT, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN
#define  COMBO_PATTERN_6A    ATTACK_RIGHT + ATTACK_K3, ATTACK_RIGHT, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN, ATTACK_NONE, ATTACK_RIGHT, ATTACK_DOWN + ATTACK_RIGHT, ATTACK_DOWN


// data points for single full sinusoidal wave _/-\_/-
//
const prog_uint8_t sinusoid[257] PROGMEM = {
  0, 3, 6, 9, 12, 15, 18, 21, 24, 28, 31, 34, 37, 40, 43, 46, 49, 52,
  55, 58, 61, 64, 68, 71, 74, 77, 79, 82, 85, 88, 91, 94, 97, 100, 103,
  106, 109, 111, 114, 117, 120, 122, 125, 128, 131, 133, 136, 139, 141,
  144, 146, 149, 151, 154, 156, 159, 161, 164, 166, 168, 171, 173, 175,
  178, 180, 182, 184, 186, 188, 191, 193, 195, 197, 199, 201, 202, 204,
  206, 208, 210, 212, 213, 215, 217, 218, 220, 221, 223, 224, 226, 227,
  229, 230, 231, 233, 234, 235, 236, 237, 239, 240, 241, 242, 243, 244,
  244, 245, 246, 247, 248, 248, 249, 250, 250, 251, 251, 252, 252, 253,
  253, 253, 254, 254, 254, 254, 254, 254, 254, 255, 254, 254, 254, 254,
  254, 254, 254, 253, 253, 253, 252, 252, 251, 251, 250, 250, 249, 248,
  248, 247, 246, 245, 244, 244, 243, 242, 241, 240, 239, 237, 236, 235,
  234, 233, 231, 230, 229, 227, 226, 224, 223, 221, 220, 218, 217, 215,
  213, 212, 210, 208, 206, 204, 202, 201, 199, 197, 195, 193, 191, 188,
  186, 184, 182, 180, 178, 175, 173, 171, 168, 166, 164, 161, 159, 156,
  154, 151, 149, 146, 144, 141, 139, 136, 133, 131, 128, 125, 122, 120,
  117, 114, 111, 109, 106, 103, 100, 97, 94, 91, 88, 85, 82, 79, 77,
  74, 71, 68, 64, 61, 58, 55, 52, 49, 46, 43, 40, 37, 34, 31, 28, 24,
  21, 18, 15, 12, 9, 6, 3, 0
};


// data points for color cycling
//
const prog_uint8_t colorCycleData[] PROGMEM = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,

    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,

    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,

    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,

    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,

    0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24,  26,  28,  30,
   32,  35,  38,  41,  44,  47,  50,  53,  56,  59,  62,  65,  68,  71,  74,  77,
   81,  85,  89,  93,  97, 101, 105, 109, 113, 117, 121, 125, 129, 133, 137, 141,
  148, 155, 162, 169, 176, 183, 190, 197, 204, 211, 218, 225, 232, 239, 246, 253,

  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,

  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,

  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,

  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,

  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,

  253, 246, 239, 232, 225, 218, 211, 204, 197, 190, 183, 176, 169, 162, 155, 148,
  141, 137, 133, 129, 125, 121, 117, 113, 109, 105, 101,  97,  93,  89,  85,  81,
   77,  74,  71,  68,  65,  62,  59,  56,  53,  50,  47,  44,  41,  38,  35,  32,
   30,  28,  26,  24,  22,  20,  18,  16,  14,  12,  10,   8,   6,   4,   2,   0
};



#endif

