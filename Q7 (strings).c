// Q7. WAP in C to check whether a substring is present in the main string or not.

#include <stdio.h>
#include <string.h>
void main() 
{
    char s[100], w[10], c[10];
    int i, j, x = 0, k = 0;
    printf("Enter a string: ");
    gets(s);
    printf("Enter the substring to check: ");
    gets(w);
    for (i = 0; s[i] != '\0'; i++) 
    {
        if((s[i]>='A'&&s[i]<= 'Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')) 
            c[x++] = s[i];
        else 
        {
            c[x] = '\0'; 
            if (strcmp(w, c) == 0) 
            {
                k = 1;
                break;
            } else 
            {
                x = 0;
            }
        }
    }
    c[x] = '\0'; 
    if (strcmp(w, c) == 0) 
        k = 1;

    if (k == 1) 
        printf("The substring is present.\n");
     else 
        printf("The substring is not present.\n");
}
