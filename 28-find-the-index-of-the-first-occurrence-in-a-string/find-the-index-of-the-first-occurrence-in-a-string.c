int strStr(char* haystack, char* needle) 
{
   int m=strlen(haystack),i;
   int n=strlen(needle),j;
   if(n==0)
   {
    return 0;
   }
   for(i=0;i<=m-n;i++)
   {
      int j=0;
      while(j<n&&haystack[i+j]==needle[j])
     {
         j++;
      }
      if(j==n)
      {
         return i;
       }
    }
    return -1;
}