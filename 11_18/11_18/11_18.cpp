#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <ctype.h>

//�������룬һ�У�������1�����������2������������Ű������֣�+��-��*��/����
//int main()
//{
//	float a, b, c;
//	char cal;
//	scanf("%f%c%f\n", &a, &cal, &b);
//	if (cal == '+')
//	{
//		c = a + b;
//		printf("%0.4f+%0.4f = %0.4f\n", a, b, c);
//	}
//	else if (cal == '-')
//	{
//		c = a - b;
//		printf("%.4f-%.4f = %.4f\n", a, b, c);
//	}
//	else if (cal == '*')
//	{
//		c = a * b;
//		printf("%.4f*%.4f = %.4f\n", a, b, c);
//	}
//	else if (cal == '/')
//	{
//		c = a / b;
//		if (b == 0)
//		{
//			printf("Wrong!Division by zero!");
//		}
//		else{
//			printf("%.4f/%.4f = %.4f\n", a, b, c);
//		}
//	}
//	else
//	{
//		printf("Invalid operation!");
//	}
//	return 0;
//}	



//�ж��ַ�
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != EOF){
//		if (ch == '\n') continue;
//		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z')){
//			printf("YES\n");
//		}
//		else{
//			printf("NO\n");
//		}
//	}
//}

//����ɼ���ߵ�ǰ���
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int i = 0;
//	int arr[6] = { 99, 45, 78, 67, 72, 88 };
//	for (i = 0; i < 6; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		int j = 0;
//		for (j = 0; j <6 - i; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//һ�У��ַ����У�����A��B���������ַ�0����
//int main()
//{
//	char ch[20];
//	scanf("%c\n", &ch);
//	int len = strlen(ch);
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		if (ch[i] == 'A')
//		{
//			count1++;
//		}
//		if (ch[i] == 'B')
//		{
//			count2++;
//		}
//	}
//	if (count1 > count2)
//	{
//		printf("A");
//	}
//	else if (count2 > count1)
//	{
//		printf("B");
//	}
//	else
//	{
//		printf("E");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 0; i < 2; i++)
//	{
//		scanf("%d\n", &n);
//		if (n % 2 == 0)
//		{
//			printf("Even");
//		}
//		else if (n % 2 == 1)
//		{
//			printf("Odd");
//		}
//	}
//	return 0;
//}



//ģ��atoi�����ַ���ת��������
//int atoi(char* str)
//{
//	int len = strlen(str);
//	while (*str == ' ')
//	{
//		++str;
//	}
//	int flag = 1;
//	if (*str == '-')
//	{
//		flag = -1;
//		++str;
//	}
//	else if (*str == '+')
//	{
//		flag = 1;
//		++str;
//	}
//	int num = 0;
//	while (*str != '\0')
//	{
//		if ((*str < '0') || (*str > '9'))
//		{
//			printf("�ַ������Ϸ�\n");
//			exit(-1);
//		}
//		else
//		{
//			num *= 10;
//			num += (*str) - '0';
//		}
//		++str;
//	}
//	return  num * flag;
//}
//int main()
//{
//
//	printf("%d\n", atoi("1234"));
//	printf("%d\n", atoi("  1234"));
//	printf("%d\n", atoi("-1234"));
//	printf("%d\n", atoi("12AD"));
//	/*char ch[] = "123A";
//	char ch1[] = "1234";
//	char ch2[] = " 1234";
//	char ch3[] = "-1234";*/
//
//	/*int n1 = atoi(ch1);
//	int n2 = atoi(ch2);
//	int n3 = atoi(ch3);
//	int n = atoi(ch);
//	
//	printf("%d\n", n1);
//	printf("%d\n", n2);
//	printf("%d\n", n3);
//	printf("%d\n", n);*/
//	return 0;
//}

//ȥ��  ȥ�غ�a[] = {1,0,2,0,3,0,4,0,5,0};
//void dup_remv(int a[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] == a[i + 1])
//		{
//			a[i + 1] = 0; //����ͬ��������һ����0
//		}
//	}
//}

//����   ѭ�����a[] = {0,0,0,0,0,1,2,3,4,5};
//void bubble_sort(int a[], int n)
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5 };
//	int i = 0;
//	/*for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr);
//	}*/
//	dup_remv(arr, n);//ȥ��
//	bubble_sort(arr, n);//����ð������
//
//	//��ӡ
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)//����0
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}


//size_t my_strlen(const char* str)
//{
//	int count = 0;//������
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;//���ؼ���õ���ֵ
//}
//
//int main()
//{
//
//	char ch1[] = "abcdef";//�����ַ��������Ĭ�ϵ�'\0'
//	char ch2[] = { 'a', 'b', 'c', 'd', '\0' };//�����ַ����飬'\0'��Ҫ�Լ���
//	char ch3[] = { 'a', 'b', 'c', 'd' };//�������û��'\0' ��������С�������ֵ
//	printf("%d\n", my_strlen(ch1));
//	printf("%d\n", my_strlen(ch2));
//	printf("%d\n", my_strlen(ch3));
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("%d\n", sizeof(ch1));
//	printf("%d\n", sizeof(ch2));
//	printf("%d\n", sizeof(ch3));
//
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//
//	printf("%d\n", strlen(int));
//	return 0;
//}

//���ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ���������Consonant�� 
//int main()
//{
//	char c = 0;
//	while (scanf("%c\n", &c) != EOF)
//	{
//		c = tolower(c);
//		if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}


//KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
int main()
{
	char c = 0;
	while (scanf("%c\n", &c) != EOF)
	{
		if (c >= 'a' && c <= 'z')
		{
			c -= 32;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c += 32;
		}
		printf("%c\n", c);
	}
	return 0;
}