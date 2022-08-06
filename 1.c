#include <stdio.h>
int main()
{
    int F[10] = {0};
    int* x = F;
    for(int i = 0; i < 10; i++)
    {
        printf("%p\n",x);
        x++;
    }
    return 0;
}
