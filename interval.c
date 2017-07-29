#include <stdio.h>
void main()
{
    int low, high, i, temp;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are", low, high);

    while (low < high)
    {
        temp= 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                temp = 1;
                break;
            }
        }

        if (temp == 0)
            printf("%d ", low);

        ++low;
    }
getch();
}
