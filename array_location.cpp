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
    cout<<"Enter element to be searched: ";
    int ele;
    cin>>ele;
    //location
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cout<<"Element found at index: "<<i;
        }
        else{
            cout<<"ELement not found";
        }

    }
    return 0;
}