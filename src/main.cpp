#include "App.h"

#include <tchar.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
    App * app = new App();
    app->CreateApp();
    
    
    AllocConsole();//为进程创造一个新的控制台
    HANDLE hOutputHandle=GetStdHandle(STD_OUTPUT_HANDLE);//获得控制台输出句柄

    DWORD nRet=0;
    TCHAR buf[100]={0};//用来输出字符的缓冲区

    lstrcpy(buf,"Hello");
    WriteConsole(hOutputHandle,buf,lstrlen(buf),&nRet,NULL);
    system("pause");
    WriteConsole(hOutputHandle,buf,lstrlen(buf),&nRet,NULL);
    system("pause");

     FreeConsole();
}
