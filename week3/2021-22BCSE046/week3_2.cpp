#include<iostream>
using namespace std;
void inputarr(int arr[], int n);
void printarr(int arr[], int n);

int main(){
    int SIZE; 
    cout<<"enter size of array: ";
    cin>>SIZE;
    
    int arr[SIZE];
    inputarr(arr, SIZE);
    
    // insertion sort follows
    int key;
    for(int i=1; i<SIZE; i++){
        key = arr[i];
        int j=(i-1);
        while(j>=0){
           if(key < arr[j]){
                arr[j+1] = arr[j];
           } 
           j--;
       }
       arr[j+1] = key;
    }
    printarr(arr, SIZE);
}

void inputarr(int arr[], int n){
    cout<<"input array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

void printarr(int arr[], int n){
    cout<<"sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
