#include<iostream>
#include<vector>
using namespace std ;

//unsorted 

void intersection (int arr1[], int arr2[], int size1, int size2, vector<int>& result){
    
    for(int i=0; i< size1 ; i++){
        for(int j=0 ; j<size2 ; j++){

            
            if(arr1[i] == arr2[j] ){
                result.push_back(arr1[i]);
                
                for(int k=j ; k<size2 ; k++){
                    arr2[k] = arr2[k+1];
                }size2-- ;
                break;
            }
        }
    }
    
}

int main () {
    int arr1[] = {1,2,3,4,5,5,2};
    int size1= sizeof(arr1)/ sizeof(int);

    int arr2[] ={1,3,4,5,5,2};
    int size2= sizeof(arr2)/ sizeof(int);
        
    vector<int> result = {};
    
    intersection(arr1, arr2, size1, size2, result);

    cout << "Intersection : ";
    for(int num : result){
        cout << num << " ";
    } cout<< endl;
    
}