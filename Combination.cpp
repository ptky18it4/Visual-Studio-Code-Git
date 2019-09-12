#include<iostream>
#include<math.h>
using namespace std;
int a[100]; // bien toan cuc, gia tri cua mang mac dinh = 0
int n ; // so bit

void inCauHinh(int a[], int n)
{
	for(int i = 0; i <n; i++ )
	cout << a[i];
	cout << endl;
}
void datBang0( int a[], int n, int vt)
{
	for(int i = vt; i < n; i++)
	a[i] = 0;
}

//VD: 1011 + 1 = 1100
void sinhChuoiNhiPhan(int a[], int n)
{
	inCauHinh(a,n); // in cau hinh dua tien
	int i = n - 1;
	while(i > 0)
	{
		if(a[i] == 1)
		i--;
		if(a[i] == 0 )
		{
			a[i] = 1;
			datBang0(a,n,i+1);
			inCauHinh(a,n);
			i = n - 1; // cai nay rat quan trong nhe, sau khi duyet het thi can phai reset lai i = n-1 de no duyet lai tu dau
		}
	}
}
int main()
{
	cout << "Nhap n : ";
	cin >> n;
	sinhChuoiNhiPhan(a,n);
	return 0;
}

