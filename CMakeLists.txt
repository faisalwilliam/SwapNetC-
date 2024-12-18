cmake_minimum_required(VERSION 3.10) 



project(SwapNet) 


set(CMAKE_CXX_STANDARD 11) # Add Firebase libraries


 add_subdirectory(${FIREBASE_CPP_SDK_DIR} bin/ EXCLUDE_FROM_ALL)


  # Add the Firebase SDKs for the products you want to use 
  set(firebase_libs firebase_app firebase_auth firebase_database) 

  // Add the Firebase SDKs for the products you want to use
  include_directories(${FIREBASE_CPP_SDK_DIR})FIREBASE_CPP_SDK_DIR

  
  include_directories(${FIREBASE_CPP_SDK_DIR}/src)GoogleService-Info.plist
  

  add_executable(SwapNet main.cpp)

   target_link_libraries(SwapNet ${firebase_libs})


find_package(firebase-cpp-sdk REQUIRED)
include_directories(${firebase-cpp-sdk_INCLUDE_DIRS})
link_directories(${firebase-cpp-sdk_LIBRARY_DIRS})

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")

