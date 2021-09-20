#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void debug_msg(char* message, ... ){
    va_list args;
    va_start(args, message);
    fprintf(stderr, "DEBUG: ");
    vfprintf(stderr, message, args);
    va_end(args);
}
