#include "pch.hpp"

#include "main.hpp"

namespace QLogicaeAiseCoreTest
{
	TEST(TestCaseName, TestName)
	{
		QLogicaeCore::CLI_IO.print_with_new_line("QLogicaeAiseCoreTest - Confirmed!");

		std::string API_KEY = " aff87a6d7ydhf9dfdfuadh";

		EXPECT_EQ(1, 1);
		EXPECT_TRUE(true);
	}
}
