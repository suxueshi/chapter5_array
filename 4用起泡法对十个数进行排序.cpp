//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	int i, j, t;
//	int a[11];		//用后面十个数 a[0]不用
//	cout << "input 10 numbers: ";
//	for (i = 1; i < 11; i++)	
//		cin >> a[i];	// 从a[1]  输入数字  一直到a[10]
//	cout << endl;
//	for (j = 1; j <=9; j++) {	//一共10个数 需要进行9次起泡法比较才能比完 n个数需要n-1次
//		for(i=1;i<=10-j;i++)		//在每趟中需要10-j次比较 因为每次都已经把最大的数（或者最小的数）放在后面了 就不要比较了
//			if (a[i] > a[i + 1]) {		//调换前后两个数的位置
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