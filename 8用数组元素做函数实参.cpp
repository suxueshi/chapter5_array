//#include<iostream>
//#include<iomanip>
//using namespace std;
//int max_value(int, int);
//int main() {
//	int i, j, row = 0, colum = 0, max;  //  ��row colum��ֵ0��ԭ������һ��ֵ�������ֵ ����������Ǹ���Max����ֵ�Ƕ�Ӧ��
//	int a[3][4] = { {5,12,36,56},{19,28,37,46},{-12,-34,6,8} };
//	max = a[0][0];// �Ƚ��׸�ֵ����max
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			max = max_value(a[i][j], max);			//��max ��a[i][j]�д���ֵ���ظ���max  //�������������Ԫ��������ʵ��
//			if (max == a[i][j]) {					//���max=a[i][j]��Ҳ���������a[i][j]��  ���¼���е��к���
//				row = i;
//				colum = j;
//			}
//		}
//	}
//	cout << "the max number is:" << max << endl;
//	cout << "the row is: " << row << endl;
//	cout << "the colum is: " << colum << endl;
//	return 0;
//}
//int max_value(int x, int max) {
//	if (x > max) return x;
//	else return max;
//}