#include<iostream>
#include<stdlib.h>

using namespace std;

int main(void){
    int n,*a,hole,j,i,value;
    cin>>n;
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
       hole=i;
       value=a[hole];
       while(hole>0&&a[hole-1]>value)
       {
           a[hole]=a[hole-1];
           hole--;
       }
       a[hole]=value;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}