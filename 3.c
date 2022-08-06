#include <stdio.h>
void strcpyy(char *s1,char *s2)
{
    while(*s2 != '\0')
        *s1++ = *s2++;
    *s1 = '\0';
}
int main()
{
    char x[6] = "Deez",y[5] = "Nuts";
    strcpyy(x,y);
    printf("%s",x);
    return 0;
}
