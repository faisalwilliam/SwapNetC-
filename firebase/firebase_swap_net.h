#include <firebase_swap_net.h>

FirebaseSwapNet::FirebaseSwapNet() {
    app_ = firebase::App::Create(firebase::AppOptions());
    auth_ = firebase::auth::Auth::GetAuth(app);
    database_ = firebase::database::Database::GetInstance(app);
    storage_ = firebase::storage::Storage::GetInstance(app);
    session_ = tensorflow::Session::Create();
    io_service_ = boost::asio::io_service();
}
