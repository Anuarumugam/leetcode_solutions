int* getSneakyNumbers(int* nums, int numsSize, int* returnSize)
{
    int *ans = malloc(2 * sizeof(int));
    *returnSize = 0;

    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                ans[*returnSize] = nums[i];
                (*returnSize)++;
            }
        }
    }

    return ans;
}