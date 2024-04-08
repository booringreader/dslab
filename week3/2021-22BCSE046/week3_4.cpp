#include<iostream>
using namespace std;
void inputarr(int arr[], int n);
void printarr(int arr[], int n);
void nsmallest(int arr[], int SIZE);

int main(){
    int SIZE; 
    cout<<"enter size of array: ";
    cin>>SIZE;
    
    int arr[SIZE];
    inputarr(arr, SIZE);

    // selection sort implementation
    // selection sort is similar to the bubble sort
    // in bubble sort elements next to each other are swapped; in selection sort we move the nested loop pointer forward and keep swapping the elements
    // this way in bubble sort the largest element keeps mvoing towards the end, while in selection sort the smallest element keeps moving towards the front
   // an extra var to store the minimum index is needed

    for(int i=0; i<SIZE-1; i++){
        int min_index = i;
        for(int j=i; j<SIZE; j++){
            if(arr[j] < arr[min_index]){  // keeps track of the minimum index in one round
                min_index = j;
            }
        } 
        // swap function
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;

    }
    printarr(arr, SIZE);
    nsmallest(arr, SIZE);
}

void nsmallest(int arr[], int SIZE){
    int n;
    cout << "rank of smallest element: ";
    cin>>n;
    cout<< arr[n-1];
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
    cout <<endl;
}
