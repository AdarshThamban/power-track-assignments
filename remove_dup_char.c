#include <stdio.h>
#include <string.h>
char *remove_dup(char *s){
    int count = strlen(s);
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i+1; j < count;)
        {
            if(s[i] == s[j]) // found dup
            {
                for (int k = j; k < count; k++) //for 1 step backward replacing including null 
                {
                    s[k] = s[k+1] ;
                    
                }
                count --; // string size reduced
            }
            else
            j++; // if dup is found,no need of j++, bcz 1 step bckward replacing will overpass the next chara to be checked
        }
        
    }
    return s;
    
}
int main(){
    char s[50];
    printf("Enter the string : ");
    scanf("%[^\n]", s);
    printf("output = %s",remove_dup(s));

    return 0;
}