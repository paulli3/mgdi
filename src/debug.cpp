#include "windows.h"
#include "stdio.h"
#include <stdarg.h>
class debug_output_console
{
    private:
        debug_output_console()   //构造函数是私有的
        {
        }
        debug_output_console(const debug_output_console &);
        debug_output_console & operator = (const debug_output_console &);
    public:
        static debug_output_console & GetInstance()
        {
            static debug_output_console instance;   //局部静态变量
            return instance;
        }
        static VOID  _output_debug(LPVOID, INT ch)
        {
            static bool initialized = false;
            if(!initialized)
            {
                AllocConsole();
                freopen("conin$", "r", stdin);
                freopen("conout$", "w", stdout);
                freopen("conout$", "w", stderr);
                initialized = true;
            }
            putchar(wchar_t(ch));
        }
        void printf( const char* fmt, ... )
        {
            char buffer [ 2049 ];
            va_list args;
            va_start ( args, fmt );
            _vsnprintf( buffer, 2048, fmt, args );
            va_end ( args );
            buffer [ 2048 ] = 0;
            for( const char *p = buffer; *p; ++p)
                _output_debug(0, *p);
        }
};

#define DEBUG debug_output_console::GetInstance().printf
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
    debug_output_console* dc= &debug_output_console::GetInstance();
    dc->printf("asss");
    dc->printf("\n");

    dc->printf("asss,%s,%s,%d\n","11","22",11);
    DEBUG("\rxxxxyyyyyyyyyyyyyyyyy,%d,%d,%d,%d,%d\n",111,111,111,111,111);
    DEBUG("\nxx,%d",22);
    system("pause");
    return 0;
}
