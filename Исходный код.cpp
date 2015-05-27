# -#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void main()
{ 
	setlocale(0, "Russian");
	cout<<"Кол-во:";
int n;
cin>>n;
int *a=(int*)malloc(n*sizeof(int));
for (int i=0; i<n; i++)
	cin>>a[i];
cout<<"\n до сортировки\n";
for (int i=0; i<n; i++)
	cout<<" "<<a[i];
cout<<"\n после сортировки\n";
for (int j=0; j<(n-1); j++)
	for (int i=0; i<(n-1-j); i++)
		{ 
		int e;
		if (a[i]>a[i+1]) 
		{
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
		}
	}
for (int i=0; i<n; i++)
	cout<<" "<<a[i];
//_getche();
system("pause");
}
