/* Write a c++ Program to create a method that takes a string as input and through an exception if the string does not coontain vowells */
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str1, str2;
    int count = 0;
    str2 = "aeiouAEIOUA";
    getline(cin, str1);
    try
    {
        for (int j = 0; j = str2.length() - 1; j++){
            for (int i = 0; i < str1.length() - 1; i++)
            {
                if (str2[j] == str1[i])
                {
                    count = 1;
                }
            }
        }

        if (count == 0)
        {
            throw "Good_string";
        }
        else
        {
            cout << "The Vowells are Present in Your string : " << str1 << endl;
        }
    }
    catch (char const *str1)
    {
        cout << str1 << endl;
    }
    cout << "Throw successfully Execcute " << endl;
    return 0;
}