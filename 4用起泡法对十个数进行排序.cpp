//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int i, j, t;
//	int a[11];		//�ú���ʮ���� a[0]����
//	cout << "input 10 numbers: ";
//	for (i = 1; i < 11; i++)	
//		cin >> a[i];	// ��a[1]  ��������  һֱ��a[10]
//	cout << endl;
//	for (j = 1; j <=9; j++) {	//һ��10���� ��Ҫ����9�����ݷ��Ƚϲ��ܱ��� n������Ҫn-1��
//		for(i=1;i<=10-j;i++)		//��ÿ������Ҫ10-j�αȽ� ��Ϊÿ�ζ��Ѿ�����������������С���������ں����� �Ͳ�Ҫ�Ƚ���
//			if (a[i] > a[i + 1]) {		//����ǰ����������λ��
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//			}
//	}
//	cout << "the sorted numbers: " << endl;
//	for (i = 1; i < 11; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	return 0;
//}