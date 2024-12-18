

#include <tensorflow/tensorflow.h>

tensorflow::Tensor input_tensor = tensorflow::Tensor(tensorflow::DT_FLOAT, {1, 224, 224, 3});

// Use TensorFlow to determine the value of the item
// ...
tensorflow::Tensor output_tensor = session_->Run({input_tensor}, {}, {});

float item_value = output_tensor.tensor<float>()(0);

std::cout << "Item value: " << item_value << std::endl;

return 0;