#include <stdio.h>
int main ()
{
        int a, b, lv, i;
        printf("输入当前经验值：\n");
        scanf("%d",&a);
        if (a >= 1000){
                for (i = 2; i < 100; i++){
                        if (i*i*i>a/1000){
                                lv = i;
                                break;
                        }
                }
        }else{
                lv = (a>=300);
        }
        printf("您当前等级：Lv%d\n", lv);
        b = 1000*lv*lv*lv*(lv>0)+(lv==0)*300; b-=a;
        printf("缺少 %d EXP可升下一级", b);
        //计算每日上限
        //计算赞数
        //计算回复数
        //计算收藏数
        //...
        return 0; 
}
