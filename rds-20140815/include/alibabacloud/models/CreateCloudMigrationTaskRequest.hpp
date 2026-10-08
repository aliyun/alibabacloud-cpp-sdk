// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDMIGRATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDMIGRATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateCloudMigrationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudMigrationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceAccount, sourceAccount_);
      DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_TO_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_TO_JSON(SourcePassword, sourcePassword_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudMigrationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceAccount, sourceAccount_);
      DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_FROM_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_FROM_JSON(SourcePassword, sourcePassword_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateCloudMigrationTaskRequest() = default ;
    CreateCloudMigrationTaskRequest(const CreateCloudMigrationTaskRequest &) = default ;
    CreateCloudMigrationTaskRequest(CreateCloudMigrationTaskRequest &&) = default ;
    CreateCloudMigrationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudMigrationTaskRequest() = default ;
    CreateCloudMigrationTaskRequest& operator=(const CreateCloudMigrationTaskRequest &) = default ;
    CreateCloudMigrationTaskRequest& operator=(CreateCloudMigrationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->sourceAccount_ == nullptr && this->sourceCategory_ == nullptr && this->sourceIpAddress_ == nullptr && this->sourcePassword_ == nullptr
        && this->sourcePort_ == nullptr && this->taskName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateCloudMigrationTaskRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCloudMigrationTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceAccount Field Functions 
    bool hasSourceAccount() const { return this->sourceAccount_ != nullptr;};
    void deleteSourceAccount() { this->sourceAccount_ = nullptr;};
    inline string getSourceAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceAccount_, "") };
    inline CreateCloudMigrationTaskRequest& setSourceAccount(string sourceAccount) { DARABONBA_PTR_SET_VALUE(sourceAccount_, sourceAccount) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string getSourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline CreateCloudMigrationTaskRequest& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string getSourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline CreateCloudMigrationTaskRequest& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePassword Field Functions 
    bool hasSourcePassword() const { return this->sourcePassword_ != nullptr;};
    void deleteSourcePassword() { this->sourcePassword_ = nullptr;};
    inline string getSourcePassword() const { DARABONBA_PTR_GET_DEFAULT(sourcePassword_, "") };
    inline CreateCloudMigrationTaskRequest& setSourcePassword(string sourcePassword) { DARABONBA_PTR_SET_VALUE(sourcePassword_, sourcePassword) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline CreateCloudMigrationTaskRequest& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateCloudMigrationTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The ID of the target instance. You can invoke the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The username. The database account created in the [Create a migration account](https://help.aliyun.com/document_detail/369500.html) step.
    // 
    // This parameter is required.
    shared_ptr<string> sourceAccount_ {};
    // The category of the source instance.
    // 
    // - **aliyunRDS**: ApsaraDB RDS instance.
    // - **other**: other.
    // 
    // This parameter is required.
    shared_ptr<string> sourceCategory_ {};
    // The internal or public IP address of the self-managed PostgreSQL database.
    // 
    // - To migrate a self-managed PostgreSQL database on an ECS instance to the cloud, set this parameter to the private IP address of the ECS instance. For more information about how to obtain the IP address, see [View IP addresses](https://help.aliyun.com/document_detail/98677.html).
    // - To migrate a self-managed PostgreSQL database in an Internet Data Center (IDC) to the cloud, set this parameter to the internal IP address of the IDC.
    // 
    // This parameter is required.
    shared_ptr<string> sourceIpAddress_ {};
    // The password. The password of the database account created in the [Create a migration account](https://help.aliyun.com/document_detail/369500.html) step.
    // 
    // This parameter is required.
    shared_ptr<string> sourcePassword_ {};
    // The port of the self-managed PostgreSQL database. You can run the `netstat -a | grep PGSQL` command to view the port.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sourcePort_ {};
    // The task name. You can specify a custom name. If you do not specify this parameter, the system automatically generates a name.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
