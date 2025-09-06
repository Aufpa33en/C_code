#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int a = 100;//全局变量
int main()
//{
//	int age = 18;
//	//数据类型+名字+数据，定义了一个变量
//	//或者：类型+变量的名字，但不赋值
//	double weight = 60.0;
//
//	age = age + 1;
//	weight = weight - 1;
//	//变量的大小是可以改变的
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	//%lf用于输出double类型的字符，%d-整型，%f-float
//	return 0;




//{
//	//局部变量
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
////当局部变量和全局变量名字冲突的时候，局部变量优先。当然我们不建议全局变量和局部变量名字冲突。

//写一个代码求两个整数的和。
{
	int a = 1;
	int b = 0;
	int sum = 0;
	//scanf函数是输入函数
	scanf("%d %d", &a, &b);
	//scanf函数在使用时可能会报错。所以在第一行放了一个让scanf不会报错的代码
	//scanf_s函数可以避免这个问题。但是scanf_S只能在VS上跑。所以我们建议用scanf函数
	//这一行scanf代码的意思是把第一个输入的数字放在a变量位置，把第二个输入的放在b
    sum = a + b;
	printf("sum = %d\n", sum);


	return 0;
}