// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
    };
    DeleteDatabaseRequest() = default ;
    DeleteDatabaseRequest(const DeleteDatabaseRequest &) = default ;
    DeleteDatabaseRequest(DeleteDatabaseRequest &&) = default ;
    DeleteDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDatabaseRequest() = default ;
    DeleteDatabaseRequest& operator=(const DeleteDatabaseRequest &) = default ;
    DeleteDatabaseRequest& operator=(DeleteDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->databaseName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteDatabaseRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DeleteDatabaseRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances in the specified region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the queried database.
    // 
    // This parameter is required.
    shared_ptr<string> databaseName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
