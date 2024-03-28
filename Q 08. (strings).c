// Q8. WAP in C to check if a string is unique or not.

#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int f1[26] = {0}, f2[26] = {0}, i, x=1, y=1 ; 
    printf("Enter a string: ");
    gets(s);
    for (i = 0; s[i]!='\0'; i++) 
    {
        if((s[i]>='a'&&s[i]<='z'))
            f1[s[i]-'a']++;
        
        else if((s[i]>='A'&&s[i]<='Z')) 
            f2[s[i]-'A']++;
            
        else
            continue;
    }
    for (i = 0; i<26; i++) 
    {
        if (f1[i]>1) 
        {
            x=0;
            break;
        }
        
    }
    if(x==1)
    {
        for (i = 0; i<26; i++) 
        {
            if (f2[i]>1) 
            {
                y=0;
                break;
            }
        
        }
    }
    if(x==1&&y==1)
        printf("The string is Unique.\n");
    else    
        printf("The string is not Unique.\n"); 
}        
