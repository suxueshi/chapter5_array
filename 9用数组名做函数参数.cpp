//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	void select_sort(int array[], int n);	//用数组名做函数参数时候，是将实参数组首元素的地址传递给形参
//	int a[10], i;
//	cout << "enter the originl array: ";
//	for(i=0;i<10;i++)
//		cin >> a[i];
//	cout << endl;
//	select_sort(a, 10);					// 把数组名a的首元素的地址传递给形参
//	cout << "the sorted array: " << endl;
//	for (i = 0; i < 10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	return 0;
//}
//void select_sort(int array[], int n) {	//擂台法  在写调用函数的时候  这里的形参array就是数组名 也可以不用array	 下面那个是参考答案选择法
//	int i, j, k;
//	for (i = 0; i < n - 1; i++) {			//有几个数就比较N-1次
//		for (j = i + 1; j < n; j++) {
//			if (array[j] < array[i]) {		//从小到达排列
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
////void select_sort(int array[], int n) {	//在写调用函数的时候  这里的形参array就是数组名 也可以不用array
////	int i, j, k,t;
////	for (i = 0; i < n - 1; i++) {			//有几个数就比较N-1次
////		k = i;
////		for (j = i + 1; j < n; j++)		//选择法 第一轮最小的数放在第一个  然后第二轮放在第二个以此类推
////			if (array[j] < array[k]) 	//从小到达排列
////				k = j;
////		t = array[k];		
////		array[k] = array[i];
////		array[i] = t;
////
////	}
////
////}