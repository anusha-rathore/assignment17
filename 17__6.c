#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char str[20],r;
    printf("enter string");
      gets(str);
i=strlen(str);

    for(j=0; j<i/2 ; j++)
{
   r=str[j];
   str[j]=str[i-1-j];
   str[i-1-j]=r;
}

printf(" reverse string  %s",str);
}