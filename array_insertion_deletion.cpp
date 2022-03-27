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
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    //insertion 

    cout<<"Enter the element and index number: ";
    int ele,n1;
    cin>>ele>>n1;

    n++;
    for(int i=n;i>=n1;i--){
        arr[i]=arr[i-1];
    }
    arr[n1-1]=ele;
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    //deletion
    
    cout<<"Enter the element you want to delete: ";
    int del;
    cin>>del;
    int s;

    for(int i=0;i<n;i++){
        if(arr[i]==del){
            s=i;
            break;
        }
    }
    for(int i=s;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}