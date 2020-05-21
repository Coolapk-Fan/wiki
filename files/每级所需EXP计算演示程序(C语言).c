#include <stdio.h>
int main()
{
for ( int exp , lv = 0 ; lv < 100 ; lv++ , exp=1000*(lv-1>0)*(lv-1)*(lv-1)*(lv-1)-((lv-1>0)-1)*lv*300 , printf("Lv%d \t 所需经验值： %d\n", lv , exp));
return 0;
}
