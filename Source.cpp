#include <iostream>

using namespace std;
int tong(int a, int b){
	return a + b;
}
int tich(int a, int b){
	int kq =0;
	if(b==0)
		return 0;
	return a/b;
}
int hieu(int a, int b)
{
	return a-b;
};
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout<<"Tong =" << tong(6,4);

	cout<<"Tong =";

	cout<<"Tich cua 2 so: "<<tich(1,2);

	cout<<"Hieu cua hai so "<<5<<" "<<6<<" la: "<<hieu(5,6);

	system("pause");
	return 0;
}