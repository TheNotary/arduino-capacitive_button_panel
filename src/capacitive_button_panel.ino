#include <USBAPI.h>
#include <Wire.h>
#include <Keyboard.h>
#include <CapPin.h>

//===============================
//===================================
//	Keyboard

#define KEY_LEFT_CTRL		0x80
#define KEY_LEFT_SHIFT		0x81
#define KEY_LEFT_ALT		0x82
#define KEY_LEFT_GUI		0x83
#define KEY_RIGHT_CTRL		0x84
#define KEY_RIGHT_SHIFT		0x85
#define KEY_RIGHT_ALT		0x86
#define KEY_RIGHT_GUI		0x87

#define KEY_UP_ARROW		0xDA
#define KEY_DOWN_ARROW		0xD9
#define KEY_LEFT_ARROW		0xD8
#define KEY_RIGHT_ARROW		0xD7
#define KEY_BACKSPACE		0xB2
#define KEY_TAB				0xB3
#define KEY_RETURN			0xB0
#define KEY_ESC				0xB1
#define KEY_INSERT			0xD1
#define KEY_DELETE			0xD4
#define KEY_PAGE_UP			0xD3
#define KEY_PAGE_DOWN		0xD6
#define KEY_HOME			0xD2
#define KEY_END				0xD5
#define KEY_CAPS_LOCK		0xC1
#define KEY_F1				0xC2
#define KEY_F2				0xC3
#define KEY_F3				0xC4
#define KEY_F4				0xC5
#define KEY_F5				0xC6
#define KEY_F6				0xC7
#define KEY_F7				0xC8
#define KEY_F8				0xC9
#define KEY_F9				0xCA
#define KEY_F10				0xCB
#define KEY_F11				0xCC
#define KEY_F12				0xCD



// CONFIGURATIONS:
#define THRESH 500

CapPin cPin_10 = CapPin(10); // pin 10, 'a' button

CapPin pins[] = {cPin_10};

char Keys[] =   {  'a',    'b',    ' ',     KEY_RETURN, KEY_RIGHT_ARROW, KEY_UP_ARROW, KEY_LEFT_ARROW, KEY_DOWN_ARROW};


boolean currentPressed[] = {false};

float smoothed[1] = {0};

void setup() {
  Serial.begin(115200);
  Serial.println("start");
  
  // Can't use Keyboard unless using the flora?  Maybe it's special bootloader?`
  // Keyboard.begin();
}


void loop() {
  
}
