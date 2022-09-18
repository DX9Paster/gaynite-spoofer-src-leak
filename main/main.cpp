#include "../utils/includes.h"
//#include "../protections/protect.h"
#include "main.h"
int main()
{
    // took out protection
    start();
    //thread protection(debug);
    thread consoletitle(SetTitle);
    autologin();
    taskill();
    home();
}
