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
