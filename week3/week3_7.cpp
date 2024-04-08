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

    // counting sort works on whole numbers only (in the basic implementation), since indices of array are whole numbers
    // we take an additional array to track frequency of each element in the original array
    
    // to find the size of frequency[] array
    int max_element = arr[0];
    for(int i=1; i<SIZE; i++){
        if(arr[i] > max_element){
            max_element = arr[i];
        }
    }
    
    
    // storing frequency of each element
    int frequency[max_element+1]={0};
    for(int i=0; i<SIZE; i++){
        // travel through the OG array and increase frequency of key if repeated
        frequency[arr[i]]++;
    }

    // reallocate the elements to arr[] in the ascending or descending order
    int j=0;
    for(int i=0; j<max_element; i++){
        while(frequency[i] != 0){
            arr[j] = i;
            j++;
            frequency[i]--;
        }
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
