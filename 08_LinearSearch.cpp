#include <iostream>
using namespace std;

int linearSearch(int arr[],int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main(){

    // Ḷinear search algorithm
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int result = linearSearch(arr, n, key);
    if(result == -1)
        cout << "Element not found" << endl;
    else
    cout << "Element found at index: " << result << endl;

    return 0;
}