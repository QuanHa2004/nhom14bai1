#include <iostream>

using namespace std;
int tong(int a, int b){
	return a + b;
}
int hieu(int a, int b);
int tong(int a, int b);
int hieu(int a, int b)
{
	return a-b;
};
int tich(int a, int b);
float thuong(int a, int b);

bool kiemTraSoHoanThien(int n){
	int sum =0;
	for(int i=0;i<n:i++)
		if(n%i==0)
			sum+=i;
		
	if(sum==count)
		return true;
	return false;
	
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout<<"Tong =" << tong(6,4);

	cout<<"Tong =";
	cout<<"Hieu cua hai so "<<5<<" "<<6<<" la: "<<hieu(5,6);
	if(kiemTraSoHoanThien(6)) cout << " 6 la so hoan thien";
	system("pause");
	return 0;
}