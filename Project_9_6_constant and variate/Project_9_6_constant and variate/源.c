#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int a = 100;//ȫ�ֱ���
int main()
//{
//	int age = 18;
//	//��������+����+���ݣ�������һ������
//	//���ߣ�����+���������֣�������ֵ
//	double weight = 60.0;
//
//	age = age + 1;
//	weight = weight - 1;
//	//�����Ĵ�С�ǿ��Ըı��
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	//%lf�������double���͵��ַ���%d-���ͣ�%f-float
//	return 0;




//{
//	//�ֲ�����
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
////���ֲ�������ȫ�ֱ������ֳ�ͻ��ʱ�򣬾ֲ��������ȡ���Ȼ���ǲ�����ȫ�ֱ����;ֲ��������ֳ�ͻ��

//дһ�����������������ĺ͡�
{
	int a = 1;
	int b = 0;
	int sum = 0;
	//scanf���������뺯��
	scanf("%d %d", &a, &b);
	//scanf������ʹ��ʱ���ܻᱨ�������ڵ�һ�з���һ����scanf���ᱨ��Ĵ���
	//scanf_s�������Ա���������⡣����scanf_Sֻ����VS���ܡ��������ǽ�����scanf����
	//��һ��scanf�������˼�ǰѵ�һ����������ַ���a����λ�ã��ѵڶ�������ķ���b
    sum = a + b;
	printf("sum = %d\n", sum);


	return 0;
}