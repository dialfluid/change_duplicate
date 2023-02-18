#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// moded bubble sort
int main()
{
   
    int list[] = { 10, 10 ,10, 10};
    int x,y;
    
    
    srand( (unsigned)time(NULL) );

    for(x=0;x<4-1;x++)
    {
        for(y=x+1;y<4;y++)
        {
            if( list[x] == list[y] )
            {
               list[y] = rand() % 51 + 1;
            }
        }
    }
    for(x=0;x<4;x++)
    {
        printf(" %d ",list[x]);
    }
    putchar('\n');
    return(0);
}
