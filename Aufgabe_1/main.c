#include <stdio.h>

int main()
{
    //task 1
    printf("Hallo Heiner!\n");

    //additional task 1.1.
    char name[10];

    //WAS GEHT AB
    printf("Wie heißt du?: ");
    scanf("%s", &name);

    printf("Hallo %s!",name);

    return 0;
}
