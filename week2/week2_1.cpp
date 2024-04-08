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

    for(int i=0; i<SIZE; i++){
        if(arr[i] == key){
            cout << "key exists in array";
        }
    }

}

void inputarr(int arr[], int n){
    cout << "input array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}