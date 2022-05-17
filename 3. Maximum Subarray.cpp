//Method 1 - Bruteforce - O(N*N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=0,currsum=0;
    for(int i = 0; i < n; i++) {
        currsum = 0;
        for(int j = i; j < n; j++) {
            currsum += arr[j];
            if(currsum > maxsum)
                maxsum = currsum;
        }
    }
    cout<<maxsum<<endl;
    return 0;
}







//Method 2 - Kadane's Algorithm - O(N)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=0,currsum=0;
    for(int i=0;i<n;i++){
        currsum = currsum + arr[i];
        if(maxsum<currsum)
            maxsum = currsum;
        if(currsum<0)
            currsum = 0;
    }
    cout<<maxsum<<endl;
    return 0;
}
