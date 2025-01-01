#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char nhap_chuoi[100];
	fgets (nhap_chuoi,sizeof(nhap_chuoi),stdin);
	fputs (nhap_chuoi,stdout);
	int n = strlen(nhap_chuoi);
	printf ("\nDo dai cua chuoi la: %d",n);
	return 0;
}
