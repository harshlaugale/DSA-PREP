#include<iostream>
#include<climits> 
using namespace std;

void getMax(int array[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    cout << "maximum num : " << max << endl;
}

void getMin(int array[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(min > array[i]){ 
            min = array[i];
        }
    }
    cout << "minimum num : " << min << endl; 
}

int main() {
    int size;
    cout << "Problem to find max and min number !" << endl;
    cout << "Enter size of array : ";
    cin >> size;
    
    int array[100];
    //taking input
    cout << "Enter elements in array :" << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    //printing array
    cout << "Array elements: ";
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    getMax(array,size);
    getMin(array,size);

    return 0;
}
