// #include<iostream>
// using namespace std;

// class demo_class
// {
//     public:
//     void sum(){
//         cout<<"Ankush gupta"<<endl;
//     }
// };

// // Golble object
// demo_class d1;

// int main(){
//     // Local object
//     demo_class d1;
//     ::d1.sum();    // will not give any error

//     return 0;
// }

/* *****************************XXX**************************************************XXX***************************** */

#include <iostream>
using namespace std;

class demo_class
{
public:
    void sum()
    {
        cout << "Ankush gupta" << endl;
    }
};
void get()
{
    demo_class d1; // object declaration in without class member
    d1.sum();

}

int main()
{
    get();  

    return 0;
}