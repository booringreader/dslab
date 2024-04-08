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

    // bubble sort follows
    int flag=0, count=0; // count function keeps track of number of swaps
    for(int i=0; i<(SIZE-1); i++){
        // pointer to the adjacent cells of the array
        for(int j=0; j<(SIZE-1-i); j++){
           if(arr[j+1] < arr[j]){
                // swap function
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                count++;
                flag = 1;
           } 
        }
        if(flag==0){ // denotes that the array is already sorted and the 'if' conditional was not initiated
            break;
        }
    }
    cout<<"number of swaps: "<<count;
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
