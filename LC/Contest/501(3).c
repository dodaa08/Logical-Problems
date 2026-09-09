int FindMin(int* nums, int numsSize){    
    if(numsSize<=1) return -1;
    int min = nums[0];
    for(int i = 0; i<numsSize; i++){
        if(nums[i]<min){
            min = nums[i];
        }
    }

    return min;
}

long long minArraySum(int* nums, int numsSize) {
    int* pelnorazi = nums;
    int minEle = FindMin(nums, numsSize);
    long long sum = 0;  
    for(int i = 0; i<numsSize; i++){
        if(nums[i]%minEle == 0){
            sum += minEle;
        }
        else{
            sum += nums[i];
        }
    }

    return sum;
}       