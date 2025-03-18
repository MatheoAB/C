#include <stdio.h>
#include "test.h"

int main()
{
    int const x(5);
    printf("Voici un calcul : %d", x+fonction());

    return 0;
}