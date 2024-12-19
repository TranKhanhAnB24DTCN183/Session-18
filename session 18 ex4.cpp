#include <stdio.h>
#include <string.h>

struct Student {
	int id;
    char name[50];        
    int age;              
    char phoneNumber[15]; 
};

int main() {
	int m=50;
	int n=5;
    struct Student students[m]; 

    for (int i = 0; i <n; i++) {  
	    students[i].id=i+1;   
        printf("Nhap ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);
        getchar(); 

        printf("Nhap so dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0';

        printf("\n");
    }
    printf("Thong tin cac sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID cua sinh vien la:%d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}
