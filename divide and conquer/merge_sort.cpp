#include <iostream>
#include <string>
using namespace std;

void merge(int arr[],int l,int r);
void merge_sort(int arr[],int l,int r);

void merge(int arr[],int l,int m,int r){
    
    int A[100],i=l,j=m+1,in=l;
    
while(i<=m && j<=r){
    if(arr[i]<arr[j]){
        A[in++] = arr[i++];
    }  
    else{
        A[in++] = arr[j++];
        }
        
    }
    
    for(;i<=m;i++){
        
        A[in++] = arr[i];
    }
        
    for(;j<=r;j++){    
        A[in++] = arr[j];
    }
        
    for(int i=l;i<=r;i++){
        arr[i] = A[i];
    }
}

void merge_sort(int arr[],int l,int r){
 
 if(r>l){
     
     int m = (l+r)/2;
     merge_sort(arr,l,m);
     merge_sort(arr,m+1,r);
     merge(arr,l,m,r);
 }
    
}

int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int a[n];
    
for(int i=0;i<n;i++){
    cin>>a[i];
}
    
merge_sort(a,0,n-1);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

}
