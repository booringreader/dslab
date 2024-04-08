#include<iostream>
using namespace std;
void inputarr(int arr[], int n);

int main(){
    int SIZE, key;
    cout << "enter size: ";
    cin >> SIZE;
    int arr[SIZE];
    inputarr(arr, SIZE);
    cout << "enter key: ";
    cin >> key;

    // using bubble sort to sort the array incase it is unsorted
    int flag=0;
    for(int i=0; i<(SIZE-1); i++){
        for(int j=(i+1); j<(SIZE-1-i); j++){
            if(arr[j] > arr[i]){
                // swap function
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                flag = 1;
            }
            if(flag == 0){
                break;
            }
        }
    }

    // travel through the sorted array and 
    for(int i=0; i<SIZE; i++){
        if(arr[i] == key){
            cout << "key is in array";
            break;
        }else{
            cout << "key does not exist in array";
            break;
        }
    }
}
void inputarr(int arr[], int n){
    cout << "input array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}