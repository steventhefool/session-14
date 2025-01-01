#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char ky_tu, ckt[]= "Hom nay la ngay dau tien cua nam moi, em xin gui loi chuc tot dep nhat toi cac quy thay/co mot nam moi binh an va nhieu suc khoe a!";
	printf ("Nhap vao mot ky tu can kiem tra tan suat xuat hien trong chuoi ky tu: ");
	scanf ("%c",&ky_tu);
	int cnt=0;
	for (int i=0;i<strlen(ckt);i++){
		if (ckt[i] == ky_tu){
			cnt++;
		}
	}
	printf ("So lan xuat hien ky tu %c la: %d", ky_tu, cnt);
	return 0;
}
