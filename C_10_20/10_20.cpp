#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<limits.h>//int_max
#include<stdlib.h>//system
#include<string.h>//strcmp


int main()
{
////不使用中间值交换两个字符的值
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;

	////sizeof的用法
	//printf("%d", sizeof(char));

	//short age = 20;//向内存申请2个字节，用来存放20
	//INT_MAX;
	//找出单身狗
	//int arr[] = { 1,2,3,4,3,2,1,4,5 };
	//int i = 0;
	//int j = 0;
	//int  n = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数；
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

	//写一个关机程序
	/*cmd  shutdown  -s -t 60----关机
		 shutdown  -a ----注销*/
	char input[20] = {0};//存储数据
	system("shutdown  -s -t 60");//关机
 again:
	printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
    if(strcmp(input,"我是猪")== 0)//判断input中放的是不是“我是猪”-strcmp  ------string  compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
 

	return 0;
}