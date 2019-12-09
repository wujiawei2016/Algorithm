#include <stdio.h>
#include <stdlib.h>
int* sortA(int arr[], int len);
int* sortB(int arr[], int len);
int* sortC(int arr[], int len);
int* sortD(int arr[], int startindex,int endindex);
#define true 1
#define false 0

int main() {
	//int arr[] = { 5,7,2,8,6,3};
	int arr[] = { 8,17,6,51,33,15,18,2,54,20,4,10,16,7,3};
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
	//sortC(arr, len);
	//快速排序
	sortD(arr, 0, len - 1);
	printf("\n");
	for (size_t i = 0; i < len; i++)
	{
		printf("%d-", arr[i]);
	}
	return 0;
}
int* sortD(int arr[],int low,int high) {
	//int len = sizeof(arr)/sizeof(arr[0]);
	printf("\n");
	for (size_t i = 0; i < 15; i++)
	{
		printf("%d-", arr[i]);
	}
	printf("快速排序1:  len=%d\n", high-low+1);
	printf("快速排序2:  low-%d high-%d\n", low,high);

	if (low >= high)
		return;
	int i = low;
	int j = high;
	int key = arr[low];
	while(true){
	while (true) {
		if (arr[j] < key) {
			//int temp = key;
			//key = arr[j];
			arr[i] = arr[j];
			arr[j] = key;
			printf("\njjjjjjj-arr[%d]=%d-",j ,arr[j]);
			break;
		}
		if (j == i)
			break;
		j--;
	}
	while (true) {
		if (arr[i] > key) {
			//int temp = key;
			//key = arr[i];
			arr[j] = arr[i];
			arr[i] = key;
			printf("\niiiiiii-arr[%d]=%d-\n", i, arr[i]);
			break;
		}
		
		if (j == i)
			break;
		i++;
	}
	/*for (size_t i = 0; i < len; i++)
	{
		printf("%d-", arr[i]);
	}*/
	//sortD(arr, i, j);
	if (i==j) {

		printf("\ni==j==%d high=%d\n",i, high);
		sortD(arr,0,i-1);
		sortD(arr,i+1, high);
		break;
	}
	printf("\nkey:%d i:%d j:%d-,arr[i]%d", key,i,j,arr[i]);
	}
}
//将要排序的数组分成两部分，一部分是从大到小已经排好序的，一部分是无序的，
//每次从无序部分选择最小/或者最大的放到有序部分的后面
int* sortC(int arr[], int len) {
	printf("选择排序:  len=%d\n", len);
	for (size_t i = 0; i < len; i++)
	{
		int temp;
		int min = arr[i];
		int minindex = i;
		for (size_t j = i; j < len; j++)
		{
			if (min> arr[j]) {
				min = arr[j];
				minindex = j;
			}	
		}
		temp = arr[i];
		arr[i] = arr[minindex];
		arr[minindex] = temp;
		for (size_t i = 0; i < len; i++)
		{
			printf("%d-", arr[i]);
		}
		printf("  i=:%d\n", i);
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
		printf("  i=:%d\n", m);
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