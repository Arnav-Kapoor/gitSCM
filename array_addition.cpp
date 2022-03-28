#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter elements of the array: ";
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return 0;
}