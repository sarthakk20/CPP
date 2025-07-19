#include <iostream>
using namespace std;


    int printFun(){
        cout << "Learning functions" << endl;
    }

    int FactorialFun(int n){
        int fact = 1;
        for (int i = 1; i <= n; i++){
            fact = fact * i;
        }
        return fact;
    }

    int BinoFun(int n, int m){

        int fact_n = FactorialFun(n);
        int fact_m = FactorialFun(m);
        int fact_nm = FactorialFun(n-m);

        return fact_n/(fact_m - fact_nm) ; 
    }

    int sumOfDigit(int num){
        int sum=0;

        while (num > 0)
        {
            int lastDig = num % 10;
            num /= 10;

            sum += lastDig;
        }
        return sum;
    }

    int FibonacciSeries(int n){

        int firVal = 0;
        int secVal = 1;
        int fiboSum = 0;
        cout << firVal << endl;
        cout << secVal << endl;

        for (int i = 2; i < n; i++){
            
            fiboSum = firVal + secVal;
            cout << fiboSum << endl;
            firVal = secVal;
            secVal = fiboSum;
        }
        return fiboSum;
    }


int main(){

    // // Function invoke : 
    // printFun();

    // // Factorial of number
    // int num = 5;
    // cout << FactorialFun(5) << endl;

    // // Binomial Coefficient

    // int n = 5;
    // int m = 4;

    // cout <<"Binomial Coefficient is " << BinoFun(n , m);

    // // Sum Of Digit

    // int num = 5555;
    // cout << "Sum of Digits = " << sumOfDigit(num);

    // //Fibonacci series

    // int n = 8;

    // cout << "Fibonacci Series upto n is = " << FibonacciSeries(n) << endl;

    return 0;
}