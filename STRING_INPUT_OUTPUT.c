/* TOPIC : STRING INPUT/OUTPUT */
/* C LANGUAGE                  */

#include<stdio.h>
int main()
{

    char a[10000];                 // array character = string ;

    printf("Enter your string : ");

    gets(a);                      // gets() --->> get string
    printf("\n\t");
    puts(a);                     // puts() ---->> put string
}
