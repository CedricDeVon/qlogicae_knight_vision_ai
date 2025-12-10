from qlogicae_knight_vision_ai_model_trainer.sources import utilities
from qlogicae_knight_vision_ai_model_trainer.sources import prepare_datasets
from qlogicae_knight_vision_ai_model_trainer.sources import train_model
from qlogicae_knight_vision_ai_model_trainer.sources import test_model

if __name__ == "__main__":    
    utilities.clear_all_console_outputs()
    
    prepare_datasets.execute()
    train_model.execute()
    test_model.execute()
