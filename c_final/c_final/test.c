#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


//ʵ��1
//1. ��д����ʵ���������Ļ�����

//#include <stdio.h>
//
//int main()
//{
//	int a, b, t = 0;
//	printf("����������:\n");
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	t = a;
//	a = b;
//	b = t;
//	printf("������a=%d,b=%d", a, b);
//	return 0;
//}


//2. ����һѧ����ѧ�š����գ������գ����Ա��� M��Ů F�������Ź��Σ����ġ���ѧ��
//Ӣ��ĳɼ��������ѧ�����ֺܷ�ƽ���֣��������¸�ʽ�����ѧ����ȫ����Ϣ��
//ѧ�� ���� �Ա� ���� ��ѧ Ӣ�� �ܷ� ƽ����
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
//	printf("����һѧ����ѧ�š����գ������գ����Ա��� M��Ů F�������Ź��Σ����ġ���ѧ��Ӣ��ĳɼ���\n");
//	scanf("%d %s %c %d %d %d", &s.number,&s.birth,&s.sex,&s.chinese,&s.math,&s.english);
//	s.sum = s.chinese + s.math + s.english;
//	s.avg = s.sum / 3;
//	printf("ѧ�� ���� �Ա� ���� ��ѧ Ӣ�� �ܷ� ƽ����\n");
//	printf("%d  %s  %c  %d  %d  %d  %.2f  %.2f",s.number,s.birth,s.sex,s.chinese,s.math,s.english,s.sum,s.avg);
//	return 0;
//}


//3���Ӽ�����������һ����λ����������̼��㲢������������������磺���� 3451����
//����������ӦΪ 1543��
//����һ��
//#include <stdio.h>
//
//int main()
//{
//	int n = 0, a = 0, b = 0, c = 0, d = 0;
//	printf("�Ӽ�����������һ����λ������:\n");
//	scanf("%d", &n);
//	a = n % 10;
//	b = (n % 100) / 10;
//	c = (n % 1000) / 100;
//	d = n / 1000;
//	printf("����������ӦΪ:%d%d%d%d", a, b, c, d);
//	return 0;
//}
//��������
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
//	printf("������Ϊ%d", y);
//}


//4. �������ж��ڴ��������� r Ϊ 2.25 % ���Ӽ������뱾��ʹ�����ޣ���̼��㲢���
//�ñʴ��ں�ı������Ϣһ���ж��١������磺������Ϊ 1000 Ԫ������ 10 ���
// Ӧ�õı�������Ϣһ���� 1249.203 Ԫ��
//��ʾ��
//1�����������ռ�����Ǹ���
//2�������ݵ���ѧ����Ϊ pow(a, n)������ a �� n ����
//3��ʹ����ѧ�����ǣ���Ҫ�ڳ���Ŀ�ͷ���ϱ���Ԥ��������#include <math.h>

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int deposit, year;
//	double r = 0.0225, future = 0;
//	printf("���뱾��ʹ������:\n");
//	scanf("%d%d", &deposit, &year);
//	future = deposit * pow(r+1, year);//ע��Ҫ�㣺r+1
//	printf("�ñʴ��ں�ı������Ϣһ����:%.4lf", future);
//	return 0;
//}


//5. ��дһ��������һ����д��ĸ���������ĸ��ǰ����ĸ������ĸ�������ĺ����ĸ��
//������������ĸΪ��A���͡�Z���������
//���磺���� B ��� ABC

//#include <stdio.h>
//int main()
//{
//	char A;
//	printf("����һ����д��ĸ:\n");
//	scanf("%c", &A);
//	printf("����ĸ��ǰ����ĸ������ĸ�������ĺ����ĸ:%c%c%c", A - 1, A, A + 1);
//	return 0;
//}


//6. ���ݸ�ĸ����߿�Ԥ����Ů�������Ŵ���ߣ���Ԥ�⹫ʽ���£�
//���Գ���ʱ��� = ��������� + ĸ����ߣ� * 0.54cm
//Ů�Գ���ʱ��� = ��������� * 0.923 + ĸ����ߣ� / 2cm
//��֪�к�С���������߷ֱ� 175cm��162cm��Ů��С�츸ĸ����߷ֱ��� 178cm��
//153cm����д������㲢���С����С������Լ����Ŵ���ߣ�Ҫ������������С��
//λ����

//#include <stdio.h>
//
//int main()
//{
//	int ming = 0, hong = 0, me=0, mingdad = 175, mingmum = 162, hongdad= 178, hongmum = 153, medad = 170, memum = 160;
//	ming = (mingdad + mingmum) * 0.54;
//	printf("С�����Ŵ�����ǣ�%dcm\n", ming);
//	hong = (hongdad * 0.923 + hongmum) / 2;
//	printf("С����Ŵ�����ǣ�%dcm\n", hong);
//	me = (medad + memum) * 0.54;
//	printf("�ҵ��Ŵ�����ǣ�%dcm\n", me);
//	return 0;
//}


//ʵ��2
//1. �����º�������д�������� x ��ֵ����� y ��ֵ��
//      x(x < 0)
//	y = x2(0��x��10)
//	    3x - 11 (x > 10)

//#include <stdio.h>
//int main()
//{
//	int x = 0, y = 0;
//	printf("����x��ֵ:\n");
//	scanf("%d", &x);
//	if (x < 0) y = x;
//	else if (0 <= x && x <= 10) y = x * x;
//	else y = 3 * x - 11;
//	printf("y��ֵΪ��%d", y);
//	return 0;
//}


//2. ĳ��λ����Ҫ�ӹ��ʣ����ӽ��ȡ���ڹ�����ֹ����������أ�
// ���ڹ�����ڵ��� 20��ģ�����ֹ��ʸ��� 2000 Ԫ���� 200 Ԫ������� 180 Ԫ��
// ���ڹ���С�� 20 ��ģ�����ֹ��ʸ��� 1500���� 150 Ԫ������� 120 Ԫ��
// ������ֹ��ʴӼ������룬��̼��㲢����ӹ��ʺ��Ա�����ʡ�

//#include <stdio.h>
//
//int main()
//{
//	int year=0, money=0,newmoney=0;
//	printf("���빤��͹���:\n");
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
//	printf("�ӹ��ʺ��Ա������:%d", newmoney);
//	return 0;
//}


//3. ������ţ�������һ��� 2 �·ݵ�����������������

//#include <stdio.h>
//int main()
//{
//	int year = 0, day = 0;
//	printf("�������:\n");
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) day = 29;
//	else day = 28;
//	printf("%d��2�·ݵ�����Ϊ:%d", year, day);
//	return 0;
//}


//4. �Ӽ�����������һ���ַ����жϸ��ַ���Ӣ����ĸ�������ִ�Сд���������ַ����������ַ���

//#include <stdio.h>
//
//int main() {
//	char c;
//	printf("��������һ���ַ�:\n");
//	scanf("%c", &c);
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//	{
//		printf("���ַ���Ӣ����ĸ");
//	}
//
//	else if (c >= '0' && c <= '9') 
//	{
//		printf("���ַ��������ַ�");
//	}
//
//	else
//	{
//		printf("���ַ��������ַ�");
//	}
//	return 0;
//}


//5. ��д������������һ�� 1��7 ֮���������������ת���ɶ�Ӧ��Ӣ�ĵ��ʡ�
// ���磺1ת���� Monday, 7 ת���� Sunday��
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	printf("��������һ�� 1��7 ֮�������:\n");
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


//6. ��һ�������� 5 λ����������(eg.12345)���ʵ�֣�
// 1��������Ǽ�λ�� 
// 2���ֱ����ÿһλ������ 
// 3�����㲢��������ֵ��������������� x = 123������������Ϊ y = 321��
//#include <stdio.h>
//
//int main()
//{
//	int n, w = 0, q = 0, b = 0, s = 0, g = 0;
//	printf("����һ��������5λ��������:\n");
//	scanf("%d", &n);
//	w = n / 10000;//��λ
//	q = n % 10000 / 1000;//ǧλ
//	b = n % 1000 / 100;//��λ
//	s = n % 100 / 10;//ʮλ
//	g = n % 10;//��λ
//	if (w != 0)
//	{
//		printf("5λ��\n");
//		printf("ÿһλ����%d  %d  %d  %d  %d\n",w,q,b,s,g);
//		printf("�����ֵ�������:%d%d%d%d%d\n",g,s,b,q,w);
//	}
//	else if (q != 0)
//	{
//		printf("4λ��\n");
//		printf("ÿһλ����%d  %d  %d  %d\n", q, b, s, g);
//		printf("�����ֵ�������:%d%d%d%d\n", g, s, b, q);
//	}
//	else if (b != 0)
//	{
//		printf("3λ��\n");
//		printf("ÿһλ����%d  %d  %d\n", b, s, g);
//		printf("�����ֵ�������:%d%d%d\n", g, s, b);
//	}
//	else if (s != 0)
//	{
//		printf("2λ��\n");
//		printf("ÿһλ����%d  %d\n",s, g);
//		printf("�����ֵ�������:%d%d\n", g, s);
//	}
//	else if (g != 0)
//	{
//		printf("2λ��\n");
//		printf("ÿһλ����%d\n", g);
//		printf("�����ֵ�������:%d\n", g);
//	}
//
//	return 0;
//}


//7. ����ĳ�˴�ĳ�쿪ʼ�������������ɹ����������������˴����쿪ʼ��ĵ� n��n
//��ֵ���û��Ӽ������룩���ǡ����㡱���ǡ�ɹ������

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	printf("��������:\n");
//	scanf("%d", &day);
//	if ((day /5==1) || (day /5==2) | (day /5==3)) 
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("ɹ��");
//	}
//	return 0;
//}


//8. ��д����ʵ�����¹��ܣ�
	//1����������Ļ����ʾ���²˵�
	//* *****************
	//1�� ����෴��
	//2�� ���ƽ����
	//3�� ���ƽ����
	//* *****************
	//2��Ȼ������û��Ӽ�������һ��ʵ�����ʹ��������˵�����ţ�Ҫ����������Ӧ
	//�ļ��㲢��������
	//���磺��������ʱ���� 0.09 2 ��ִ�н��ӦΪ��0.09 ��ƽ�����ǣ�0.0081��
	//��������ʱ���� 0.09 3 ��ִ�н��ӦΪ��0.09 ��ƽ�����ǣ�0.3��
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	printf("* *****************\n");
//	printf("1�� ����෴��\n");
//	printf("2�� ���ƽ����\n");
//	printf("3�� ���ƽ����\n");
//	printf("* *****************\n");
//	double n = 0;
//	int i=0;
//	scanf("%lf%d", &n, &i);
//	switch (i)
//	{
//	case 1:
//		printf("%lf���෴��:%.4lf", n,-n);
//		break;
//	case 2:
//		printf("%lf��ƽ����:%.4lf", n, n*n);
//		break;
//	case 3:
//		printf("%lf��ƽ����:%.4lf", n, sqrt(n));
//		break;
//	default:
//		break;
//	}
//	return 0;
//}


//ʵ��3
//1. ��̼��� s = 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 - 1 / 6 + �� + 1 / n
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


//2. ��һ��ѭ����̼��� s = 1�� + 2�� + 3�� + 4�� + �� + 20!
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

//3. �������������� m �� n���������Լ������С������
//#include <stdio.h>
//
//int main()
//{
//	int m, n;
//	int a = 0, b = 0, max = 0, min = 0;
//	printf("����������������\n");
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
//	printf("���Լ��:%d\n��С������:%d", max, min);
//	return 0;
//}

//4. �� Sn = a + aa + aaa + �� + aa��a��n �� a����ֵ������ a ��һ�����֣�n ��ʾ a ��λ��������
//2 + 22 + 222 + 2222 + 22222 ����ʱ n = 5����n �ɼ������롣

//#include <stdio.h>
//
//int main()
//{
//	int a = 0, n = 0, i = 0, t = 0, Sn = 0;
//	printf("������һ�����ֺ�λ����\n");
//	scanf("%d%d", &a, &n);
//	for (i = 1; i <= n; i++) {
//		t = t * 10 + a;
//		Sn += t;
//	}
//	printf("Sn = %d",Sn);
//
//	return 0;
//}

//5. ���ӳ������⣺���ӵ�һ��ժ���������ӣ���������һ�룬������񫣬�ֶ����һ����
//�ڶ������Ͻ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶���ǰһ��ʣ�µ�һ����һ����
//����ʮ�����������ʱ��ֻʣ��һ�����ӡ����һ�칲ժ�˶��ٸ����ӣ�

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

//6. ��ӡ����žų˷���
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



//7. ��ʮԪǮ�һ���һԪ����ǣ�һ�ǵ�Ӳ�ң����� 40 ö�������ж����жһ�����
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
//	printf("���� %d �ֶһ�����", count);
//}

//8. ĳ�γ��� n ��ѧ���μӿ��ԣ�n ��ֵ���û��Ӽ������룩��
// ��д����������ſγ̵���߷֡���ͷּ�ƽ���֡�
//#include <stdio.h>
//int main()
//{
//	int i, n;
//	int m = 0, max = 0, min = 100;
//	float sum = 0, avg;
//
//	printf("����������ѧ�����������гɼ�\n");
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

//9. ���������ʾ�ĵ��������Ρ�
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

	
//10. �Ӽ���������һ���ַ���ͳ�����д�д��ĸ�ĸ�����Сд��ĸ�ĸ����������ַ��ĸ�����
//#include <stdio.h>
//
//int main()
//{
//	char n;
//	int dx = 0, xx = 0, sz = 0;
//	printf("����һ���ַ�:\n");
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
//printf("��д��ĸ�ĸ�����%d\nСд��ĸ�ĸ�����%d\n�����ַ��ĸ�����%d", dx, xx, sz);
//	return 0;
//}