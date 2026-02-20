void moveZeroes(int* nums, int numsSize)
{
    int lastnum=0; 
    for(int i=0;i<numsSize;i++)
     {
        if(nums[i]!=0)
        {
            int temp=nums[lastnum];
            nums[lastnum]=nums[i];
            nums[i]=temp;
            lastnum++;
        }
    }
}
    