#include<iostream>
#include<algorithm>
using namespace std;
void print1(int val){
    cout<<val<<" ";
}
int main(){
    int arr[] = {1,6,8,43,6,7,10};
    int length = sizeof(arr)/sizeof(int);
    sort(arr,arr+length);
    for_each(arr,arr+length,print1);
    cout<<endl;
    return 0;
}