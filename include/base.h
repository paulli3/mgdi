#ifndef _INCLUDE__BASE_H
#define _INCLUDE__BASE_H
#include <windows.h>
#include <gdiplus.h>
using namespace Gdiplus;

    class base
    {
        public:
            base(){
                GdiplusStartupInput start_input;
                GdiplusStartup(&gdi_token,&start_input,NULL); 
            };
            ~base(){
                GdiplusShutdown(gdi_token);
            }

        private:
            ULONG_PTR   gdi_token;
    };

#endif
