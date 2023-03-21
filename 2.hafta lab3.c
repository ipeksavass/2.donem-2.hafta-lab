#include <stdio.h>
#include <stdlib.h>
int basTop(int);
int main(){
	int number,sum;
	printf("bir sayi giriniz:");
	scanf("%d",&number);
	sum = basTop(number);
	printf("%d",sum);
	return 0;
}

int basTop(int x){
	if(x>0)
		return x%10 + basTop(x/10);
		
	else
		return x;
}
