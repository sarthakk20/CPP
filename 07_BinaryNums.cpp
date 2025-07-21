#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main(){

    // Decimal to Binary

    // int dec = 15;
    // int ans = 0;
    // int pow = 1;
    // int bin;

    // while (dec > 0)
    // {
    //     bin = dec % 2;
    //     dec = dec / 2;
        
    //     bin = bin * pow;
    //     ans = ans + bin;
    //     pow = pow * 10;
    // }

    // cout << "Binay form of 5 is :" << ans << endl;

    // Binary to Decimal

    // int binNum = 1111;
    // int rem , mul;
    // int pow = 1;
    // int ans = 0;

    // while (binNum > 0) 
    // {
    //     rem = binNum % 10;
    //     binNum /= 10;

    //     mul = rem * pow;
    //     ans += mul;
    //     pow *= 2;
    // }

    // cout << "Decimal form of 1111 is : " << ans << endl;


    
    // // Bitwise operators

    // Left shift bitwise operator[ << ]
    // (a << b) - a * 2^b
    
    // cout << (10 << 1) << endl; //20 = 10*2^1
    // cout << (10 << 2) << endl; //40 = 10*2^1
    
    // // Left shift bitwise operator[ >> ]
    // // (a >> b) - a / 2^b
    // cout << (10 >> 1) << endl; //5 = 10/2^1
    // cout << (10 >> 2) << endl; //2 = 10/2^2


    //Q. check if a number is a power of 2 without using loops by using bitwise operations. 

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num))
        cout << num << " is a power of 2." << endl;
    else
        cout << num << " is NOT a power of 2." << endl;
    
    return 0;
}