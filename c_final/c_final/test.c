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
