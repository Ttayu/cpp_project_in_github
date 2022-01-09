/*
Copyright 2021 iwatake2222
Copyright 2022 Ttayu

Licensed under the Apache License, Version 2.0 (the “License”);
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an “AS IS” BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <cstdio>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "calculator.h"

int main(int argc, char *argv[]) {
  char op;
  int32_t a = 0;
  int32_t b = 0;

  std::cout << ">";
  std::cin >> a >> op >> b;
  Calculator calc;
  int32_t ans = calc.Run(op, a, b);
  std::cout << std::to_string(a) + " " + op + " " + std::to_string(b) + " = " +
                   std::to_string(ans)
            << std::endl;

  // Cause security warning
  // char buffer[1];
  // buffer[3] = 1;

  return 0;
}
