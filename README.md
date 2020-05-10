# ctools

Tools for Unix, written in C for the most part. It's only SBU versions (S _table_ B _ut_ U _gly_) and experimental code. They are developed under Linux, FreeBSD or OpenIndiana. 

## testing code: hexdump

The only purpose of this program is to play with current code
and new ideas.

To build it:

```shell script
mkdir "build"
cd build
cmake ..
cmake --build . --target hexdump.exe
./hexdump.exe ../LICENSE
```
