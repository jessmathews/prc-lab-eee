#include <stdio.h>

void main()
{
    FILE *fp;

    char name[100];
    float salary;
    int empid, n;
    printf("Enter number of employees:");
    scanf("%d", &n);
    fp = fopen("test1.txt", "w");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name:");
        scanf(" %[^\n]", name);
        fprintf(fp, "%s ", name);
        printf("Enter the salary:");
        scanf("%f", &salary);
        fprintf(fp, "%.2f ", salary);
        printf("Enter the employee id:");
        scanf("%d", &empid);
        fprintf(fp, "%d \n", empid);
    }
    fclose(fp);

    fp = fopen("test1.txt", "r");
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%s %f %d", name, &salary, &empid);
        printf("Name:%s, Salary:%.2f, Employee ID:%d\n", name, salary, empid);
    }
    fclose(fp);

    int m;
    fp = fopen("test1.txt", "a");
    printf("Enter number of employees to be added:");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("Enter the name:");
        scanf(" %[^\n]", name);
        fprintf(fp, "%s ", name);
        printf("Enter the salary:");
        scanf("%f", &salary);
        fprintf(fp, "%.2f ", salary);
        printf("Enter the employee id:");
        scanf("%d", &empid);
        fprintf(fp, "%d \n", empid);
    }
    fclose(fp);

    fp = fopen("test1.txt", "a");
        for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%s %f %d", name, &salary, &empid);
        printf("Name:%s, Salary:%.2f, Employee ID:%d\n", name, salary, empid);
    }
    fclose(fp);
}