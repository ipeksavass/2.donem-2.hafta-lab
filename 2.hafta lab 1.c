#include <stdio.h>
int sum(int);
int main(){
	int N,sonuc;
	printf("N e bir deger veriniz:");  scanf("%d",&N);
	sonuc = sum(N);
	printf("%d",sonuc);
	return 0;
	
}

int sum(int a){
	if(a!=0)
		return a + sum(a-1);
	else
		return a;
}
