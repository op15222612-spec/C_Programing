*/Name:Om patil
branch:civil
uin:251C014*/

#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e;
    FILE *fp;
    int choice;

    do {
        printf("\n--- Employee Database Menu ---\n");
        printf("1. Add Employee\n");s
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                fp = fopen("employee.txt", "a");
                printf("Enter Employee ID: ");
                scanf("%d", &e.id);
                printf("Enter Name: ");
                scanf("%s", e.name);
                printf("Enter Salary: ");
                scanf("%f", &e.salary);

                fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
                fclose(fp);
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                fp = fopen("employee.txt", "r");
                printf("\n--- Employee Records ---\n");
                w

    } while(choice != 3);
  return0;
    }
