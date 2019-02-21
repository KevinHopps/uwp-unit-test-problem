#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include <ctime>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestApp1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
			std::ostringstream log;

			log << "UnitTestApp1 begin" << std::endl;

			char ctime_buf[32];
			time_t now;
			std::time(&now);
			ctime_s(ctime_buf, sizeof(ctime_buf), &now);
			log << ctime_buf << std::flush;
        }
    };
}