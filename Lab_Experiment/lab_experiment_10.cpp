#include <iostream>
using namespace std;

void add(int x, int y)
{
    cout << "area of rectagle = " << x + y << endl;
}
void add(float x, float y)
{
    cout << "area of rectagle = " << x + y << endl;
}

int main()
{
    int l,b;
    cout << "Enter l and b :";
    cin >> l >> b;
    add(l, b);

    return 0;
}