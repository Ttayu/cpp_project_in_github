# Awesome C++ Project in GitHub
- create a simple calculator

## CI Status
Status | Build Type
------ | ----------
[![CMake_x64](https://github.com/Ttayu/cpp_project_in_github/actions/workflows/cmake_x64.yml/badge.svg)](https://github.com/Ttayu/cpp_project_in_github/actions/workflows/cmake_x64.yml) | windows-latest, ubuntu-latest, macos-latest
[![CMake_ARM](https://github.com/Ttayu/cpp_project_in_github/actions/workflows/cmake_arm.yml/badge.svg)](https://github.com/Ttayu/cpp_project_in_github/actions/workflows/cmake_arm.yml) | armv7 + ubuntu18.04, aarch64 + ubuntu18.04
[![CodeQL](https://github.com/Ttayu/cpp_project_in_github/actions/workflows/codeql-analysis.yml/badge.svg)](https://github.com/Ttayu/cpp_project_in_github/actions/workflows/codeql-analysis.yml) | ubuntu-latest

## How to Run
### Linux
```sh
# build
cmake -B build
cmake --build build
# test
cmake --build build --target test
# or
ctest --target-dir build
# run
./build/main
```

# License
- Awesome C++ Project in Github
- https://github.com/Ttayu/cpp_project_in_github
- Copyright 2022 Ttayu
- [Licensed under the Apache License, Version 2.0](LICENSE)

# Acknowledgements
- This project utilizes OSS (Open Source Software)
  - [NOTICE.md](NOTICE.md)
- This project refer to [https://github.com/iwatake2222/cpp_project_in_github](https://github.com/iwatake2222/cpp_project_in_github)
