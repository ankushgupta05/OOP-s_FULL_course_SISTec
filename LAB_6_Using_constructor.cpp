#include <iostream>
#include <string>
#define SIZE 5
using namespace std;
int Top = -1;

class Models_Book
{
public:
    // int Top = -1;
    string Book_name[SIZE], Author_name[SIZE];
    int Publication_year[SIZE];

public:
    Models_Book(string book_name, string author_name, int publication);
    void putdata();
};

Models_Book ::Models_Book(string book, string author, int publica)
{
    Top++;
    Book_name[Top] = book;
    Author_name[Top] = author;
    Publication_year[Top] = publica;
}
void Models_Book ::putdata()
{
    cout << "The Book Name is :" << Book_name[Top] << endl;
    cout << "The Author name is :" << Author_name[Top] << endl;
    cout << "The year of publication is :" << Publication_year[Top] << endl;
}

int main()
{
    // Top++;
    int n1;
    cout << "How Many number of Book You want to Publish :";
    cin >> n1;
    cout << "\n";
    for (int i = 0; i < n1; i++)
    {
        string s1, s2;
        int n;
        cout << "Enter name of Book :";
        cin >> s1;
        cout << "Enter name of Author :";
        cin >> s2;
        cout << "Enter publication year :";
        cin >> n;
        Models_Book m1(s1, s2, n);
        m1.putdata();
        cout << "\n";
    }

    return 0;
}
