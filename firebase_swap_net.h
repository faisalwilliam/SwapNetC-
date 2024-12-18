#ifndef FIREBASE_SWAP_NET_H
#define FIREBASE_SWAP_NET_H
using namespace std;

#include <firebase/app.h>
#include <firebase/auth.h>
#include <firebase/database.h>
#include <firebase/storage.h>
#include <opencv2/opencv.hpp>
#include <tensorflow/tensorflow.h>
#include <boost/asio.hpp>


class FirebaseSwapNet {

public:

  FirebaseSwapNet();
  ~FirebaseSwapNet();

  void initializeApp(const std::string& apiKey, const std::string& authDomain, const std::string& databaseURL, const std::string& storageBucket);
  void login(const std::string& email, const std::string& password);
  void logout();
  void uploadImage(const std::string& imagePath);
  void downloadImage(const std::string& imagePath);
  void downloadImages(const std::vector<std::string>& imagePaths);
  void uploadImages(const std::vector<cv::Mat>& images);
  void downloadImages(const std::vector<std::string>& imagePaths, std::vector<cv::Mat>& images);
  void downloadImage(const std::string& imagePath, cv::Mat& image);

  void createItemListing(const std::string& title, const std::string& description, const std::vector<std::string>& imagePaths);
  void createItemListing(const std::string& title, const std::string& description, const std::vector<cv::Mat>& images);
  void evaluateItemCondition(const std::string& itemId);
  void determineItemValue(const std::string& itemId);
  void createAuction(const std::string& itemId, const std::string& startingPrice);
  void bidOnItem(const std::string& itemId, const std::string& bidAmount);
  void closeAuction(const std::string& itemId);
  void processPayment(const std::string& itemId);

  void registerUser(const std::string& email, const std::string& password);
  void createItemListing(const std::string& title, const std::string& description, const std::vector<cv::Mat>& images);
  void evaluateItemCondition(const std::string& itemId);
  void determineItemValue(const std::string& itemId);
  void createAuction(const std::string& itemId, const std::string& startingPrice);
  void bidOnItem(const std::string& itemId, const std::string& bidAmount);
  void closeAuction(const std::string& itemId);
  
  /*
  void registerUser(const std::string& email, const std::string& password);
  void createItemListing(const std::string& title, const std::string& description, const std::vector<cv::Mat>& images);
  void evaluateItemCondition(const std::string& itemId);
  void determineItemValue(const std::string& itemId);
  void createAuction(const std::string& itemId, const std::string& startingPrice);
  void bidOnItem(const std::string& itemId, const std::string& bidAmount);
  void closeAuction(const std::string& itemId);
  void processPayment(const std::string& itemId);
  
  void registerUser(const std::string& email, const std::string& password);
  void createItemListing(const std::string& title, const std::string& description, const std::vector<cv::Mat>& images);
  void evaluateItemCondition(const std::string& itemId);
  void determineItemValue(const std::string& itemId);
  void createAuction(const std::string& itemId, const std::string& startingPrice);
  void bidOnItem(const std::string& itemId, const std::string& bidAmount);
  void closeAuction(const std::string& itemId);
  void processPayment(const std::string& itemId);

*/

private:
  firebase::App* app_;
  firebase::auth::Auth* auth_;
  firebase::database::Database* database_;
  firebase::storage::Storage* storage_;
  tensorflow::Session* session_;
  boost::asio::io_service io_service_;

};


#endif  // FIREBASE_SWAP_NET_H
