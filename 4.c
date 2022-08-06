#include <stdio.h>
void strcaty(char *s1,char *s2)
{
    while(*s1 != '\0')
        s1++;
    while(*s2 != '\0')
        *s1++ = *s2++;
    *s1 = '\0';
}
int main()
{
    char x[6] = "Deez",y[5] = "Nuts";
    strcaty(x,y);
    printf("%s",x);
    return 0;
}
