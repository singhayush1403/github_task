#include <stdio.h>
int main()
{
    int number, i;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    if (number>0) 
    {
    
            printf("Factors of %d are:", number);
            printf("1 ");
    for(i=2; i <= number/2; ++i)
    {
        if (number%i == 0)
        {

            printf("%d ",i);

        }

    }
    printf("%d \n",number);
    }

    else if(number<=0)
    {
        printf("%d is not a valid number ", number);
    }

    return 0;
}
