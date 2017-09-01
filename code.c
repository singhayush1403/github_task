#include <stdio.h>
int main()
{
    //this is a simple meaningless edit done by mayank jain to bring a simple change in the file.
    int number, i;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    printf("Factors of %d are: ", number);
    for(i=1; i <= number; ++i)
    {
        if (number%i == 0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
