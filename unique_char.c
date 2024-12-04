#include <stdio.h>
#include <string.h>

int check_unique_char(char *s)
{
    int len = strlen(s);
    for (int i = 0; i < len - 1; i++)   // len - 1 
    {
        for (int j = i+1; j < len;j++)
        {
            if (s[i] == s[j])
            {
                return 0; // not unique
            }   
        }
        
    }
    return 1; // unique
    
}
int main()
{
    char s[50];
    printf("Enter the string : ");
    scanf("%[^\n]", s);
    //getchar();  // Consume the newline left by scanf
    check_unique_char(s) ? printf("True\n"): printf("False\n");


    return 0;
}