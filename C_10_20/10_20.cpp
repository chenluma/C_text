#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<limits.h>//int_max
#include<stdlib.h>//system
#include<string.h>//strcmp


int main()
{
////��ʹ���м�ֵ���������ַ���ֵ
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;

	////sizeof���÷�
	//printf("%d", sizeof(char));

	//short age = 20;//���ڴ�����2���ֽڣ��������20
	//INT_MAX;
	//�ҳ�����
	//int arr[] = { 1,2,3,4,3,2,1,4,5 };
	//int i = 0;
	//int j = 0;
	//int  n = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ�����
	//for (i = 0; i <= n; i++)
	//{
	//	int count = 0;
	//	for (j = 0; j <= n; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//			//printf("%d\n", count);
	//		}
	//	}
	//	if (count == 1)
	//	{
	//		printf("%d\n", arr[i]);
	//		break;
	//	}
	//}
	/*for (i = 0; i < n; i++)
	{
		j = arr[i]^j;	
	}
	printf("%d\n", j);
	return 0;*/

	//дһ���ػ�����
	/*cmd  shutdown  -s -t 60----�ػ�
		 shutdown  -a ----ע��*/
	char input[20] = {0};//�洢����
	system("shutdown  -s -t 60");//�ػ�
 again:
	printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
    if(strcmp(input,"������")== 0)//�ж�input�зŵ��ǲ��ǡ�������-strcmp  ------string  compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
 

	return 0;
}