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

    // int n=4;

    // for (int i = 1; i <= n; i++){

    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j <<" ";
    //     }
    //     for (int j = i-1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
        
    //     cout << endl;
    // }
    

    // output: 
    //                1 
    //              1 2 1
    //            1 2 3 2 1
    //          1 2 3 4 3 2 1

    // Hollow Star pattern

    // int n = 5;

    // // TOP
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     cout << "*" << " ";
    //     for (int j = 0; j < 2*i-1; j++)
    //     {
    //         cout << "  ";
    //     }
    //         if (i!=0)
    //         {
    //             cout << "*" << " ";
    //         }
        
    //     cout << endl;
    // }

    // // BOTTOM

    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     cout << "*" << " ";

    //     for (int j = 0; j < 2*(n-i)-5; j++)
    //     {
    //         cout << "  ";
    //     }
    //         if (i != n-2)
    //         {
    //             cout << "*" << " ";
    //         }
        
    //     cout << endl;
    // }
    
    // output :
    //                  * 
    //                *   *
    //              *       *
    //            *           *
    //          *               *
    //            *           *
    //              *       *
    //                *   *
    //                  *

    // Butterfly Pattern

    int n = 4;
    
    // TOP VIEW
    for(int i = 1; i <= n; i++){

        // upper-left(star)
        for (int j = 0; j < i; j++){
            cout << '*' << " ";
        }

        // upper-mid half(spaces)
        for (int j = 0; j < 2*(n-i); j++){
            cout <<"  ";
        }

        // upper-right(star)
        for (int j = i; j > 0; j--){
            cout << "*" << " ";
        }

        cout << endl;
    }

    // BOTTOM VIEW

    for(int i = 1; i <= n-1; i++){

        // bottom-left(star)
        for (int j = 0; j < n-i; j++){
            cout << "*" << " ";
        }

        // bottom-mid half(spaces)
        for (int j = 0; j < i*2; j++){
            cout <<"  ";
        }

        // bottom-right(star)
        for (int j = n-i; j > 0; j--)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
    
    

    // output : 
    //              *             * 
    //              * *         * *
    //              * * *     * * *
    //              * * * * * * * *
    //              * * *     * * *
    //              * *         * *
    //              *             *
    return 0;

}