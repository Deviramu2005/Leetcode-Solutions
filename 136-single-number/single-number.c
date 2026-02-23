int singleNumber(int* nums, int numsSize)        //int res=0;
{                                                //for(i=0;i<numsSize;i++)                                          
   int res=0,i,j;                                //res=res^nums[i];
   for(i=0;i<numsSize;i++)                       // return res;
   {
     int count=0;
       for(j=0;j<numsSize;j++)
       {
           if(nums[i]==nums[j])
          {
              count++;
          }
        }
        if(count==1)
        {
               return nums[i];
        }
    }
   return -1;
}