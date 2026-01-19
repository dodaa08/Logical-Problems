#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int found_k = false;
        for(int i=0;i<n;i++){
            if(arr[i] == k){
                found_k = true;
                break;
            }
        }

        if(found_k == true){
            cout<< "YES" << endl;
        }
        else{
            cout << "NO" <<endl;
        }
        
    }
    return 0;
}