#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];        
    int age;              
    char phoneNumber[15]; 
};

int main() {
	int n=5;
    struct Student students[n]; 

    for (int i = 0; i <n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        
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
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

