int longestSubarray(int* nums, int numsSize)
{
    int left = 0;
    int zeroCount = 0;
    int maxLength = 0;

    for(int right = 0; right < numsSize; right++)
    {
        if(nums[right] == 0)
        {
            zeroCount++;
        }

        while(zeroCount > 1)
        {
            if(nums[left] == 0)
            {
                zeroCount--;
            }

            left++;
        }

        int length = right - left;

        if(length > maxLength)
        {
            maxLength = length;
        }
    }

    return maxLength;
}