
#include <limits.h>
#include <stdio.h>
typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int EmpID;
    char EmpName[50];
    Date DOJ;
    float Salary;
} Employee;

int main() {
    unsigned int count;
    printf("No of Employees: ");
    scanf("%u", &count);

    if (!(count > 0 && count < UINT_MAX)) {
        fprintf(stderr, "\n[ ERROR ] Employee count out of bounds\n");
        return 1;
    }

    Employee list[count + 1];

    FILE *src;
    char *sourcefile;

    printf("Enter the Employee File name: ");
    fflush(stdin);
    scanf("%s", sourcefile);

    src = fopen(sourcefile, "r");
    if (src == NULL) {
        fprintf(stderr, "\n[ ERROR ] Cannot open source file\n");
        return 2;
    }

    unsigned int n = 0;

    while (fscanf(src, "%d %50s %d %d %d %f",
        &list[n].EmpID,
        list[n].EmpName,
        &list[n].DOJ.day,
        &list[n].DOJ.month,
        &list[n].DOJ.year,
        &list[n].Salary) == 6) {
        n++;
        if (n >= count + 1) {
            fprintf(stderr, "\n[ USAGE ] Reached maximum employee limit\n");
            break;
        }
    }

    fclose(src);

    int searchID;

    printf("\nEnter EmpID to search: ");
    scanf("%d", &searchID);

    int found = 0, i;
    for (i = 0; i < count + 1; i++) {
        if (list[i].EmpID == searchID) {
            printf("\nEmployee Found:\n");
            printf("ID: %d\n", list[i].EmpID);
            printf("Name: %s\n", list[i].EmpName);
            printf("Date of Joining: %2d-%2d-%4d\n", list[i].DOJ.day,
                list[i].DOJ.month, list[i].DOJ.year);
            printf("Salary: %.2f\n", list[i].Salary);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nEmployee with ID %d not found\n", searchID);
    }

    return 0;
}
