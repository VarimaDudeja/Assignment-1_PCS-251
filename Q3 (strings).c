// Q3. WAP in C to check if a string is unique or not.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int f[26] = {0}, i, x=1 ; 
    printf("Enter a string: ");
    gets(s);
    for (i = 0; s[i]!='\0'; i++) 
    {
        if((s[i]>='a'&&s[i]<='z'))
            f[s[i]-'a']++;
        
        else if((s[i]>='A'&&s[i]<='Z')) 
            f[s[i]-'A']++;
            
        else
            continue;
    }
    for (i = 0; i<26; i++) 
    {
        if (f[i]>1) 
        {
            x=0;
            break;
        }
        
    }
    if(x==1)
        printf("The string is Unique.\n");
    else
        printf("The string is not Unique.\n");
}        