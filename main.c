#include <stdio.h>
#include <stdlib.h>



typedef struct employee{
  char firstName[50];
  char lastName[50];
  char address[50];
  char phoneNumber[50];
  char position[50];
  char department[50];
  int employeeID;
} Employee;
char anykey[1];
int x = 0;
struct employee employee[100];

  
int introScreen(){
  printf("1. Show Entire Database\n");
  printf("2. Enter New Employee\n");
  printf("3. Delete Employee\n");
  printf("4. View an Employee's Profile\n");
  return 0;
}

int entireDatabase(){ 
  printf("Company Database:\n\n\n");
  for (int i = 0; i < x; i++){
      printf("Employee ID:");
      printf("%d\n", employee[i].employeeID);
      printf("First Name:");
      printf("%s\n", employee[i].firstName);
      printf("Last Name:");
      printf("%s\n", employee[i].lastName);
      printf("Address:");
      printf("%s\n", employee[i].address);
      printf("Phone Number:");
      printf("%s\n", employee[i].phoneNumber);
      printf("Department:");
      printf("%s\n", employee[i].department);
      printf("Position:");
      printf("%s\n", employee[i].position);
      printf("++++++++++++++++++++\n");
  };
  printf("Type M and Enter to return to the Main Menu");
  scanf("%s", anykey);
  return 0;
};

int enterNewEmployee(){
  printf("Enter Employee First Name\n");
  scanf("%s", employee[x].firstName);
  printf("Enter Employee Last Name\n");
  scanf("%s", employee[x].lastName);
  //Program accepts each division by spaces as separate arguments...Use Underscores
  //fgets not working
  printf("Enter Employee Address\n");
  scanf("%s", employee[x].address);
  printf("Enter Employee Phone Number\n");
  scanf("%s", employee[x].phoneNumber);
  printf("Enter Employee Position\n");
  scanf("%s", employee[x].position);
  printf("Enter Employee Department\n");
  scanf("%s", employee[x].department);
  printf("Enter New Employee ID\n");
  scanf("%d",&employee[x].employeeID);
  printf("Type M and Enter to return to the Main Menu");
  scanf("%s", anykey);
  x = x + 1;
  return 0;
}

int viewEmployee(){
  printf("Employee ID:");
  printf("%d\n", employee[0].employeeID);
  printf("First Name:");
  printf("%s\n", employee[0].firstName);
  printf("Last Name:");
  printf("%s\n", employee[0].lastName);
  printf("Address:");
  printf("%s\n", employee[0].address);
  printf("Phone Number:");
  printf("%s\n", employee[0].phoneNumber);
  printf("Department:");
  printf("%s\n", employee[0].department);
  printf("Position:");
  printf("%s\n", employee[0].position);
  printf("Type M and Enter to return to the Main Menu");
  scanf("%s", anykey);
  return 0;
};


int main (){
  int selection;
  
  while (1){
    system("clear");
    introScreen();
    scanf("%d",&selection);
    if (selection == 1){
      system("clear");
      entireDatabase();
    }
    else if (selection == 2){
      system("clear");
      enterNewEmployee();
    }
    else if (selection == 4){
      system("clear");
      viewEmployee();

    }
  }
  return 0;
};

