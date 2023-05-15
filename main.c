#include <stdio.h>
#include <stdlib.h>

#define mEmployees 100
#define dEmployees 200
// mEmployees is storing 100 employees data
// dEmployees is storing 200 employees data
struct Employee {
  char fname[20];
  char lname[20];
  double salary;
};

int main() {
  struct Employee EmployeeArr1[mEmployees]; // store up to 100 employees data
  struct Employee *EmployeeArr2 = malloc(dEmployees * sizeof(struct Employee)); // store data using malloc to store up to 200 employeees data

  printf("Size of Employee structure: %ld bytes\n", sizeof(struct Employee));
  printf("Size of EmployeeArr1: %ld bytes\n", sizeof(EmployeeArr1));
  printf("Size of EmployeeArr2: %ld bytes\n", dEmployees * sizeof(struct Employee));

  printf("Address of EmployeeArr1[0]: %p\n", &EmployeeArr1[0]);
  printf("Address of EmployeeArr1[99]: %p\n", &EmployeeArr1[99]);
  printf("Address of EmployeeArr2[0]: %p\n", &EmployeeArr2[0]);
  printf("Address of EmployeeArr2[99]: %p\n", &EmployeeArr2[99]);

  free(EmployeeArr2); // free allocated memory
  return 0;
}
