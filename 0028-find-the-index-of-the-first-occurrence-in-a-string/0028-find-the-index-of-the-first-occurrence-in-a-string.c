int strStr(char* haystack, char* needle) {

    int found=-1;
    int i=0;
    int len=strlen(needle);
    int len2=strlen(haystack);
    if(len2<len)
    {
        return -1;
    }
    if (len == 0)
    {
        return 0;
    }
    int k=0;
    while(haystack[i]!='\0')
    {   
        if(haystack[i]==needle[0])
        {    
            k=0;
            found=i;
            for(int j=0;j<len;j++)
          {
             if (i + j >= len2)
            {break;}
            
            if(haystack[i+j]!=needle[j])
            {
                break;

            }
                k++;
            
          }

          if(k==len)
           {return found;}

           else
              {found=-1;}
        }

        i++;
    }
   return found;
}