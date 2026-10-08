// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDMIGRATIONPRECHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDMIGRATIONPRECHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateCloudMigrationPrecheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudMigrationPrecheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceAccount, sourceAccount_);
      DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_TO_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_TO_JSON(SourcePassword, sourcePassword_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudMigrationPrecheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceAccount, sourceAccount_);
      DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_FROM_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_FROM_JSON(SourcePassword, sourcePassword_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateCloudMigrationPrecheckTaskRequest() = default ;
    CreateCloudMigrationPrecheckTaskRequest(const CreateCloudMigrationPrecheckTaskRequest &) = default ;
    CreateCloudMigrationPrecheckTaskRequest(CreateCloudMigrationPrecheckTaskRequest &&) = default ;
    CreateCloudMigrationPrecheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudMigrationPrecheckTaskRequest() = default ;
    CreateCloudMigrationPrecheckTaskRequest& operator=(const CreateCloudMigrationPrecheckTaskRequest &) = default ;
    CreateCloudMigrationPrecheckTaskRequest& operator=(CreateCloudMigrationPrecheckTaskRequest &&) = default ;
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
    inline CreateCloudMigrationPrecheckTaskRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCloudMigrationPrecheckTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceAccount Field Functions 
    bool hasSourceAccount() const { return this->sourceAccount_ != nullptr;};
    void deleteSourceAccount() { this->sourceAccount_ = nullptr;};
    inline string getSourceAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceAccount_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourceAccount(string sourceAccount) { DARABONBA_PTR_SET_VALUE(sourceAccount_, sourceAccount) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string getSourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string getSourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePassword Field Functions 
    bool hasSourcePassword() const { return this->sourcePassword_ != nullptr;};
    void deleteSourcePassword() { this->sourcePassword_ = nullptr;};
    inline string getSourcePassword() const { DARABONBA_PTR_GET_DEFAULT(sourcePassword_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourcePassword(string sourcePassword) { DARABONBA_PTR_SET_VALUE(sourcePassword_, sourcePassword) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


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
    // The type of the self-managed PostgreSQL database. Valid values:
    // 
    // - **idcOnVpc**: IDC-based self-managed PostgreSQL database (the IDC is connected to the VPC).
    // - **ecsOnVpc**: ECS-based self-managed PostgreSQL database on Alibaba Cloud.
    // 
    // This parameter is required.
    shared_ptr<string> sourceCategory_ {};
    // The internal IP address of the self-managed PostgreSQL database.
    // 
    // - For one-click migration of an ECS-based self-managed PostgreSQL database, set this parameter to the private IP address of the ECS instance. For more information about how to obtain the IP address, see [View IP addresses](https://help.aliyun.com/document_detail/273914.html).
    // - For one-click migration of an IDC-based self-managed PostgreSQL database, set this parameter to the internal IP address of the IDC.
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
