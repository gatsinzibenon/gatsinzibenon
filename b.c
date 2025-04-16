#include <stdio.h>
#include <string.h>

struct student{

char first_name[50];
char last_name[33];
char full_name[60];
char hall[42];
int grades[20];
char letter_grade[44];

};

int main(){

struct student student;
int sum=0;
double average;

printf("Enter first name:");
scanf("%s",student.first_name);

printf("Enter last name:");
scanf("%s",student.last_name);
snprintf("%s %s",student.first_name,student.last_name);
printf("enter hall name:");
scanf("%s",student.hall);

printf("enter 5 grades:\n");
for(int i=0;i<5;i++){
    printf("grade %d:",i+1);
    scanf("%d",&student.grades[i]);
    sum+=student.grades[i];

}
average=(double)sum/5;

if(average>=80){
    student.letter_grade,"A";
}
else if(average>=75){
    student.letter_grade,"B";
}
else if(average>=65){
    student.letter_grade,"C";
}
else if(average>=55 ){
    student.letter_grade,"D";
}
else if(average>=50){
    student.letter_grade,"E";
}
else{
    student.letter_grade,"F";
}

printf("Student name:%s\n",student.full_name);
printf("Student hall:%s\n",student.hall);
printf("Student grades:\n");
for(int i=0;i<5;i++){
    printf("%d ",student.grades[i]);
}
printf("\nAverage grade:%.2f\n",average);
printf("Letter grade:%s\n",student.letter_grade);
return 0;
}
