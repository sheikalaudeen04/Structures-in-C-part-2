#include<stdio.h>
struct Aids{
	char name[20];
	int rollno;
	float mark[5];
	float total,avg;
	char grade;
}aids[5];
//struct Aids aids[5];
char Grading(float avg){
	if (avg>90)
		return 'O';
	else if(avg<=90&&avg>80)
		return 'A';
	else if(avg<=80&&avg>70)
		return 'B';
	else if(avg<=70&&avg>60)
		return 'C';
	else if(avg<=60&&avg>=50)
		return 'D';
	else
		return 'F';
}
void call_read(){
	int i,j;
	char ch;
	for(i=0;i<5;i+=1){
		printf("Enter name: ");
		gets(aids[i].name);
		printf("Enter Roll no: ");
		scanf("%d",&aids[i].rollno);
		printf("Enter 5 sub marks with space: ");
		aids[i].total=0;
		for(j=0;j<5;j+=1){
			scanf("%f",&aids[i].mark[j]);
			aids[i].total+=aids[i].mark[j];
		}
		aids[i].avg=aids[i].total/5.0;
		aids[i].grade=Grading(aids[i].avg);//passing to function
		scanf("%c",&ch);
	}
}
void Display(){
	int i,j;
	for(i=0;i<5;i+=1){
		printf("Name:%s\n",aids[i].name);
		printf("Roll no:%d\n",aids[i].rollno);
		for(j=0;j<5;j+=1){
			printf("Mark %d:%f\n",j+1,aids[i].mark[j]);
		}
		printf("Total:%f\n",aids[i].total);
		printf("Average:%f\n",aids[i].avg);
		printf("Grade:%c\n",aids[i].grade);
		printf("\n\n*********************************\n");
	}
}
int main(){
	call_read();
	Display();
	
}
