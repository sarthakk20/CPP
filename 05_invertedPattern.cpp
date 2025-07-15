#include <iostream>
using namespace std;

int main(){

    // Inverted Triangle Pattern

    // int n = 4;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }
    // output: 
    //           1 1 1 1
    //             2 2 2
    //               3 3
    //                 4

    // Inverted Triangle Pattern - character version

    // int n = 4;
    // char ch = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }
    // output: 
    //           A A A A 
    //             B B B
    //               C C
    //                 D

    //pyramid Pattern - number version

    int n=4;

    for (int i = 1; i <= 4; i++){

        for (int j = 0; j < n-i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j <<" ";
        }
        for (int j = i-1; j > 0; j--)
        {
            cout << j << " ";
        }
        
        cout << endl;
    }
    

    // output: 
    //                1 
    //              1 2 1
    //            1 2 3 2 1
    //          1 2 3 4 3 2 1

    return 0;

}