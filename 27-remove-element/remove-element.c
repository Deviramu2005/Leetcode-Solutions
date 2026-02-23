int removeElement(int* nums, int numsSize, int val)
{
    int s=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            nums[s++]=nums[i];
        }
    }
    return s;
}
