#include <stdio.h>
#include <stdlib.h>
void as(int * b);
//int ** xxx(int ** b);

/*inline int ** xxx(int ** b)
{
    int ** ps = (int **)malloc(sizeof(*b));

    ps[0] = b[0];
    ps[1] = b[1];
    return ps;
}
*/

void as(int * b)
{
    *(b + 1*1 + 1) = 1;
}

int main()
{
    int x[2][2] = {0};
    as(&x[0][0]);
    printf("Hello world!%d\n",x[1][1]);
    return 0;
}

/*
void pp(int *a,int x,int y)
{
    for(int i = 0 ; i < x ;i++ )
        for(int j = 0 ; j < y ; j++ )
            cout<<a[i*y+j];
}
*/
