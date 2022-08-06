#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    int *a = (int*)malloc(r*c*sizeof(int));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the element [%d][%d]: ",i,j);
            scanf("%d",&a[i*c+j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i*c+j]);
        }
        printf("\n");
    }
    free(a);
    return 0;
}
