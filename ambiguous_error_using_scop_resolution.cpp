#include <iostream>
using namespace std;

class A
{
public:
    void sum()
    {
        cout << "sum" << endl;
    }
};

class B : public A
{
public:
    void sub()
    {
        cout << "sub" << endl;
    }
};
class C : public A
{
public:
    void mul()
    {
        cout << "mul" << endl;
    }
};

class D : public B, public C
{
public:
    void div()
    {
        cout << "div" << endl;
    }
};

int main()
{
    D obj;
    obj.B::sum(); // obj.sum();   // genrate ambiguous error
    obj.sub();
    obj.mul();
    obj.div();

    return 0;
}