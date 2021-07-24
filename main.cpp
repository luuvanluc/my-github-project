#include <iostream>
#include "HinhChuNhat.h"

using namespace std;

int main()
{
	HinhChuNhat hcn;
	float chieuDai = 5;
	float chieuRong = 3;
	// Nap chieu dai va chieu rong hinh chu nhat
	cout << "Nhap chieu dai hinh chu nhat: ";
	cin >> chieuDai;
	cout << "Nhap chieu rong hinh chu nhat: ";
	cin >> chieuRong; 
	hcn.setChieuDai(chieuDai);
	hcn.setChieuRong(chieuRong);
	float chuVi = hcn.tinhChuVi();
	float dienTich = hcn.tinhDienTich();
	cout << "Hinh chu nhat co chieu dai " << chieuDai << " va chieu rong " << chieuRong << ":" << endl;
	cout << "Dien tich hinh chu nha la : " << dienTich << endl;
	cout << "Chu vi hinh chu nhat la : " << chuVi << endl;
	return 0;
}
