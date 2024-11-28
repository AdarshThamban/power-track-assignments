#include <stdio.h>

void letter_reverse(int l, int r, char *s){
    while(l < r){
        char temp = s[l];
        s[l++] = s[r];
        s[r--] = temp;
    }
}
int main()
{
    char string[100];
    int right, left;
    printf("Enter a small string :\n");
    scanf("%[^\n]", string);

    printf("string is : %s\n", string);

    right = 0;
    left = 0;
    while (string[right] != '\0')
    {
       
        //printf("%c",string[right]);
        if (string[right] == ' ')
        {
            letter_reverse(left,right-1,string);
            left = right+1;
        }
        right++;

    }
    letter_reverse(left,right-1,string);
    printf("\n");
    printf("new string is : %s\n", string);
    return 0;
}