/* 
#1) write  a program to create a class with name Distance whose data member are feet and inch . Take data for 2 distaces and print in proper format ?

 input:
 Enter feet and inched = 4 15
 Output :
 5 feet and 3 inches

 */


#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inch;
    public:
    void getdata(void);
    void putdata(void);
};

void Distance :: getdata(void){
    cout<<"Enter Feet :";
    cin>>feet;
    cout<<"Enter inch :";
    cin>>inch;
}

void Distance :: putdata(void){
    int Temp;
    Temp=inch%12;
    feet=feet+inch/12;
    cout<<feet<<" feet  , "<<Temp<<"  inch .";
}

int main(){
    Distance d1;
    d1.getdata();
    d1.putdata();
    return 0;
}

