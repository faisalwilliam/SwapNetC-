#include <gtest/gtest.h>
#include "firebase_swap_net.h"



TEST(FirebaseSwapNetTest, InitializeApp) {
  FirebaseSwapNet firebaseSwapNet;
  std::string apiKey = "your_api_key ";
  std::string authDomain = "your_auth_domain";
  std::string databaseURL = "your_database_url";
  std::string storageBucket = "your_storage_bucket";
  

  firebaseSwapNet.initializeApp(apiKey, authDomain, databaseURL, storageBucket);

  // Verify that the app was initialized successfully
  EXPECT_TRUE(firebaseSwapNet.isAppInitialized());
}