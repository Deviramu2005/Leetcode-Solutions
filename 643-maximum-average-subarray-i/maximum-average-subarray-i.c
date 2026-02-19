double findMaxAverage(int* nums, int numsSize, int k) 
{
    int maxsum,i,windowsum=0;
    for(i=0;i<k;i++)
    {
        windowsum=windowsum+nums[i];
    }
    maxsum=windowsum;
    for(i=k;i<numsSize;i++)
    {
         windowsum=windowsum+nums[i]-nums[i-k];
        if(windowsum>maxsum)
       {
          maxsum=windowsum;
        }   
    }
    return (double)maxsum/k;
}      
        
        
            