#include <iostream>

using namespace std;
int linearsearch(int arr[],int N,int num){
    for(int i=0;i<N;i++)
    {
        if(arr[i]==num)
        return arr[i];
    }
    
    return 0;
}
int main()
{
    int n,a,x;
    cout<<"enter the no. of elements in array\n";
    cin>>n>>a;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    x=linearsearch(arr,n,a);
    if(x==0)
    cout<<"element not found \n";
    else 
    cout<<"element is"<<x;
    return 0;
    
}
