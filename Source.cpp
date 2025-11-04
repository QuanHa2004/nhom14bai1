#include <iostream>

using namespace std;

int taoLuaChonNgauNhien() {
    return rand() % 3;  // 0: Búa, 1: Bao, 2: Kéo
}

// Hàm để in ra lựa chọn của máy tính
void inLuaChon(int choice) {
    if (choice == 0) cout << "Bua" << endl;
    else if (choice == 1) cout << "Bao" << endl;
    else cout << "Keo" << endl;
}

// Hàm để so sánh lựa chọn của người dùng và máy tính
void soKeoVoiMayTinh(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        cout << "Hòa!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        cout << "Bạn thắng!" << endl;
    } else {
        cout << "Máy tính thắng!" << endl;
    }
}



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

	// Khởi tạo ngẫu nhiên
    srand(time(0));

    int userChoice;
    cout << "Chọn một trong ba (0: Bua, 1: Bao, 2: Keo): ";
    cin >> userChoice;

    // Kiểm tra lựa chọn hợp lệ
    if (userChoice < 0 || userChoice > 2) {
        cout << "Lựa chọn không hợp lệ! Vui lòng chọn lại!" << endl;
        return 1;
    }

    // Lấy lựa chọn của máy tính
    int computerChoice = getComputerChoice();
    cout << "Máy tính chọn: ";
    inLuaChon(computerChoice);

    // So sánh kết quả
    soKeoVoiMayTinh(userChoice, computerChoice);

	system("pause");
	return 0;
}