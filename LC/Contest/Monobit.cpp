class Solution {
public:
    int countMonobit(int n) {
        int counter = 0;
        for(int i =0; i<=n; i++){
            string s = "";
            int x = i;
            if(x==0) s="0";

            while(x>0){
                s = char('0' + (x%2)) + s;
                x /= 2;
            }

            bool flag = true;
            for(int j =1; j<s.size(); j++){
                if(s[j] != s[0]){
                    flag = false;
                    break;
                }
            }

            if(flag) counter++;
        }

        return counter;
    }
};