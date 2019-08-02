#pragma once
//#include "SoLenLop.h"
#include "iostream"
#include "string"
#include "BangLenLop.h"

using namespace std;

class BangMonHoc
{
public:

	string bangGhi;
	string namHoc;
	string maMH;
	string Nhom;
	int soTietLT, soTietTH;
	string tenMonHoc;
	string maLop;
	BangLenLop bangLenLop[20];
	int soLuongBangLenLop;
	bool daXoa = false;
public:
	void Nhap();
	void Xuat();

};

