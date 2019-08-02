#pragma once
#include "iostream"
#include "string"
#include "BangMonHoc.h"
using namespace std;

class SoLenLop
{
public:
	string hoTen;
	string maDay;
	string Khoa;
	string boMon;
	string namHoc;
	BangMonHoc QLMH[10];
	int sLuong;
public:
	void Nhap();
	void Xuat();
};

