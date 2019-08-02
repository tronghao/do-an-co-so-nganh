#pragma once
#include "iostream"
#include "string"
#include "iomanip"
using namespace std;

class BangLenLop
{
public:
	string ngayLenLop, Buoi, Phong, tomTat, tenSVVang, CBGD, daiDien;
	int soTietLT, soTietTH;
	bool daXoa = false;
public:
	void Nhap();
	void Xuat();
};

