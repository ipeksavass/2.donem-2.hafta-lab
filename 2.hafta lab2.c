#include <stdio.h>
#include <stdlib.h>
#define dizim 100
int maxf(int[]);
int boyut;
int main(){
	int dizi[dizim],boyut,i,maxSay;
	
	printf("dizi icin eleman sayisi giriniz:");   scanf("%d",&boyut);
	for(i=0;i<boyut;i++)
	{
		printf("dizinin %d. elemani:",&i+1);
		scanf("%d",&dizi[i]);
	}
	
	maxSay = maxf(dizi);
	
	printf("dizinin en buyuk sayisi=",maxSay);
	
	return 0;
}

int maxf(int a[]){
	static int i=0, maxSay=-9999;
	if(i < boyut){
		if(a[i]>maxSay)
			maxSay = a[i];
		i++;
		maxf(a);
	}
	return maxSay;
}
