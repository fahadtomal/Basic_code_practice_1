/*  TOPIC : PROBLEM AND SOLVE USING POINTER                       */
/*  C LANGUAGE                                                    */
/*  SWAP PROBLEM SOLVE USING POINTER                             */
/*  ALSO SEE : POINTER IS USED AS FUNCTIOIN ARGUMENT             */


#include<stdio.h>

int main(void)
{
    int x=1,y=2;

    printf("\n\n------WITHOUT POINTER-------\n\n");
    printf("x=%d,y=%d\n",x,y);
    swap(x,y);
    printf("x=%d,y=%d\n",x,y);



    printf("\n\n\n-----USING POINTER-----\n\n\n");

    printf("x=%d,y=%d\n",x,y);
    swap_using_pointer(&x,&y);    // addresses are passing as arguments to the function. &x = address of x
    printf("x=%d,y=%d\n",x,y);




}

int swap(int x, int y)
{
    int temp=0;
    temp=y;
    y=x;
    x=temp;
    return x,y;
}

int swap_using_pointer(int *x ,int *y)        // x,y pointer varibales take address as argument
                                             // this fuction works with those addresses
{
   int temp=0;
   temp =*x;                                // *x = the value stored in the address holds by x
   *x =*y;                                  // *y = the value stored in the address holds by y
   *y=temp;
}
