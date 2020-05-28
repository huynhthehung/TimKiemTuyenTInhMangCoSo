// TimKiemTuyenTInhMangCoSo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void NhapMang(int M[], int n);
void XuatMang(int M[], int n);
int TimKiemTuyenTinh(int M[], int n, int x);

int main()
{
	const int n = 10;
	int M[n];
	int x;
	NhapMang(M, n);
	cout << "Mang sau khi nhap ngau nhien la: \n";
	XuatMang(M, n);
	cout << "\nNhap so can timm: ";
	cin >> x;
	int kq = TimKiemTuyenTinh(M, n, x);
	if (kq == -1)
		cout << "Khong thay " << x << " trong mang";
	else
		cout << "Thay " << x << " tai vi tri " << kq;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void NhapMang(int M[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		M[i] = rand() % 100;
}

void XuatMang(int M[], int n)
{
	for (int i = 0; i < n; i++)
		cout << M[i] << "\t";
}

int TimKiemTuyenTinh(int M[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (M[i] == x)
			return i;
	return -1;
}
