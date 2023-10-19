       /*  using string find vowels . */

#include<iostream>
#include<string.h>
using namespace std;

void char_vowells(){
    char str[1];
    string s;
    s="aeiou";
    cout<<"Enter a charactor of alphbet :";
    cin>>str;
    for(int i=0 ;i<s.length(); i++){
        if(str[1]==s[i]){
        cout<<"Your charactor is a vowells "<<s[i]<<endl;
        break;
        }
        else{
            continue;
        }
    }
}
void string_vowells(){
    string s1;
    cout<<"Enter your string :";
    cin>>s1;
    string s2;
    s2={'A','E','I','O','U','a','e','o','u'};
    for(int i=0 ; i<s2.length() ; i++ ){
       for(int j=0 ;j< s1.length() ;j++){
        if(s1[j]==s2[i]){
            cout<<s2[i]<<"  ";
        }
       }
    }
       cout<<"\n"<<endl;

}


int main(){
    string_vowells();
    char_vowells();
    return 0;
}