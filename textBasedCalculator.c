#include<stdio.h>
#include<stdlib.h>

char menu();
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int num1();
int num2();

int main(int argc, char *argv[]){
  int x;
  int y;
  char operationPicked;
  
  //do{
  menu();
  operationPicked = menu();
  //}
  //while(1){
  
    if(operationPicked == 'a' || operationPicked == 'A'){
      printf("Let's add then.\n");
      num1();
      num2();
      int x = num1();
      int y = num2();
      printf("%d\n", add(x, y));
    }
  
    if(operationPicked == 's' || operationPicked == 'S'){
      printf("Let's subtract then.\n");
      num1();
      num2();
      int x = num1();
      int y = num2();
      printf("%d\n", sub(x, y));
    }
  
    if(operationPicked == 'm' || operationPicked == 'M'){
      printf("Let's multiply then.\n");
      num1();
      num2();
      int x = num1();
      int y = num2();
      printf("%d\n", mul(x, y));
    }
  
    if(operationPicked == 'd' || operationPicked == 'D'){
      printf("Let's divide then.\n");
      num1();
      num2();
      int x = num1();
      int y = num2();
      printf("%d\n", div(x, y));
    }
  //}
  return 0;
}

//Operations Menu
char menu(){
  char operation;
  printf("Which operation would you like perform...\n");
  printf("(A)ddition\n(S)ubtraction\n(M)ultiplication\n(D)ivision\n");
  printf("Please select : ");
  scanf("%c\n", &operation);
  return operation;
}

//First Number Input Function
int num1(){
  int x;
  printf("Enter your first number : ");
  scanf(" %d\n", &x);
  return x;
}
    
//Second Number Input Function
int num2(){
  int y;
  printf("Enter your second number : ");
  scanf(" %d\n", &y);
  return y;
}

//Addition Function
int add(int x, int y){
  return x + y;
}

//Subtraction Function
int sub(int x, int y){
  return x - y;
}

//Multiplication Function
int mul(int x, int y){
  return x * y;
}

//Division Function
int div(int x, int y){
  return x / y;
}
