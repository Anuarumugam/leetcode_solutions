int maxSubarraySumCircular(int* nums, int numsSize)
{
    int total = 0;

    int currentMax = 0;
    int maxSum = nums[0];

    int currentMin = 0;
    int minSum = nums[0];

    for(int i = 0; i < numsSize; i++)
    {
        total = total + nums[i];

        currentMax = currentMax + nums[i];

        if(currentMax < nums[i])
        {
            currentMax = nums[i];
        }

        if(currentMax > maxSum)
        {
            maxSum = currentMax;
        }

        currentMin = currentMin + nums[i];

        if(currentMin > nums[i])
        {
            currentMin = nums[i];
        }

        if(currentMin < minSum)
        {
            minSum = currentMin;
        }
    }

    if(maxSum < 0)
    {
        return maxSum;
    }

    int circularSum = total - minSum;

    if(circularSum > maxSum)
    {
        return circularSum;
    }

    return maxSum;
}