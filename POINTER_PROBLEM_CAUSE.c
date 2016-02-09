/* TOPIC : WHY WITHOUT POINTER , SWAP CAN N0T BE DONE IN main() BY swap()   */
/* C LANGUAGE                                                               */
/* ANS : " LOCAL VARIABLE ADDRESS "  IS THE MAIN CAUSE                      */
/* PREREQUISITE CODE : PROBLEM_SOLVING_USING_POINTER.c                      */


#include<stdio.h>

int main(void)
{
    int x =4 ,y =2;
    int *a,*b;
    a = &x;
    b = &y;
    printf("Address of x = %d and y=%d(MAIN FUNCTION VARIABLE)\n\n",a,b);
    printf("-----------BEFORE SWAP----------(MAIN FUNCTION VARIABLE)\n\n");
    printf("Content of x(%d)=%d and y(%d)=%d\n\n",a, *a , b, *b);
    swap(x,y);                                                              // FOR PASSING ARGUMENT
    printf("-----------AFTER SWAP----------(MAIN FUNCTION VARIABLE)\n\n");
    printf("Content of x(%d)=%d and y(%d)=%d\n\n",a, *a ,b ,  *b);

    printf("\n\n\tSO,NO VALUE CHANGE IN MAIN FUNCTION VARIABLES\n\n");
    return 0;
}

void swap(int x, int y)
{
    int *a,*b;
    a=&x;
    b=&y;
    printf("Address of x = %d and y=%d  (SWAP FUNCTION VARIABLE) \n\n",a,b);
    printf("-----------BEFORE SWAP----------(SWAP FUNCTION VARIABLE)\n\n");
    printf("Content of x(%d)=%d and y(%d)=%d\n\n", a, *a , b , *b);  // AFTER PASSING ARGUMENT FROM MAIN FUNCTION

    // SWAP

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("-----------AFTER SWAP----------(SWAP FUNCTION VARIABLE)\n\n");
    printf("Content of x(%d)=%d and y(%d)=%d\n\n",a , *a , b, *b);


}


/*
NOTE :

    EACH FUNCTION HAS ITS OWN LOCAL VARIABLE AND DIFFERENT ADDRESS,
    SO HARE,
          main() AND swap() ARE TWO FUNCTIONS
          AND LOCAL FUNTIONS OF main() IS x AND y
              LOCAL FUNTIONS OF swap() IS x AND y
          EACH VARIABLE HAS ITS OWN MEMORY LOCATION , SO THERE ARE 4 ADDRESSES FOR 4 MEMORY LOCATIONS
          AFTER PASSING ARGUMENT IN swap() FUNCTION , THE ADDRESSES OF THE LOCAL VARIABLES OF THIS FUNCTION
          CONTAIN THE VALUES AND BY SWAPPING , SWAP IS DONE IN ONLY THIS ADDRESSES VALUES,
          THE ADDRESSES ARE FOR THE LOCAL VARIABLES OF THE swap() FUNCTION

          SO, NO SWAP IS DONE FOR main() FUNCTIONS LOCAL VARIBLE !

          FOR SWAPPING BY swap() FUNCTION FOR THE VALUES OF MAIN FUNCTION VARIABLES,
          WE NEED TO WORK WITH THE ADDRESSES OF LOCAL VARIABLES OF THE main() FUNCTION.
          THAT IS WHY POINTER IS REQUIRED.

          WHICH IS DONE IN PROBLEM_SOLVING_USING_POINTER.c CODE.

*/
