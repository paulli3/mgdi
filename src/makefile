cc=cl
baseDir=D:\Program Files (x86)\Microsoft Visual Studio 12.0\VC
baseInclude="$(baseDir)\include"

baseLib=$(baseDir)\lib
includeDir=/I"../include"
sourceDir=./src
DEBUG=/GA /MD /Ox /Ot /W3 /c /nologo  /EHsc #/link  /INCREMENTAL:no /NODEFAULTLIB:libcmt.lib  
OUTOBJ=/Fo:$@

SOURCES=../bin/main.obj \
		../bin/App.obj\
		../bin/debug.obj
OUTDIR="../bin/"

.SUFFIXES : .cpp
#CSTRS=$(wildcard src/*.cpp )
#$@         当前target的名称
main:main.exe

main.exe:$(SOURCES)
	$(cc) /nologo  /Fe:"$@" user32.lib shell32.lib  kernel32.lib Advapi32.lib gdi32.lib gdiplus.lib $(SOURCES)
	main.exe

../bin/main.obj:main.cpp
	$(cc) $?  $(DEBUG) $(OUTOBJ)  $(includeDir)
../bin/App.obj:App.cpp
	$(cc) $?  $(DEBUG) $(OUTOBJ)  $(includeDir)
../bin/debug.obj:debug.cpp
	$(cc) $?  $(DEBUG) $(OUTOBJ)  $(includeDir)



clear:
	rm $(SOURCES)
