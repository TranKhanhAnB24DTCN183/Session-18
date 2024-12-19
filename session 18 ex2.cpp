#include<stdio.h>
#include<string.h>

int main(){
 struct Student{
	char name[50];
	int age;
	char phoneNumber[50];
 };
 struct Student student01;
  printf("Nhap vao ten cua ban :");
  fgets(student01.name,50,stdin);
  printf("Nhap vao tuoi cua ban :");
  scanf("%d",&student01.age);
  fflush(stdin);
  printf("Nhap vao so dien thoai cua ban :");
  fgets(student01.phoneNumber,50,stdin);
  
  printf("\n");
  printf("Ten la %s\n",student01.name);
  student01.name[strcspn(student01.name, "\n")] = '\0';
  printf("Tuoi la %d\n",student01.age);
  getchar();
  printf("So dien thoai la %s\n",student01.phoneNumber);
  student01.phoneNumber[strcspn(student01.phoneNumber, "\n")] = '\0';
  	
  return 0;
}
