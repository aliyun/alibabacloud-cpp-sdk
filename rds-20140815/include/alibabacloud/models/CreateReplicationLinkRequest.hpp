// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateReplicationLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ReplicatorAccount, replicatorAccount_);
      DARABONBA_PTR_TO_JSON(ReplicatorPassword, replicatorPassword_);
      DARABONBA_PTR_TO_JSON(SourceAddress, sourceAddress_);
      DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_TO_JSON(SourceInstanceName, sourceInstanceName_);
      DARABONBA_PTR_TO_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(TargetAddress, targetAddress_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ReplicatorAccount, replicatorAccount_);
      DARABONBA_PTR_FROM_JSON(ReplicatorPassword, replicatorPassword_);
      DARABONBA_PTR_FROM_JSON(SourceAddress, sourceAddress_);
      DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceName, sourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(TargetAddress, targetAddress_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateReplicationLinkRequest() = default ;
    CreateReplicationLinkRequest(const CreateReplicationLinkRequest &) = default ;
    CreateReplicationLinkRequest(CreateReplicationLinkRequest &&) = default ;
    CreateReplicationLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationLinkRequest() = default ;
    CreateReplicationLinkRequest& operator=(const CreateReplicationLinkRequest &) = default ;
    CreateReplicationLinkRequest& operator=(CreateReplicationLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->dryRun_ == nullptr && this->replicatorAccount_ == nullptr && this->replicatorPassword_ == nullptr && this->sourceAddress_ == nullptr && this->sourceCategory_ == nullptr
        && this->sourceInstanceName_ == nullptr && this->sourceInstanceRegionId_ == nullptr && this->sourcePort_ == nullptr && this->targetAddress_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateReplicationLinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateReplicationLinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // replicatorAccount Field Functions 
    bool hasReplicatorAccount() const { return this->replicatorAccount_ != nullptr;};
    void deleteReplicatorAccount() { this->replicatorAccount_ = nullptr;};
    inline string getReplicatorAccount() const { DARABONBA_PTR_GET_DEFAULT(replicatorAccount_, "") };
    inline CreateReplicationLinkRequest& setReplicatorAccount(string replicatorAccount) { DARABONBA_PTR_SET_VALUE(replicatorAccount_, replicatorAccount) };


    // replicatorPassword Field Functions 
    bool hasReplicatorPassword() const { return this->replicatorPassword_ != nullptr;};
    void deleteReplicatorPassword() { this->replicatorPassword_ = nullptr;};
    inline string getReplicatorPassword() const { DARABONBA_PTR_GET_DEFAULT(replicatorPassword_, "") };
    inline CreateReplicationLinkRequest& setReplicatorPassword(string replicatorPassword) { DARABONBA_PTR_SET_VALUE(replicatorPassword_, replicatorPassword) };


    // sourceAddress Field Functions 
    bool hasSourceAddress() const { return this->sourceAddress_ != nullptr;};
    void deleteSourceAddress() { this->sourceAddress_ = nullptr;};
    inline string getSourceAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceAddress_, "") };
    inline CreateReplicationLinkRequest& setSourceAddress(string sourceAddress) { DARABONBA_PTR_SET_VALUE(sourceAddress_, sourceAddress) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string getSourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline CreateReplicationLinkRequest& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourceInstanceName Field Functions 
    bool hasSourceInstanceName() const { return this->sourceInstanceName_ != nullptr;};
    void deleteSourceInstanceName() { this->sourceInstanceName_ = nullptr;};
    inline string getSourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceName_, "") };
    inline CreateReplicationLinkRequest& setSourceInstanceName(string sourceInstanceName) { DARABONBA_PTR_SET_VALUE(sourceInstanceName_, sourceInstanceName) };


    // sourceInstanceRegionId Field Functions 
    bool hasSourceInstanceRegionId() const { return this->sourceInstanceRegionId_ != nullptr;};
    void deleteSourceInstanceRegionId() { this->sourceInstanceRegionId_ = nullptr;};
    inline string getSourceInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceRegionId_, "") };
    inline CreateReplicationLinkRequest& setSourceInstanceRegionId(string sourceInstanceRegionId) { DARABONBA_PTR_SET_VALUE(sourceInstanceRegionId_, sourceInstanceRegionId) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline CreateReplicationLinkRequest& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // targetAddress Field Functions 
    bool hasTargetAddress() const { return this->targetAddress_ != nullptr;};
    void deleteTargetAddress() { this->targetAddress_ = nullptr;};
    inline string getTargetAddress() const { DARABONBA_PTR_GET_DEFAULT(targetAddress_, "") };
    inline CreateReplicationLinkRequest& setTargetAddress(string targetAddress) { DARABONBA_PTR_SET_VALUE(targetAddress_, targetAddress) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CreateReplicationLinkRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateReplicationLinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The ID of the DR instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Specifies whether to perform a dry run before the system creates the DR instance. Valid values:
    // 
    // *   **true**: performs a dry run but does not create the instance. The system checks the request parameters, request syntax, limits, and available resources.
    // *   **false** (default): performs a dry run and the actual request. If the request passes the dry run, the instance is directly created.
    // 
    // This parameter is required.
    shared_ptr<bool> dryRun_ {};
    // The account of the database that is used for data synchronization.
    shared_ptr<string> replicatorAccount_ {};
    // The password of the account.
    shared_ptr<string> replicatorPassword_ {};
    // The endpoint of the source ApsaraDB RDS for PostgreSQL instance or the IP address of the source ApsaraDB RDS for SQL Server instance.
    shared_ptr<string> sourceAddress_ {};
    // The type of the source instance. Valid values:
    // 
    // *   **other**: other instances. **SQL Server instances are not supported.**
    // *   **aliyunRDS**: an ApsaraDB RDS instance.
    shared_ptr<string> sourceCategory_ {};
    // The name of the source instance. If you set **SourceCategory** to **aliyunRDS**, this parameter is required.
    shared_ptr<string> sourceInstanceName_ {};
    // The region ID of the source instance. If you set **SourceCategory** to **aliyunRDS**, this parameter is required.
    shared_ptr<string> sourceInstanceRegionId_ {};
    // The port of the source instance.
    shared_ptr<int64_t> sourcePort_ {};
    // The IP address of the DR instance of the ApsaraDB RDS for SQL Server instance.
    shared_ptr<string> targetAddress_ {};
    // The task ID of the successful dry run.
    shared_ptr<int64_t> taskId_ {};
    // The task name of the dry run. You can specify a custom task name. If you do not specify this parameter, ApsaraDB RDS automatically generates a task name.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
