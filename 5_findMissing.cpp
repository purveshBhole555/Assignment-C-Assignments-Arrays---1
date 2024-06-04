#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int missing = 1;
        
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            continue;
        }
        if (arr[i] == missing) {
            missing++;
        } else {
            break;
        }
    }
    
    cout << "The smallest missing positive element is: " << missing << std::endl;
    
    return 0;
}


// output is 

The smallest missing positive element is: 4
