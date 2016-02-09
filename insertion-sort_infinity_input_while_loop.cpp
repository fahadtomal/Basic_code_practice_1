/*   TOPIC : INSERTION SORT                                          */
/*   C++ LANGUAGE                                                    */
/*   INPUT BY input() FUNCTION AND SORTING BY sort() FUNCTION        */
/*   USING while LOOP FOR INFINITY INPUT AND SORT                    */


#include<iostream>
using namespace std;
class sorting{

public :
    int n;
    char a[];
    void input(void);
    void sORT(void);
};

void sorting :: input(void)
{
    int k;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the numbers:\n";
    for(int k=0 ; k<n ; k++)
    {
        cin>>a[k];
    }
}
void sorting :: sORT(void)
{
    int i,j,l;

    for(i =1 ; i<n ; i++)  // sorting algorithm
    {
        int j=i;
        while(j>0 && a[j]<a[j-1])
        {
            int pot=a[j];
            a[j]=a[j-1];
            a[j-1]=pot;
            j--;
        }
    }
    cout<<"Sorted output : ";
        for( l=0 ; l<n ; l++)
    {
        cout<<a[l];
        cout<<endl;
    }
}


int main()
{
    sorting obj1;

    int z=0;
    while(z=1)                       // FOR INFINITY SORT
    {
    obj1.input();
    obj1.sORT();
    cout<<"FOR FURTHER SORTING PRESS 1 OR FOR EXIT PRESS 0: \t";
    cin>>z;
    if(z==0)
    {
        break;            // break is used to going out from loop permanently, exit() is
                         // used for total program termination
    }
    }
    return 0;
}
