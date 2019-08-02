#pragma once
#include "SoLenLop.h"
#include "BangMonHoc.h"
#include "BangLenLop.h"
#include "windows.h"

using namespace std;
int main()
{
	int x, n, chiSoSoLenLop;
	SoLenLop s1[20];
	cout << "Nhap so luong So Len Lop: ";
	cin >> n;
	do
	{
		system("cls");

		for (int i = 1; i <= n; i++)
		{
			cout << "\n" << i <<  ".So len lop " << i;
		}
		cout << "\n" << n+1 << ".Thong ke tong tung so";
		cout << "\n" << n + 2 << ".Tong so tiet cac so";
		cout << "\n0. Exit\n";
	
		do{
			cout << "\nLua chon: ";
			cin >> chiSoSoLenLop;
		} while (chiSoSoLenLop < 0 || chiSoSoLenLop > n + 2);

		if (chiSoSoLenLop == 0)
		{
			continue;
		}
		else if (chiSoSoLenLop == n + 1)
		{

			int tong[20];
			int tongLT[20];
			int tongTH[20];
			for (int i = 1; i <= n; i++)
			{
				tong[i] = 0;
				tongLT[i] = 0;
				tongTH[i] = 0;
			}
			for (int k = 1; k <= n; k++){

				for (int i = 1; i <= s1[k].sLuong; i++)
				{
					for (int j = 1; j <= s1[k].QLMH[i].soLuongBangLenLop; j++)
					{
						tong[k] += s1[k].QLMH[i].bangLenLop[j].soTietLT + s1[k].QLMH[i].bangLenLop[j].soTietTH;
						tongLT[k] += s1[k].QLMH[i].bangLenLop[j].soTietLT;
						tongTH[k] += s1[k].QLMH[i].bangLenLop[j].soTietTH;
					}
				}

			}
			for (int k = 1; k <= n; k++){
				cout << "\n------------------------------------\n";
				cout << "\n\nSo thu: " << k << endl;
				cout << "\nTong so tiet LT va TH cua tat ca cac so vua nhap la: " << tong[k];
				cout << "\nTrong do:\nSo tiet LT: " << tongLT[k];
				cout << "\nSo tiet TH: " << tongTH[k] << endl;
			}
			
			system("pause");
		}
		else if (chiSoSoLenLop == n + 2)
		{
			int tong[20];
			int tongLT[20];
			int tongTH[20];
			for (int i = 1; i <= n; i++)
			{
				tong[i] = 0;
				tongLT[i] = 0;
				tongTH[i] = 0;
			}
			for (int k = 1; k <= n; k++){

				for (int i = 1; i <= s1[k].sLuong; i++)
				{
					for (int j = 1; j <= s1[k].QLMH[i].soLuongBangLenLop; j++)
					{
						tong[k] += s1[k].QLMH[i].bangLenLop[j].soTietLT + s1[k].QLMH[i].bangLenLop[j].soTietTH;
						tongLT[k] += s1[k].QLMH[i].bangLenLop[j].soTietLT;
						tongTH[k] += s1[k].QLMH[i].bangLenLop[j].soTietTH;
					}
				}

			}
			
			int TONG = 0;
			int TONGLT = 0;
			int TONGTH = 0;
			for (int i = 1; i <= n; i++){
				TONG += tong[i];
				TONGLT += tongLT[i];
				TONGTH += tongTH[i];
			}
			cout << "Tong tat ca so tiet LT va TH cua cac so: " << TONG << endl;
			cout << "Tong LT tat ca cac so la: " << TONGLT << endl;
			cout << "Tong TH tat ca cac so la: " << TONGTH << endl;
			
				system("pause");
		}
		else {

			do{
				system("cls");
				cout << "\n\t---MENU---\n\n";
				cout << "1.Nhap thong tin SO LEN LOP\n";
				cout << "2.Nhap thong tin BANG MON HOC\n";
				cout << "3.In ket qua\n";
				cout << "4.In toan bo thong tin\n";
				cout << "5.Thong ke\n";
				cout << "6.Them BANG MON HOC \n";
				cout << "8.Sua BANG MON HOC\n";
				cout << "9.Xoa BANG MON HOC\n";
				cout << "0.Thoat\n";

				cout << "Lua chon: ";
				cin >> x;
				switch (x)
				{
				case 9:
				{
						  int chiSoBangMonHocCanXoa;
						  for (int i = 1; i <= s1[chiSoSoLenLop].sLuong; i++)
						  {
							  cout << "\n" << i << ".Bang Mon Hoc " << i;
							  if (s1[chiSoSoLenLop].QLMH[i].daXoa == true)
								  cout << "\tda xoa";
						  }
						  do{
							  cout << "\nChon BANG MON HOC can xoa: ";
							  cin >> chiSoBangMonHocCanXoa;
						  } while (chiSoBangMonHocCanXoa < 0 || chiSoBangMonHocCanXoa > s1[chiSoSoLenLop].sLuong);
						  s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanXoa].daXoa = true;
				}break;
				case 0: break;
				case 6:{
						   cout << "Nhap thong tin can them vao: ";
						   s1[chiSoSoLenLop].QLMH[s1[chiSoSoLenLop].sLuong + 1].Nhap();
						   s1[chiSoSoLenLop].sLuong += 1;

				}break;
				case 8:{
						   int chiSoBangMonHocCanSua;
						   for (int i = 1; i <= s1[chiSoSoLenLop].sLuong; i++)
						   {
							   cout << "\n" << i << ".Bang Mon Hoc " << i;
							   if (s1[chiSoSoLenLop].QLMH[i].daXoa == true)
								   cout << "\tDa Xoa";
						   }
						   do{
							   cout << "\nChon BANG MON HOC can sua: ";
							   cin >> chiSoBangMonHocCanSua;
						   } while (chiSoBangMonHocCanSua < 0 || chiSoBangMonHocCanSua > s1[chiSoSoLenLop].sLuong);
						   if (s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].daXoa == true)
						   {
							   cout << "\nBANG DA DUOC XOA!!!!\n";
						   }
						   else
						   {
							   s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].Xuat();
							   int thongTinMuonSua;
							   do{
								   cout << "\n\n\n\nChon thong tin can sua!!\n";
								   cout << "1.Ma MH " << endl;
								   cout << "2.Nhom " << endl;
								   cout << "3.So tiet LT " << endl;
								   cout << "4.So tiet TH " << endl;
								   cout << "5.Ten mon hoc " << endl;
								   cout << "6.Ma lop (theo TKB) " << endl;
								   cout << "7.Them vao Ngay Day.\n";
								   cout << "8.Sua Ngay Day.\n";
								   cout << "9.Xoa Ngay Day.\n";
								   cout << "Lua chon: ";
								   cin >> thongTinMuonSua;

							   } while (thongTinMuonSua < 1 || thongTinMuonSua > 9);
							   switch (thongTinMuonSua)
							   {
							   case 1:
							   {
										 cout << "\nNhap thong tin Ma MH can sua: ";
										 fflush(stdin);
										 getline(cin, s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].maMH);

							   }break;

							   case 2:
							   {
										 cout << "\nNhap thong tin Nhom can sua: ";
										 fflush(stdin);
										 getline(cin, s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].Nhom);
							   }break;
							   case 3:
							   {
										 cout << "\nNhap thong tin so tiet LT can sua: ";

										 cin >> s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soTietLT;
							   }break;
							   case 4:
							   {
										 cout << "\nNhap thong tin so tiet TH can sua: ";

										 cin >> s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soTietTH;
							   }break;
							   case 5:
							   {
										 cout << "\nNhap thong tin Ten MH can sua: ";
										 fflush(stdin);
										 getline(cin, s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].tenMonHoc);
							   }break;
							   case 6:
							   {
										 cout << "\nNhap thong tin Ma Lop can sua: ";
										 fflush(stdin);
										 getline(cin, s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].maLop);
							   }break;
							   case 7:
							   {
										 cout << "Nhap thong tin can them vao: ";
										 int phanTuKeCuoiCung = s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soLuongBangLenLop + 1;
										 s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].bangLenLop[phanTuKeCuoiCung].Nhap();
										 s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soLuongBangLenLop += 1;
							   }break;

							   case 8:
							   {
										 int chiSoNgayDayCanSua;
										 system("cls");
										 cout << "0.Thoat";
										 for (int i = 1; i <= s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soLuongBangLenLop; i++)
										 {
											 cout << "\n" << i << ". Ngay Day " << i;
											 if (s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].bangLenLop[i].daXoa == true)
												 cout << "\t da xoa";
										 }
										 do
										 {
											 cout << "\nXoa:";
											 cin >> chiSoNgayDayCanSua;
											 if (chiSoNgayDayCanSua < 0 || chiSoNgayDayCanSua > s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soLuongBangLenLop)
												 cout << "\tKhong hop le!";
										 } while (chiSoNgayDayCanSua < 0 || chiSoNgayDayCanSua > s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soLuongBangLenLop);

										 if (chiSoNgayDayCanSua == 0)
											 break;
										 else
										 {
											 int thongTinNgayDayMuonSua;
											do{
												 cout << "Chon thong tin Ngay Day can sua!!!\n ";
												 cout << "1.NGAY LEN LOP" << endl;
												 cout << "2.BUOI" << endl;
												 cout << "3.PHONG" << endl;
												 cout << "4.TIET LT" << endl;
												 cout << "5.TIET TH" << endl;
												 cout << "6.TOM TAT NOI DUNG GIANG DAY" << endl;
												 cout << "7.TEN SINH VIEN VANG" << endl;
												 cout << "8.CBGD(ky ten)" << endl;
												 cout << "9.DAI DIEN SINH VIEN" << endl;
												 cout << "0.Thoat\n";
												
												 cout << "\nSua:";
												 cin >> thongTinNgayDayMuonSua;
												 if (thongTinNgayDayMuonSua < 0 || thongTinNgayDayMuonSua > 9)
													 cout << "\tKhong hop le!";
											 } while (thongTinNgayDayMuonSua < 0 || thongTinNgayDayMuonSua > 9);

											 
										
											switch(thongTinNgayDayMuonSua)
											 {
												case 1:
												{
														  cout << "\nNhap thong tin ngay len lop can sua: ";
														  fflush(stdin);
														  getline(cin,s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].bangLenLop[chiSoNgayDayCanSua].ngayLenLop);
												}break;
											 }
											 
										
										 }
										 
										
							   }break;
						

							   case 9:
							   {
										 int chiSoNgayDayCanXoa;
										 system("cls");
										 cout << "0.Thoat";
										 for (int i = 1; i <= s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soLuongBangLenLop; i++)
										 {
											 cout << "\n" << i << ". Ngay Day " << i;
											 if (s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].bangLenLop[i].daXoa == true)
												 cout << "\t da xoa";
										 }
										 do 
										 {
											 cout << "\nXoa:";
											 cin >> chiSoNgayDayCanXoa;
											 if (chiSoNgayDayCanXoa < 0 || chiSoNgayDayCanXoa > s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soLuongBangLenLop)
												 cout << "\tKhong hop le!";
										 } while (chiSoNgayDayCanXoa < 0 || chiSoNgayDayCanXoa > s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].soLuongBangLenLop);
										 if (chiSoNgayDayCanXoa == 0)
											 break;
										 else
										 {
											s1[chiSoSoLenLop].QLMH[chiSoBangMonHocCanSua].bangLenLop[chiSoNgayDayCanXoa].daXoa = true;
										 }
										 
										 system("pause");
							   }break;
							   default:
								   cout << "\nVui long nhap lai!!!\n";
								   break;
							   }
						   }
						 
						   
						   system("pause");
				}break;
			
				case 5:

				{
						  int tong = 0;
						  int tongLT = 0;
						  int tongTH = 0;
						  for (int i = 1; i <= s1[chiSoSoLenLop].sLuong; i++)
						  {
							  for (int j = 1; j <= s1[chiSoSoLenLop].QLMH[i].soLuongBangLenLop; j++)
							  {
								  tong += s1[chiSoSoLenLop].QLMH[i].bangLenLop[j].soTietLT + s1[chiSoSoLenLop].QLMH[i].bangLenLop[j].soTietTH;
								  tongLT += s1[chiSoSoLenLop].QLMH[i].bangLenLop[j].soTietLT;
								  tongTH += s1[chiSoSoLenLop].QLMH[i].bangLenLop[j].soTietTH;
							  }

						  }
						  cout << "Tong so tiet LT va TH:" << tong;
						  cout << "\nTrong do:\nTong so tiet LT: " << tongLT;
						  cout << "\nTong so tiet TH: " << tongTH << endl;
						  system("pause");
				}break;
				case 1:
				{

						  system("cls");
						  cout << "\n\t\tNHAP THONG TIN SO LEN LOP\n\n";
						  s1[chiSoSoLenLop].Nhap();
						  system("pause");
				}break;
				case 2:
				{

						  system("cls");
						  cout << "\n\t\tNHAP THONG TIN BANG MON HOC\n\n";
						  cout << "Nhap so luong bang mon hoc: ";
						  cin >> s1[chiSoSoLenLop].sLuong;
						  for (int i = 1; i <= s1[chiSoSoLenLop].sLuong;  i++)
						  {
							  cout << "\nNhap vao Bang mon hoc thu: " << i;
							  s1[chiSoSoLenLop].QLMH[i].Nhap();
							 
						  }
						  system("pause");

				}break;
				case 4:
				{
						  cout << "\n\n\t\tSO LEN LOP\n";
						  s1[chiSoSoLenLop].Xuat();
						  cout << "\n\n\tTHONG TIN BANG LEN LOP\n";
						  for (int i = 1; i <= s1[chiSoSoLenLop].sLuong; i++)
							  s1[chiSoSoLenLop].QLMH[i].Xuat();
						  system("pause");

				}break;
				case 3:
				{
						  int z;
						  do{
							  system("cls");
							  cout << "31.Xuat thong tin SO LEN LOP\n";
							  cout << "32.Xuat thong tin BANG MON HOC\n";
							  cout << "33.Quay lai\n";
							  cout << "Lua chon ";
							  cin >> z;
							  switch (z)
							  {
							  case 31:
							  {
										 system("cls");
										 cout << "\n\t\tXUAT THONG TIN SO LEN LOP\n\n";
										 s1[chiSoSoLenLop].Xuat();
										 system("pause");
							  }break;
							  case 32:
							  {
										 system("cls");
										 cout << "\n------------------------------------------------------------\n";
										 cout << "\n\n\t\tXUAT THONG TIN BANG MON HOC\n\n";
										 for (int i = 1; i <= s1[chiSoSoLenLop].sLuong; i++)
											 s1[chiSoSoLenLop].QLMH[i].Xuat();
										 system("pause");
							  }break;
							  case 33: break;

							  default:
								  cout << "Vui long lua chon lai!!\n";
								  break;
							  }
						  } while (z != 33);
				}break;
				default:
					cout << "Vui long nhap lai!!!\n";
					system("pause");
					break;

				}

			} while (x != 0);

		}
	
	
	
	}while (chiSoSoLenLop != 0);

	

	return 0;

}