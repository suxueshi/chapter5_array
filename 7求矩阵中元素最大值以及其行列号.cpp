//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int i, j, row = 0, colum = 0, max;  //  给row colum赋值0的原因是万一首值就是最大值 这个跟下面那个给Max赋初值是对应的
//	int a[3][4] = { {5,12,36,56},{19,28,37,46},{-12,-34,6,8} };
//	max = a[0][0];// 先将首个值赋给max
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			if (a[i][j] > max) {  //如果大于 max 就重新赋值 并且记录行列值
//				max = a[i][j];
//				row = i;
//				colum = j;
//			}
//
//		}
//	}
//	cout << "the max number is:" << max << endl;
//	cout << "the row is: " << row << endl;
//	cout << "the colum is: " << colum << endl;
//	return 0;
//}