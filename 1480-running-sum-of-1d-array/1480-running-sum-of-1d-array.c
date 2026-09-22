/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *pre=malloc(numsSize* sizeof(int));
    pre[0]=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        pre[i]=pre[i-1]+nums[i];
    }
return pre;
}