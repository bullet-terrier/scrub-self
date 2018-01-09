#include "./include/gener_comm.h"

void main(int argc, char *argv[])
{
    for(int i=0;i<argc;i++)
    {
        printf("%s\n",argv[i]);
        char x = *argv[i]; // trying to dereference into a raw value - let's see if that works...
        printf("%d\n", x);
        //printf("%s\n", x);
    }
}
