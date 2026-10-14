// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTICDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTICDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAgenticDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgenticDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgenticDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
    };
    GetAgenticDatabaseRequest() = default ;
    GetAgenticDatabaseRequest(const GetAgenticDatabaseRequest &) = default ;
    GetAgenticDatabaseRequest(GetAgenticDatabaseRequest &&) = default ;
    GetAgenticDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgenticDatabaseRequest() = default ;
    GetAgenticDatabaseRequest& operator=(const GetAgenticDatabaseRequest &) = default ;
    GetAgenticDatabaseRequest& operator=(GetAgenticDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseUuid_ == nullptr; };
    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline GetAgenticDatabaseRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


  protected:
    // The UUID of the database. You can obtain this value by calling ListAgenticDatabase or SearchAgenticDatabase.
    // 
    // This parameter is required.
    shared_ptr<string> databaseUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
