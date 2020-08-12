//#include<iostream>
//#include<string>	//需要字符串操作时候 头文件需要需要包含
//using namespace std;
//string name[50], num[50]; //  定义两个字符串数组，存放姓名和学号，注意字符串数组赋值时候不能用“=”,除非定义的时候就直接初始化，有strcpy等专用的字符数组操作函数
//int n;					//实际的学生数n		这变量和上面的数组都是定义为全局变量
//int main() {
//	void input_data();
//	void search();		//函数声明		
//	string find_name;			//定义字符串变量，find_name 是要找的学生
//	cout << "please input the number of this class: ";
//	cin >> n;
//	input_data();
//	search();
//	return 0;
//}
//void input_data() {
//	int i;
//	for (i = 0; i < n; i++) {
//		cout << "input name and NO. of student" << i + 1 << ": ";
//		cin >> name[i] >> num[i];// 输入n个学生的姓名和学号
//	}
//}
//void search() {
//	string find_name;
//	cout << "please input the name you want to find: ";
//	int i;
//	bool flag = false;
//	while (flag==false) {
//		cin >> find_name;
//		for (i = 0; i < n; i++)
//			if (name[i] == find_name) {
//				cout << name[i] << "has been find, his number is " << num[i] << endl;
//				flag = true;
//				break;
//			}
//		if (flag == false) cout << "can't find this name, please input again: ";
//	}
//}