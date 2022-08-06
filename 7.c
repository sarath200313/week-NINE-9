#include <stdio.h>
int main()
{
    int r,c,d;
    printf("r");
    scanf("%d",&r);
    printf("c");
    scanf("%d",&c);
    printf("d");
    scanf("%d",&d);
    int a[r][c][d];
    for(int i = 0;i < r;i++)
    {
        for(int j = 0;j < c;j++)
        {
            for(int k = 0;k < d;k++)
            {
                printf("Enter the element: ");
                scanf("%d",&*(*(*(a+i)+j)+k));
            }
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            for(int k = 0; k < d; k++)
            {
                printf("%d ",*(*(*(a+i)+j)+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
