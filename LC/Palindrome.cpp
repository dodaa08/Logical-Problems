class Solution {
public:
    bool isPalindrome(string s) {
        int Left = 0;
        int Right = s.size() - 1;

        while(Left<Right){
            if (!isalnum(s[Left])) {
                Left++;
            }
            else if (!isalnum(s[Right])) {
                Right--;
            }

            else{
                if(tolower(s[Left]) != tolower(s[Right])){
                    return false;
                }
                Left++;
                Right--;
            }

        }

        return true;

    }
};