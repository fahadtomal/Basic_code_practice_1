/*  TOPIC : VARIABLE ADDRESS SHOWING             */
/*  C LANGUAGE                                   */
/*  VARIABLE IS A NAME OF A  MEMORY LOCATION     */
/*  EACH VARIABLE HAS A MEMORY LOCATION          */
/*  IMPORTANT FOR POINTER VARIABLE UNDERSTANDING */


#include<stdio.h>

int main (void)
{
    int a , b;
    printf("\n\tThe address of a is %u \n\n\tThe address of b is %u", &a , &b );
    printf("\n\n\n\n");
    return 0 ;
}

/*
        FORMAT SPECIFIER :
        %u vs %d :

        %u is used for unsigned integer
        %d is used for signed integer
*/
