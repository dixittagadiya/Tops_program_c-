#include <iostream>
using namespace std;
class a
{
    public :
    void aFunc()
    {
        cout <<"This is a function.\n";
    }
};
class b 
{
    public:
    void bFunc()
    {
        cout <<"This is b function.\n";
    }
};
class c : public a ,public b
{
    public:
    void cFunc()
    {
        cout <<"This is c function.\n";
    }
};
main()
{
    c cobj;
    cobj.aFunc();
    cobj.bFunc();
    cobj.cFunc();
}