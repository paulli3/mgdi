#ifndef _INCLUDE__APP_H
#define _INCLUDE__APP_H
#include "windows.h"
#include "debug.h"
#define RET_OK 1
class App
{
    public:
    App(){ OS=WIN; };
    LRESULT CALLBACK   matchMsg(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
    int CreateApp();
    int CreateWinApp(HINSTANCE* hInstance, HINSTANCE* hPrevInstance,LPSTR lpCmdLine, int nCmdShow);
    void setParam(HINSTANCE* instance){
            hinstance = instance;
    }
    void setCmdLine(LPTSTR* cmdLine)
    {
    
    }

    LRESULT CALLBACK Proc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
    private:
        enum OS_CFG {WIN=1,GTK=1,MAC=2};
        OS_CFG OS;
        HWND* hwnd = 0;
        HINSTANCE* hinstance = 0;


        void RegisterWindow();
};


#endif
