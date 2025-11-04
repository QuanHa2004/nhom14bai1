#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b){
	int kq =0;
	if(b==0)
		return 0;
	return a/b;
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	cout<<"Tich cua 2 so: "<<tich(1,2);
	system("pause");
	return 0;
}