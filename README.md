This is the source code for the Chromium Stream Processing framework, 1.9 release

I did not create this project, this is just a snapshot of the official source, as of release 1.9

Official site is [here](https://graphics.stanford.edu/papers/cr/)

Paper is [here](https://graphics.stanford.edu/papers/cr/cr_lowquality.pdf)

# Build instructions for Windows

1.  Install the following:
    *   Cygwin: https://cygwin.com/
        *   Install the `make` package
    *   Visual Studio: https://www.visualstudio.com/
2.  Add the Cygwin bin path (e.g., `C:\Cygwin64\bin`) to your `%PATH%`
    environment variable
3.  Open up PowerShell
4.  Go into the Visual Studio directory. E.g.,
    `cd "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC"`
5.  Set the appropriate build environment variables for your target OS using
    the `vcvarsall.bat` command. For example, for x64 run
    `vcvarsall.bat amd64`
6.  Go into the project directory and run `make`
