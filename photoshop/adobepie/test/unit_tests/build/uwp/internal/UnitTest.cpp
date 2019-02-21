#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>
#include <ctime>

#include "test_runner.hpp"
#include "boost/filesystem.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestApp1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
			auto out_path = boost::filesystem::path(std::wstring(Windows::Storage::ApplicationData::Current->LocalFolder->Path->Begin())).append("output");
			auto resource_path = boost::filesystem::path(std::wstring(Windows::ApplicationModel::Package::Current->InstalledLocation->Path->Begin()));

			auto failed_tests = run_tests(out_path.string().c_str(), resource_path.string().c_str());

			boost::filesystem::path log_path = out_path / "test_log.txt";
			std::ofstream           log(log_path.string().c_str());

			std::ostringstream oss;
			oss << "failed_tests=" << failed_tests << '\n';
			oss << "log output is at " << log_path.string() << '\n';

			Assert::AreEqual(failed_tests, size_t{ 0 });
		}
    };
}