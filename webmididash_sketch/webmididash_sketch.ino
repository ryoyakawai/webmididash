#include <Keyboard.h>

#define KEY_ESC 0xB1
int button = 2;
int dipsw = 3;
String keyword="Navigator.requestMIDIAccess({sysex:true}).then( onMIDISuccess, onMIDIFailure );";

void setup() {
  // Use internal pull up resistor
  pinMode(button, INPUT_PULLUP); 
  pinMode(dipsw, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  int pressed = digitalRead(button) == 0;
  if (pressed) delay(100);
  if (pressed && digitalRead(button) == 0) {
    if(digitalRead(dipsw)==0) {
      // LOW
      Keyboard.println(keyword);
    } else {
      Keyboard.press(KEY_ESC);
      Keyboard.release(KEY_ESC);
    }
    delay(500);
  }
}

