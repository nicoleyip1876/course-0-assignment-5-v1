#include <iostream>
#include <string>
using namespace std;

int user_input() {
    std::cout << "Enter a number: ";
    int user_input_1;
    std::cin >> user_input_1;
    return user_input_1;  
}

char operators(){
  std::cout << "Enter operator (+ - * / %):" << std:: endl;
  char user_input_operator;
  std::cin >> user_input_operator;
  return user_input_operator;
}

int equation(char input_operator, int user_inputted, int user_inputted_2){
  //takes the operator, user input from main function, and user input from call_equation to come up with the total
  int answer;
  if (input_operator == '+'){
    answer = user_inputted + user_inputted_2;
  }

  if (input_operator == '-'){
    answer = user_inputted - user_inputted_2; 
  }

  if (input_operator == '*'){
    answer = user_inputted * user_inputted_2; 
  }

   if (input_operator == '/'){
    answer = user_inputted / user_inputted_2; 
  }

  if (input_operator == '%'){
    answer = user_inputted % user_inputted_2; 
  }

  return answer;
}

int call_equation(int user_input_from_main){
  char user_input_operator = operators();
  int new_user_input = user_input();
  
  // I don't know how to bring the [VALUE OF] user_input_1 from the main function.
  // You can bring values from previous function to functions using arguements.
  
  //this takes the user input from of operator, user_input from the main function, and a new user_input. 
  int answer = equation(user_input_operator, user_input_from_main, new_user_input);

  std :: cout << answer << std :: endl;
  return answer;
}

int main() {
  std::cout << "We will be providing calculations on several number inputs and operator choices. Enter a max of 7 numbers and 6 operators (one at a time). This is a calculator " << std::endl;

  //Takes an int input for the first input of calculator
  int user_input_1 = user_input();

  //Goes to call_equation
  int answer = call_equation(user_input_1);
  answer = call_equation(answer);
  answer = call_equation(answer);
  answer = call_equation(answer);
  answer = call_equation(answer);
  answer = call_equation(answer);

  return 0; 
}