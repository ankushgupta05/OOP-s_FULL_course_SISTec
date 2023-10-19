                             /* write a program to swap two number by using class fuction */

#include<iostream>
using namespace std;

class swap_test
{
    public:
    void getdata(int x, int y){
        int Temp;
        Temp=x;
        x=y;
        y=Temp;
        cout<<"After swaping inside class function the value of x  is "<< x <<endl;
        cout<<"After swaping inside class function the value of y  is "<< y <<endl;
        }

};


int main(){
    int a,b;
    cout<<"Enter 1st value :";
    cin>>a;
    cout<<"Enter 2st value :";
    cin>>b;
    swap_test t1;
    t1.getdata(a,b);    // Actual perameter
    cout<<"After swaping The vale of a  inside main fuction :"<<a<<endl;
    cout<<"After swaping The vale of b  inside main fuction :"<<b<<endl;
    return 0;
}