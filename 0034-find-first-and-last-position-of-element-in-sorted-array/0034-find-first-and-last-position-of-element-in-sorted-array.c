/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int *result = malloc(2 * sizeof(int));

    int first = -1;
    int last = -1;

    // Find first position
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    // Find last position
    left = 0;
    right = numsSize - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    result[0] = first;
    result[1] = last;

    *returnSize = 2;

    return result;
}