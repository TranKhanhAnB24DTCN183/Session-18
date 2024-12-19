#include<stdio.h>
#include<string.h>

int main(){
 struct Student{
	char name[50];
	int age;
	char phoneNumber[50];
 };	
 struct Student student01={"Tran Khanh An",18,"0385408745"};
 
 printf("Ten la %s\n",student01.name);
 printf("Tuoi la %d\n",student01.age);
 printf("So dien thoai la %s\n",student01.phoneNumber);
	return 0;
}								
