#include "SoLenLop.h"

void SoLenLop::Nhap(){

	do{
		cout << "Nhap vao Ho ten CBGD: ";
		fflush(stdin);
		getline(cin, hoTen);
		if (hoTen == "") cout << "Khong duoc bo trong!!\n\n";
	} while (hoTen == "");

	do{
		cout << "Nhap ma CBGD: ";
		fflush(stdin);
		getline(cin, maDay);
		if (maDay == "") cout << "Khong duoc bo trong!!\n\n";
	} while (maDay == "");


	do{
		cout << "Nhap vao Khoa: ";
		fflush(stdin);
		getline(cin, Khoa);
		if (Khoa == "") cout << "Khong duoc bo trong!!\n\n";
	} while (Khoa == "");


	do{
		cout << "Nhap vao Bo mon: ";
		fflush(stdin);
		getline(cin, boMon);
		if (boMon == "") cout << "Khong duoc bo trong!!\n\n";
	} while (boMon == "");


	do{
		cout << "Nhap vao nam hoc: ";
		fflush(stdin);
		getline(cin, namHoc);
		if (namHoc == "") cout << "Khong duoc bo trong!!\n\n";
	} while (namHoc == "");

}

void SoLenLop::Xuat(){
	cout << "\t-Ho ten CBGD : " << hoTen << endl;
	cout << "\t-Ma CBGD: " << maDay << endl;
	cout << "\t-Khoa: " << Khoa << endl;
	cout << "\t-Bo mon: " << boMon << endl;
	cout << "\t-Nam hoc :  " << namHoc << endl;
}