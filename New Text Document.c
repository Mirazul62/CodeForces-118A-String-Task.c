#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
int main()
{
    int i;
    char s[100];
    gets(s);
    strlwr(s);
   // printf("%s", s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y');
        else
            printf(".%c",s[i]);
    }
}
