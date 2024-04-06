#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> vec;

    cout << "Decimal to binary number system !" << endl;
    
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    
    int remainder,newN;
    
    while( n!=0 ){
    remainder = n % 2;
    vec.push_back(remainder);
    newN = n/2;
    n=newN;
    
}
    for(int i=vec.size()-1;i>=0 ; i--){
        cout << " " << vec[i];
    }
    return 0;
}


