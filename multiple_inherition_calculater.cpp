#include <iostream>
using namespace std ;
class a
{

public:
    void aFunc()
    {
        int a,b;
        cout<<"Enter value of A:";
        cin>>a;

        cout<<"Enter Value of B:";
        cin>>b;

    }
};

class b: public a
{
public:
    void add()
    {
        int a,b;
        cout<<"Addition is ="<<a+b;
        cout << "" << endl;
    }
};
class c : public b
{
public:
    void sub()
    {
        int a,b;
        cout<<"Subtraction is ="<<a-b;
        cout << "" << endl;
    }
};
class e : public c
{
 public:
 void mod()
 {
  int a,b;
  float mod=a%b;
  
  cout<<"Module is ="<<mod;
  cout << "" << endl;
  
 }
};
class f : public e
{
 public:
 void mul()
 {
  int a,b;
  cout<<"Multiplication is ="<<a*b;
 }
};
int main()
{
    f result;
    result.aFunc();
    result.add();
    result.sub();
    result .mod();
    result.mul();
}
    