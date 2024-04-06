#include<iostream>
#include<vector>
using namespace std ;

//sorted & more optimized code

void intersection (int arr1[], int arr2[], int size1, int size2, vector<int>& result){
    int i=0;
    int j=0;
    while( i < size1 , j < size2){
        if(arr1[i] == arr2[j]){
            result.push_back(arr1[i]);
            i++;
            j++;
        } else if(arr1[i] < arr2[j]){
            i++;
        } else {
            j++;
        }
    }
}

int main () {
    int arr1[] = {1,2,2,3,4,5,5};
    int size1= sizeof(arr1)/ sizeof(int);

    int arr2[] ={1,2,3,4,5,5};
    int size2= sizeof(arr2)/ sizeof(int);
        
    vector<int> result = {};
    
    intersection(arr1, arr2, size1, size2, result);

    cout << "Intersection : ";
    for(int num : result){
        cout << num << " ";
    } cout<< endl;
    
}