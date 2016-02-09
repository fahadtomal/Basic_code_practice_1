/*  TOPIC : USER DEFINED FUNCTION                    */
/*  C Language                                       */
/*  additon of three numbers using add() function    */

#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter your desired number(3 numbers for addition):\n");
    scanf("%d %d %d", &a,&b,&c);
    add(a,b,c);                                     // argument passing
    printf("RESULT : %d",add(a,b,c));
}
int  add(int x,int y,int z)                        // add() function definition
{
    int result=0;
    result = x+y+z;
    return result;
}
