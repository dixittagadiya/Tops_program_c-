#include<iostream>
using namespace std ;
int main()
{
    char a,i,j;

    cout<<"Enter Character:";
    cin>>a;

    for(i='A'; i<=a; i++)
    {
        for(j='A'; j<=i; j++)
        {
            cout<<i;
        }
        cout << endl;
    }
}