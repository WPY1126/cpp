#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)


//--------------------------------------ʵ��1------------------------------------------

 
//1. ��д����ʵ���������Ļ�����
//#include <stdio.h>
//
//int main()
//{
//    int t = 0;
//    int a = 0, b = 0;
//    printf("������������\n");
//    scanf("%d %d", &a, &b);
//    printf("����ǰ��%d  %d\n", a, b);
//    t = a;
//    a = b;
//    b = t;
//    printf("������%d  %d", a, b);
//    return 0;
//}



//2. ����һѧ����ѧ�š����գ������գ����Ա���M��ŮF�������Ź��Σ����ġ���ѧ��Ӣ��ĳɼ���
// �����ѧ�����ֺܷ�ƽ���֣��������¸�ʽ�����ѧ����ȫ����Ϣ��
//ѧ��       ����       �Ա�    ����  ��ѧ  Ӣ��   �ܷ�   ƽ����
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
//	printf("����ѧ����Ϣ:\n");
//	scanf("%d %s %c %d %d %d", &s.number, &s.birth, &s.sex, &s.chinese, &s.math, &s.english);
//
//	sum = s.chinese + s.math + s.english;
//
//	printf("ѧ��        ����       �Ա�  ����  ��ѧ  Ӣ��  �ܷ�  ƽ����\n");
//	printf("%d    %s  %c     %d    %d    %d    %d   %.1f", s.number, s.birth, s.sex, s.chinese, s.math, s.english, sum, (double)sum / 3);
//
//	return 0;
//}



//3���Ӽ�����������һ����λ����������̼��㲢������������������磺����3451��������������ӦΪ1543��
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int a, b, c, d;
//	printf("����һ����λ��������\n");
//	scanf("%d", &n);
//	a = n % 10;
//	b = (n % 100) / 10;
//	c = (n % 1000) / 100;
//	d = n / 1000;
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}


//4. �������ж��ڴ���������rΪ2.25 % ���Ӽ������뱾��ʹ�����ޣ���̼��㲢����ñʴ��ں�ı������Ϣһ���ж��١�
//�����磺������Ϊ1000Ԫ������10��Ӧ�õı�������Ϣһ����1249.203Ԫ��
//��ʾ��
//1�����������ռ�����Ǹ���
//2�������ݵ���ѧ����Ϊpow(a, n)������a��n����
//3��ʹ����ѧ�����ǣ���Ҫ�ڳ���Ŀ�ͷ���ϱ���Ԥ��������#include <math.h>
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int year;
//	double deposit, future, r = 0.0225;
//	printf("�����뱾��ʹ�����ޣ�\n");
//	scanf("%lf %d", &deposit, &year);
//	future = deposit * pow(r + 1, year);
//	printf("�ñʴ��ں�ı������Ϣһ���ǣ�%.4lf", future);
//	return 0;
//}



//5. ��дһ��������һ����д��ĸ���������ĸ��ǰ����ĸ������ĸ�������ĺ����ĸ��������������ĸΪ��A���͡�Z���������
//���磺����B   ���ABC
//#include<stdio.h>
//int main()
//{
//	char A;
//	scanf("%c", &A);
//	printf("%c%c%c\n", A - 1, A, A + 1);
//	return 0;
//}

//6.	���ݸ�ĸ����߿�Ԥ����Ů�������Ŵ���ߣ���Ԥ�⹫ʽ���£�
//���Գ���ʱ��� = ��������� + ĸ����ߣ� * 0.54cm
//Ů�Գ���ʱ��� = ��������� * 0.923 + ĸ����ߣ� / 2cm
//��֪�к�С���������߷ֱ�175cm��162cm��Ů��С�츸ĸ����߷ֱ���178cm��153cm��
//��д������㲢���С����С������Լ����Ŵ���ߣ�Ҫ������������С��λ����
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
//    printf("С�������Ϊ:%d\n", manHeight);
//
//    faHeight = 178; moHeight = 153;
//
//    womanHeight = (faHeight * 0.923 + moHeight) / 2;
//
//    printf("С������Ϊ:%d\n", womanHeight);
//
//    a = 170; b = 160;
//    me= (a + b) * 0.54;
//    printf("�ҵ����:%d\n",me);
//
//    return 0;
//}



//--------------------------------------ʵ��2------------------------------------------



//1. �����º�������д��������x��ֵ�����y��ֵ��
//        x(x < 0)
//    y = x2(0��x��10)
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


//2. ĳ��λ����Ҫ�ӹ��ʣ����ӽ��ȡ���ڹ�����ֹ����������أ�
//���ڹ�����ڵ���20��ģ�����ֹ��ʸ���2000Ԫ����200Ԫ�������180Ԫ��
//���ڹ���С��20��ģ�����ֹ��ʸ���1500����150Ԫ�������120Ԫ��
//������ֹ��ʴӼ������룬��̼��㲢����ӹ��ʺ��Ա�����ʡ�
//#include <stdio.h>
//int main()
//{
//	int x, y, z;
//	printf("�����빤����ֹ��ʣ�");
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
//	printf("������Ĺ���Ϊ��%d\n", z);
//	return 0;
//}

//3. ������ţ�������һ���2�·ݵ�����������������
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
//	printf("%d���2�·���%d��\n", year, day);
//	return 0;
//}


//4. �Ӽ�����������һ���ַ����жϸ��ַ���Ӣ����ĸ�������ִ�Сд���������ַ����������ַ���
//#include <stdio.h>
//int main()
//{
//	char c;
//	scanf("%c", &c);
//	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
//	{
//		printf("���ַ���Ӣ����ĸ\n");
//	}
//
//	else if (c >= '0' && c <= '9')
//	{
//		printf("���ַ��������ַ�\n");
//	}
//
//	else
//	{
//		printf("���ַ��������ַ�\n");
//	}
//	return 0;
//}

//5. ��д������������һ��1��7֮���������������ת���ɶ�Ӧ��Ӣ�ĵ��ʡ�
//���磺1ת����Monday, 7ת����Sunday��
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


//6. ��һ��������5λ�������������ʵ�֣�
//1��������Ǽ�λ��2���ֱ����ÿһλ������3�����㲢��������ֵ���������
//������x = 123������������Ϊy = 321��
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
//		printf("ÿһλ����%d  %d  %d  %d  %d\n", w, q, b, s, g);
//		printf("�����ֵ�������:%d%d%d%d%d\n", g, s, b, q, w);
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
//		printf("ÿһλ����%d  %d\n", s, g);
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


//7. ����ĳ�˴�ĳ�쿪ʼ�������������ɹ������
//����������˴����쿪ʼ��ĵ�n��n��ֵ���û��Ӽ������룩���ǡ����㡱���ǡ�ɹ������
//#include <stdio.h>
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	if ((day / 5 == 1) || (day / 5 == 2) || (day / 5 == 3))
//	{
//		printf("��%d���ڴ���\n", day);
//	}
//
//	else
//	{
//		printf("��%d����ɹ��\n", day);
//	}
//	return 0;
//}


//8. ��д����ʵ�����¹��ܣ�
//1����������Ļ����ʾ���²˵�
//* *****************
//1��	����෴��
//2��	���ƽ����
//3��	���ƽ����
//* *****************
//2��Ȼ������û��Ӽ�������һ��ʵ�����ʹ��������˵�����ţ�Ҫ����������Ӧ�ļ��㲢��������
//���磺��������ʱ����  0.09   2��ִ�н��ӦΪ��0.09��ƽ�����ǣ�0.0081��
//��������ʱ����  0.09   3��ִ�н��ӦΪ��0.09��ƽ�����ǣ�0.3��
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	printf("* *****************\n");
//	printf("1��	����෴��\n");
//	printf("2��	���ƽ����\n");
//	printf("3��	���ƽ����\n");
//	printf("* *****************\n");
//
//	double a = 0;
//	int b = 0;
//	scanf("%lf %d", &a,&b);
//	switch (b)
//	{
//	case 1:
//		printf("%lf���෴���ǣ�%.4lf", a, -a);
//		break;
//		
//	case 2:
//		printf("%lf��ƽ�����ǣ�%.4lf", a, a*a);
//		break;
//
//	case 3:
//		printf("%lf��ƽ�����ǣ�%.4lf", a, sqrt(a));
//		break;
//
//	default:
//		break;
//	}
//	return 0;
//}



//--------------------------------------ʵ��3------------------------------------------


//1. ��̼���s = 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 - 1 / 6 + �� + 1 / n
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


//2. ��һ��ѭ����̼���s = 1�� + 2�� + 3�� + 4�� + �� + 20!
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

//3. ��������������m��n���������Լ������С������
// #include <stdio.h>
//int main()
//{
//	int m, n;
//	int a = 0, b = 0, max = 0, min = 0;
//	printf("����������������:");
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
//	printf("���Լ����%d\n��С��������%d\n", max, min);
//	return 0;
//}

//4. ��Sn = a + aa + aaa + �� + aa��a��n��a����ֵ������a��һ�����֣�n��ʾa��λ��������
//2 + 22 + 222 + 2222 + 22222 ����ʱn = 5����n�ɼ������롣
//#include <stdio.h>
//int main()
//{
//	int i, a, n, sum = 0, term = 0;
//	printf("����������a��n��ֵ\n");
//	scanf("%d%d", &a, &n);
//	for (i = 1; i <= n; i++)
//	{
//		term = term * 10 + a;
//		sum = sum + term;
//	}
//	printf("a+aa+aaa+...=%d\n", sum);
//	return 0;
//}

//5. ���ӳ������⣺���ӵ�һ��ժ���������ӣ���������һ�룬������񫣬�ֶ����һ�����ڶ������Ͻ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
// �Ժ�ÿ�����϶���ǰһ��ʣ�µ�һ����һ��������ʮ�����������ʱ��ֻʣ��һ�����ӡ����һ�칲ժ�˶��ٸ����ӣ�
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

//6. ��ӡ����žų˷���
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


//7. ��ʮԪǮ�һ���һԪ����ǣ�һ�ǵ�Ӳ�ң�����40ö�������ж����жһ�����
//��һԪiö�����10ö�������jö�����20ö����һ��kö�����100ö��
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
//    printf("��%d�ֶһ�����", count);
//
//    return 0;
//}


//8. ĳ�γ���n��ѧ���μӿ��ԣ�n��ֵ���û��Ӽ������룩����д����������ſγ̵���߷֡���ͷּ�ƽ���֡�
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
//	printf("max=%d\nmin=%d\navg=%.2f\n", max, min, avg);
//	return 0;
//}



//9. ���������ʾ�ĵ��������Ρ�
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


//10. �Ӽ���������һ���ַ���ͳ�����д�д��ĸ�ĸ�����Сд��ĸ�ĸ����������ַ��ĸ�����
//#include <stdio.h>
//int main()
//{
//	char str;
//	int a = 0, b = 0, c = 0, d = 0;
//	printf("������һ���ַ�\n");
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
//	printf("��ĸ��:%d\n�����ַ���:%d\n�ո���:%d\n�����ַ���:%d\n", a, b, c, d);
//	return 0;
//}


//--------------------------------------ʵ��4------------------------------------------
//1.��һά����a[10]{ 11,12,13,14,15,16,17,18,19,20 }�е�����Ԫ����������Ϊ{ 20,19,18,17,16,15,14,13,12,11 }
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


//2. ������10��������һά���飬�ҳ�������ŵ���ǰ�棬��С���ŵ�����档
//#include<stdio.h>
//int main()
//{
//    int arry[10], i, j = 0, k = 0, t;
//    int max, min;
//
//    printf("������ʮ������\n");
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


//3. ��15��������С�����˳������һ�������У�����һ������
// Ҫ�����۰���ҷ��ҳ������������еڼ���Ԫ�ء�
// ����������������У���������޴�������
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
//			printf("�ҵ���,��%d���±��Ԫ��", mid);
//			break;
//		}
//
//		if(left>right)
//		{
//			printf("�޴���\n");
//		}
//	}
//
//	return 0;
//}

//4. ����4��4������b����Ԫ��Ϊb[i][j] = i + j + 1�����ʵ�֣�
//1����ڶ���Ԫ��֮��
//2���������Ԫ�ص�ƽ��ֵ
//3��������b�е����ֵ����Сֵ�����Խ���Ԫ�ص�ƽ����
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
//    printf("�ڶ���Ԫ�صĺ���%d\n������Ԫ�ص�ƽ��ֵ��%d\n", sumj1, sumj2);
//    printf("����b�е����ֵ��%d\n����b�е���Сֵ��%d\n����b�е����Խ���Ԫ�ص�ƽ������%d\n", max, min, s);
//    return 0;
//}


//5. ���������ʽ��������ǣ�Ҫ�����10�У�
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
//	printf("������Ҫ��ӡ��������");
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


//6. ��֪10��ѧ����5�ſγ̵ĳɼ����������һ����ά���飬��ÿ��ѧ�����ܳɼ���ƽ���ɼ���
//# include <stdio.h>
//int main()
//{
//    int i, j, s = 0, v[10], a[10][5], sum[10];
//    for (i = 0; i < 10; i++)
//    {
//        printf("\n��%d��ѧ���ĳɼ�\n", i + 1);
//        for (j = 0; j < 5; j++)
//        {
//            switch (j) {
//            case 0:printf("��һ�ſγɼ�Ϊ��"); break;
//            case 1:printf("�ڶ��ſγɼ�Ϊ��"); break;
//            case 2:printf("�����ſγɼ�Ϊ��"); break;
//            case 3:printf("�����ſγɼ�Ϊ��"); break;
//            default:printf("�����ſγɼ�Ϊ��"); break;
//            }
//            scanf("%d", &a[i][j]);
//            s = a[i][j];
//        }
//        sum[i] = s;
//        v[i] = s / 5;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf(" ��%d��ѧ�����ܷ�Ϊ��%d\t ƽ����Ϊ��%d\n", i + 1, sum[i], v[i]);
//    }
//    return 0;
//}

//--------------------------------------ʵ��5------------------------------------------

//1. ��д���򣬽������ַ�������������������strcat������
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


//2. ��д���򣬼��㲢����ַ����ĳ��ȣ�������strlen������
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


//3.��д����ֱ�ͳ��һ���ַ��У�������80���ַ���Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֣��ո������ַ��ĸ�����
//#include<stdio.h>
//
//int main()
//{
//	char ch;
//	int a = 0, b = 0, c = 0, d = 0;
//	printf("������һ���ַ�\n");
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
//	printf("��ĸ��:%d\n�����ַ���:%d\n�ո���:%d\n�����ַ���:%d\n", a, b, c, d);
//	return 0;
//}


//4. ��д���򣬱Ƚ������ַ����������������У��������ַ�����ȣ��������1��
//�������ַ�������ȣ���������ַ�����һ������ȵ��ַ���ASCII��Ĳ�ֵ
//�����磺��1Ϊabc����2Ϊa3d����������Ϊ�ַ���b����ASCII���ȥ�ַ���3����ASCII�룬���Ϊ47����
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


//--------------------------------------ʵ��6------------------------------------------


//1. �Ӽ�����������һ������n����̼��㲢���1 - n֮�����������֮��
// Ҫ��
//1����д���� int IsPrime��int x�����ú����������ж�x�Ƿ�Ϊ����������������0�����ʾ����������������1���������������
//2���ڳ����е��øú���

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


//2. �Ӽ�������һ������n��1000 <= n <= 1000000����̼��㲢���n������Լ����������λ������������λԼ������
// ���磺��nΪ555555ʱ�������λԼ����777�����nС��1000���ߴ���1000000���������Input  error����Ҫ��
//1����д���� int func(int n)���ú�������Ϊ����n������Լ����������λ����
//2���ڳ����е��øú���

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


//3. ��дһ�������������ַ����������ַ���2���ӵ��ַ���1�ĺ��棬���������Ӻ���ַ�����
// Ҫ��
//1)��д����void lianjie��char s1[], char s2[]��ʵ�ִ�������
//2���ڳ����е��øú�����

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


//4. ����10��ѧ��6�ſεĳɼ�����д����ͳ�Ʋ����ÿ��ƽ���֣� ÿ�ſγ̵�ƽ���֣��ҳ�����60����������ߵķ�������Ӧ��ѧ���Ϳγ̡�Ҫ��ֱ��ú���ʵ�����й��ܣ�
//1����������ѧ����ÿ�ſγɼ�
//2�����㲢���ÿ��ѧ����ƽ����
//3�����㲢���ÿ�ſγ̵�ƽ����
//4���������60����������߷ּ�������Ӧ��ѧ���Ϳγ̡�

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
//	printf("60����������߷�Ϊ%d,Ϊ��%d��ѧ���ĵ�%d�ſ�\n", max, m + 1, n + 1);
//}
//
//
//int main()
//{
//	int a[10][6];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("�������%d��ѧ����6�ųɼ�:", i + 1);
//		input(a, i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("��%d��ѧ����ƽ����Ϊ%f\n", i + 1, avg1(a, i));
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("��%d�ſε�ƽ����Ϊ%f\n", i + 1, avg2(a, i));
//	}
//	max(a);
//	return 0;
//}



//5. �õݹ鷽����д��������Fibonicci�������⣬��̲���������еĵ�����ֵf(7).
//���У�          1               (n = 1��2)
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



//6. ����ݹ麯��void  convert��int n����ɽ�һ������nת�����ַ�������д����������������������n�������øú�����������
// ��������������789����Ӧ����ַ����С�7�� ��8����9����n��λ�����̶�������������λ����������
//��ʾ����һ������n�ֽ���ַ����У����Ƚ����⻮�ֳ��������֣�һ��������ֹ�ݹ����������һ�����Ǽ��������εݹ��������
//1��	��n / 10 != 0 ʱ����n / 10��Ϊ�������������εݹ�
//2��	���������n / 10 = 0ʱ����nΪ1λ��������ֱ��ת������������nת���ɵ����ַ������c = n % 10 + ��0������ӡc
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
//	printf("��������:\n");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("����ַ�����:\n");
//		printf("- ");
//		n = -n;
//	}
//	else
//	{
//		printf("����ַ�����:\n");
//	}
//	convert(n);
//	printf("\n");
//	return 0;
//}



//--------------------------------------ʵ��7------------------------------------------


//1.����������������ʹ�䰴�Ӵ�С��˳�������Ҫ���ú���ʵ�������Ļ�����
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


//2.��ָ�뷨����12������Ȼ��ÿ��4���������
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


//3.��д����ͳ��ĳ��10��ѧ��ĳ�ſγ̵���߷֣���ͷֺ�ƽ���֡�
//Ҫ���ú���ʵ��ͳ�ƹ��ܣ����������������ͳ�ƽ����
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
//	printf("������10����:");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%f", &score[i]);
//		ave = fun(score, 10);
//	}
//	printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave);
//	return 0;
//}


//4.��дһ����������һ���ַ����ĳ��ȣ�Ҫ�����ַ�ָ��ʵ�֡�
//���������������ַ��������øú�������䳤�ȡ�
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
//    printf("������һ���ַ���:\n");
//    scanf("%s", p);
//    printf("��������ַ�������Ϊ%d", length(p));
//    return 0;
//}


//5.���������ַ���������С�����˳�������Ҫ����ָ�뷽������

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
//	printf("���������������ַ�����\n");
//	gets(p_s1);
//	gets(p_s2);
//	gets(p_s3);
//	sort(p_s1, p_s2);
//	sort(p_s1, p_s3);
//	sort(p_s2, p_s3);
//	printf("������С�����˳��������£�\n%s\t%s\t%s\t", p_s1, p_s2, p_s3);
//	return 0;
//}


//6.�������ַ�����Data structure������Computer design������C Progrom����
//�밴�ַ�˳������������ַ�����Ҫ����ָ������ָ���������ַ�������
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

//7.����10���������ҳ������������������һ��������λ�á�
//Ҫ���д����������1������10������2�����д���3�����10������
//��������������һ������ָ��������������������
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
//	printf("����10������\n");
//
//	input(array);
//	sort(array);
//	output(array);
//
//	return 0;
//} 


//--------------------------------------ʵ��8------------------------------------------


//1.��дһ������print����ӡһ��ѧ���ĳɼ����飬����������5��ѧ�������ݼ�¼��
//ÿ����¼����num��name��scroe[3]����������������Щ��¼����print���������Щ��¼��
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



//2.��10��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſεĳɼ����Ӽ�������10��ѧ�������ݣ�
//Ҫ���ӡ���3�ſγ̵���ƽ���ɼ���
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
//	printf("������ѧ����Ϣ:\n");
//	for (i = 0; i < N; i++)
//	{
//		printf("ѧ��ѧ�ţ�");
//		scanf("%s", student[i].num);
//		printf("ѧ��������");
//		scanf("%s", student[i].name);
//		printf("ѧ���ɼ���");
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
//		printf("ƽ���ɼ��ǣ�%f\n", sum / 3);
//
//	}
//	return 0;
//}


//3.����һ����������ѧ������Ϣ��ѧ�š��������ɼ�����ֱ�������ѧ��Ϊ0ʱ�������������ѧ������Ϣ��
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


//4.��һ���ṹ�������д���4��ѧ������Ϣ���������������ɼ�������ѧ��������ѯ��������ƽ���ɼ�����ѯ���������У�ֱ������0ʱ������
//5.����һ���ṹ�����飬ÿ��Ԫ�ذ���4����ѧ�š�������4�ſγ̵ĳɼ���ƽ���֡�
//����5��ѧ����ѧ�š�������4�ſγ̵ĳɼ�������ڽṹ�������У������ƽ���֣�����ڽṹ������Ԫ�ض�Ӧ�����У������5��ѧ����������Ϣ��

//6.�Ӽ���������һ���ַ���������ʱ��������һ����������������ַ�λ������β��Ȼ��������෴˳����������ͷ����н�㡣
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
//    printf("������һ���ַ�:\n");
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