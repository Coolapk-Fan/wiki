int printf (const char *format, ...);
int main()
{
        int lv, start, exp;
        for (lv = 1; lv < 100; lv++){
                if (lv > 1){
                        start = 1000 * (lv-1) * (lv-1) * (lv-1);
                }else{
                        start = 300 * lv;
                }
                if (lv > 2){
                        exp = start - 1000 * (lv-2) * (lv-2) * (lv-2);
                }else{
                        exp = start - 300 * (lv-1);
                }
                printf("Lv%d\t 起始经验值： %d\t", lv, start);  
                printf("从Lv%d\t 升级至 Lv%d\t 所需经验值： %d\n", lv-1, lv, exp);
        }
        return 0;                                                                                                                                                    
}
