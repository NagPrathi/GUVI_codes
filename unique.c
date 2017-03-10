#include<stdio.h>
int main() {		
	int a[10], n, i, j, b[10],k=0;
	printf("ENter the value of n:");
	scanf("%d",&n);
	for(i=0; i<n;i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i++)
		for(j=i+1; j<n; j++)
			if(a[i]==a[j]) {
			 	b[k]=a[i];
				k++;
			}
	//printf("%d\n", k);	
	//for(i=0; i<k; i++)
	//	printf("%d", b[i]);
	for(i=0; i<n;i++)
		for(j=0; j<k;j++)
			if(a[i]==b[j])
			a[i]='x';
	for(i=0;i<n;i++)
		if(a[i]!='x')
			printf("%d", a[i]);
	return 0;
}
