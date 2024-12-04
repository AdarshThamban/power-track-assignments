#include <stdio.h>

int main(){
    int weight[] = {1, 2, 3, 2, 1};
    int arr[50], num, sum, t_sum ;
    printf("Enter the number of digits :");
    scanf("%d", &num);
    printf("Enter digits :\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
     printf("Enter digits :\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d", arr[i]);
    }
    int ans[num -4];
    printf("Output is \n");
    for (int i = 0; i <= (num -5); i++)
    {
        sum = 0;
       // for(int j = 0; j < 5; j++)
        //{
            //t_sum = 0;
            sum = ((arr[i]*weight[0]) + (arr[i+1]*weight[1]) + (arr[i+2]*weight[2]) + (arr[i+3]*weight[3]) + (arr[i+4]*weight[4]));
            
            //t_sum += sum;
        //}
        printf("%d ", sum);
        ans[i] = sum/9;
        printf("%d ",ans[i]/(num-4));
    }

    
    
    return 0;
}