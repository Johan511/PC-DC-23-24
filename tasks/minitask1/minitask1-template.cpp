// Hari Hara Naveen
// Vaishnavi Rajesh

// takes arthematic expression and solves it

#include <cassert>
#include <fstream>
#include <iostream>
#include <optional>
#include <stack>
#include <string>

bool is_digit(char i) { return '0' <= i && i <= '9'; }
bool is_white_space(char i) { return i == ' '; }

int precedence(char i) {
  // assigns numbers or 'priorities' to operations based on which they are
  // compared
}

int apply_operator(int operand1, int operand2, char arthOperator) {
  // returns operand2-arthOperator-operand1 value
}

void perform_one_operation(std::stack<int> &operandStack,
                           std::stack<char> &operatorStack) {
  // pop the first 2 elements off the operandStack and first element of
  // operatorStack apply operator on them and push the result into operandStack
}

int parse_arthematic_expression(std::string &&expression) {
  // parse the expression and return the result
  // add dummy char to the end of the string (for easier implementation,
  // optional) otherwise resolve the elements left on the stacks in the end

  std::stack<char> operatorStack;
  std::stack<int> operandStack;

  // tokenize the elements of expression string.
  // ignore white spaces, write a function to construct number from digits
  // push number onto operandStack

  // if token is an operation, check the top element of operatorStack and call
  // perform_one_operation if needed. Finally, push operator onto operatorStack

  // After iterating through all elements of input string,
  return operandStack.top();
}

int main() {
  std::string line;
  while (std::getline(std::cin, line)) {
    // reading arthematic expression
    int value = parse_arthematic_expression(std::move(line));
    // Print an error message for division by zero
    std::cout << value << std::endl;
  }
}