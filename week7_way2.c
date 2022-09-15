#include <stdio.h>

int removeChar (char x[], char a)
{
     
    for(int i = 0; x[i] != '\0'; i++)
    {
            if(x[i] != a)
            {
            printf("%c",x[i]);            
            }
    }
    
    return 0;
     
}

int main()
{
    char str[100];
    char com;
    scanf("%s",str);
    scanf(" %c",&com);

    removeChar(str, com);

}
