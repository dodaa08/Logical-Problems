// https://codeforces.com/blog/entry/139079  
// Don't try to count
#include <bits/stdc++.h>
using namespace std;

bool check(string x, string s){
    if(x.size() < s.size()){
        return false;
    }

    // basically extract the first a

    for(int i =0; i <= x.size() - s.size(); i++){
        if(x.substr(i, s.size()) == s){  // extract s from x
            return true;
        }
    }

    return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;

        string cur = x;
        int ans = -1;

        for (int i = 0; i <= 5; i++) {
            if (check(cur, s)) {
                ans = i;
                break;
            }
            cur += cur;
        }

        cout << ans << endl;

    }
    return -1;
}