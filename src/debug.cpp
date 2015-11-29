#include "windows.h"
#include "stdio.h"
#include <stdarg.h>
    struct debug_output_console
    {
      
      debug_output_console()
      {

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
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
    debug_output_console dc;
    dc.printf("asss");
    dc.printf("\n");

    dc.printf("asss,%s,%s,%d","11","22",11);
    system("pause");
    return 0;
}
