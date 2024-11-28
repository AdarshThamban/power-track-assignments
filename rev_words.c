#include <stdio.h>
#include <string.h>

void letter_reverse(int l, int r, char *s){
    while(l < r){
        char temp = s[l];
        s[l++] = s[r];
        s[r--] = temp;
    }
}

int main(){
    char string[100];
        printf("Enter a small string :\n");
    scanf("%[^\n]", string);
    int len = strlen(string);
    int l = 0, r = len -1;
    while (l < r)
    {
        char temp = string[l];
        string[l++] =  string[r];
        string[r--] = temp;
    } // each char. get reversed
    //printf("%s", string);
    // to re-reverse each letter in word we use function.
    
        r = 0;
    l = 0;
    while (string[r] != '\0')
    {
       
        //printf("%c",string[right]);
        if (string[r] == ' ')
        {
            letter_reverse(l,r-1,string);
            l = r+1;
            
        }
        r++;

    }
    letter_reverse(l,r-1,string);
    printf("\n");
    printf("new string is : %s\n", string);
    return 0;
}