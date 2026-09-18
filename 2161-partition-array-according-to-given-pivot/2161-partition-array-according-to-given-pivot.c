/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    *returnSize=numsSize;
    int *ans=(int*)malloc((*returnSize)*sizeof(int));
   int index=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<pivot)
        {
            ans[index]=nums[i];
        
        index++;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==pivot)
        {
            ans[index]=nums[i];
        
        index++;
    }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>pivot)
        {
            ans[index]=nums[i];
        
        index++;
    }
    }

    return ans;
}
    
