#include <stdio.h>
void main()
{int i,n,j,temp;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	if(a[i]>a[i+1]){
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;}
	
}
printf("sorted array");
for(i=0;i<n;i++){
	printf("%d",a[i]);
}

	
}