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
	printf("ԭ����\n");
	for (size_t i = 0; i < len; i++)
	{
		printf("%d-", arr[i]);
	}
	printf("\n");
	//ð������
	//sortA(arr, len);
	//��������
	//sortB(arr, len);
	//ѡ������
	//sortC(arr, len);
	//��������
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
	printf("��������1:  len=%d\n", high-low+1);
	printf("��������2:  low-%d high-%d\n", low,high);

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
//��Ҫ���������ֳ������֣�һ�����ǴӴ�С�Ѿ��ź���ģ�һ����������ģ�
//ÿ�δ����򲿷�ѡ����С/�������ķŵ����򲿷ֵĺ���
int* sortC(int arr[], int len) {
	printf("ѡ������:  len=%d\n", len);
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
	printf("��������:  len=%d\n", len);
	
	
	//��Ҫ���������ֳ������֣�ÿ�δӺ���Ĳ���ȡ��������С��Ԫ�ز��뵽ǰһ���ֵ��ʵ�λ��
	for (size_t i = 0; i < len; i++)
	{
		int m = i;
		int temp;
		for (size_t j = 0; j < m; j++) {
			if (arr[m] < arr[j]) {//ÿ�ֺ��Ѿ��ź�������鲿�ֱȽ�,Ȼ��ŵ����ʵ�λ��
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
//ð������
int* sortA(int arr[],int len) {
	
	printf("ð������:  len=%d\n", len);

	//���αȽ����ڵ�����,ǰ������ݱȺ���Ĵ��򽻻�λ��,����ÿ�ֹ����������ݾͻ�������
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
		}//ÿһ�ֱȽ�֮�����ֵ��ŵ����
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