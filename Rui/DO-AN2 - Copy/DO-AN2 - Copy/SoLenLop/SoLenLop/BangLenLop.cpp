#include "BangLenLop.h"
#include "windows.h"

void BangLenLop::Nhap(){
	cout << endl;
	do{
		cout << "Nhap ngay len lop: ";
		fflush(stdin);
		getline(cin, ngayLenLop);
		if (ngayLenLop == "") cout << "Khong duoc bo trong\n\n";

	} while (ngayLenLop == "");

	do{
		cout << "Nhap buoi len lop: ";
		fflush(stdin);
		getline(cin, Buoi);
		if (Buoi == "") cout << "Khong duoc bo trong\n\n";
	} while (Buoi == "");

	do{
		cout << "Nhap phong: ";
		fflush(stdin);
		getline(cin, Phong);
		if (Phong == "") cout << "Khong duoc bo trong\n\n";
	} while (Phong == "");


	do{
		cout << "Nhap so tiet LT: ";
		cin >> soTietLT;
		if (soTietLT < 0) cout << "Gia tri nhap vao khong am!!!\n\n";
	} while (soTietLT < 0);


	do{
		cout << "Nhap so tiet TH: ";
		cin >> soTietTH;
		if (soTietTH < 0) cout << "Gia tri nhap vao khong am!!!\n\n";
	} while (soTietTH < 0);


	do{
		cout << "Tom tat noi dung giang day: ";
		fflush(stdin);
		getline(cin, tomTat);
		if (tomTat == "") cout << "Khong duoc bo trong\n\n";
	} while (tomTat == "");


	do{
		cout << "Nhap ten sinh vien vang: ";
		fflush(stdin);
		getline(cin, tenSVVang);
		if (tenSVVang == "") cout << "Khong duoc bo trong\n\n";
	} while (tenSVVang == "");


	do{
		cout << "CBGD (ky ten): ";
		fflush(stdin);
		getline(cin, CBGD);
		if (CBGD == "") cout << "Khong duoc bo trong\n\n";
	} while (CBGD == "");


	do{
		cout << "Dai dien sinh vien (ky ten): ";
		fflush(stdin);
		getline(cin, daiDien);
		if (daiDien == "") cout << "Khong duoc bo trong!!\n\n";
	} while (daiDien == "");



}

void BangLenLop::Xuat()
{
	if (daXoa == false)
	{
		cout << setw(13) << left << ngayLenLop << "\t";
		cout << setw(5) << left << Buoi << "\t";
		cout << setw(8) << left << Phong << "\t";
		cout << setw(2) << left << soTietLT << "\t\t";
		cout << setw(2) << left << soTietTH << "\t\t";
		cout << setw(30) << left << tomTat << "\t";
		cout << setw(20) << left << tenSVVang << "\t";
		cout << setw(13) << left << CBGD << "\t";
		cout << setw(13) << left << daiDien << endl;
	}	
}