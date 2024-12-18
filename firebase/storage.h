

#include <firebase/storage.h>


firebase::storage::Storage* firebase::storage::Storage::GetInstance(firebase::App* app) {
    static firebase::storage::Storage* instance = nullptr;
    if (instance == nullptr) {
        instance = new firebase::storage::Storage(app);
    }
    return instance;
}


