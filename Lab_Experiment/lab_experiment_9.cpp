#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout << "sum is = " << x + y << endl;
}
void add(int x, float y)
{
    cout << "sum is = " << x + y << endl;
}
void add(int x, int y, int z)
{
    cout << "sum is = " << x + y + z << endl;
}
void add(int x, int y, float z)
{
    cout << "sum is = " << x + y + z << endl;
}

int main()
{
    int x, y, z;
    cout << "Enter x and y :";
    cin >> x >> y;
    add(x, y);

    cout << "Enter x and y and z :";
    cin >> x >> y >> z;
    add(x, y, z);

    return 0;
}