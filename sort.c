#include <stdio.h>
#include <stdlib.h>
int* sortA(int arr[],int len);
int* sortB(int arr[], int len);
int* sortC(int arr[], int len);
int* sortD(int arr[], int len);
int main() {
	//int arr[] = { 8,7,6,5,4,3};
	int arr[] = { 8,17,6,51,33,15,16,14,25,49,52,15,1,19,20,26,58,59,43,3};
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("原数组\n");
	for (size_t i = 0; i < len; i++)
	{
		printf("%d-", arr[i]);
	}
	printf("\n");
	//冒泡排序
	//sortA(arr, len);
	//插入排序
	//sortB(arr, len);
	//选择排序
	sortC(arr, len);
	//快速排序
	sortD(arr, len);
	return 0;
}
int* sortD(int arr[], int len) {
	printf("快速排序:  len=%d\n", len);

}
int* sortC(int arr[], int len) {
	printf("选择排序:  len=%d\n", len);
	for (size_t i = 0; i < len; i++)
	{

	}

}
int* sortB(int arr[], int len) {
	printf("插入排序:  len=%d\n", len);
	
	
	//将要排序的数组分成两部分，每次从后面的部分取出索引最小的元素插入到前一部分的适当位置
	for (size_t i = 0; i < len; i++)
	{
		int m = i;
		int temp;
		for (size_t j = 0; j < m; j++) {
			if (arr[m] < arr[j]) {//每轮和已经排好序的数组部分比较,然后放到合适的位置
				temp = arr[m];
				arr[m] = arr[j];
				arr[j] = temp;
			}
		}
		for (size_t i = 0; i < len; i++)
		{
			printf("%d-", arr[i]);
		}
		printf("\n");
	}
	for (size_t i = 0; i < len; i++)
	{
		printf("%d-", arr[i]);
	}
	printf("\n");
}
//冒泡排序
int* sortA(int arr[],int len) {
	
	printf("冒泡排序:  len=%d\n", len);

	//依次比较相邻的数据,前面的数据比后面的大则交换位置,这样每轮过后最大的数据就会放在最后
	for (size_t i = 0; i < len; i++)
	{
		for (size_t j = 0; j < len - 1; j++)
		{
			int temp;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}//每一轮比较之后最大值会放到最后
		for (size_t i = 0; i < len; i++)
		{
			printf("%d-", arr[i]);
		}
		printf("\n");
	}
	for (size_t i = 0; i < len; i++)
	{
		printf("%d-", arr[i]);
	}
	printf("\n");
	return arr;
}