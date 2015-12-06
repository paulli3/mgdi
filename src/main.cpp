#include "App.h"

#include <tchar.h>
#include <base.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
    App * app = new App();
    app->CreateWinApp(&hInstance, &hPrevInstance,lpCmdLine, nCmdShow);

    new base();
}
