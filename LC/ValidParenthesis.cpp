#include <iostream>;
using namespace std;
#include <map>;
#include <stack>

class Solution {
public:
    bool isValid(string s) {
        map<char, char> Pmap = {
            {')' , '('},
            {']', '['},
            {'}', '{'}
        };

        stack<char> st;

        for(char c : s){
            if(c == '('  || c == '[' || c == '{'){
                 st.push(c);
            }
            else if(st.top() == Pmap[c]){
                st.pop();
            }
        }

        if(st.empty()){
            return true;
        }

        return false;

    }
};