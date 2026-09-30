int findMiddleIndex(int* nums, int numsSize) {

    int total = 0;
    int left = 0;

    // Calculate total sum
    for(int i = 0; i < numsSize; i++)
    {
        total += nums[i];
    }

    // Find middle index
    for(int i = 0; i < numsSize; i++)
    {
        int right = total - left - nums[i];

        if(left == right)
            return i;

        left += nums[i];
    }

    return -1;
}