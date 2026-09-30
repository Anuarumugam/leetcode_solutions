int countPairs(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;
    int count = 0;

    // sort the array
    for(int i = 0; i < numsSize - 1; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    while(left < right)
    {
        if(nums[left] + nums[right] < target)
        {
            count += right - left;
            left++;
        }
        else
        {
            right--;
        }
    }

    return count;
}