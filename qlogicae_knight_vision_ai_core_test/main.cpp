#include "pch.hpp"

#include "main.hpp"

namespace QLogicaeKnightVisionAiCoreTest
{
	TEST(TestCaseName, TestName)
	{
		QLogicaeCore::CLI_IO.print_with_new_line("QLogicaeKnightVisionAiCoreTest - Confirmed!");

		EXPECT_EQ(1, 1);
		EXPECT_TRUE(true);
	}
}
