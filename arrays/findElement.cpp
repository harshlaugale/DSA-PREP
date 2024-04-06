#include <iostream>
using namespace std;

bool search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i<< endl;
            for (int j=i+1; j<n; j++){
                if(arr[j] == key){
                    cout << "Another element found at index " << j<< endl;

                }
            }
            return true; // Element found, return true
            
        }
    }
    return false; // Element not found, return false
}

int main() {
    int array[100] = {4, 5, 1, 7, 5, 7, 8,9,7};
    int element;
    cout << "Enter element to be found: ";
    cin >> element;
    int size = sizeof(array) / sizeof(int);

    if (search(array, size, element)) {
        cout << "Excecution complete" << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
