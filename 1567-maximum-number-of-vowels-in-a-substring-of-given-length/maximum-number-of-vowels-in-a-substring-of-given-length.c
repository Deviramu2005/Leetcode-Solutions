int isvowel(char c)
{
return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int maxVowels(char* s, int k) 
{
    int count=0,maxcount;
    for(int i=0;i<k;i++)
    {
        if(isvowel(s[i]))
        {
            count++;
        }
    }
    maxcount=count;
    for(int i=k;s[i]!='\0';i++)
    {
        if(isvowel(s[i]))
        {
            count++;
        }
        if(isvowel(s[i-k]))
        {
             count--;
        }
        if(maxcount<count)
        {
            maxcount=count;
        }
    }
    return maxcount;
    
}