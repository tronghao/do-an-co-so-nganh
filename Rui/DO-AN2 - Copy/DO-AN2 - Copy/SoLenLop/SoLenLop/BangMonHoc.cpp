#include "BangMonHoc.h"

void BangMonHoc::Nhap(){
	cout << endl;


	do{
		cout << "Nhap bang ghi hoc ky: ";
		fflush(stdin);
		getline(cin, bangGhi);
		if (bangGhi == "") cout << "Khong duoc bo trong!!\n\n";
	} while (bangGhi == "");


	do{
		cout << "Nhap nam hoc: ";
		fflush(stdin);
		getline(cin, namHoc);
		if (namHoc == "") cout << "Khong duoc bo trong!!\n\n";
	} while (namHoc == "");


	do{
		cout << "Nhap Ma mon hoc: ";
		fflush(stdin);
		getline(cin, maMH);
		if (maMH == "") cout << "Khong duoc bo trong!!\n\n";
	} while (maMH == "");


	do{
		cout << "Nhap nhom: ";
		fflush(stdin);
		getline(cin, Nhom);
		if (Nhom == "") cout << "Khong duoc bo trong!!\n\n";
	} while (Nhom == "");


	do{
		cout << "Nhap so tiet LT: ";
		cin >> soTietLT;
		if (soTietLT < 0) cout << "So tiet khong am!!!\n";
	} while (soTietLT < 0);

	do
	{
		cout << "Nhap so tiet TH: ";
		cin >> soTietTH;
		if (soTietTH < 0) cout << "So tiet khong am!!!\n";
	} while (soTietTH < 0);


	do{
		cout << "Nhap ten mon hoc: ";
		fflush(stdin);
		getline(cin, tenMonHoc);
		if (tenMonHoc == "") cout << "Khong duoc bo trong!!\n\n";
	} while (tenMonHoc == "");


	do{
		cout << "Nhap ma lop: ";
		fflush(stdin);
		getline(cin, maLop);
		if (maLop == "") cout << "Khong duoc bo trong!!\n\n";
	} while (maLop == "");

	cout << "\nNhap so ngay day: ";
	
	cin >> soLuongBangLenLop;
	int tong;
	for (int i = 1; i <= soLuongBangLenLop; i++)
	{
		lamlai:
		tong = 0;
		cout << "\nNgay day thu: " << i;
		bangLenLop[i].Nhap();
		for (int j = 1; j <= i; j++)
		{
			tong += bangLenLop[j].soTietLT + bangLenLop[j].soTietTH;
		}
		if (tong > soTietLT + soTietTH)
		{
			cout << "\nTong so tiet LT va TH cua ngay day vuot qua tong so tiet LT va TH cua BangMonHoc!!\nVui long nhap lai!!!\n\n";
			goto lamlai;
		}
	}
}

void BangMonHoc::Xuat()
{
	if (daXoa == false){
		cout << "\n------------------------------------------------------------\n";
		cout << "\n\nBANG GHI TOM TAT NOI DUNG GIANG DAY HOC KI  " << bangGhi << "  NAM  " << namHoc << endl;
		cout << "\t-Ma MH: " << maMH << endl;
		cout << "\t-Nhom: " << Nhom << endl;
		cout << "\t-So tiet LT: " << soTietLT << endl;
		cout << "\t-So tiet TH: " << soTietTH << endl;
		cout << "\t-Ten mon hoc: " << tenMonHoc << endl;
		cout << "\t-Ma lop (theo TKB): " << maLop << endl;

		cout << endl;
		cout << setw(13) << left << "NGAY LEN LOP" << "\t";
		cout << setw(5) << left << "BUOI" << "\t";
		cout << setw(8) << left << "PHONG" << "\t";
		cout << setw(2) << left << "TIET LT" << "\t\t";
		cout << setw(2) << left << "TIET TH" << "\t\t";
		cout << setw(30) << left << "TOM TAT NOI DUNG GIANG DAY" << "\t";
		cout << setw(20) << left << "TEN SINH VIEN VANG" << "\t";
		cout << setw(5) << left << "CBGD(ky ten)" << "\t";
		cout << setw(5) << left << "DAI DIEN SINH VIEN" << endl;
		for (int i = 1; i <= soLuongBangLenLop; i++)
		{
			bangLenLop[i].Xuat();
		}
	}
	
	
}
