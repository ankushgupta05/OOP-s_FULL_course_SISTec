/* Write a c++ Program to create a method that takes a string as input and through an exception if the string does not coontain vowells */
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str1, str2;
    int count = 0;
    str2 = "aeiouAEIOU";
    getline(cin, str1);
    // cout << str1.length() << endl;
    // cout << str2.length() << endl;
    try
    {
        for (int j = 0; j < str2.length(); j++)
        {
            // cout << "aids";
            // cout << j << " = " << str2[j] << endl;
            for (int i = 0; i < str1.length(); i++)
            {

                if (str2[j] == str1[i])
                {
                    count = 1;
                    // cout << "my name";
                    break;
                }
            }
            if (count == 1)
            {
                break;
            }
        }

        if (count == 1)

        {
            cout << "The Vowells are Present in Your string : " << str1 << endl;
        }
        else
        {
            throw "Good string";
        }
    }
    catch (char const *str1)
    {
        cout << str1 << endl;
    }
    cout << "Program successfully Execcute " << endl;
    return 0;
}
