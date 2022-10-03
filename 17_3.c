#include<stdio.h>
#include<string.h>

int main(){
    char str[10] ={'a','n','u','s','h','a'};
    int i,j,count=0;
    char vowel[11]={"aeiouAEIOU"};
      printf("the vowels in a given string is\n");

    for(i=0; str[i];  i++)
    {
        for(j=0; vowel[j]; j++)
            if(str[i]==vowel[j])
            {
                printf("%c\n",str[i]);
                count++;
                break;
            }
        
    }
    printf("%d",count);
}