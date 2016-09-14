/*LANGUAGE:C++
  TOPIC:Concept on the statement execution after return keyword in function/method
*/
#include<iostream>
using namespace std;

class math{

    public:
    int add();

};


int math::add()
{
    int x,y;
    cout<<"Enter x and y:";
    cin>>x>>y;
    cout<<endl;
    cout<<"Addition:";
    return x+y;

    cout<<"It works !";      // After return this statement does not works in function (concept)

}

int main()
{
    math a;                    // class and class object
    int z =a.add();
    cout<<z;
}
