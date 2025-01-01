#include <stdio.h>
#include <string.h>
using namespace std;
int main (){
	char str[100]="Hoang Duong Nam";
	for (int i=0;i<=sizeof(str);i++){
		printf ("%c ",str[i]);
	}
	return 0;
}
