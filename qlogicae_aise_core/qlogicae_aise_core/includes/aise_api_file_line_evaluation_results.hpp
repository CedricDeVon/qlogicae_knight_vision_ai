#pragma once

namespace QLogicaeAiseCore
{
	struct AiseApiFileLineEvaluationResults
	{		
		std::string line_text = "";

		double line_evaluation_accuracy = 0.0;

		double timestamp_start = QLogicaeCore::TIME.now();

		double timestamp_end = 0.0;
	};
}
