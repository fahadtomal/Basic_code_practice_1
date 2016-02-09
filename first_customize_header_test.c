/* TOPIC : FIRST CUSTOMIZE HEADER FILE */
/* C LANGUAGE                          */
// FOR USER INPUT PART COMMENT OUT THE FIRST main() PART

#include<stdio.h>
#include"first_customize_header.h"


int main(void)
{
    printf("addition result = %d \nand subtraction = %d\n",add(4,2),subtraction(4,2)); //HEADER FUNCTIONS add(),subtraction()

    return 0;
}

/*
//USER INPUT PART

int main()
{
    int x,y;
    printf("Enter two numbers(intger): \n");
    scanf("%d %d", &x,&y);
     printf("addition result = %d \nand subtraction = %d\n",add(x,y),subtraction(x,y));

}
*/
