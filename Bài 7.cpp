#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char str[]="Hom nay la ngay 2/1/2025, bay gio la 8:45AM";
	int so=0,ky_tu=0,ktdb=0;
	for (int i =0; i<strlen(str);i++){
		if (( str[i]>=97 && str[i]<=122) || ( str[i]>=65 && str[i]<=90)){
			ky_tu++;
		}
		else if ((str[i]>='0'&&str[i]<='9')){
			so++;
		}
		else {
			ktdb++;
		}
	}
	printf ("So luong chu cai trong chuoi la: %d\nSo luong so trong chuoi la: %d\nSo luong ky tu dac biet trong chuoi la:%d\n",ky_tu,so,ktdb);
	return 0;
}
