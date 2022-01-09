/*
Copyright 2022 Ttayu
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <cstdint>
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
#if 0
} // indent guard
#endif

class TestCalculator : public testing::Test {
protected:
  TestCalculator() {
    // You can do set-up work for each test here.
  }
  ~TestCalculator() override {
    // You can do clean-up work that doesn't throw exceptions here.
  }
  void SetUp() override {
    // Code here will be called immediately aftr the constructor
    // (right before each test).
  }
  void TearDown() override {
    // Code here will be called immediately after each test
    // (right before the destructor)
  }
};

TEST_F(TestCalculator, BasicTest) { EXPECT_TRUE(true); }

} // namespace
