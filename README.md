# uwp-unit-test-problem

Open the solution file photoshop\projects\pie_unit_tests\UnitTestApp1.sln and click Run All in the Test Explorer. See the diagnostic similar to the following:
`[2/22/2019 10:42:19 AM Informational] ------ Discover test started ------`
`[2/22/2019 10:42:19 AM Warning] Test run will use DLL(s) built for framework Framework45 and platform X86. Following DLL(s) will not be part of run: `
`pie_unit_tests_lib_uwp.dll is built for Framework None and Platform X64.`
`UnitTestApp1.build.appxrecipe is built for Framework FrameworkUap10 and Platform X64.`
` Go to http://go.microsoft.com/fwlink/?LinkID=236877&clcid=0x409 for more details on managing these settings.`
`[2/22/2019 10:42:20 AM Warning] No test is available in C:\Users\kevin\projects\uwp-unit-test-problem\photoshop\projects\pie_unit_tests\Debug\pie_unit_tests_lib_uwp\pie_unit_tests_lib_uwp.dll. Make sure that test discoverer & executors are registered and platform & framework version settings are appropriate and try again.`
`[2/22/2019 10:42:22 AM Informational] Test Adapter for Google Test: Test discovery starting...`
`[2/22/2019 10:42:22 AM Informational] Test discovery completed, overall duration: 00:00:00.0814206`
`[2/22/2019 10:42:22 AM Informational] ========== Discover test finished: 1 found (0:00:02.5343951) ==========`
`[2/22/2019 10:42:22 AM Informational] ------ Run test started ------`
`[2/22/2019 10:42:24 AM Error] Failed to initialize client proxy: could not connect to test process.`
`[2/22/2019 10:42:24 AM Error] Failed to initialize client proxy: could not connect to test process.`
`[2/22/2019 10:42:24 AM Informational] ========== Run test finished: 0 run (0:00:02.0755897) ==========`

Note the error "Failed to initialize client proxy: could not connect to test process."

The problem seems to be related to the fact that the project pie_unit_tests_lib_uwp is a DLL. Open its project properties and change its Configuration Type to Static library (.lib), then click Run All again. See that the problem is gone.
