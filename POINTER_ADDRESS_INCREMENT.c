/* TOPIC : ADDRESS INCREMENT , HOLDS BY POINTER */
/* C LANGUAGE                                   */


#include<stdio.h>

int main()
{
    printf("------------INTEGER---------\n\n");
    // basic pointer
    int a = 50;
    int *b;
    b = &a;
    printf("a = %d\n",*b);
    printf("Address of a = %d\n",b);
    // increment of address ( int 4 byte)
    b = b+1;
    printf("now b pointer holds = %d\n\n",b);



   printf("\n------------CHARACTER---------\n\n");
   char q = 't';
   char *r ;
   r =&q;
   printf("q = %c\n", *r );
   printf("Address of q = %d\n",r);
   // increment of address (character 1 byte)
   r = r +1;
   printf("Now r pointer holds = %d\n",r);



   printf("\n------------DOUBLE---------\n\n");
   double x = 40;
   double *z ;
   z = &x ;
   printf("x = %f\n", *z );                 // FORMAT SPECIFIER FOR DOUBLE IS %f
   printf("Address of x = %d\n",z);
   // increment of address (double 8 byte)
   z = z +1;
   printf("Now z pointer holds = %d\n\n",z);
}



/*
NOTE : POINTER_VARIABLE = POINTER_VARIABLE + 1 ;
        MEANS :
         ADDRESS INCREMENT FOR CHARACTER BY 1 ( AS CHARACTER IS 1 BYTE )
         ADDRESS INCREMENT FOR INTEGER BY 4 ( AS INTEGER IS 4 BYTE )
         ADDRESS INCREMENT FOR DOUBLE BY 8 ( AS DOUBLE IS 8 BYTE )
         AND SO ON......

         WHERE POINTER_VARIABLE HOLDS ADDRESS.
*/
// USE : PUSH , POP , DATASTRUCTURE
