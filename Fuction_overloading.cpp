#include <iostream>
using namespace std;

class sample
{
public:
    void add(int x)
    {
        cout << "sum :" << x << endl;
    }
    void add(int x, int y)
    {
        cout << "sum :" << x + y << endl;
    }
    void add(int x, int y, int z)
    {
        cout << "sum :" << x + y + z << endl;
    }
};

int main()
{
    sample obj;
    obj.add(5);
    obj.add(10,10);    
    obj.add(20,20,20);

    return 0;
}