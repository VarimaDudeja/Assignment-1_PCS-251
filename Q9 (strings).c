// Q9. WAP in C to print the pig-latin form of a word.

#include<stdio.h>
#include<string.h>
void main()
{
    char s[100], w[100];
    int i, x, a=0 ; 
    printf("Enter a string: ");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
            break;
        
    }
    if(i!=0)
    {
        for(x=i; s[x]!='\0'; x++)
        {
            w[a++]=s[x];
        }
        for(x=0; x<i; x++)
        {
            w[a++]=s[x];
        }
        w[a]='a';
        w[a+1]='y';
        w[a+2]='\0';
    }
    else
    { 
        a=strlen(s);
        strcpy(w, s);
        w[a++]='a';
        w[a++]='y';
        w[a]='\0';
    }    
    printf("Pig Latin form of the word: ");
    for(i=0; w[i]!='\0';i++)
    {
        printf("%c", w[i]);
    }
}        
