#include<stdio.h>

char *remove_space(char *str)
{
    int i=0,j=0;
    while(str[i])
    {
        if(str[i]!=' ')

            str[j++]=str[i];
            i++;
    }

    str[i]='\0';
    return str;
}
int main()
{
    char str[30];

    printf("Please Give us a String");
    gets(str);
    remove_space(str);
    printf("%s",str);
    return 0;

}
