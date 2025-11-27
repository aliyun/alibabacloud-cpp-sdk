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
        && return this->resourceOwnerId_ == nullptr && return this->sourceAccount_ == nullptr && return this->sourceCategory_ == nullptr && return this->sourceIpAddress_ == nullptr && return this->sourcePassword_ == nullptr
        && return this->sourcePort_ == nullptr && return this->taskName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCloudMigrationPrecheckTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceAccount Field Functions 
    bool hasSourceAccount() const { return this->sourceAccount_ != nullptr;};
    void deleteSourceAccount() { this->sourceAccount_ = nullptr;};
    inline string sourceAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceAccount_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourceAccount(string sourceAccount) { DARABONBA_PTR_SET_VALUE(sourceAccount_, sourceAccount) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string sourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string sourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePassword Field Functions 
    bool hasSourcePassword() const { return this->sourcePassword_ != nullptr;};
    void deleteSourcePassword() { this->sourcePassword_ = nullptr;};
    inline string sourcePassword() const { DARABONBA_PTR_GET_DEFAULT(sourcePassword_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourcePassword(string sourcePassword) { DARABONBA_PTR_SET_VALUE(sourcePassword_, sourcePassword) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline CreateCloudMigrationPrecheckTaskRequest& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateCloudMigrationPrecheckTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The username of the account that is used to connect to the self-managed PostgreSQL instance. Enter the username of the account that you created in the [Create an account for cloud migration on a self-managed PostgreSQL instance](https://help.aliyun.com/document_detail/369500.html) topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceAccount_ = nullptr;
    // The environment in which the self-managed PostgreSQL instance runs.
    // 
    // *   **idcOnVpc**: The self-managed PostgreSQL instance resides in a data center. The data center can communicate with the VPC to which the ApsaraDB RDS for PostgreSQL instance belongs.
    // *   **ecsOnVpc**: The self-managed PostgreSQL instance resides on an ECS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceCategory_ = nullptr;
    // The private IP address that is used to connect to the self-managed PostgreSQL instance.
    // 
    // *   If the self-managed PostgreSQL instance resides on an ECS instance, enter the private IP address of the ECS instance. For more information about how to obtain the private IP address of an ECS instance, see [View IP addresses](https://help.aliyun.com/document_detail/273914.html).
    // *   If the self-managed PostgreSQL instance resides in an on-premises data center, enter the private IP address of the on-premises data center.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceIpAddress_ = nullptr;
    // The password of the account that is used to connect to the self-managed PostgreSQL instance. Enter the password of the account that you created in the [Create an account for cloud migration on a self-managed PostgreSQL instance](https://help.aliyun.com/document_detail/369500.html) topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourcePassword_ = nullptr;
    // The port that is used to connect to the self-managed PostgreSQL instance. You can run the `netstat -a | grep PGSQL` command to view the port.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> sourcePort_ = nullptr;
    // The name of the task. If you do not specify this parameter, ApsaraDB RDS automatically generates a name for the cloud migration task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
