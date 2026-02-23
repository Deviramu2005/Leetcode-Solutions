int removeDuplicates(int* nums, int numsSize)
{
    int s=0,i;
    for(i=0;i<numsSize;i++)
    {
        if(i==numsSize-1||nums[i]!=nums[i+1])
        {
            nums[s++]=nums[i];
        }
    }
    return s;
}