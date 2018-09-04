#include<stdio.h>
void main(){
	int arr[30],i,n;
	scanf("%d",&n);
	for(i=0;i<30;i=i+2){
		if(i==0)
		arr[i]=1;
		else
		arr[i]=arr[i-2]*2;
	}
	for(i=1;i<30;i=i+2){
		if(i==1)
		arr[i]=1;
		else
		arr[i]=arr[i-2]*3;
	}
	printf("%d",arr[n-1]);
}
