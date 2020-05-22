#include <stdio.h>
int main()
{
    for ( int i = 0 ; i < 100 ; i++ , printf("从Lv%d升级至 Lv%d \t 所需经验值： %d\n", i - 1, i , 1000*(i>1)*(i-1)*(i-1)*(i-1)+(i<2)*i*300 ));
    return 0;
}
