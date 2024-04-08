#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of array :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i =0; i < n ; i++){
        cin>>arr[i];
    }
    int k ;
    cout<<"enter the element to be found "<<endl;
    cin>>k;
    sort(arr, arr + n);
    bool flag =0;
    int s =0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k){
            flag =1;
            break;
        }
        else if( arr[mid] > k){
            e= mid-1;
        }
        else{
            s = mid+1;
        }
    }
    if(flag ==1){
        cout<<"Elements is present"<<endl;
    }else{
        cout<<"Element is not present"<<endl;
    }
}
