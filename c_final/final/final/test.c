#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


//--------------------------------------实验1------------------------------------------

 
//1. 编写程序实现两个数的互换。
//#include <stdio.h>
//
//int main()
//{
//    int t = 0;
//    int a = 0, b = 0;
//    printf("输入两个数：\n");
//    scanf("%d %d", &a, &b);
//    printf("交换前：%d  %d\n", a, b);
//    t = a;
//    a = b;
//    b = t;
//    printf("交换后：%d  %d", a, b);
//    return 0;
//}



//2. 输入一学生的学号、生日（年月日）、性别（男M，女F）及三门功课（语文、数学、英语）的成绩，
// 计算该学生的总分和平均分，并按如下格式输出该学生的全部信息。
//学号       生日       性别    语文  数学  英语   总分   平均分
//20170101    1999 - 01 - 01     M      95    85    85    265      88.3



//#include <stdio.h>
//struct stu
//{
//	int number;
//	char birth[20];
//	char sex;
//	int chinese;
//	int math;
//	int english;
//};
//
//int main()
//{
//	struct stu s;
//	int sum = 0;
//
//	printf("输入学生信息:\n");
//	scanf("%d %s %c %d %d %d", &s.number, &s.birth, &s.sex, &s.chinese, &s.math, &s.english);
//
//	sum = s.chinese + s.math + s.english;
//
//	printf("学号        生日       性别  语文  数学  英语  总分  平均分\n");
//	printf("%d    %s  %c     %d    %d    %d    %d   %.1f", s.number, s.birth, s.sex, s.chinese, s.math, s.english, sum, (double)sum / 3);
//
//	return 0;
//}



//3．从键盘任意输入一个四位正整数，编程计算并输出它的逆序数。例如：输入3451，则它的逆序数应为1543。
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int a, b, c, d;
//	printf("输入一个四位正整数：\n");
//	scanf("%d", &n);
//	a = n % 10;
//	b = (n % 100) / 10;
//	c = (n % 1000) / 100;
//	d = n / 1000;
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}


//4. 假设银行定期存款的年利率r为2.25 % ，从键盘输入本金和存款年限，编程计算并输出该笔存款到期后的本金和利息一共有多少。
//（例如：当本金为1000元，存入10后，应得的本金与利息一共有1249.203元）
//提示：
//1）本程序最终计算的是复利
//2）计算幂的数学函数为pow(a, n)，代表a的n次幂
//3）使用数学函数是，需要在程序的开头加上编译预处理命令#include <math.h>
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int year;
//	double deposit, future, r = 0.0225;
//	printf("请输入本金和存款年限：\n");
//	scanf("%lf %d", &deposit, &year);
//	future = deposit * pow(r + 1, year);
//	printf("该笔存款到期后的本金和利息一共是：%.4lf", future);
//	return 0;
//}



//5. 编写一程序，输入一个大写字母，输出该字母的前驱字母、该字母本身、它的后继字母。（考虑输入字母为‘A’和’Z’的情况）
//例如：输入B   输出ABC
//#include<stdio.h>
//int main()
//{
//	char A;
//	scanf("%c", &A);
//	printf("%c%c%c\n", A - 1, A, A + 1);
//	return 0;
//}

//6.	根据父母的身高可预测子女成年后的遗传身高，其预测公式如下：
//男性成人时身高 = （父亲身高 + 母亲身高） * 0.54cm
//女性成人时身高 = （父亲身高 * 0.923 + 母亲身高） / 2cm
//已知男孩小明爸妈的身高分别175cm，162cm；女孩小红父母的身高分别是178cm，153cm；
//编写程序计算并输出小明、小红和你自己的遗传身高（要求输出结果不含小数位）。
//#include<stdio.h>
//int main()
//{
//    double faHeight, moHeight,a,b;
//    int manHeight, womanHeight,me;
//
//    faHeight = 175; moHeight = 162;
//
//    manHeight = (faHeight + moHeight) * 0.54;
//
//    printf("小明的身高为:%d\n", manHeight);
//
//    faHeight = 178; moHeight = 153;
//
//    womanHeight = (faHeight * 0.923 + moHeight) / 2;
//
//    printf("小红的身高为:%d\n", womanHeight);
//
//    a = 170; b = 160;
//    me= (a + b) * 0.54;
//    printf("我的身高:%d\n",me);
//
//    return 0;
//}



//--------------------------------------实验2------------------------------------------



//1. 有如下函数，编写程序输入x的值，输出y的值。
//        x(x < 0)
//    y = x2(0≤x≤10)
//        3x - 11    (x > 10)
// 
//#include <stdio.h>
//int main()
//{
//    int x, y;
//    printf("input x:");
//    scanf("%d", &x);
//    if (x < 0)
//    {
//        y = x;
//    }
//
//    else if (x >= 0 && x <= 10)
//    {
//        y = x * x;
//    }
//
//    else if (x > 10)
//    {
//        y = 3 * x - 11;
//    }
//    printf("y=%d\n", y);
//    return 0;
//}


//2. 某单位马上要加工资，增加金额取决于工龄和现工资两个因素：
//对于工龄大于等于20年的，如果现工资高于2000元，加200元，否则加180元；
//对于工龄小于20年的，如果现工资高于1500，加150元，否则加120元。
//工龄和现工资从键盘输入，编程计算并输出加工资后的员工工资。
//#include <stdio.h>
//int main()
//{
//	int x, y, z;
//	printf("请输入工龄和现工资：");
//	scanf("%d%d", &x, &y);
//	if (x >= 20)
//	{
//		if (y > 2000)
//
//		{
//			z = y + 200;
//		}
//
//		else
//		{
//			z = y + 180;
//		}
//	}
//
//	else if (x < 20)
//	{
//		if (y > 1500)
//		{
//			z = y + 150;
//		}
//
//		else
//		{
//			z = y + 120;
//		}
//	}
//	printf("调整后的工资为：%d\n", z);
//	return 0;
//}

//3. 输入年号，计算这一年的2月份的天数，将结果输出。
//#include <stdio.h>
//int main()
//{
//	int year, day;
//	printf("input year:");
//	scanf("%d", &year);
//	if ((year % 4 == 0) && ((year % 100) != 0) || year % 400 == 0)
//	{
//		day = 29;
//	}
//
//	else
//	{
//		day = 28;
//	}
//	printf("%d年的2月份有%d天\n", year, day);
//	return 0;
//}


//4. 从键盘输入任意一个字符，判断该字符是英文字母（不区分大小写）、数字字符还是其它字符。
//#include <stdio.h>
//int main()
//{
//	char c;
//	scanf("%c", &c);
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
//	{
//		printf("该字符是英文字母\n");
//	}
//
//	else if (c >= '0' && c <= '9')
//	{
//		printf("该字符是数字字符\n");
//	}
//
//	else
//	{
//		printf("该字符是其它字符\n");
//	}
//	return 0;
//}

//5. 编写程序，输入任意一个1～7之间的整数，将他们转换成对应的英文单词。
//例如：1转换成Monday, 7转换成Sunday。
//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//
//		printf("Monday\n");
//
//		break;
//
//	case 2:
//
//		printf("Tuesday\n");
//
//		break;
//
//	case 3:
//
//		printf("Wednesday\n");
//
//		break;
//
//	case 4:
//
//		printf("Thursday\n");
//
//		break;
//
//	case 5:
//
//		printf("Friday\n");
//
//		break;
//
//	case 6:
//
//		printf("Saturday\n");
//
//		break;
//
//	case 7:
//
//		printf("Sunday\n");
//
//		break;
//
//	default:
//
//		printf("data error!\n");
//
//		break;
//	}
//	return 0;
//}


//6. 给一个不多于5位的正整数，编程实现：
//1）输出它是几位数2）分别输出每一位的数字3）计算并输出该数字的逆序数。
//（例如x = 123，则其逆序数为y = 321）
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
//		printf("每一位数：%d  %d  %d  %d  %d\n", w, q, b, s, g);
//		printf("该数字的逆序数:%d%d%d%d%d\n", g, s, b, q, w);
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
//		printf("每一位数：%d  %d\n", s, g);
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


//7. 假设某人从某天开始“三天打鱼两天晒网”，
//编程输出这个人从这天开始后的第n（n的值由用户从键盘输入）天是“打鱼”还是“晒网”？
//#include <stdio.h>
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	if ((day / 5 == 1) || (day / 5 == 2) || (day / 5 == 3))
//	{
//		printf("第%d天在打鱼\n", day);
//	}
//
//	else
//	{
//		printf("第%d天在晒网\n", day);
//	}
//	return 0;
//}


//8. 编写程序，实现如下功能：
//1）首先在屏幕上显示如下菜单
//* *****************
//1、	输出相反数
//2、	输出平方数
//3、	输出平方根
//* *****************
//2）然后接收用户从键盘输入一个实数，和代表上述菜单的序号，要求程序完成相应的计算并输出结果。
//例如：程序运行时输入  0.09   2则执行结果应为“0.09的平方数是：0.0081”
//程序运行时输入  0.09   3则执行结果应为“0.09的平方根是：0.3”
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	printf("* *****************\n");
//	printf("1、	输出相反数\n");
//	printf("2、	输出平方数\n");
//	printf("3、	输出平方根\n");
//	printf("* *****************\n");
//
//	double a = 0;
//	int b = 0;
//	scanf("%lf %d", &a,&b);
//	switch (b)
//	{
//	case 1:
//		printf("%lf的相反数是：%.4lf", a, -a);
//		break;
//		
//	case 2:
//		printf("%lf的平方数是：%.4lf", a, a*a);
//		break;
//
//	case 3:
//		printf("%lf的平方根是：%.4lf", a, sqrt(a));
//		break;
//
//	default:
//		break;
//	}
//	return 0;
//}



//--------------------------------------实验3------------------------------------------


//1. 编程计算s = 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 - 1 / 6 + … + 1 / n
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


//2. 用一重循环编程计算s = 1！ + 2！ + 3！ + 4！ + … + 20!
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

//3. 输入两个正整数m和n，求其最大公约数和最小公倍数
// #include <stdio.h>
//int main()
//{
//	int m, n;
//	int a = 0, b = 0, max = 0, min = 0;
//	printf("请输入两个正整数:");
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
//	max = n;
//	min = b / max;
//	printf("最大公约数是%d\n最小公倍数是%d\n", max, min);
//	return 0;
//}

//4. 求Sn = a + aa + aaa + … + aa…a（n个a）的值，其中a是一个数字，n表示a的位数，例如
//2 + 22 + 222 + 2222 + 22222 （此时n = 5），n由键盘输入。
//#include <stdio.h>
//int main()
//{
//	int i, a, n, sum = 0, term = 0;
//	printf("请依次输入a和n的值\n");
//	scanf("%d%d", &a, &n);
//	for (i = 1; i <= n; i++)
//	{
//		term = term * 10 + a;
//		sum = sum + term;
//	}
//	printf("a+aa+aaa+...=%d\n", sum);
//	return 0;
//}

//5. 猴子吃桃问题：猴子第一天摘下若干桃子，当即吃了一半，还不过瘾，又多吃了一个，第二天早上将剩下的桃子吃掉一半，又多吃了一个。
// 以后每天早上都吃前一天剩下的一半零一个。到第十天早上再想吃时，只剩下一个桃子。求第一天共摘了多少个桃子？
// #include <stdio.h>
//int main()
//{
//	int day = 9;
//	int n = 0, peach = 1;
//	for (day = 9; day > 0; day--)
//	{
//		n = 2 * (peach + 1);
//		peach = n;
//	}
//	printf("total=%d\n", peach);
//	return 0;
//}

//6. 打印输出九九乘法表
// #include <stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			printf("%d * %d = %d  ", x,y,x * y);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//7. 将十元钱兑换成一元，五角，一角的硬币，共计40枚，计算有多少中兑换方法
//设一元i枚（最多10枚），五角j枚（最多20枚），一角k枚（最多100枚）
//#include<stdio.h> 
//int main() 
//{
//    int i = 0, j = 0, k = 0, count = 0;
//    
//    for (int i = 1; i <= 10; i++) 
//    { 
//
//        for (int j = 1; j <= 20; j++) 
//        {
//
//            for (int k = 1; k <= 100; k++) 
//            { 
//           
//                int sum = i + 0.5 * j + 0.1 * k;
//                
//                if (sum == 10 && (i + j + k) == 40) 
//                {
//                    count++;
//                }
//            }
//        }
//    }
//    printf("有%d种兑换方法", count);
//
//    return 0;
//}


//8. 某课程有n个学生参加考试（n的值由用户从键盘输入），编写程序计算这门课程的最高分、最低分及平均分。
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
//	printf("max=%d\nmin=%d\navg=%.2f\n", max, min, avg);
//	return 0;
//}



//9. 输出以下所示的等腰三角形。
//*
//***
//*****
//*******
//*********

// #include <stdio.h>
// int main()
//{
//	int i, j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 2*i-1; j++)
//		{
//			printf("*");
//			
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//10. 从键盘中输入一组字符，统计其中大写字母的个数、小写字母的个数和数字字符的个数。
//#include <stdio.h>
//int main()
//{
//	char str;
//	int a = 0, b = 0, c = 0, d = 0;
//	printf("请输入一行字符\n");
//
//	while ((str = getchar()) != '\n')
//	{
//		if (('a' <= str && str <= 'z') || ('A' <= str && str <= 'Z'))
//		{
//			a += 1;
//		}
//
//		else if ('0' <= str && str <= '9')
//		{
//			b += 1;
//		}
//
//		else if (str == ' ')
//		{
//			c += 1;
//		}
//
//		else
//		{
//			d += 1;
//		}
//	}
//	printf("字母数:%d\n数字字符数:%d\n空格数:%d\n其他字符数:%d\n", a, b, c, d);
//	return 0;
//}


//--------------------------------------实验4------------------------------------------
//1.将一维数组a[10]{ 11,12,13,14,15,16,17,18,19,20 }中的数组元素逆序排列为{ 20,19,18,17,16,15,14,13,12,11 }
//#include <stdio.h>
//int main()
//{
//    int a[] = { 11,12,13,14,15,16,17,18,19,20 };
//    int i;
//    int tmp;
//    int sz = sizeof(a) / sizeof(a[0]);
//
//    for (i = 0; i < sz / 2; i++)
//    {
//        tmp = a[i];
//        a[i] = a[sz - i - 1];
//        a[sz - i - 1] = tmp;
//    }
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d\t", a[i]);
//    }
//    return 0;
//}


//2. 将任意10个数输入一维数组，找出最大数放到最前面，最小数放到最后面。
//#include<stdio.h>
//int main()
//{
//    int arry[10], i, j = 0, k = 0, t;
//    int max, min;
//
//    printf("请输入十个数：\n");
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arry[i]);
//    }
//
//    max = arry[j];
//    min = arry[k];
//
//    for (i = 0; i < 10; i++)
//    {
//        if (arry[j] < arry[i])
//        {
//            j = i;
//            max = arry[i];
//        }
//        if (arry[k] > arry[i])
//        {
//            k = i;
//            min = arry[i];
//        }
//    }
//
//    arry[j] = arry[0];
//    arry[0] = max;
//
//    arry[k] = arry[9];
//    arry[9] = min;
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arry[i]);
//    }
//    return 0;
//}


//3. 将15个数按由小到大的顺序存放在一个数组中，输入一个数，
// 要求用折半查找法找出该数是数组中第几个元素。
// 如果该数不在数组中，则输出“无次数”。
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,第%d个下标的元素", mid);
//			break;
//		}
//
//		if(left>right)
//		{
//			printf("无次数\n");
//		}
//	}
//
//	return 0;
//}

//4. 设有4行4列数组b，其元素为b[i][j] = i + j + 1。编程实现：
//1）求第二列元素之和
//2）求第三列元素的平均值
//3）求数组b中的最大值，最小值及主对角线元素的平方和
//#include <stdio.h>
//int main()
//{
//    int b[4][4], i, j, sumj1 = 0, sumj2 = 0;
//    int max, min, s;
//    max = min = b[0][0];
//    s = 0;
//
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            b[i][j] = i + j + 1;
//            if (max < b[i][j])     max = b[i][j];
//            if (min > b[i][j])     min = b[i][j];
//            if (i == j) s = s + b[i][j] * b[i][j];
//        }
//    }
//
//    for (i = 0; i < 4; i++)
//    {
//        sumj1 += b[i][1];
//        sumj2 += b[i][2];
//    }
//    printf("第二列元素的和是%d\n第三列元素的平均值是%d\n", sumj1, sumj2);
//    printf("数组b中的最大值是%d\n数组b中的最小值是%d\n数组b中的主对角线元素的平方和是%d\n", max, min, s);
//    return 0;
//}


//5. 输出以下形式的杨辉三角（要求输出10行）
//1
//1  1
//1  2   1
//1  3   3   1
//1  4   6   4   1
//1  5   10  10  5   1
//#include <stdio.h>

//int main()
//{
//	int n;
//	printf("请输入要打印的行数：");
//	scanf("%d", &n);
//	int a[100][100];
//	for (int i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;    
//	}
//
//	for (int i = 2; i < n; i++)     
//	{
//		for (int j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//
//
//	for (int i = 0; i < n; i++)     
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}


//6. 已知10个学生的5门课程的成绩，将其存入一个二维数组，求每个学生的总成绩和平均成绩。
//# include <stdio.h>
//int main()
//{
//    int i, j, s = 0, v[10], a[10][5], sum[10];
//    for (i = 0; i < 10; i++)
//    {
//        printf("\n第%d个学生的成绩\n", i + 1);
//        for (j = 0; j < 5; j++)
//        {
//            switch (j) {
//            case 0:printf("第一门课成绩为："); break;
//            case 1:printf("第二门课成绩为："); break;
//            case 2:printf("第三门课成绩为："); break;
//            case 3:printf("第四门课成绩为："); break;
//            default:printf("第五门课成绩为："); break;
//            }
//            scanf("%d", &a[i][j]);
//            s = a[i][j];
//        }
//        sum[i] = s;
//        v[i] = s / 5;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf(" 第%d个学生的总分为：%d\t 平均分为：%d\n", i + 1, sum[i], v[i]);
//    }
//    return 0;
//}

//--------------------------------------实验5------------------------------------------

//1. 编写程序，将两个字符串连接起来，不能用strcat函数。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s1[100], s2[100];
//	int i = 0, j = 0;
//	printf("input two strings:\n");
//	gets(s1);
//	gets(s2);
//	while (s1[i] != '\0')
//	{
//		i++;
//	}
//	for (j; s2[j] != '\0'; j++)
//	{
//		s1[i++] = s2[j];
//	}
//	s1[i] = '\0';
//	printf("The new string is:%s\n", s1);
//	return 0;
//}


//2. 编写程序，计算并输出字符串的长度，不能用strlen函数。
//#include<stdio.h>
//int main()
//{
//	char a[100];
//	int s = 0, i = 0;
//	printf("input  a  string:");
//	gets(a);
//	while (a[i] != '\0')
//	{
//		s++;
//		i++;
//	}
//	printf("length=%d\n", s);
//	return 0;
//}


//3.编写程序分别统计一行字符中（不超过80个字符）英文大写字母，小写字母、数字，空格及其他字符的个数。
//#include<stdio.h>
//
//int main()
//{
//	char ch;
//	int a = 0, b = 0, c = 0, d = 0;
//	printf("请输入一行字符\n");
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			a = a + 1;
//		else if (ch >= '0' && ch <= '9')
//			b = b + 1;
//		else if (ch == ' ')
//			c = c + 1;
//		else
//			d = d + 1;
//	}
//	printf("字母数:%d\n数字字符数:%d\n空格数:%d\n其他字符数:%d\n", a, b, c, d);
//	return 0;
//}


//4. 编写程序，比较两个字符串并输出结果。其中，若两个字符串相等，输出整数1；
//若两个字符串不相等，输出两个字符串第一个不相等的字符的ASCII码的差值
//（例如：串1为abc，串2为a3d，则输出结果为字符‘b’的ASCII码减去字符‘3’的ASCII码，结果为47）。
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char s1[50], s2[50];
//	int i, j, len1, len2, result;
//	printf("input two strings:\n");
//	gets_s(s1);
//	gets_s(s2);
//	len1 = strlen(s1);
//	len2 = strlen(s2);
//	for (i = 0, j = 0; i < len1 || j < len2; i++, j++)
//	{
//		if (s1[i] == s2[j])
//			continue;
//		else
//			break;
//	}
//	result = s1[i] - s2[i];
//	printf("\nresult:%d\n", result);
//	return 0;
//}


//--------------------------------------实验6------------------------------------------


//1. 从键盘任意输入一个整数n，编程计算并输出1 - n之间的所有素数之和
// 要求：
//1）编写函数 int IsPrime（int x），该函数功能是判断x是否为素数，若函数返回0，则表示不是素数，若返回1，则代表是素数。
//2）在程序中调用该函数

//#include<stdio.h>
//#include<math.h>

//int IsPrime(int x)
//{
//	int i, m = 1;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			m = 0;
//	}
//	return m;
//}

//int main()
//{
//	int sum, n, i, a;
//	sum = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		a = IsPrime(i);
//		if (a == 1)
//			sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//2. 从键盘输入一个整数n（1000 <= n <= 1000000）编程计算并输出n的所有约数中最大的三位数（即最大的三位约数）。
// （如：当n为555555时，最大三位约数是777）如果n小于1000或者大于1000000，则输出“Input  error”。要求：
//1）编写函数 int func(int n)，该函数功能为计算n的所有约数中最大的三位数。
//2）在程序中调用该函数

//#include<stdio.h>
//int func(int n)
//{
//	int i;
//	for (i = 999; i >= 100; i--)
//	{
//		if (n % i == 0)
//			return i;
//	}
//}
//
//int main()
//{
//	int max, n;
//	scanf("%d", &n);
//	max = func(n);
//	if (max == 0 || n < 1000 || n>1000000)
//		printf("Input  error\n");
//	else
//		printf("%d\n", max);
//	return 0;
//}


//3. 编写一程序，输入两个字符串，并将字符串2连接到字符串1的后面，最后输出连接后的字符串。
// 要求：
//1)编写函数void lianjie（char s1[], char s2[]）实现串的连接
//2）在程序中调用该函数。

//#include<stdio.h>
//#include<string.h>
// 
//void lianjie(char s1[], char s2[])
//{
//	strcat(s1, s2);
//	printf("%s\n", s1);
//}
//
//int main()
//{
//	char s1[100], s2[100];
//	gets_s(s1);
//	gets_s(s2);
//	lianjie(s1, s2);
//	return 0;
//}


//4. 输入10个学生6门课的成绩，编写程序统计并输出每个平均分， 每门课程的平均分，找出所有60个分数中最高的分数所对应的学生和课程。要求分别用函数实现下列功能：
//1）输入所有学生的每门课成绩
//2）计算并输出每个学生的平均分
//3）计算并输出每门课程的平均分
//4）输出所有60个分数中最高分及其所对应的学生和课程。

//#include<stdio.h>
//
//void input(int a[10][6], int n)
//{
//	int i;
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%d", &a[n][i]);
//	}
//}
//
//float avg1(int a[10][6], int n)
//{
//	int i, sum = 0;
//	for (i = 0; i < 6; i++)
//	{
//		sum = sum + a[n][i];
//	}
//	return sum * 1.0 / 6;
//}
//
//float avg2(int a[10][6], int n)
//{
//	int i, sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + a[i][n];
//	}
//	return sum * 1.0 / 10;
//}
//
//void max(int a[10][6])
//{
//	int i, j, m, n;
//	int max = a[0][0];
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				m = i;
//				n = j;
//			}
//		}
//	}
//	printf("60个分数中最高分为%d,为第%d个学生的第%d门课\n", max, m + 1, n + 1);
//}
//
//
//int main()
//{
//	int a[10][6];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("请输入第%d个学生的6门成绩:", i + 1);
//		input(a, i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("第%d个学生的平均分为%f\n", i + 1, avg1(a, i));
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("第%d门课的平均分为%f\n", i + 1, avg2(a, i));
//	}
//	max(a);
//	return 0;
//}



//5. 用递归方法编写函数处理Fibonicci数列问题，编程并计算该数列的第七项值f(7).
//其中：          1               (n = 1，2)
//f(n) = f(n - 1) + f(n - 2)     (n > 2)

//#include<stdio.h>
//int Fibonicci(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fibonicci(n - 1) + Fibonicci(n - 2);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("Fibonicci(%d)=%d\n", n, Fibonicci(n));
//	return 0;
//}



//6. 定义递归函数void  convert（int n）完成将一个整数n转换成字符串，编写程序在主函数中输入整数n，并调用该函数输出结果。
// 例如输入整数“789”，应输出字符序列’7’ ‘8’’9’。n的位数不固定，可以是任意位数的整数。
//提示：将一个整数n分解成字符序列，首先将问题划分成两个部分，一部分是终止递归的条件，另一部分是继续更深层次递归的条件。
//1）	当n / 10 != 0 时，将n / 10作为参数继续更深层次递归
//2）	否则，如果当n / 10 = 0时（即n为1位数，可以直接转换），把整数n转换成单个字符并输出c = n % 10 + ’0’，打印c
//
//#include<stdio.h>
//void convert(int n)
//{
//	int i;
//	if ((i = n / 10) != 0)
//		convert(i);
//	printf("%c  ", n % 10 + '0');
//}
//int main()
//{
//	int n;
//	printf("输入整数:\n");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("输出字符序列:\n");
//		printf("- ");
//		n = -n;
//	}
//	else
//	{
//		printf("输出字符序列:\n");
//	}
//	convert(n);
//	printf("\n");
//	return 0;
//}



//--------------------------------------实验7------------------------------------------


//1.输入两个整数，并使其按从大到小的顺序输出，要求用函数实现两数的互换。
//#include <stdio.h>
//void swap(int* p1, int* p2)
//{
//	int t;
//	t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//}
//
//int main()
//{
//	int a, b;
//	int* x, * y;
//	scanf("%d %d", &a, &b);
//	x = &a;
//	y = &b;
//
//	if (a < b)
//	{
//		swap(x, y);
//	}
//	printf("max=%d\tmin%d\n", a, b);
//	return 0;
//}


//2.用指针法输入12个数，然后按每行4个数输出。
//#include <stdio.h>
//int main()
//{
//	int a[12], * b, i;
//	b = a;
//	for (i = 0; i < 12; i++)
//	{
//		scanf("%d", b++);
//	}
//	b = a;
//	for (i = 0; i < 12; i++)
//	{
//		if ((i + 1) % 4 == 0)
//			printf("%d\n", *b);
//		else
//			printf("%d ", *b);
//		b++;
//	}
//	return 0;
//}


//3.编写程序统计某班10名学生某门课程的最高分，最低分和平均分。
//要求用函数实现统计功能，并在主函数中输出统计结果。
//#include <stdio.h>
//float Max = 0, Min = 0;
//float fun(float a[], int n)
//{
//	int i;
//	float aver, sum = a[0];
//	Max = Min = a[0];
//	for (i = 1; i < n; i++)
//	{
//		if (a[i] > Max)Max = a[i];
//		else if (a[i] < Min)Min = a[i];
//		sum = sum + a[i];
//	}
//	aver = sum / n;
//	return(aver);
//}
//int main()
//{
//	float fun(float a[], int n);
//	float ave, score[10];
//	int i;
//	printf("请输入10个数:");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &score[i]);
//		ave = fun(score, 10);
//	}
//	printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave);
//	return 0;
//}


//4.编写一个函数，求一个字符串的长度，要求用字符指针实现。
//在主函数中输入字符串，调用该函数输出其长度。
//#include <stdio.h>
//int length(char* p) 
//{
//    int len = 0;
//    while (*p != '\0') 
//    {
//        len++;
//        p++;
//    }
//    return len;
//}
//int main() 
//{
//    int length(char* p);
//    char str[30], * p = str;
//    printf("请输入一个字符串:\n");
//    scanf("%s", p);
//    printf("您输入的字符串长度为%d", length(p));
//    return 0;
//}


//5.输入三个字符串，按有小到大的顺序输出。要求用指针方法处理。

//#include <stdio.h>
//#include <string.h>

//void sort(char* p_s1, char* p_s2)
//{
//	char temp[100];
//	if (strcmp(p_s1, p_s2) > 0) {
//		strcpy(temp, p_s1);
//		strcpy(p_s1, p_s2);
//		strcpy(p_s2, temp);
//	}
//}

//int main()
//{
//	char str1[100], str2[100], str3[100];
//	char* p_s1 = str1, * p_s2 = str2, * p_s3 = str3;
//	printf("请随意输入三个字符串：\n");
//	gets(p_s1);
//	gets(p_s2);
//	gets(p_s3);
//	sort(p_s1, p_s2);
//	sort(p_s1, p_s3);
//	sort(p_s2, p_s3);
//	printf("按照由小到大的顺序输出如下：\n%s\t%s\t%s\t", p_s1, p_s2, p_s3);
//	return 0;
//}


//6.有三个字符串“Data structure”、“Computer design”、“C Progrom”，
//请按字符顺序输出这三个字符串（要求用指针数组指向这三个字符串）。
//#include <stdio.h>
//int main()
//{
//
//char* ar[3] = { "Data structure", "Computer design", "C Progrom" }, *temp;
//int i,j;
//for (i = 0; i < 3 - 1; i++) 
//{
//	for (j = 0; j < 3 - i - 1; j++)
//		if (strcmp(ar[j], ar[j + 1]) > 0)
//		{
//			temp = ar[j];
//			ar[j] = ar[j + 1];
//			ar[j + 1] = temp;
//		}
//}
//for (i = 0; i < 3; i++) 
//{
//	printf("%s\n\n", ar[i]);
//}
//return 0;
//}

//7.输入10个整数，找出其中最大的数并与最后一个数交换位置。
//要求编写三个函数：1）输入10个数；2）进行处理；3）输出10个数。
//且在主函数中用一个函数指针来访问这三个函数。
//#include <stdio.h>
//void input(int* a)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//}
//
//void sort(int* a)
//{
//	int max,min,i, j, k, t1, t2;
//	min = a[0];
//	max = a[0];
//	
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > a[9])
//		{
//			max = a[i];
//			a[i] = a[9];
//			a[9] = max;
//		}
//	}
//}
//
//void output(int* a)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{ 
//	int array[10];
//	printf("输入10个整数\n");
//
//	input(array);
//	sort(array);
//	output(array);
//
//	return 0;
//} 


//--------------------------------------实验8------------------------------------------


//1.编写一个函数print，打印一个学生的成绩数组，该数组中有5个学生的数据记录，
//每个记录包含num、name、scroe[3]，用主函数输入这些记录，用print函数输出这些记录。
//#include <stdio.h>
//struct student
//{
//    int num;
//    char name[10];
//    float score[3];
//} stu[5];
//void print(struct student s[])
//{
//    int i, j;
//    for (i = 0; i < 5; printf("\n"), i++) {
//        printf("%d %-10s ", s[i].num, s[i].name);
//        for (j = 0; j < 3; printf("%.2f ", s[i].score[j++]));
//    }
//}
//int main()
//{
//    int i, j;
//    for (i = 0; i < 5; i++) {
//        printf("Please enter No.%d student num, name, score: ", i + 1);
//        scanf("%d %s", &stu[i].num, stu[i].name);
//        for (j = 0; j < 3; scanf("%f", &stu[i].score[j++]));
//    }
//    print(stu);
//    return 0;
//}



//2.有10个学生，每个学生的数据包含学号、姓名、3门课的成绩，从键盘输入10个学生的数据，
//要求打印输出3门课程的总平均成绩。
//#include <stdio.h>
//#define N 3
//struct Student {
//	char num[10];
//	char name[10];
//	float score[3];
//}student[N];
//
//int main()
//{
//	int i, j, k;
//	float sum = 0.0, max = 0.0;
//	printf("请输入学生信息:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("学生学号：");
//		scanf("%s", student[i].num);
//		printf("学生姓名：");
//		scanf("%s", student[i].name);
//		printf("学生成绩：");
//		scanf("%f %f %f", &student[i].score[0], &student[i].score[1], &student[i].score[2]);
//		printf("\n");
//	}
//
//	for (i = 0; i < N; i++)
//	{
//		sum = 0.0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += student[i].score[j];
//		}
//		printf("平均成绩是：%f\n", sum / 3);
//
//	}
//	return 0;
//}


//3.建立一个链表，输入学生的信息（学号、姓名、成绩），直到输入的学号为0时结束，输出所有学生的信息。
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct stud_node
//{
//	int num;
//	char name[20];
//	int score;
//	struct stud_node* next;
//};
//int main()
//{
//	struct stud_node* head, * tail, * p;
//
//	int num, score;
//	char name[20];
//	int size = sizeof(struct stud_node);
//	head = tail = NULL;
//	printf("input num,name and score:\n");
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		scanf("%s%d", name, &score);
//		p = (struct stud_node*)malloc(size);
//
//		p->num = num;
//		strcpy(p->name, name);
//		p->score = score;
//		p->next = NULL;
//
//		if (head == NULL)
//			head = p;
//		else tail->next = p;
//		tail = p;
//		scanf("%d", &num);
//
//	}
//	for (p = head; p; p = p->next)
//		printf("%d %s %d\n", p->num, p->name, p->score);
//	return 0;
//}


//4.在一个结构体数组中存有4名学生的信息（排名、姓名、成绩），按学生姓名查询其排名和平均成绩。查询可连续进行，直到输入0时结束。
//5.定义一个结构体数组，每个元素包括4个域：学号、姓名、4门课程的成绩及平均分。
//输入5名学生的学号、姓名和4门课程的成绩，存放在结构体数组中，计算出平均分，存放在结构体数组元素对应的域中，并输出5名学生的所有信息。

//6.从键盘上输入一行字符，按输入时的逆序建立一个链表，即先输入的字符位于链表尾，然后按输入的相反顺序输出，并释放所有结点。
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#include <string.h>
//
//struct node
//{
//    char a;
//    struct node* next;
//};
//int main()
//{
//    struct node* p, * q, * h, * t;
//    int count = 0, j;
//    h = (struct node*)malloc(sizeof(struct node));
//    p = (struct node*)malloc(sizeof(struct node));
//    q = (struct node*)malloc(sizeof(struct node));
//    h->next = p;
//    char b[10];
//    printf("请输入一行字符:\n");
//    gets(b);
//    for (int i = 0; b[i] != '\0'; i++)
//    {
//        p->a = b[i];
//        p->next = q;
//        p = p->next;
//        q = (struct node*)malloc(sizeof(struct node));
//        count++;
//    }
//    p->next = NULL;
//    free(q);
//
//    while (1)
//    {
//        j = 1;
//        t = h->next;
//        while (j != count)
//        {
//            j++;
//            t = t->next;
//
//        }
//        count--;
//
//        printf("%c", t->a);
//        free(t);
//        if (count == 0)
//            break;
//    }
//
//    return 0;
//}



//#include <stdio.h>
//
//float fun(int x, int y)
//{
//	return(x + y);
//}
//
//int main()
//{
//
//	int a = 2, b = 5, c = 8;
//
//
//	printf(" % 3.0f\n", fun((int)fun(a + c, b), a - c));
//
//
//	return 0;
//}