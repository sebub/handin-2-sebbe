#include <stdio.h>

int main(void)
{
    int i,j, smallest,c,check;

    while (1)
    {
        check = 0;
        printf("Please enter 2 integers:\n");
        scanf("%d %d", &i, &j);

        if((i < 1) || (j < 1))
            break;

        printf("You have entered the numbers %d and %d\n", i, j);

        smallest = i <= j ? i : j;

        for(c = smallest; check < 1; c--)
        {
            int cj = j%c;
            int ci = i%c;
            if((ci == 0) && (cj == 0))
            {
                printf("Greatest common divisor of %d and %d is %d",i, j, c);
                check = 1;
            }
        }



    }


}