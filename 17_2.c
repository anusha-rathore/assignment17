#include<stdio.h>
#include<string.h>

int main(){
    char str[10] ={'a','n','u','s','h','a'};
    int i,j,count=0;
    int l=strlen(str);
    char A='a';
    // printf("%d\n",l);

    for(i=0; str[i];  i++)
    {
        
            if(str[i]==A)
            {
                count+=1;
            }
        
    }
    printf("the occurrence of a given character in a given string is %d",count);
}