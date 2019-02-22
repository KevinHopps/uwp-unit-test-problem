#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include <ctime>

#include "test_runner.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestApp1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
			auto failed_tests = run_tests(nullptr, nullptr);
			Assert::AreEqual(failed_tests, size_t{ 0 });
		}
    };
}