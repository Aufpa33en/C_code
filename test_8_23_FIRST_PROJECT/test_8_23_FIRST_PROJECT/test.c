#define _CRT_SECURE_NO_WARNINGS 1
//c语言代码中一定要有main函数
//主函数
//标准的主函数写法
int main()
{

	return 0;
}

//古老的写法-不推荐
void main()
{

}

//明确主函数没有参数的写法：
int main(void)
{

	return 0;
}
//在屏幕上打一个"字符串"
#include <stdio.h>

int main()
{
	printf("auf\n");
	return 0;
}
//printf 是一个库函数，专门用来打印数据
//"#include <stdio.h>"是引用头文件，在代码前面加上这一段字符，就可以引用printf函数
//std:standard i:input o:output --stdio.h
//运行代码的快捷键：ctrl+F5 或直接点调试
//return 0;是约定俗成的规律
//main 函数是程序的入口，这是c语言的规定。在一个程序中，入口有且只有一个
//工具栏中的“注释选中栏”和“取消注释选中栏”

int main()
{
	printf("%d\n", 100);
	return 0;
}