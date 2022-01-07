#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int temp[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i>=k){
            temp[(i-k)%n]=a[i];
        }
        else{
            temp[n-((abs(i-k))%n)]=a[i];
        }
    }
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}