#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL)); 
    int flip = rand() % 2;

    if (flip == 0)
        printf("Heads\n");
    else
        printf("Tails\n");

    return 0;
}
