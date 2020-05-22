#include <stdio.h>
int main()
{
    for ( int i = 0 ; i < 100 ; i++ , printf("Lv%d \t 起始经验值： %d\n", i , 1000*(i>1)*(i-1)*(i-1)*(i-1)+(i<2)*i*300 ));
    return 0;
}
