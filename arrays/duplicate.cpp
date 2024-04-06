#include <iostream>
using namespace std;

bool containsDuplicate(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << "element " << arr[i] <<" is duplicate and found at index " << i << " and " << j << endl;
                return true; // Duplicate found
            }
        }
    }
    return false; // No duplicate found
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 2}; // Example array with a duplicate
    int size = sizeof(array) / sizeof(array[0]);

    if (containsDuplicate(array, size)) {
        cout << "Array contains duplicate numbers." << endl;
    } else {
        cout << "Array does not contain duplicate numbers." << endl;
    }

    return 0;
}
