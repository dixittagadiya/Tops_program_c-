#include<iostream>
using namespace std;
class a
{
    public :
    void aFunc()
    {
        cout <<"This is a function.\n";
    }
};
class b : public a
{
   public:
     void bFunc()
     {
        cout <<"This is b function.";
     }
};
main()
{
    b bobj;
    bobj.aFunc();
    bobj.bFunc();
}