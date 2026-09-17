void rev(int*nums,int left,int right ){
    while(left<right){
       int temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
}


void rotate(int* nums, int numsSize, int k) {
    k=k%numsSize;
   rev(nums,0,numsSize-1);
   rev(nums,0,k-1);
   rev(nums,k,numsSize-1);
   
}