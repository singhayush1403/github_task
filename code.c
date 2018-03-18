#include <stdio.h>
int main()
{
    //this is a simple meaningless edit done by mayank jain to bring a simple change in the file.
   // shaily bhatt added a do while loop to the program so that the user can run at it as long as he wants to.
   //
 
    int number, i, res;
    do {
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
    printf( " wish to continue ? press - 1 to continue, 0 to exit : " );
    scanf("%d", &res);
    } while ( res == 1);
    return 0;
}
