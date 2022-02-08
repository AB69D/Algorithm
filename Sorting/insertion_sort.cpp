#include <bits/stdc++.h>
using namespace std;
int  temp,j;

int main(){
  int arr[]={5,6,74,4,7,8,8,8,8};
//  int n=sizeof(arr);
  for(int i=1;i<9;i++){
    j=i-1;
    temp = arr[i];
    while(j>=0&&arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
  }

  for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
  }
}
