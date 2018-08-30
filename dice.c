#include <stdio.h>

int main()
{
    int Y,W;
    scanf("%d%d",&Y,&W);
    if(Y==6 || W==6)
    {
        printf("1/6\n");
    }
    else if(Y==5 || W==5)
    {
        printf("1/3\n");
    }
    else if(Y==4 || W==4)
    {
        printf("1/2\n");
    }
    else if(Y==3 || W==3)
    {
        printf("2/3\n");
    }
    else if(Y==2 || W==2)
    {
        printf("5/6\n");
    }
    else
    {
        printf("1/1\n");
    }

    return 0;
}
