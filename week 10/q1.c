//sorting array in ascending order 
//i am using BUBBLE SORT
#include<stdio.h>
void sort(int[],int);
int main(){
	int i,n;

	printf("NO. OF ELEMENTS:\n ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("ENTER ELEMENT %d\n",i);
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("SORTED NUMBERS\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}	
}
void sort(int a[],int n){
	int i, pass,temp;
	for(pass=1;pass<=n-1;pass++){
		for(i=0;i<=n-1-pass;i++){
			if(a[i]>a[i+1]){
				temp=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}
