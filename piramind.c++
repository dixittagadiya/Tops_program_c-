#include<iostream>
using namespace std;
main()
{
    int a,i,j,k;

    cout<<"Enter No:";
    cin>>a;

    for(i=1; i<=a; i++)
    {
        for(j=a; j>=i; j--)
        {
            cout<<" ";
        }
        for(k=1; k<=i; k++)
        {
            cout<<"* ";
        }
        cout<<""<<endl;
    }
}
