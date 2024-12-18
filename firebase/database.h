
#include  <firebase/database.h>

//Singleton
firebase::database::Database* firebase::database::Database::GetInstance(firebase::App* app)
{
    
    static firebase::database::Database* instance = nullptr;
    if (instance == nullptr)
    {
        instance = new firebase::database::Database(app);
    }
    return instance;
}
