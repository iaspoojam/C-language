#include<stdio.h>
struct stud
{
     int roll_no;
     char stud_name[20];
     int std;
}s;
void student(struct stud s)
{
     printf("Roll Number : %d",s.roll_no);
     printf("\nName        : %s",s.stud_name);
     printf("\nStd         : %d",s.std);
}
int main()
{
     printf("Roll Number : ");
     scanf("%d",&s.roll_no);
     printf("Name        : ");
     scanf("%s",s.stud_name);
     printf("Std.        : ");
     scanf("%d",&s.std);

     student(s);
     return 0;
}

