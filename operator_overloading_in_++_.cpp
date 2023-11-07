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
    // int ++() /* This is wrong way*/
    // {
    //     cout << a + b << endl;
    // }

    // int ++() /*/* This is wrong way*/*/
    // {
    //  cout<<a++;
    //  cout<<b++;
    // }

    // int operator++() /*/* This is wrong way*/*/
    // {
    //     cout << a++;
    //     cout << b++;
    // }
    complex1 operator++() /* operator overloading */
    {
        cout << a++;
        cout << b++;
        cout << "\n";
    }
};

int main()
{
    complex1 obj1;
    obj1.setdata(5, 6);
    obj1.showdata();

    // obj1.++(); // can not be call from this type
    ++obj1;
    obj1.showdata();   // 
    return 0;
}