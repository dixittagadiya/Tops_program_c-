#include<iostream>
using namespace std;
main()
{
    int a,i,j;
    
    a=6;

    for(i=0; i<a; i++)
    {
        for(j=0; j<a+1; j++)
        {
            if((i==0 && j%3!=0) || (i==1 && j%3==0) || (i-j == 2) || (i+j==8))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
