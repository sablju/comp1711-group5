#include <stdio.h>

int main() {
    int mark;
    printf("Enter mark\n");
    scanf("%d",&mark);
    printf ("The mark to be checked is: %d \n", mark);
    
    if ( "mark could be divided by 4")
    {
        printf("The mark of %d is zero\n", mark);
    }
    else if ( "mark could be divided by 5")
    {
         printf("The mark of %d is zero\n", mark);
    }
    else if ( "mark is not a multiple of four and five")
    {
        printf("The mark of %d is positive\n", mark);
    }
    return 0;
}