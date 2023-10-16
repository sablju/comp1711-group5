#include <stdio.h>

int main() {
    int mark;
    printf("Enter mark\n");
    scanf("%d",&mark);
    printf ("The mark to be checked is: %d \n", mark);
    
    if (mark == 0)
    {
        printf("The mark of %d is zero\n", mark);
    }
    else if (mark < 50)
    {
        printf("The mark of %d is positive ");
    }
    else if (mark > 50)
    {
        printf("The mark of %d is negative");
    }
    return 0 ;
}