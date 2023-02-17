#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


//实验1
//1. 编写程序实现两个数的互换。

//#include <stdio.h>
//
//int main()
//{
//	int a, b, t = 0;
//	printf("输入两个数:\n");
//	scanf("%d%d", &a, &b);
//	printf("交换前：a=%d,b=%d\n", a, b);
//	t = a;
//	a = b;
//	b = t;
//	printf("交换后：a=%d,b=%d", a, b);
//	return 0;
//}


//2. 输入一学生的学号、生日（年月日）、性别（男 M，女 F）及三门功课（语文、数学、
//英语）的成绩，计算该学生的总分和平均分，并按如下格式输出该学生的全部信息。
//学号 生日 性别 语文 数学 英语 总分 平均分
//20170101 1999 - 01 - 01 M 95 85 85 265 88.3

//#include <stdio.h>
//
//struct student {
//	int number;
//	char birth[100];
//	char sex;
//	int chinese;
//	int math;
//	int english;
//	float sum;
//	float avg;
//}s;
//
//int main()
//{
//	struct student s;
//	printf("输入一学生的学号、生日（年月日）、性别（男 M，女 F）及三门功课（语文、数学、英语）的成绩：\n");
//	scanf("%d %s %c %d %d %d", &s.number,&s.birth,&s.sex,&s.chinese,&s.math,&s.english);
//	s.sum = s.chinese + s.math + s.english;
//	s.avg = s.sum / 3;
//	printf("学号 生日 性别 语文 数学 英语 总分 平均分\n");
//	printf("%d  %s  %c  %d  %d  %d  %.2f  %.2f",s.number,s.birth,s.sex,s.chinese,s.math,s.english,s.sum,s.avg);
//	return 0;
//}


//3．从键盘任意输入一个四位正整数，编程计算并输出它的逆序数。例如：输入 3451，则
//它的逆序数应为 1543。
//方法一：
//#include <stdio.h>
//
//int main()
//{
//	int n = 0, a = 0, b = 0, c = 0, d = 0;
//	printf("从键盘任意输入一个四位正整数:\n");
//	scanf("%d", &n);
//	a = n % 10;
//	b = (n % 100) / 10;
//	c = (n % 1000) / 100;
//	d = n / 1000;
//	printf("它的逆序数应为:%d%d%d%d", a, b, c, d);
//	return 0;
//}
//方法二：
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y, a, b, c, d;
//	scanf("%d", &x);
//	a = x / 1000;
//	b = (x - a * 1000) / 100;
//	c = (x - a * 1000 - b * 100) / 10;
//	d = x % 10;
//	y = d * 1000 + c * 100 + b * 10 + a;
//	printf("逆序数为%d", y);
//}


//4. 假设银行定期存款的年利率 r 为 2.25 % ，从键盘输入本金和存款年限，编程计算并输出
//该笔存款到期后的本金和利息一共有多少。（例如：当本金为 1000 元，存入 10 年后，
// 应得的本金与利息一共有 1249.203 元）
//提示：
//1）本程序最终计算的是复利
//2）计算幂的数学函数为 pow(a, n)，代表 a 的 n 次幂
//3）使用数学函数是，需要在程序的开头加上编译预处理命令#include <math.h>

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int deposit, year;
//	double r = 0.0225, future = 0;
//	printf("输入本金和存款年限:\n");
//	scanf("%d%d", &deposit, &year);
//	future = deposit * pow(r+1, year);//注意要点：r+1
//	printf("该笔存款到期后的本金和利息一共有:%.4lf", future);
//	return 0;
//}


//5. 编写一程序，输入一个大写字母，输出该字母的前驱字母、该字母本身、它的后继字母。
//（考虑输入字母为‘A’和’Z’的情况）
//例如：输入 B 输出 ABC

//#include <stdio.h>
//int main()
//{
//	char A;
//	printf("输入一个大写字母:\n");
//	scanf("%c", &A);
//	printf("该字母的前驱字母、该字母本身、它的后继字母:%c%c%c", A - 1, A, A + 1);
//	return 0;
//}


//6. 根据父母的身高可预测子女成年后的遗传身高，其预测公式如下：
//男性成人时身高 = （父亲身高 + 母亲身高） * 0.54cm
//女性成人时身高 = （父亲身高 * 0.923 + 母亲身高） / 2cm
//已知男孩小明爸妈的身高分别 175cm，162cm；女孩小红父母的身高分别是 178cm，
//153cm；编写程序计算并输出小明、小红和你自己的遗传身高（要求输出结果不含小数
//位）。

//#include <stdio.h>
//
//int main()
//{
//	int ming = 0, hong = 0, me=0, mingdad = 175, mingmum = 162, hongdad= 178, hongmum = 153, medad = 170, memum = 160;
//	ming = (mingdad + mingmum) * 0.54;
//	printf("小明的遗传身高是：%dcm\n", ming);
//	hong = (hongdad * 0.923 + hongmum) / 2;
//	printf("小红的遗传身高是：%dcm\n", hong);
//	me = (medad + memum) * 0.54;
//	printf("我的遗传身高是：%dcm\n", me);
//	return 0;
//}


//实验2
//1. 有如下函数，编写程序输入 x 的值，输出 y 的值。
//      x(x < 0)
//	y = x2(0≤x≤10)
//	    3x - 11 (x > 10)

//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	printf("输入x的值:\n");
//	scanf("%d", &x);
//	if (x < 0) y = x;
//	else if (0 <= x && x <= 10) y = x * x;
//	else y = 3 * x - 11;
//	printf("y的值为：%d", y);
//	return 0;
//}


//2. 某单位马上要加工资，增加金额取决于工龄和现工资两个因素：
// 对于工龄大于等于 20年的，如果现工资高于 2000 元，加 200 元，否则加 180 元；
// 对于工龄小于 20 年的，如果现工资高于 1500，加 150 元，否则加 120 元。
// 工龄和现工资从键盘输入，编程计算并输出加工资后的员工工资。

//#include <stdio.h>
//
//int main()
//{
//	int year=0, money=0,newmoney=0;
//	printf("输入工龄和工资:\n");
//	scanf("%d%d", &year, &money);
//	if (year >= 20)
//	{
//		if (money > 2000) newmoney = money + 200;
//		else newmoney = money + 180;
//	}
//	else if (year < 20)
//	{
//		if (money > 1500) newmoney = money + 150;
//		else newmoney = money + 120;
//	}
//	printf("加工资后的员工工资:%d", newmoney);
//	return 0;
//}


//3. 输入年号，计算这一年的 2 月份的天数，将结果输出。

//#include <stdio.h>
//int main()
//{
//	int year = 0, day = 0;
//	printf("输入年号:\n");
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) day = 29;
//	else day = 28;
//	printf("%d年2月份的天数为:%d", year, day);
//	return 0;
//}


//4. 从键盘输入任意一个字符，判断该字符是英文字母（不区分大小写）、数字字符还是其它字符。

//#include <stdio.h>
//
//int main() {
//	char c;
//	printf("输入任意一个字符:\n");
//	scanf("%c", &c);
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//	{
//		printf("该字符是英文字母");
//	}
//
//	else if (c >= '0' && c <= '9') 
//	{
//		printf("该字符是数字字符");
//	}
//
//	else
//	{
//		printf("该字符是其他字符");
//	}
//	return 0;
//}


//5. 编写程序，输入任意一个 1～7 之间的整数，将他们转换成对应的英文单词。
// 例如：1转换成 Monday, 7 转换成 Sunday。
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	printf("输入任意一个 1～7 之间的整数:\n");
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		printf("monday");
//		break;
//	case 2:
//		printf("tuesday");
//		break;
//	case 3:
//		printf("wednesday");
//		break;
//	case 4:
//		printf("thursday");
//		break;
//	case 5:
//		printf("friday");
//		break;
//	case 6:
//		printf("saturday");
//		break;
//	case 7:
//		printf("sunday");
//		break;
//	default:
//		printf("data error!");
//		break;
//	}
//	return 0;
//}


//6. 给一个不多于 5 位的正整数，(eg.12345)编程实现：
// 1）输出它是几位数 
// 2）分别输出每一位的数字 
// 3）计算并输出该数字的逆序数。（例如 x = 123，则其逆序数为 y = 321）
//#include <stdio.h>
//
//int main()
//{
//	int n, w = 0, q = 0, b = 0, s = 0, g = 0;
//	printf("输入一个不多于5位的正整数:\n");
//	scanf("%d", &n);
//	w = n / 10000;//万位
//	q = n % 10000 / 1000;//千位
//	b = n % 1000 / 100;//百位
//	s = n % 100 / 10;//十位
//	g = n % 10;//个位
//	if (w != 0)
//	{
//		printf("5位数\n");
//		printf("每一位数：%d  %d  %d  %d  %d\n",w,q,b,s,g);
//		printf("该数字的逆序数:%d%d%d%d%d\n",g,s,b,q,w);
//	}
//	else if (q != 0)
//	{
//		printf("4位数\n");
//		printf("每一位数：%d  %d  %d  %d\n", q, b, s, g);
//		printf("该数字的逆序数:%d%d%d%d\n", g, s, b, q);
//	}
//	else if (b != 0)
//	{
//		printf("3位数\n");
//		printf("每一位数：%d  %d  %d\n", b, s, g);
//		printf("该数字的逆序数:%d%d%d\n", g, s, b);
//	}
//	else if (s != 0)
//	{
//		printf("2位数\n");
//		printf("每一位数：%d  %d\n",s, g);
//		printf("该数字的逆序数:%d%d\n", g, s);
//	}
//	else if (g != 0)
//	{
//		printf("2位数\n");
//		printf("每一位数：%d\n", g);
//		printf("该数字的逆序数:%d\n", g);
//	}
//
//	return 0;
//}


//7. 假设某人从某天开始“三天打鱼两天晒网”，编程输出这个人从这天开始后的第 n（n
//的值由用户从键盘输入）天是“打鱼”还是“晒网”？

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("输入天数:\n");
//	scanf("%d", &day);
//	if ((day /5==1) || (day /5==2) | (day /5==3)) 
//	{
//		printf("打鱼");
//	}
//	else
//	{
//		printf("晒网");
//	}
//	return 0;
//}


//8. 编写程序，实现如下功能：
	//1）首先在屏幕上显示如下菜单
	//* *****************
	//1、 输出相反数
	//2、 输出平方数
	//3、 输出平方根
	//* *****************
	//2）然后接收用户从键盘输入一个实数，和代表上述菜单的序号，要求程序完成相应
	//的计算并输出结果。
	//例如：程序运行时输入 0.09 2 则执行结果应为“0.09 的平方数是：0.0081”
	//程序运行时输入 0.09 3 则执行结果应为“0.09 的平方根是：0.3”
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	printf("* *****************\n");
//	printf("1、 输出相反数\n");
//	printf("2、 输出平方数\n");
//	printf("3、 输出平方根\n");
//	printf("* *****************\n");
//	double n = 0;
//	int i=0;
//	scanf("%lf%d", &n, &i);
//	switch (i)
//	{
//	case 1:
//		printf("%lf的相反数:%.4lf", n,-n);
//		break;
//	case 2:
//		printf("%lf的平方数:%.4lf", n, n*n);
//		break;
//	case 3:
//		printf("%lf的平方根:%.4lf", n, sqrt(n));
//		break;
//	default:
//		break;
//	}
//	return 0;
//}


//实验3
//1. 编程计算 s = 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 - 1 / 6 + … + 1 / n
//#include <stdio.h>
//
//int main()
//{
//	double s = 0, sign = 0;
//	int i, n;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0) sign = -i;
//		else sign = i;
//
//		s = s + 1 / sign;
//
//	}
//
//	printf("%lf", s);
//	return 0;
//}


//2. 用一重循环编程计算 s = 1！ + 2！ + 3！ + 4！ + … + 20!
//#include <stdio.h>
//
//int main()
//{
//	int s = 0, i = 0, n = 1;
//
//	for (i = 1; i <= 20; i++)
//	{
//		n *= i;// n = n * i
//		s += n;// s = s + n
//	}
//
//	printf("%d", s);
//	return 0;
//}

//3. 输入两个正整数 m 和 n，求其最大公约数和最小公倍数
//#include <stdio.h>
//
//int main()
//{
//	int m, n;
//	int a = 0, b = 0, max = 0, min = 0;
//	printf("输入两个正整数：\n");
//	scanf("%d%d", &m, &n);
//
//	a = m % n;
//	b = m * n;
//
//	while (a != 0)
//	{
//		m = n;
//		n = a;
//		a = m % n;
//	}
//
//	max = n;
//	min = b / max;
//	printf("最大公约数:%d\n最小公倍数:%d", max, min);
//	return 0;
//}

//4. 求 Sn = a + aa + aaa + … + aa…a（n 个 a）的值，其中 a 是一个数字，n 表示 a 的位数，例如
//2 + 22 + 222 + 2222 + 22222 （此时 n = 5），n 由键盘输入。

//#include <stdio.h>
//
//int main()
//{
//	int a = 0, n = 0, i = 0, t = 0, Sn = 0;
//	printf("请输入一个数字和位数：\n");
//	scanf("%d%d", &a, &n);
//	for (i = 1; i <= n; i++) {
//		t = t * 10 + a;
//		Sn += t;
//	}
//	printf("Sn = %d",Sn);
//
//	return 0;
//}

//5. 猴子吃桃问题：猴子第一天摘下若干桃子，当即吃了一半，还不过瘾，又多吃了一个，
//第二天早上将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃前一天剩下的一半零一个。
//到第十天早上再想吃时，只剩下一个桃子。求第一天共摘了多少个桃子？

//#include <stdio.h>
//
//int main()
//{
//	int day = 9, peach = 1, sum = 0;
//	for (day = 9; day > 0; day--) {
//		peach = 2 * (peach + 1);
//		sum =peach;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}

//6. 打印输出九九乘法表
//#include <stdio.h>
//
//int main() {
//	int x, y;
//	for (x = 1; x <= 9; x++) {
//		for (y = 1; y <= x; y++) {
//			printf("%d * %d = %d  ", x, y, x * y);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//7. 将十元钱兑换成一元，五角，一角的硬币，共计 40 枚，计算有多少中兑换方法
//#include <stdio.h>
//
//int main() {
//	int x = 0, y = 0, z = 0, sum = 0, count = 0;
//	for (x = 1; x <= 10; x++) {
//		for (y = 1; y <= 20; y++) {
//			for (z = 1; z <= 100; z++) {
//				sum = x + 0.5 * y + 0.1 * z;
//				if (sum == 10 && x + y + z == 40) {
//					count++;
//				}
//			}
//		}
//	}
//	printf("共有 %d 种兑换方法", count);
//}

//8. 某课程有 n 个学生参加考试（n 的值由用户从键盘输入），
// 编写程序计算这门课程的最高分、最低分及平均分。
//#include <stdio.h>
//int main()
//{
//	int i, n;
//	int m = 0, max = 0, min = 100;
//	float sum = 0, avg;
//
//	printf("请依次输入学生人数和所有成绩\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &m);
//		if (max < m)
//		{
//			max = m;
//		}
//
//		else if (min > m)
//		{
//			min = m;
//		}
//		sum += m;
//		avg = sum / n;
//	}
//	printf("max=%-4dmin=%-4davg=%.2f\n", max, min, avg);
//	return 0;
//}

//9. 输出以下所示的等腰三角形。
	//*
	//***
	//*****
	//*******
	//*********
//#include<stdio.h>
//
//int main() {
//
//	int i = 0, j = 0;
//	for (i = 1; i <= 5; i++) {
//		for (j = 1; j <= 2 * i - 1;j++ ) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

	
//10. 从键盘中输入一组字符，统计其中大写字母的个数、小写字母的个数和数字字符的个数。
//#include <stdio.h>
//
//int main()
//{
//	char n;
//	int dx = 0, xx = 0, sz = 0;
//	printf("输入一组字符:\n");
//
//	while ((n=getchar())!='\n'){
//
//	if (n >= 'A' && n <= 'Z')
//	{
//		dx += 1;
//	}
//	else if (n >= 'a' && n <= 'z')
//	{
//		xx += 1;
//	}
//	else if (n >= '0' && n <= '9')
//	{
//		sz += 1;
//	}
//}
//printf("大写字母的个数：%d\n小写字母的个数：%d\n数字字符的个数：%d", dx, xx, sz);
//	return 0;
//}