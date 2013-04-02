* TODO

	1. 
clang++ -fPIC -DUNIX  -std=c++11 -stdlib=libc++  -O3 -finline-functions -funroll-loops -fprefetch-loop-arrays -ffast-math -Dlinux -I. -I.. -I../.. -I../Include -I../Public -I../OSDependent/Linux -I../../compiler -c InfoSink.cpp
clang: warning: argument unused during compilation: '-fprefetch-loop-arrays'
Generating Gen_glslang.cpp
make[3]: dos2unix: No such file or directory

	2.  mainWindow.ui: An invalid pixmap property 'pixmap' was encountered.
mainWindow.ui: An invalid pixmap property 'pixmap' was encountered.
mainWindow.ui: An invalid icon property 'windowIcon' was encountered.
mainWindow.ui: An invalid icon property 'windowIcon' was encountered.

	3. progControl.cpp:#define __WCLONE        0x80000000      /* Wait only on non-SIGCHLD children */
	
	4.  OS X ptrace parameter 4 width: defined as int, not wide enough for void* under x86_64
	
	5.  Replace glsldb/aboutBox.cpp #ifdef __APPLE__