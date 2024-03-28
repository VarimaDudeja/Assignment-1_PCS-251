// Q10. WAP in C to check if two strings are Anagram strings or not.

#include <stdio.h>
#include <string.h>
void main() 
{
    char s1[100], s2[100];
    int f1[26] = {0}, f2[26] = {0}, f3[26] = {0}, f4[26] = {0}, i, j, a = 1, t;

    printf("Enter string1: ");
    gets(s1);
    printf("Enter string2: ");
    gets(s2);

    if (strlen(s1) != strlen(s2))
        printf("The strings are not Anagram strings.\n");
        
     else 
    {
        for (i = 0; s1[i] != '\0'; i++) 
        {
            if ((s1[i] >= 'a' && s1[i] <= 'z')) 
                f1[s1[i] - 'a']++;
                
            else if ((s1[i] >= 'A' && s1[i] <= 'Z')) 
                f3[s1[i] - 'A']++;
            else
                continue;
        }
        for (i = 0; s2[i] != '\0'; i++) 
        {
            if ((s2[i] >= 'a' && s2[i] <= 'z')) 
                f2[s2[i] - 'a']++;
                
            else if ((s2[i] >= 'A' && s2[i] <= 'Z')) 
                f4[s2[i] - 'A']++;
            
            else
                continue;
        }
        for (i = 0; i < 26; i++) 
        {
            if (f1[i] != f2[i]||f3[i] != f4[i]) 
            {
                a = 0;
                break;
            }
        }

        if (a == 0) 
            printf("The strings are not Anagram strings.\n");
            
         else 
         {
            for (i = 0; i < strlen(s1) - 1; i++) 
            {
                for (j = 0; j < strlen(s1) - i - 1; j++) 
                {
                    if (s1[j] > s1[j + 1]) 
                    {
                        t = s1[j];
                        s1[j] = s1[j + 1];
                        s1[j + 1] = t;
                    }
                }
            }

            for (i = 0; i < strlen(s2) - 1; i++) 
            {
                for (j = 0; j < strlen(s2) - i - 1; j++) 
                {
                    if (s2[j] > s2[j + 1]) 
                    {
                        t = s2[j];
                        s2[j] = s2[j + 1];
                        s2[j + 1] = t;
                    }
                }
            }
            if (strcmp(s1, s2) == 0) 
                printf("The strings are Anagram strings.\n");
                
            else 
                printf("The strings are not Anagram strings.\n");
        }
    }
}
