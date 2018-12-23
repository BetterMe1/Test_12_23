/*
date：2018/12/22
author:Better Me1
program:字符反向排列、斐波那契数列、strlen函数的实现
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


/*编写一个函数 reverse_string(char * string)（递归实现）,实现：将参数字符串中的字符反向排列。要求不能使用C函数库中的字符串操作函数。*/
/*递归实现strlen*/
//int DguiStrlen(char* string){
//	if (*string == '\0'){
//		return 0;
//	}
//	return 1 + Strlen(string + 1);
//}
/*非递归实现strlen*/
//int Strlen(char* string){
//	int count = 0;
//	while(*string != '\0'){
//		string = string + 1;
//		count++;
//	}
//	return count;
//}
//char* reverse_string(char* string){
//	int len = Strlen(string);//计算字符串长度;
//	char* left = string;
//	char* right = string + len - 1;
//	if (*string != '\0'){
//		char temp = *left;//将*left先存起来，因为还要进行下一次交换，在这里不能直接将*left和*right交换
//		*left = *right;
//		*right = '\0';
//		reverse_string(string+1);
//		*right = temp;
//	}
//	return string;
//}
//int main(){
//	char string[100];
//	printf("请输入一个字符串:>");
//	scanf("%s", &string);
//	printf("反向排列后的字符串为:>%s\n",reverse_string(string));
//	system("pause");
//	return 0;
//}

/*递归和非递归分别实现求第n个斐波那契数;*/
//int DiguiFib(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	return DiguiFib(n - 2) + DiguiFib(n - 1);
//}
//int Fib(int n){
//	if (n == 1 || n == 2){
//		return 1;
//	}
//	int before = 1;
//	int last = 1;
//	int next;
//	for (int i = 3; i <= n; i++){
//		next = before + last;
//		before = last;
//		last = next;
//	}
//	return next;
//}
//int main(){
//	int input = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &input);
//	printf("第%d个斐波那契数:%d\n", input, DiguiFib(input));
//	printf("第%d个斐波那契数:%d\n", input, Fib(input));
//	system("pause");
//	return 0;
//}

/*编写一个函数实现n^k，使用递归实现;*/
//int Power(int a,int b){
//	if (b == 1){
//		return a;
//	}
//	return a*Power(a, b - 1);
//}
//int main(){
//	int a = 0; 
//	int b = 0;
//	printf("请输入求次方的算数表达式(如:2^3):>");
//	scanf("%d^%d", &a, &b);
//	printf("%d^%d=%d\n",a,b,Power(a,b));
//	system("pause");
//	return 0;
//}

/* 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19 */
//int DigitSum(int n){
//	if (n > 9){
//		DigitSum(n / 10);
//	}
//	sum = sum + n % 10;
//	return sum;
//}
//int sum = 0;
//int main(){
//	int number = 0;
//	printf("请输入一个非负整数:>");
//	scanf("%d", &number);
//	printf("%d\n",DigitSum(number));
//	system("pause");
//	return 0;
//}
/*递归和非递归分别实现求n的阶乘*/
//int DiguiFactor(int n){
//	if (n == 1){
//		return 1;
//	}
//	return n * DiguiFactor(n - 1);
//}
//int Factor(int n){
//	int result = 1;
//	while (n > 0){
//		result = result*n;
//		n--;
//	}
//	return result;
//}
//int main(){
//	int n = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	printf("%d！=%d\n",n,DiguiFactor(n));
//	printf("%d！=%d\n", n,Factor(n));
//	system("pause");
//	return 0;
//}
/*递归方式实现打印一个整数的每一位*/
void extect(int n){
	if (n > 9){
		extect(n / 10);
	}
	printf("%d ", n % 10);
}
int main(){
	int n = 0;
	printf("请输入一个数字:");
	scanf("%d", &n);
	extect(n);
	printf("\n");
	system("pause");
	return 0;
}