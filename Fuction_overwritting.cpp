#include <iostream>
using namespace std;

class sample
{
public:
    void demo()
    {
        cout << "SISTec"<<endl;
    }

};

class sample2 : public sample 
{
public:
    void demo()
    {
        cout << "Ankush Gupta"<<endl;
    }
};

int main()
{
    sample2 obj;
    obj.demo();  // sample2 class of demo overwrittes on (class of sample of demo)  
    obj.demo();

    return 0;
}