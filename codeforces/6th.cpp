#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        // input array elements
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        // 
        map<int, int> frequencies;
        for(int i=0;i<n;i++){
            frequencies[arr[i]]++;
        }

        // if array with more than / equals to 3 ditinct elements its a NO
        if(frequencies.size() >= 3){
            cout<<"NO"<<endl;
        }
        
        else{
            int f1 = frequencies.begin()->second;
            int f2 = frequencies.rbegin()->second;

            if(f1 == f2){
                cout<<"YES"<<endl;
            }
            else if(n%2 == 1 && abs(f1 - f2) == 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }   
    }


    return 0;
}