#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char str[] = "hello world";
	char kt;
	printf ("Nhap ky tu can xoa: ");
	scanf ("%c",&kt);
// Code tu lam luc dau
//	for (int i =0; i<strlen(str);i++){
//		if (str[i]==kt){
//			for (int j=i;j<strlen(str);j++){
//				str[j]=str[j+1];
//			}
//		}
//	}
	// Cach thay Hung huong dan va tu viet code theo huong dan cua thay Hung
	int j=0;
	for (int i=0; i<strlen(str);i++){
		if (str[i] != kt){
			str[j++]=str[i];
		}
	}
	str[j]='\0';
	printf ("%s",str);
	return 0;
}
