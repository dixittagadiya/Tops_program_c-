#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0,arr[4][3] = {{1,2,3},
                             {2,3,4},
                             {3,4,5},
                             {4,5,6}};
                             
    cout<<"printing a 2D Array:\n";
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}
