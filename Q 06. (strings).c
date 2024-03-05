// Q6. WAP in C to print the frequency of each word of a string.

#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int f[26] = {0}, i ; 
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
    printf("Frequency of each letter:\n");
    for (i = 0; i<26; i++) 
    {
        if (f[i]>0) 
            printf("%c: %i\n", 'a'+i, f[i]);
        
    }
}  
