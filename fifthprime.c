#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of colomns: ");
    scanf("%d", &col);
    int a[row][col];
    printf("Enter elements: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);

        }
    }
printf("Your array is...\n");
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("2d array after replacing 5th prime number is...: ");
    int num, flag, count ;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            num = (a[i][j] - 1);
            //printf("%d",num);
            flag = 0;
            count = 0;
            while (count != 5)
            {
                num += 1;
                for (int k = 2; k * k <= num; k++)
                {
                    if (num % k == 0)
                    {
                        flag = 1; // not prime and break loop
                        break;
                    }
                }
                if (flag == 0)// if prime inc. counr
                {
                    count++;
                }
                flag = 0;
            }
            a[i][j] = num; // 5th prime number*/
            
        }
    }
printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}