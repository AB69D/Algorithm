#include<iostream>
using namespace std;
int main()
{
    int index,j;
    cout<<"Enter The number of element :";
    cin>>index;
    int arr[]={1,4,6,2,5,3,6,7,65,4};
    int  n=sizeof(arr)/sizeof(arr[0]);
    cout<<sizeof(arr)<<"/"<<sizeof(arr[0])<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }

        }

    }

    cout<<n<<" ";
    cout<<endl;

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}
