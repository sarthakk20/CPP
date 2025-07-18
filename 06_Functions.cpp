#include <iostream>
using namespace std;


    // int printFun(){
    //     cout << "Learning functions" << endl;
    // }

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


int main(){

    // // Function invoke : 
    // printFun();

    // // Factorial of number
    // int num = 5;
    // cout << FactorialFun(5) << endl;

    // Binomial Coefficient

    int n = 5;
    int m = 4;

    cout <<"Binomial Coefficient is " << BinoFun(n , m);





    return 0;
}