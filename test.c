#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

//一些预定义符号的了解  在预编译阶段

//__FILE__  运行的绝对路径
//__LINE__  代码所在的行
//__DATE__ 代码执行的日期
//__ TIME__代码执行的时间
//__ FUNCTION__代码运行所在的函数
//__ STDC__  如果编译器遵循ansi c标准返回1


#include <stdio.h>

int main()
{
	printf("%s\n",__FILE__);
	printf("%d\n",__LINE__ );
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%s\n", __FUNCTION__);
	//printf("%d\n", __STDC__);//vs2019  不支持  linux里面gcc支持
	return 0;

}