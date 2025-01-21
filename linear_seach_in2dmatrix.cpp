#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>> n >>m;

    int arr[n][m];
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int key ;
    cin >> key;
    bool flag = false;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(arr[i][j]==key){
                flag = true;
            }else{
                flag  = false;
            }
        }
    }
    if(flag){
        cout<<" element is present ";
    }else{
        cout<<" element is not present";
    }
}