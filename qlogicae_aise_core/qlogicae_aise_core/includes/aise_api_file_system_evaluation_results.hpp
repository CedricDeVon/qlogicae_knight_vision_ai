#pragma once

#include "aise_api_file_evaluation_results.hpp"

namespace QLogicaeAiseCore
{
	struct AiseApiFileSystemEvaluationResults
	{
		std::unordered_map<std::string, AiseApiFileEvaluationResults> file_evaluation_results;

		double timestamp_start = QLogicaeCore::TIME.now();

		double timestamp_end = 0.0;
	};
}
