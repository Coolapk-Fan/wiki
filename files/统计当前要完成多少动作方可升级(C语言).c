#include <stdio.h>
int main ()
{
        int a, b, lv, i;
        printf("输入当前经验值：\n");
        scanf("%d",&a);
        for (i=1; i < 100; i++){
                if (i*i*i>a/1000){
                        lv = i;
                        break;
                }
        }
        printf("您当前等级：Lv%d\n", lv);
        b = 1000*lv*lv*lv-a;
        printf("缺少 %d EXP可升下一级", b);
        //计算每日上限
        //计算赞数
        //计算回复数
        //计算收藏数
        //...
}
