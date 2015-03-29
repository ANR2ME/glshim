[![Build Status](https://travis-ci.org/lunixbochs/glshim.svg?branch=master)](https://travis-ci.org/lunixbochs/glshim)

glshim (pvrtc branch)
====

This is a shim providing OpenGL 1.x functionality to OpenGL ES accelerated cards.

This branch includes a PVRTC decoder and is additionally bound by the terms of the PowerVR SDK license and attribution clause. Read LICENSE for more details.

----

Compiling
----

    cmake .; make GL

*or for the Raspberry Pi*

    cmake . -DBCMHOST=1; make GL

----

GLU
----

You probably want the glu branch from https://github.com/lunixbochs/glues

    git clone git@github.com:lunixbochs/glues.git; git checkout glu; cmake .; make

----

Installation
----

Put lib/libGL.so.1 in your `LD_LIBRARY_PATH`. If you need GLU, build libGLU.so.1 from the glues repo and do likewise.
