// Array
#include <iostream>
using namespace std;

void readArray(int list[], int size){
    for(int i=0; i<=size-1; i++){
        cout << "Enter the element at index " <<i<< "===>";
        cin >> list[i];
    }
}

void nPrintArray(int list[], int size){
    for (int i = 0; i <=size-1; i++){
        cout <<"The element at index "<< i << " is " << list[i] << "\n";
    }
}

int sumArray(int list[], int size){
    int sum = 0;
    for (int i = 0; i <=size-1; i++){
        sum = sum + list[i];
    }
    return sum;
}

void findMax(int list[], int size){
    int max = list[0];
    int index = 0;
    for (int i = 0; i <= size-1; i++){
        if (list[i] >= max){
            max = list[i];
            index = i;

        }
    }
    cout << "The max number in the array is " << max << " at index " << index << "\n";
}
void findMin(int list[], int size){
    int min = list[0];
    int index = 0;
    for (int i = 0; i <= size-1; i++){
        if (list[i] <= min){
            min = list[i];
            index = i;

        }
    }
    cout << "The min number in the array is " << min << " at index " << index << "\n";
}

int linearSearch(int list[], int size, int key){
    for(int i = 0; i < size; i++){
        if(list[i] == key){
            return i;   // return index if found
        }
    }
    return -1;  // not found
}

int binarySearch(int list[], int size, int key){
    int left = 0, right = size - 1;

    while(left <= right){
        int mid = (left + right) / 2;

        if(list[mid] == key){
            return mid;
        }
        else if(list[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int size;
    // int arr[size] = {12,10,13,14,9};
    int arr[50];
    // int size = sizeof(arr)/sizeof(arr[0]);
    // arr[1]+= 5;

    cout << "Please, enter the size of the array ===> ";
    cin >> size;
    readArray(arr, size);
    findMax(arr, size);
    findMin(arr, size);
    int key;
    cout << "\nEnter number to search (Linear Search) ===> ";
    cin >> key;
    int linearIndex = linearSearch(arr, size, key);
    if(linearIndex != -1)
        cout << key << " found at index " << linearIndex << " (Linear Search)\n";
    else
        cout << key << " NOT found (Linear Search)\n";

    cout << "\nEnter number to search (Binary Search) ===> ";
    cin >> key;
    int binaryIndex = binarySearch(arr, size, key);
    if(binaryIndex != -1)
        cout << key << " found at index " << binaryIndex << " (Binary Search)\n";
    else
        cout << key << " NOT found (Binary Search)\n";


    int addArray = sumArray(arr, size);
    cout << "The sum of elements in the array is " << addArray;
    return 0;
}

// Write a code that'll add all the elements in the array you write into. (DONE)
// FInd the max number in the array, print out the element and index. (DONE)
// Find Minumum number in the array, print out the element and index. (DONE)
// Algorithm to Study: Linear Search Algorithm (Write a code with it) (DONE)
// Algorithm to Study: Binary Search Algorithm (Write a code with it) (DONE)
