// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Hello World\n";
//     try
//     {
//         throw 10.2;
//         cout << "\ntryblock";
//     }
//     catch (int x)
//     {
//         cout << "i am catch block of integer \n";
//     }
//     catch (double x)
//     {
//         cout << "i am catch block of float \n";
//     }
//     catch (char const *x)
//     {
//         cout << "i am catch block of charator \n";
//     }
//     cout<<"lastline"<<endl;
//     return 0;
// }
// output 

// Hello World
// i am catch block of float
// lastline



/**************************************************************************************/
// second way

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Hello World\n";
//     try
//     {
//         throw "a";
//         cout << "\ntryblock";
//     }
//     catch (int x)
//     {
//         cout << "i am catch block of integer \n";
//     }
//     catch (double x)
//     {
//         cout << "i am catch block of float \n";
//     }
//     catch (char const *x)
//     {
//         cout << "i am catch block of charator \n";
//     }
//     cout<<"lastline"<<endl;
//     return 0;
// }

// output

// Hello World
// i am catch block of charator
// lastline