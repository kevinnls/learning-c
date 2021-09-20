#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void dprintf(char* fmt, ... ){
    va_list args;
    va_start(args, fmt);
    fprintf(stderr, "DEBUG: ");
    vfprintf(stderr, fmt, args);
    frpintf(stderr, "\n");
    va_end(args);
}
