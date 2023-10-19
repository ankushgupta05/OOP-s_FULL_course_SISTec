                             /* write a program to print name designation salary  by using class fuction */

#include<iostream>
using namespace std;

class employee{
    int id;
    string name;
    string designation;
    float salary;

    public:
    void getdata(){
        cout<<"Enter id of Employee  :";
        cin>>id;
        cout<<"Enter name of Employee  :";
        cin>>name;
        cout<<"Enter  name of designation of Employee  :";
        cin>>designation;
        cout<<"Enter salary of Employee  :";
        cin>>salary;

    }
    void putdata(void);

};

void employee :: putdata(void){
    cout<<"The ID of Employee :"<<id<<endl;
    cout<<"The name of Employee :"<<name<<endl;
    cout<<"The name of designation Employee :"<<name<<endl;
    cout<<"The salary of Employee :"<<salary<<endl;
} 


int main(){
    employee o1;
    o1.getdata();
    o1.putdata();
    return 0;
}