#include <iostream>
using namespace std;
int main()
{
    int a,j,i;

    cout << "Enter Value Of A:";
    cin >> a;

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << "* ";
        }
        for(j=i; j<=a; j++)
        {
            cout << "  ";
        }
        cout << "" << endl;
    }

    for(i=a-1; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            cout << "* ";
        }
        for(j=a; j>=i; j--)
        {
            cout << "  ";
        }
        cout << "" << endl;
    }
}