#include<iostream>
using namespace std;
main()
{
    int a,i,j;

    cout<<"Enter No:";
    cin>>a;

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=10; j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
    }
}
