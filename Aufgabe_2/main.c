#include <stdio.h>

int main()
{
    //task 2
    int i = 1;
    int prefix = 1;

    while (i<100)
    {
        printf("%d\n",prefix);

        i = i+1;
        prefix = i+prefix;
    }

    //additional task 2.1. and 2.2.
    int lowerLimit;
    int upperLimit;
    int result = 1;

    int counter = 0;

    printf("Bitte gebe eine belibige Zahl q(untere Grenze) ein: ");
    scanf("%d",&lowerLimit);
    printf("Bitte gebe eine belibige Zahl p(obere Grenze) ein: ");
    scanf("%d",&upperLimit);

    printf("Los gehts\n");

    while (lowerLimit<upperLimit)
    {
        if (counter == 10)
        {
            printf("\n");
            counter = 0;
        }

        printf("%8d ", result);
        lowerLimit = lowerLimit+1;
        result = result+lowerLimit;


        counter = counter+1;
    }

    return 0;
}
