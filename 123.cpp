#include <iostream>
#include <Math.h>
using namespace std;


// Q1


// int main(){

//     int arr[] = {5, 8, 2, 10, 3, 6, 1, 7, 4, 9};
// int size = sizeof(arr) / sizeof(arr[0]);
//     long long product = 1;
// for (int i = 0; i < size; i++) {
//     product *= arr[i];
// }
// cout << "Product of all elements in the array: " << product << endl;

// }


// // OUTPUT IS 
// Product of all elements in the array: 3628800

// Q2


// int main(){
//     int arr[] = {5, 8, 2, 10, 3, 6, 1, 7, 4, 9};
// int size = sizeof(arr) / sizeof(arr[0]);

// int firstLargest = -1;
// int secondLargest = -1;

// for (int i = 0; i < size; i++) {
//     if (arr[i] > firstLargest) {
//         secondLargest = firstLargest;
//         firstLargest = arr[i];
//     } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
//         secondLargest = arr[i];
//     }
// }

// cout << "Second largest element in the array: " << secondLargest << endl;

// }

// // OUTPUT IS 

// Second largest element in the array: 9



// Q3


int main(){

    int arr[] = {5, 8, 2, 10, 3, 6, 1, 7, 4, 9};
int size = sizeof(arr) / sizeof(arr[0]);

    int minVal = 5000;
for (int i = 0; i < size; i++) {
    if (arr[i] < minVal) {
        minVal = arr[i];
    }
}

cout << "Minimum value in the array: " << minVal << endl;

}


// Output is 

Minimum value in the array: 1

