#include <iostream>
using namespace std;

int main(){

    // variables

    // age - age is variable name
    // grade

    //Data Types

    int age = 22;            //memory of 4 bytes
    char grade = 'A';        //memory of 1 byte
    float PI = 3.14f;        //memory of 4 bytes
    bool isChecked = true;   //memory of 1 byte
    double price = 1000.99;  //memory of 8 bytes
    // 1 byte = 8 bits

        // cout << age << sizeof(age) << endl;
        // cout << grade << sizeof(grade) << endl;
        // cout << PI << sizeof(PI) << endl;
        // cout << isChecked << sizeof(isChecked) << endl;
        // cout << price << sizeof(price) << endl;

    // Type Casting and conversion

    // implicit type conversion
    int book = 400;
    // cout << "Size Of Book is: " << sizeof(book) << "\n";    //4 
    
    double bookPrice = book;
    // cout << bookPrice << endl;
    // cout << "Size Of BookPrice is: " << sizeof(bookPrice) << "\n";   //8
    
    // explicit type casting
    int num = 9;
    // cout << num << endl;
    // cout << "Size Of num is: " << sizeof(num) << "\n";    //4 
    
    char aplhabate = num;
    // cout <<aplhabate << "\n";    
    // cout << "Size Of alphabate is: " << sizeof(aplhabate) << "\n";    //1


    // input in cpp
    char name;
    cout << "Enter your name: ";
    cin >> name;


    return 0;
}