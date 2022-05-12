// Method 1 -  O(n)


#include <bits/stdc++.h>
using namespace std;

int main()                                                                     
{                                                                            
    int n;
    cout<<"Enter Number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start = 0, end = n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Same method goes for string
