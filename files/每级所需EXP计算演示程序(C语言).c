int printf (const char *format, ...); 
int main()
{
    for ( int i = 1 , start , exp ; i < 100 ; i++ )
    {
        start = 1000*(i>1)*(i-1)*(i-1)*(i-1)+(i<2)*i*300 ;
        exp = start-1000*(i>2)*(i-2)*(i-2)*(i-2)-(i<3)*(i-1)*300 ;
        printf("Lv%d \t 起始经验值： %d \t ，  从Lv%d \t 升级至 Lv%d \t 所需经验值： %d\n" , i , start , i-1 , i , exp ) ;
    }
    return 0;
}
