#include <array>
#include <iostream>
#include <random>

constexpr int MAX_NUM_OPERATORS_PER_EXPR = 5;

constexpr std::array<char, 4> operators = {'+', '-', '*', '/'};

char get_operator() { return operators[rand() % 4]; }
int get_num() { return rand() % 100; }

std::string get_expression(int numOperators) {
  std::string expression;
  for (int i = 0; i < numOperators; i++) {
    expression += std::to_string(get_num());
    expression += get_operator();
  }
  expression += std::to_string(get_num());
  return expression;
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int numExpr = 10;
  if (argc > 1) {
    numExpr = std::stoi(argv[1]);
  }

  for (int i = 0; i < numExpr; i++) {
    std::cout << get_expression(rand() % MAX_NUM_OPERATORS_PER_EXPR) << '\n';
  }
}
