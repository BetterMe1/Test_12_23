/*
date��2018/12/22
author:Better Me1
program:�ַ��������С�쳲��������С�strlen������ʵ��
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


/*��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�,ʵ�֣��������ַ����е��ַ��������С�Ҫ����ʹ��C�������е��ַ�������������*/
/*�ݹ�ʵ��strlen*/
//int DguiStrlen(char* string){
//	if (*string == '\0'){
//		return 0;
//	}
//	return 1 + Strlen(string + 1);
//}
/*�ǵݹ�ʵ��strlen*/
//int Strlen(char* string){
//	int count = 0;
//	while(*string != '\0'){
//		string = string + 1;
//		count++;
//	}
//	return count;
//}
//char* reverse_string(char* string){
//	int len = Strlen(string);//�����ַ�������;
//	char* left = string;
//	char* right = string + len - 1;
//	if (*string != '\0'){
//		char temp = *left;//��*left�ȴ���������Ϊ��Ҫ������һ�ν����������ﲻ��ֱ�ӽ�*left��*right����
//		*left = *right;
//		*right = '\0';
//		reverse_string(string+1);
//		*right = temp;
//	}
//	return string;
//}
//int main(){
//	char string[100];
//	printf("������һ���ַ���:>");
//	scanf("%s", &string);
//	printf("�������к���ַ���Ϊ:>%s\n",reverse_string(string));
//	system("pause");
//	return 0;
//}

/*�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������;*/
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
//	printf("������һ����:>");
//	scanf("%d", &input);
//	printf("��%d��쳲�������:%d\n", input, DiguiFib(input));
//	printf("��%d��쳲�������:%d\n", input, Fib(input));
//	system("pause");
//	return 0;
//}

/*��дһ������ʵ��n^k��ʹ�õݹ�ʵ��;*/
//int Power(int a,int b){
//	if (b == 1){
//		return a;
//	}
//	return a*Power(a, b - 1);
//}
//int main(){
//	int a = 0; 
//	int b = 0;
//	printf("��������η����������ʽ(��:2^3):>");
//	scanf("%d^%d", &a, &b);
//	printf("%d^%d=%d\n",a,b,Power(a,b));
//	system("pause");
//	return 0;
//}

/* дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19 */
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
//	printf("������һ���Ǹ�����:>");
//	scanf("%d", &number);
//	printf("%d\n",DigitSum(number));
//	system("pause");
//	return 0;
//}
/*�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�*/
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
//	printf("������һ����:>");
//	scanf("%d", &n);
//	printf("%d��=%d\n",n,DiguiFactor(n));
//	printf("%d��=%d\n", n,Factor(n));
//	system("pause");
//	return 0;
//}
/*�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ*/
void extect(int n){
	if (n > 9){
		extect(n / 10);
	}
	printf("%d ", n % 10);
}
int main(){
	int n = 0;
	printf("������һ������:");
	scanf("%d", &n);
	extect(n);
	printf("\n");
	system("pause");
	return 0;
}