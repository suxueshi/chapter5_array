//#include<iostream>
//#include<iomanip>
//using namespace std;
//int max_value(int, int);
//int main() {
//	int i, j, row = 0, colum = 0, max;  //  给row colum赋值0的原因是万一首值就是最大值 这个跟下面那个给Max赋初值是对应的
//	int a[3][4] = { {5,12,36,56},{19,28,37,46},{-12,-34,6,8} };
//	max = a[0][0];// 先将首个值赋给max
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			max = max_value(a[i][j], max);			//将max 和a[i][j]中打大的值返回赋给max  //这里就是用数组元素做函数实参
//			if (max == a[i][j]) {					//如果max=a[i][j]，也就是如果是a[i][j]大  则记录其中的行和列
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