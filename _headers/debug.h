#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void debug_msg(char* fmt, ... ){
    va_list args;
    va_start(args, fmt);
    vfprintf(stderr, fmt, args);
    va_end(args);
}
