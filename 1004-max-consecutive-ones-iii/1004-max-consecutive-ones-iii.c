int longestOnes(int* nums, int n, int k) {
    int len=0,left=0,zero=0;
    for(int right=0;right<n;right++)
    {
        if(nums[right]==0)
        zero++;
    while(zero>k)
    {
        if(nums[left]==0)
        zero--;
        left++;
    }
if(right-left+1>len)
{
    len=right-left+1;
}
    }
    return len;
}