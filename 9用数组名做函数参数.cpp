//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	void select_sort(int array[], int n);	//������������������ʱ���ǽ�ʵ��������Ԫ�صĵ�ַ���ݸ��β�
//	int a[10], i;
//	cout << "enter the originl array: ";
//	for(i=0;i<10;i++)
//		cin >> a[i];
//	cout << endl;
//	select_sort(a, 10);					// ��������a����Ԫ�صĵ�ַ���ݸ��β�
//	cout << "the sorted array: " << endl;
//	for (i = 0; i < 10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	return 0;
//}
//void select_sort(int array[], int n) {	//��̨��  ��д���ú�����ʱ��  ������β�array���������� Ҳ���Բ���array	 �����Ǹ��ǲο���ѡ��
//	int i, j, k;
//	for (i = 0; i < n - 1; i++) {			//�м������ͱȽ�N-1��
//		for (j = i + 1; j < n; j++) {
//			if (array[j] < array[i]) {		//��С��������
//				k = array[i];
//				array[i] = array[j];
//				array[j] = k;
//			}
//		}
//			
//
//	}
//
//}
//
////void select_sort(int array[], int n) {	//��д���ú�����ʱ��  ������β�array���������� Ҳ���Բ���array
////	int i, j, k,t;
////	for (i = 0; i < n - 1; i++) {			//�м������ͱȽ�N-1��
////		k = i;
////		for (j = i + 1; j < n; j++)		//ѡ�� ��һ����С�������ڵ�һ��  Ȼ��ڶ��ַ��ڵڶ����Դ�����
////			if (array[j] < array[k]) 	//��С��������
////				k = j;
////		t = array[k];		
////		array[k] = array[i];
////		array[i] = t;
////
////	}
////
////}