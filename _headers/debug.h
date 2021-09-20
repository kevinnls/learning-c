#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void debug_msg(char* fmt, ... ){
    va_list args;
    va_start(args, fmt);
    fprintf(stderr, "DEBUG: ");
    vfprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
    va_end(args);
}
