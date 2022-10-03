
#include <stdio.h>
int main()
{
    int i,alpha=0,digit=0,s=0;
   char str[20];
   printf("enter string ");
      gets(str);
   printf("%s\n", str);
   for(i=0; str[i]; i++)
     {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        
           alpha++;

        else if (str[i]>='0' && str[i]<='9')
        
            digit++;

        
        else 
            s++;
        


     }
printf("total number of alphabets %d \n total number of digit %d\n total number of special  characters %d",alpha,digit,s);
   return 0;
}