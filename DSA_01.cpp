#include <iostream>
using namespace std;


    int indexOfLargestVal(int arry[], int size){
        int maxIndex = 0;
        for (int i = 0; i < size; i++)
        {
            if (arry[i] > arry[maxIndex]){
                maxIndex = i;
            }
        }
        return maxIndex;
    }
    int indexOfSmallestVal(int arry[], int size){
        int smallest = INT16_MAX; 
        int minIndex;

        for (int i = 0; i < size; i++)
        {
            if (i < smallest){
                smallest = arry[i];
                minIndex = i;
            }
        }
        return minIndex;
    }

    int removeDuplicate(int nums[]){
        for (int i = 0; i < 4; i++)
        {
            if(nums[i] == nums[i+1]){
                
            }
        }
        
    }
int main(){

    /*ARRAY*/

    /* Declaring variable nums with 9 value and initializing some values. */
    // int nums[9] = {32,34,67,88,78,77,99,100};
    // nums[8]= 89;
    // int size = sizeof(nums) / sizeof(int);
    // cout << size << endl;

    // // Looping array of nums
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Num" << i << " = " << nums[i] << endl;
    // }

    /* Q.Find the minimum from the given array */

    // int arr[5] = {82, 76, 4, -9, 2};
    // int size = sizeof(arr) / sizeof(int); 

    // int smallest = INT16_MAX;  //this is the value of +infinity that will be always highest

    // for (int i = 0; i < size; i++)
    // {
    //     // if (i < smallest){
    //     //     smallest = arr[i];
    //     // }
    //     smallest = min(arr[i],smallest);
        
    // }
    // cout << "Smallest value : " << smallest << endl;

    /* Q.Find the maximum from the given array */

    // int arry[5] = {82, 76, 4, -9, 99};
    // // int size = sizeof(arry) / sizeof(int); 

    // int largest = INT16_MIN;  //this is the value of -infinity that will be always lowest

    // for (int i = 0; i < 5; i++)
    // {
    //     // if (arry[i] > largest){
    //     //     largest = arry[i];
    //     // }
    //     largest = max(arry[i],largest);
    // }
    // cout << "Largest value : " << largest << endl;

    /* Q.Find the index of maximum vlaue from the given array */

    // int arry[5] = {82, 76, 4, -9, 99};
    // int size = sizeof(arry) / sizeof(int);
    // int index1 = indexOfLargestVal(arry, size);
    // int index2 = indexOfSmallestVal(arry, size);
    // cout << "Index of largest value " << arry[index1] << " is " << index1 << endl;
    // cout << "Index of smallest value " << arry[index2] << " is " << index2 << endl;
    
    /*Remove Duplicates from Sorted Array*/
    int nums[4] = {0,1,1,2};

    cout << removeDuplicate(nums) << endl;

    return 0;
}