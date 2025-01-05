#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char str[]= "hello   world";
	for (int i =0;i<strlen(str);i++){
		if ((str[i]>=97 && str[i] <=122 && str[i-1]==' ') || i==0 ){
			str[i]-=32;
		}
	}
	printf ("%s",str);
}
