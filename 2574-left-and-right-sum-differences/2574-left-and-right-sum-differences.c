int* leftRightDifference(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;

    int *left = malloc(numsSize * sizeof(int));
    int *right = malloc(numsSize * sizeof(int));
    int *res = malloc(numsSize * sizeof(int));

    left[0] = 0;
    right[numsSize - 1] = 0;

    // Left sum
    for(int i = 1; i < numsSize; i++)
    {
        left[i] = left[i - 1] + nums[i - 1];
    }

    // Right sum
    for(int i = numsSize - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] + nums[i + 1];
    }

    // Difference
    for(int i = 0; i < numsSize; i++)
    {
        res[i] = abs(left[i] - right[i]);
    }

    return res;
}