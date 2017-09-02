#include <stdio.h>
int main()
{
    //this is a simple meaningless edit done by mayank jain to bring a simple change in the file.
    int number, i;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    if (number>0) 
    {
    
        printf("Factors of %d are: ", number);
        for(i=1; i <= number; ++i)
        {
            if (number%i == 0)
            {
                printf("%d ",i);
            }
        }
    }

    else if(number<=0)
    {
        printf("%d is not a valid number ", number);
    }

    return 0;
}
/*Chinmay was Here*/
