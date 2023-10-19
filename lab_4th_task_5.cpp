// # write  a program t create a class with name Time whose data member are Hour,Minut and Seconds Take data for 2 times and print detail.

// input:
// Enter time in H, M and S :4 15 62
// Output:
// time=4 Hour : 16 minut : 2 Seconds


#include<iostream>
using namespace std;

class Time{
    int Hour;
    int Minut;
    int second;
    public:
    void getdata(void);
    void putdata(void);
};

void Time :: getdata(void){
    cout<<"Enter Hour :";
    cin>>Hour;
    cout<<"Enter Minut :";
    cin>>Minut;
    cout<<"Enter second :";
    cin>>second;
}

void Time :: putdata(void){
    int Temp;
    if(second>60){
        Minut=Minut+(second/60);
        Temp=second%60;
    }
    if(Minut>60){
        Hour=Hour+(Minut/60);
        Temp=Minut%60;
    }
    cout<<"time="<<Hour<<",  Minut="<<Minut<<",  second="<<Temp<<endl;

}

int main(){
    Time t1;
    t1.getdata();
    t1.putdata();
    return 0;
}
