/*  TOPIC : POINTER (IN A NUT SHELL) */
/*  C LANGUAGE                       */
/*  EXTRA CODING                     */



#include<stdio.h>

int main(void)
{
    int a = 10;
    int *p;

    p = &a;                    // most important -->>pointer variable assignment.      not *p=&a ;

    printf("a=%d\n",   a);
    printf("p=%d\n",   p);
    printf("*p=%d\n", *p);
    *p = 200;
    printf("a=%d\n",a);

    return 0;
}



// p IS POINTER VARIABLE AND a IS POINTED VARIABLE
// p IS INTEGER POINTER VARIABLE
