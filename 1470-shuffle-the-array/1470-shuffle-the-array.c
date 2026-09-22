

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
*returnSize=numsSize;
int *res=malloc(numsSize*sizeof(int));
for(int i=0;i<n;i++)
{
res[2*i]=nums[i];
res[2*i+1]=nums[i+n];
}
return res;
}