#include<iostream>
using namespace std;
int main()
{
    int i,j,a;

    cout << "Enter the number:" << endl;
    cin >>a;

    for(i=1; i<=a*2-1; i++)
    {
        for(j=1; j<=a*2-1; j++)
        {
            if(i==a||j==a||i==1&&j>a||i<a&&j==1||i>a&&j==a*2-1||i==a*2-1&&j<a)
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout << "" << endl;
    }
}