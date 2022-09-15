#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char com;
    scanf("%s",str);
    scanf(" %c",&com);

    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] != com)
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}
