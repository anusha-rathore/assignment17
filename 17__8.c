#include<stdio.h>
#include <string.h>
int main()
{
    int i,j;
     char str[20] ,cpy[20];
   printf("enter5");
      fgets(str,20, stdin);
   printf("%s\n", str);
   for(i=0; str[i]; i++)
   
    {
        cpy[i]=str[i];
   }
   printf(" copy string %s",cpy);
}