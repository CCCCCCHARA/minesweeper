#include<time.h>
#include<stdlib.h>
#include "minesweeper.h"
extern int mine_num;
const int MAX = 9

void Initialize_Map(Coor * pc, int ** map, int mines)
{
    int x,y = 0;
    for(int i = 0; i<mines;i++)
    {
        do
        {
            x = Random_Int(0,MAX);
            y = Random_Int(0,MAX);
        }
        while(map[x][y] != MINE_MARK)


    }




}

static int Random_Int(int start, int end)
{
    srand((int)time(0));
    return rand()%(end - start + 1) + start;
}
