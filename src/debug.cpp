#include "debug.h"

debug_output_console & debug_output_console::GetInstance()
{
    static debug_output_console instance;   //局部静态变量
    return instance;
}

/* int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow) */
// {
    // debug_output_console* dc= &debug_output_console::GetInstance();
    // dc->printf("asss");
    // dc->printf("\n");

    // dc->printf("asss,%s,%s,%d\n","11","22",11);
    // DEBUG("\rxxxxyyyyyyyyyyyyyyyyy,%d,%d,%d,%d,%d\n",111,111,111,111,111);
    // DEBUG("\nxx,%d",22);
    // system("pause");
    // return 0;
/* } */
