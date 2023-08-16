#include<iostream>
using namespace std;
main()
{
    int a,i,j,k;

    cout<<"Enter No:";
    cin>>a;

     for(i=a; i>=1; i--)
    {
        for(j=i; j<=a; j++)
        {
            cout<<" ";
        }
        for(k=i; k>=1; k--)
        {
            cout<<"* ";
        }
        cout<<""<<endl;
    }

    for(i=2; i<=a; i++)
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
