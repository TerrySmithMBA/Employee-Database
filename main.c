#include <stdio.h>

typedef struct employee{
  char firstName[50];
  char lastName[50];
  char address[50];
  char phoneNumber[50];
  char position[50];
  char department[50];
  int employeeID;
} Employee;

struct employee employee1;
struct employee employee2;
  
int introScreen(){
  printf("1. Show Entire Database\n");
  printf("2. Enter New Employee\n");
  printf("3. Delete Employee\n");
  printf("4. View an Employee's Profile\n");
  return 0;
}

int entireDatabase(){ 
   printf("Company Database:\n");
  return 0;
};

int enterNewEmployee(){
  printf("Enter Employee First Name\n");
  scanf("%s", employee1.firstName);
  printf("Enter Employee Last Name\n");
  scanf("%s", employee1.lastName);
  //Program accepts each division by spaces as separate arguments...Use Underscores
  printf("Enter Employee Address\n");
  scanf("%s", employee1.address);
  printf("Enter Employee Phone Number\n");
  scanf("%s", employee1.phoneNumber);
  printf("Enter Employee Position\n");
  scanf("%s", employee1.position);
  printf("Enter Employee Department\n");
  scanf("%s", employee1.department);
  printf("Enter New Employee ID\n");
  scanf("%d",&employee1.employeeID);
  return 0;
}

int viewEmployee(){
  printf("Employee ID:");
  printf("%d\n", employee1.employeeID);
  printf("First Name:");
  printf("%s\n", employee1.firstName);
  printf("Last Name:");
  printf("%s\n", employee1.lastName);
  printf("Address:");
  printf("%s\n", employee1.address);
  printf("Phone Number:");
  printf("%s\n", employee1.phoneNumber);
  printf("Department:");
  printf("%s\n", employee1.department);
  printf("Position:");
  printf("%s\n", employee1.position);
};


int main (){
  int selection;
  while (1){
    introScreen();
    scanf("%d",&selection);
    if (selection == 1){
      entireDatabase();
    }
    else if (selection == 2){
      enterNewEmployee();
    }
    else if (selection == 4){
      viewEmployee();
    }
  }
  return 0;
};

