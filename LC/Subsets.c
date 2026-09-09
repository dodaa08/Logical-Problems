#include<stdio.h>

int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int total = 1 << numsSize;

    int** result = malloc(total * sizeof(int*));
    *returnColumnSizes = malloc(total * sizeof(int));
    *returnSize = total;

    for(int i = 0; i < total; i++){
        int bits = __builtin_popcount(i);
        (*returnColumnSizes)[i] = bits;
        result[i] = malloc(bits * sizeof(int));

        int idx = 0;
        for(int j = 0; j<numsSize; j++){
            if(i & (1 << j)){
                result[j][idx++] = nums[j];
            }
        }
    }

    return result;

}