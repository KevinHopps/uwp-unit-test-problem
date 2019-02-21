#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include <ctime>

#include "boost/filesystem.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestApp1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
			boost::filesystem::path path1("a/b/c.txt");
			boost::filesystem::path path2 = path1;
        }
    };
}