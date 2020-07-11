#include <stdio.h>

int main()
{
	int e, m, d, l = 0;
	
	printf("请输入当前EXP：");
	scanf("%d", &e);
	
	if (e>299) for (; l*l*l <= e/1000; l++);
	e = !l*300+1000*l*l*l - e;
	m = (!l+(l>5)*(l-5)+l)*100+10;
	d = e / m + (e % m > 0);
	if (e<m) m=(l+(l>4)*(l-4))*100+110;

	printf("\
			您当前等级为：Lv%d\n\
			升级至下一级需%dEXP\n\
			每日上限为%dEXP\n\
			升级最快所需%d天", l, e, m, d);
	return 0;
}
