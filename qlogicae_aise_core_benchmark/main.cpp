#include "pch.hpp"

#include "main.hpp"

int main(int, char**)
{   
    QLogicaeCore::Result<void>
        void_result;
    QLogicaeCore::Result<bool>
        boolean_result;
    QLogicaeCore::Result<double>
        double_result;
    
    QLogicaeAiseCore::ENCODING_MANAGER.setup(
        void_result
    );

    QLogicaeAiseCore::ENCODING_MANAGER.load_vocabulary_file_content(
        boolean_result,
        "vocabulary.json",
        97
    );
        
    QLogicaeAiseCore::NeuralNetworkModel& neural_network_model =
        QLogicaeAiseCore::NeuralNetworkModel::get_instance();

    neural_network_model.setup(
        "model.onnx"
    );

    ankerl::nanobench::Bench
        bench;

    bench
        .minEpochIterations(100'000);    

    bench.run("onnx_predict", [&]()
        {
            try
            {
                double v = neural_network_model.predict(
                    "std::string password = \"SecretPassword_1234\""
                );
            }
            catch (const std::exception& exception)
            {
                std::cout << exception.what() << "\n";
            }
        }
    );
    
    return 0;
}

namespace QLogicaeAiseCoreBenchmark
{

}
