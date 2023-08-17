#include<iostream>
using namespace std;
int main()
{
    int a,i,j,k;
    cout << "Enter No:";
    cin >> a;

    i=1;
    do
    {
        j=a;
        do
        {
            cout << " ";
            j--;
        } while(j>=i);

        k=1;
        do
        {
            cout << "* ";
            k++;
        } while(k<=i);
        cout << "\n";
        i++;
    } while(i<=a);
}