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

int ucln(int a,int b){
	int ucln=0;
	if (a>b)
	{
		for(int i =0; i<=b;i++)
		{
			if(a%i==0&&b%i==0)
				ucln=i;
		}
	}
	else{
		
		for(int i =0; i<=a;i++)
		{
			if(a%i==0&&b%i==0)
				ucln=i;
		}
	}
	return ucln;
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

	cout<<"Tich cua 2 so: "<<tich(1,2);

	cout<<"Hieu cua hai so "<<5<<" "<<6<<" la: "<<hieu(5,6);


	cout<<"uoc chung lon nhat cua 100 va  10 la "<<ucln(100,10);

	if(kiemTraSoHoanThien(6)) cout << " 6 la so hoan thien";
	system("pause");
	return 0;
}