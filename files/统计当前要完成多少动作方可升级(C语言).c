#include <stdio.h>
int main ()
{
        int a, b, lv, i;
        scanf("%d",&a);
        for (i=1; i < 100; i++){
                if (i*i*i>a/1000){
                        lv = i;
                        break;
                }
        }
        b = 1000*lv*lv*lv-1;
        printf("缺少 %d EXP可升下一级", b);
        //计算每日上限
        //计算赞数
        //计算回复数
        //计算收藏数
        //...
}
