/*  TOPIC : USER DEFINED FUNCTION              */
/*  C++ LANGUAGE                               */
/*  adding three numbers using add() function  */



#include<iostream>
using namespace std;

class addition{
public :
    int add(int x,int y, int z);                   // class function
};


int addition :: add(int x , int y,int z)           // add() function definition
{
    int result = x+y+z;
    return result;                                 // return to the main() function
}



int main(void)
{
    addition A;                                    // A is an object of class addition
    int a,b,c;
    cout<<"Enter the numbers: \n";
    cin>>a>>b>>c;
    cout<<"RESULT : "<<A.add(a,b,c);       // add() function call, by passing arguments----it returns addition of three numbers
    cout<<endl;

}
