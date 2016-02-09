/* TOPIC : BASIC POINTER VARIABLE */
/* C LANGUAGE */
/* UNDERSTANDING POINTER VARIABLE */
/* UNDERSTANDING DIFFERENCE BETWEEN ptr(holds memory location) and *ptr(holds value, stored in the memory location,ptr )*/
/* PREREQUISITE CODE : address_of_variable.c */

#include<stdio.h>

int main(void)
{
    int x=10;
    int *ptr;        //declaration of pointer variable = ptr
    ptr = &x ;      //address of x (&x) is assigned as the value of ptr , so x is pointed varible


    printf("\n address of x (holds by ptr):%d \n\n" , ptr);                    //shows the memory address of x , holds by ptr
    printf(" value stored in the %d:%d(by using *ptr) \n\n",ptr , *ptr);     // shows the value of x by *ptr

    printf("\n\n\n\n--------INCREMENT------------\n\n\n\n");


    *ptr = *ptr + 1;                                      // this means x = x + 1 ; increament of value x by 1
                                                         // in short *ptr means value (here value of x,10)
                                                         // after increament the value of *ptr and also x is 11
    printf(" *ptr = *ptr + 1\n");
    printf(" Now the value of *ptr and x is : %d and %d \n", *ptr , x);

                    // so *ptr can change the value of the pointed variable


    printf("\n\n\n--------VALUE CHANGE--------\n\n\n");

    *ptr = 42;

    printf(" *ptr = 42\n");
    printf(" Value of x and *ptr is now = %d and %d \n\n ", x ,*ptr);


    return 0;
}


/*SUMMARY CODE :
    int a = 10;
    int *p;

    *p = &a;

    printf("a=%d\n",   a);
    printf("p=%d\n",   p);
    printf("*p=%d\n", *p);
    *p = 200;
    printf("a=%d\n",a);



  NOTE : 1.POINTER IS A DATA TYPE.
         2.THE BASE TYPE AND THE DATA TYPE OF POINTER VARIABLE MUST BE SAME.(INTEGER , FLOAT , LONG  ,CHAR ---->POINTER)
         3.POINTER VARIABLE HOLDS MEMORY ADDRESS , JUST .
         4.POINTER VARIABLE POINTS A VARIABLE(POINTED VARIABLE) OF SAME DATA TYPE.  BY POINTING,IT HOLDS THE VARIABLE ADDRESS

            HERE ,
            BASE TYPE = DATA TYPE OF POINTED VARIABLE
            x = POINTED VARIABLE
            ptr =POINTER VARIBLE
*/
