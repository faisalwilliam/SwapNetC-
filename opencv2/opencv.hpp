#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void FirebaseSwapNet::createItemListing(const std::string& title, const std::string& description, const std::vector<cv::Mat>& images) {
    firebase::database::Reference ref = database_->GetReference("items");
    ref.Child(title).Set({
        {"description", description},
        {"images", images}
        
    });
    // ...
}

