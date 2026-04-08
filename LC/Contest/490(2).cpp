#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int fact(int n){
         int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
    return result;
    };

    bool isDigitorialPermutation(int n) {
         int NumsArray = n;
         int sum = 0;

         for(int i = 0; i<=NumsArray.size()-1; i++){
              int factorial = fact(NumsArray[i]);
              sum += factorial;
         }

         // do check and return flase or true
    }
};