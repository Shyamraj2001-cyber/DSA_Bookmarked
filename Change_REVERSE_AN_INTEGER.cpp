#include<bits/stdc++.h>
using namespace std;



//QUESTION IS TO CHANGE 0 WITH 5......


int reverse(int temp){
    int ans=0;
    while(temp>0){
        int rem=temp%10;
        ans=ans*10+rem;
        temp=temp/10;
    }
    return ans;
}
int convertFive(int n) {
    if(n==0){
        return 5;
    }
    else{
        int temp=0;
        while(n>0){
            int digit=n%10;
            if(digit==0){
                digit=5;
            }
            temp=temp*10+digit;
            n=n/10;
        }
        return reverse(temp);
    }
}

int main(){
    int p=convertFive(1020);
    cout<<p;
}