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
    bool flag =0;
    for(int i =0; i< n ; i++){
        if(arr[i]==k){
            flag = 1;
            break;
        }
    }
    if(flag ==1){
        cout<<"Elements is present"<<endl;
    }else{
        cout<<"Element is not present"<<endl;
    }
}
