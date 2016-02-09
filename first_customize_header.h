#ifndef ADDTION_FIRST_HEADER_H_INCLUDED
#define ADDTION_FIRST_HEADER_H_INCLUDED



#endif // ADDTION_FIRST_HEADER_H_INCLUDED


// CODING STARTS FROM HERE
// TWO HEADER FUNCTIONS : add() AND subtraction()
int add(int x , int y)
{
    int z = x+y;
    return z;
}


int subtraction(int x , int y)
 {
     int z ;
     z =x-y;
     return z;
 }


/*
NOTE : MAKING HEADER FILE.

    FILE>>NEW>>PROJECT>>FILES>>HEADER>>>>GO>>NEXT

    IN THE   "FILENAME WITH FULL PATH"   YOU SHOULD SELECT THE FOLDER/DIRECTORY, IN WHICH THE SOURCE CODE HAS.
    ALSO GIVE THE HEADER FILE NAME.
---------------------------------------------------------------------------------------------------------------------
 AFTER MAKING HEADER FILE , IT CAN BE ADDED IN THE   "INCLUDE FILE DIRECTORY"   OF CODEBLOCK.
 ADVANTAGES:
     1. IT IS NOT REQUIRED HAVING THIS HEADER FILE WITHIN THE  SOURCE CODE FOLDER/DIRECTORY.
     2. ANY SOURCECODE CAN USE THE HEADER FILE FUNCTIONS WITHOUT HAVING THIS HEADER FILE IN THEIR CURRENT FOLDER/DIRECTORY
        SO THE HEADER FILE BECOMES GLOBAL FOR ALL SOURCE CODE , LIKE <STDIO.H> <MATH.H>


  TO ADD THE HEADER FILE IN THE INCLUDE DIRECTORY OF THE CODEBLOCK,
   C DRIVE>>PROGRAM FILE/PROGRAM FILES(X86)>>CODEBLOCKS>>MinGW>>INCLUDE   ........PASTE THE HEADER FILE ! THAT'S IT.
-----------------------------------------------------------------------------------------------------------------------
THE MAIN HEADER FILE AND CUSTOMIZE HEADER FILE DECLARATION :
      #INCLUDE<STDIO.H>                                 MAIN HEADER FILE
      #INCLUDE"FIRST_CUSTOMIZE_HEADER_FILE"             CUSTOMIZE HEADER FILE

    SO CUSTOMIZE HEADER FILE NEED " " NOT < >
-----------------------------------------------------------------------------------------------------------------------
*/
