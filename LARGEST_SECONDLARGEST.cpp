#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
    
int second_largest(int arr[],int n,int maxi){
    int s_maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=maxi){
            s_maxi=max(s_maxi,arr[i]);
        }
    }
    if(s_maxi==INT_MIN){
        return -1;
    }
    return s_maxi;
}

int main(){
    int sizeOfArray;
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    for(int i=0;i<sizeOfArray;i++){
        cin>>arr[i];
    }
    int large=largest(arr,sizeOfArray);
    int second_large=second_largest(arr,sizeOfArray,large);
    /*
    creating vector for inserting the largest and the second largest into the vector and then return the same.

    vector<int>v;
    v.push_back(large);
    v.push_back(second_large);
    return v;
    */

}