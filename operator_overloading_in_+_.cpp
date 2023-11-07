#include <iostream>
using namespace std;

class complex1
{
public:
    int a, b;
    int setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    int showdata()
    {
        cout << "a =  " << a << "  b =  " << b << endl;
    }

    complex1 operator+(complex1 c)
    {
        complex1 temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};

int main()
{
    complex1 c1, c2, c3;
    c1.setdata(2, 2);
    c2.setdata(3, 3);
    c3 = c1 + c2;  /* meaning c1(c2) [ c1 call to c2 object ] */
    c3.showdata(); /* output a=5 b=5 */
    return 0;
}