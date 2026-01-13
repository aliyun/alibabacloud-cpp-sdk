// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXTENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXTENSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeExtensionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExtensionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExtensionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
    };
    DescribeExtensionRequest() = default ;
    DescribeExtensionRequest(const DescribeExtensionRequest &) = default ;
    DescribeExtensionRequest(DescribeExtensionRequest &&) = default ;
    DescribeExtensionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExtensionRequest() = default ;
    DescribeExtensionRequest& operator=(const DescribeExtensionRequest &) = default ;
    DescribeExtensionRequest& operator=(DescribeExtensionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->databaseName_ == nullptr && this->extensionName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeExtensionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeExtensionRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // extensionName Field Functions 
    bool hasExtensionName() const { return this->extensionName_ != nullptr;};
    void deleteExtensionName() { this->extensionName_ = nullptr;};
    inline string getExtensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
    inline DescribeExtensionRequest& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) Interface to query the details of all AnalyticDB PostgreSQL Instances in the target region, including Instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Database name.
    // 
    // *   Only contain letters, digits, and underscores (_).
    // *   Must start with a letter.
    // *   Up to 63 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> databaseName_ {};
    // The extension name.
    // 
    // This parameter is required.
    shared_ptr<string> extensionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
