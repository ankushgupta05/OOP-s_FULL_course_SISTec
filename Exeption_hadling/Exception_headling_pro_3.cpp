// #include <iostream>
// using namespace std;
// int main()
// {
//     int i;
//     i = 1;
//     cout << "Hello World\n";
//     try
//     { // multiple times can be throw
//         if (i == 1)
//         {
//             throw 1;
//         }
//         if (i == 2)
//         {
//             throw 2;
//         }
//         if (i == 3)
//         {
//             throw 3;
//         }
//         cout << "\ntryblock";
//     }
//     catch (int x)
//     {
//         cout << "i am catch block of integer : " << x;
//         cout<<"\n";
//     }
//     cout << "lastline" << endl;
//     return 0;
// }

// // output

// // Hello World
// // i am catch block of integer : 1
// // lastline

/******************************************************************************************/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i;
//     i = 1;
//     cout << "Hello World\n";
//     try
//     { // multiple times can be throw
//         if (i == 1)
//         {
//             throw 1;
//         }
//         if (i == 2)
//         {
//             throw 2.5;
//         }
//         if (i == 3)
//         {
//             throw "abc";
//         }
//         cout << "\ntryblock";
//     }
//     catch (...)  /* ... (3 dotted means --> 3 throw is Decklare in try block) */
//     {
//         cout << "i am catch block of multiple throw : " ;
//         cout << "\n";
//     }
//     cout << "lastline" << endl;
//     return 0;
// }

//  output

// Hello World
// i am catch block of multiple throw :
// lastline