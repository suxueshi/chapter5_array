//#include<iostream>
//#include<string>	//��Ҫ�ַ�������ʱ�� ͷ�ļ���Ҫ��Ҫ����
//using namespace std;
//string name[50], num[50]; //  ���������ַ������飬���������ѧ�ţ�ע���ַ������鸳ֵʱ�����á�=��,���Ƕ����ʱ���ֱ�ӳ�ʼ������strcpy��ר�õ��ַ������������
//int n;					//ʵ�ʵ�ѧ����n		���������������鶼�Ƕ���Ϊȫ�ֱ���
//int main() {
//	void input_data();
//	void search();		//��������		
//	string find_name;			//�����ַ���������find_name ��Ҫ�ҵ�ѧ��
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
//		cin >> name[i] >> num[i];// ����n��ѧ����������ѧ��
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