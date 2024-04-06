#include<iostream>
using namespace std;

void alternateSwap(int arr[], int n){
    for (int i = 0; i < n - 1; i = i +2) {
        swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Separate each element with a space
    }
    cout << endl;
}

int main () {
    int array[100] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Original array: ";
    printArray(array, n);

    alternateSwap(array, n);

    cout << "Array after alternate swap: ";
    printArray(array, n);

    return 0;
}
