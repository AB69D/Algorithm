#include <bits/stdc++.h>
using namespace std;
int  temp;
void swaap(int *i,int *j)
{
  temp=*i;
  *i=*j;
  *j=temp;
}
int main()
{
    int arr[]={4,5,6,7,9,2};
    for(int i=0;i<7;i++)
    {
       for(int j=0;j<7;j++)
       {
           if(arr[j]>arr[j+1])
            swaap(&arr[j],&arr[j+1]);
       }
    }

    for(int i=0;i<7;i++)
    {
        cout<<arr[i];
    }
}
