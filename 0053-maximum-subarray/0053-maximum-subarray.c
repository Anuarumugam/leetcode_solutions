int maxSubArray(int* nums, int numsSize) {
    int max=nums[0],sum=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        sum=sum+nums[i]>nums[i]?sum+nums[i]:nums[i];
        max=(sum>max)?sum:max;
        }
        return max;
    }    