#include<stdio.h>
struct Student {
    char name[50];
    int rollno;
    float marks[3];
    float total;
    float avg;
    char grade;
};
char Grading(float avg){
    if(avg>90)
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
void ReadStudents(struct Student students[],int n){
	int i,j;
    for(i=0;i<n;i++){
        printf("Enter details for student %d:\n",i+1);
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("Roll No: ");
        scanf("%d",&students[i].rollno);
        printf("Enter marks for 3 subjects: ");
        for(j=0;j<3;j++){
            scanf("%f",&students[i].marks[j]);
            students[i].total+=students[i].marks[j];
        }
        students[i].avg =students[i].total/3;
        students[i].grade=Grading(students[i].avg);
    }
}
void DisplayStudents(struct Student students[],int n){
	int i,j;
    printf("\nStudent Details:\n");
    for(i=0;i<n;i++){
        printf("Name: %s\n",students[i].name);
        printf("Roll No: %d\n",students[i].rollno);
        printf("Marks: ");
        for(j=0;j<3;j++){
            printf("%.2f ",students[i].marks[j]);
        }
        printf("\nTotal: %.2f\n",students[i].total);
        printf("Average: %.2f\n",students[i].avg);
        printf("Grade: %c\n",students[i].grade);
        printf("----------------------------------\n");
    }
}
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct Student students[n];
    ReadStudents(students,n);
    DisplayStudents(students,n);
    return 0;
}

