#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char hdn[100]="Hoang Duong Nam";
	for (int i = sizeof(hdn);i>=0;i--){
		printf ("%c",hdn[i]);
	}
	return 0;
}
