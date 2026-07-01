// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetDatabasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
    };
    GetDatabasesRequest() = default ;
    GetDatabasesRequest(const GetDatabasesRequest &) = default ;
    GetDatabasesRequest(GetDatabasesRequest &&) = default ;
    GetDatabasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabasesRequest() = default ;
    GetDatabasesRequest& operator=(const GetDatabasesRequest &) = default ;
    GetDatabasesRequest& operator=(GetDatabasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetDatabasesRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


  protected:
    // The name of the database. If you do not specify this parameter, information about all databases in the catalog is returned.
    shared_ptr<string> databaseName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
