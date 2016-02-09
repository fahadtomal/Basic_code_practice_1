/* TOPIC : CHARACTER INPUT/OUTPUT */
/* C LANGUAGE                                               */


#include<stdio.h>
int main()
{
    char a='t';      //'t'--> character , "t"-->> string,has null character at the last (\0) .
    printf("%c\n\n",a);



    //character input/output
    char b;
    printf("Enter a character : ");
    scanf("%c",&b);
    printf("%c\n",b);


}
