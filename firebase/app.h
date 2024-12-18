 // firebase_swap_net.cpp
#include <boost/asio.hpp>
#include <boost/asio/signal_set.hpp>
#include <boost/asio/io_service.hpp>
#include <boost/asio/steady_timer.hpp>

#include <firebase/app.h>
#include <firebase/auth.h>
#include <firebase/database.h>
#include <firebase/storage.h>

//OpenCV
#include <opencv2/opencv.hpp>
#include <tensorflow/core/public/session.h>
// C++
#include <iostream>
#include <string>
#include <vector>
// Custom
#include "firebase_swap_net.h"

using namespace std;

int main(int argc, char* argv[]) {


    //FirebaseSwapNet firebaseSwapNet;

    
    firebaseSwapNet.initializeApp("API_KEY", "AUTH_DOMAIN", "DATABASE_URL", "STORAGE_BUCKET");
    firebaseSwapNet.login("EMAIL", "PASSWORD");
    firebaseSwapNet.uploadImage("IMAGE_PATH");
    firebaseSwapNet.downloadImage("IMAGE_PATH");
    firebaseSwapNet.downloadImages({"IMAGE_PATH_1", "IMAGE_PATH_2", "IMAGE_PATH_3"});
    firebaseSwapNet.uploadImages({"IMAGE_1", "IMAGE_2", "IMAGE_3"});
    firebaseSwapNet.downloadImages({"IMAGE_PATH_1", "IMAGE_PATH_2", "IMAGE_PATH_3"}, {"IMAGE_1", "IMAGE_2", "IMAGE_3"});
    firebaseSwapNet.downloadImage("IMAGE_PATH", "IMAGE");
    firebaseSwapNet.createItemListing("TITLE", "DESCRIPTION", {"IMAGE_PATH_1", "IMAGE_PATH_2", "IMAGE_PATH_3"});
    firebaseSwapNet.evaluateItemCondition("ITEM_ID");
    firebaseSwapNet.determineItemValue("ITEM_ID");
    firebaseSwapNet.createAuction("ITEM_ID", "STARTING_PRICE");
    firebaseSwapNet.bidOnItem("ITEM_ID", "BID_AMOUNT");
    firebaseSwapNet.closeAuction("ITEM_ID");
    firebaseSwapNet.processPayment("ITEM_ID");
    firebaseSwapNet.registerUser("EMAIL", "PASSWORD");
    firebaseSwapNet.createItemListing("TITLE", "DESCRIPTION", {"IMAGE_1", "IMAGE_2", "IMAGE_3"});
    firebaseSwapNet.evaluateItemCondition("ITEM_ID");
    firebaseSwapNet.determineItemValue("ITEM_ID");
    firebaseSwapNet.createAuction("ITEM_ID", "STARTING_PRICE");
    firebaseSwapNet.bidOnItem("ITEM_ID", "BID_AMOUNT");
    firebaseSwapNet.closeAuction("ITEM_ID");
    firebaseSwapNet.processPayment("ITEM_ID");
    firebaseSwapNet.logout();

    return 0;
    
}
