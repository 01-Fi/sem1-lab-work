//to accept 5 records
#include<stdio.h>
#include<string.h>
struct Employee{
	char name[25];
	int age;
	float Basic;
	float totalSalary;
};
int main(){
	struct Employee emp[5];
	int i,j;
	struct Employee temp;
	for (i=0;i<=5;i++){
		printf("enter name,age and basic salary of employee%d:\n",i+1);
		scanf("%s%d%f",&emp[i].name,&emp[i].age,&emp[i].Basic);
		float DA=0.10*emp[i].Basic;
		float HRA=0.05*emp[i].Basic;
		emp[i].totalSalary=emp[i].Basic+DA+HRA;
	}
	for(i=0;i<5-1;i++){
		for(j=i+1;j<5;j++){
			if(emp[i].totalSalary<emp[j].totalSalary){
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
			}
		}
	}
	printf("\nEmployees in descending order of total salary:\n");
	printf("Name\tAge\ttotalSalary\n");
	printf("______________________________________________________");
	for(i=0;i<5;i++){
		printf("%s\t%d\t%.2f\n", emp[i].name,emp[i].age,emp[i].totalSalary);
	}
}

