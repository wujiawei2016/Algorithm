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
	sortC(arr, len);
	//��������
	sortD(arr, len);
	return 0;
}
int* sortD(int arr[], int len) {
	printf("��������:  len=%d\n", len);

}
int* sortC(int arr[], int len) {
	printf("ѡ������:  len=%d\n", len);
	for (size_t i = 0; i < len; i++)
	{

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
		printf("\n");
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