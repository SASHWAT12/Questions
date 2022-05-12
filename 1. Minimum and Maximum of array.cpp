// Method 1 - Sorting Method O(n log(n))


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
    sort(arr,arr+n);
    cout<<"Max element is: "<<arr[0]<<endl<<"Min element is: "<<arr[n-1];
    return 0;
}




//Method 2 - O(n)

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
    int minimun,maximum;
    if(n == 0){
        minimum = arr[0];
        maximum = arr[0];
    }
    else{
        minimum = min(arr[0],arr[1]);
        maximum = max(arr[0],arr[1])
    }
    for(int i=2;i<n;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    cout<<"Max element is: "<<maximum<<endl<<"Min element is: "<<minimum;
    return 0;
}
