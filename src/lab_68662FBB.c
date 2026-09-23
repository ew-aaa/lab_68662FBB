#include <stdio.h>

void printscreen()
{
    printf(" ####\n");
    printf("#    #\n");
    printf("#    #\n");
    printf("######\n");
    printf("#    #\n");
    printf("#    #\n");
    printf("#    #\n");
}

#ifndef ___TEST___
int main()
{
    printscreen();
    return(0);
}
#endif