/*  write a program to find Area of circle & Area of rectange   */

#include<iostream>
using namespace std;

void A_circle(){
    int r;
    cout<<"Enter radious circle  :";
    cin>>r;
    cout<<"The Area of circle :"<<3.14*r*r<<endl;
}

void A_rectangle(){
    int l,b;
    cout<<"Enter Length of side  :";
    cin>>l;
    cout<<"Enter weigth of side :";
    cin>>b;
    cout<<"The Area of rectagle :"<<l*b<<endl;
    }

void A_triangle(){
    int l ,b;
    cout<<"Enter Length of side  :";
    cin>>l;
    cout<<"Enter weigth of side :";
    cin>>b;
    cout<<"The Area of Triangle :"<<(1/2)*l*b<<endl;

}
void A_LeapYear(){
    int y;
    cout<<"Enter a Year :";
    cin>>y;
    if(y>100 && y%400==0){
        cout<<"Given year is Leap Year :"<<y<<endl;
    }
    else if(y>100 && (y%400)%4==0){
        cout<<"Given Year is Leap Year :"<<y<<endl;
    }
    else if(y%4==0 && y<=100){
        cout<<"Given Year is Leap Year :"<<y<<endl;
    }
    else{
        cout<<"Given Year is Not Leap Year :"<<y<<endl;
    }
}
void A_factorial(){
   
    }
void A_vowel(){

}



int main(){
    int n;
    cout<<"Select Any one option :\n\n"<<endl;
    cout<<"1) find Area of circle ."<<endl; 
    cout<<"2) find Area of rectangle ."<<endl;
    cout<<"3) find Area of triangle ."<<endl;
    cout<<"5) find Leap Year or Not ."<<endl;
    cout<<"6) find factorial of Given Numb."<<endl;
    cout<<"7) find charactor of Vowel  ."<<endl;
    cin>>n;
    switch(n){
        case 1:
               A_circle();
               break;
        case 2:
                A_rectangle();
                break;
        case 3:
                 A_triangle();   
                break;
        case 4:
                 A_LeapYear();
                 break;
        case 5:
                 A_factorial();
                 break;
        case 6:  
                 A_vowel();
                 break;
        default :
        cout<<"Sorry you have entered wrong key . please try again  ?"<<endl;
    }
    return 0; 
}