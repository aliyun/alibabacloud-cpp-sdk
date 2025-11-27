// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDMIGRATIONRESULTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDMIGRATIONRESULTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCloudMigrationResultResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudMigrationResultResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MigrateStage, migrateStage_);
      DARABONBA_PTR_TO_JSON(ReplicationInfo, replicationInfo_);
      DARABONBA_PTR_TO_JSON(ReplicationState, replicationState_);
      DARABONBA_PTR_TO_JSON(SourceAccount, sourceAccount_);
      DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_TO_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_TO_JSON(SourcePassword, sourcePassword_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(TargetEip, targetEip_);
      DARABONBA_PTR_TO_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudMigrationResultResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MigrateStage, migrateStage_);
      DARABONBA_PTR_FROM_JSON(ReplicationInfo, replicationInfo_);
      DARABONBA_PTR_FROM_JSON(ReplicationState, replicationState_);
      DARABONBA_PTR_FROM_JSON(SourceAccount, sourceAccount_);
      DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_FROM_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_FROM_JSON(SourcePassword, sourcePassword_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(TargetEip, targetEip_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeCloudMigrationResultResponseBodyItems() = default ;
    DescribeCloudMigrationResultResponseBodyItems(const DescribeCloudMigrationResultResponseBodyItems &) = default ;
    DescribeCloudMigrationResultResponseBodyItems(DescribeCloudMigrationResultResponseBodyItems &&) = default ;
    DescribeCloudMigrationResultResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudMigrationResultResponseBodyItems() = default ;
    DescribeCloudMigrationResultResponseBodyItems& operator=(const DescribeCloudMigrationResultResponseBodyItems &) = default ;
    DescribeCloudMigrationResultResponseBodyItems& operator=(DescribeCloudMigrationResultResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->migrateStage_ == nullptr && return this->replicationInfo_ == nullptr && return this->replicationState_ == nullptr
        && return this->sourceAccount_ == nullptr && return this->sourceCategory_ == nullptr && return this->sourceIpAddress_ == nullptr && return this->sourcePassword_ == nullptr && return this->sourcePort_ == nullptr
        && return this->switchTime_ == nullptr && return this->targetEip_ == nullptr && return this->targetInstanceName_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // migrateStage Field Functions 
    bool hasMigrateStage() const { return this->migrateStage_ != nullptr;};
    void deleteMigrateStage() { this->migrateStage_ = nullptr;};
    inline string migrateStage() const { DARABONBA_PTR_GET_DEFAULT(migrateStage_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setMigrateStage(string migrateStage) { DARABONBA_PTR_SET_VALUE(migrateStage_, migrateStage) };


    // replicationInfo Field Functions 
    bool hasReplicationInfo() const { return this->replicationInfo_ != nullptr;};
    void deleteReplicationInfo() { this->replicationInfo_ = nullptr;};
    inline string replicationInfo() const { DARABONBA_PTR_GET_DEFAULT(replicationInfo_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setReplicationInfo(string replicationInfo) { DARABONBA_PTR_SET_VALUE(replicationInfo_, replicationInfo) };


    // replicationState Field Functions 
    bool hasReplicationState() const { return this->replicationState_ != nullptr;};
    void deleteReplicationState() { this->replicationState_ = nullptr;};
    inline string replicationState() const { DARABONBA_PTR_GET_DEFAULT(replicationState_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setReplicationState(string replicationState) { DARABONBA_PTR_SET_VALUE(replicationState_, replicationState) };


    // sourceAccount Field Functions 
    bool hasSourceAccount() const { return this->sourceAccount_ != nullptr;};
    void deleteSourceAccount() { this->sourceAccount_ = nullptr;};
    inline string sourceAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceAccount_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setSourceAccount(string sourceAccount) { DARABONBA_PTR_SET_VALUE(sourceAccount_, sourceAccount) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string sourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string sourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePassword Field Functions 
    bool hasSourcePassword() const { return this->sourcePassword_ != nullptr;};
    void deleteSourcePassword() { this->sourcePassword_ = nullptr;};
    inline string sourcePassword() const { DARABONBA_PTR_GET_DEFAULT(sourcePassword_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setSourcePassword(string sourcePassword) { DARABONBA_PTR_SET_VALUE(sourcePassword_, sourcePassword) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline DescribeCloudMigrationResultResponseBodyItems& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string switchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // targetEip Field Functions 
    bool hasTargetEip() const { return this->targetEip_ != nullptr;};
    void deleteTargetEip() { this->targetEip_ = nullptr;};
    inline string targetEip() const { DARABONBA_PTR_GET_DEFAULT(targetEip_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setTargetEip(string targetEip) { DARABONBA_PTR_SET_VALUE(targetEip_, targetEip) };


    // targetInstanceName Field Functions 
    bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
    void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
    inline string targetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeCloudMigrationResultResponseBodyItems& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeCloudMigrationResultResponseBodyItems& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The details about the migration task.
    std::shared_ptr<string> detail_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the task was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The migration phase of the migration task.
    // 
    // *   **precheck**: precheck
    // *   **basebackup**: full data backup
    // *   **startup**: link establishment
    // *   **increment**: incremental data synchronization
    // *   **switch**: cloud migration-triggered switchover
    // *   **success**: cloud migration completed
    std::shared_ptr<string> migrateStage_ = nullptr;
    // The information about the replication link.
    std::shared_ptr<string> replicationInfo_ = nullptr;
    // The status of data replication.
    // 
    // *   **unstarted**
    // *   **catchup**
    // *   **streaming**
    // *   **disconnect**
    // *   **finish**
    std::shared_ptr<string> replicationState_ = nullptr;
    // The username.
    std::shared_ptr<string> sourceAccount_ = nullptr;
    // The environment in which the self-managed PostgreSQL instance runs.
    // 
    // *   **idcOnVpc**: The self-managed PostgreSQL instance resides in a data center. The data center can communicate with the VPC to which the ApsaraDB RDS for PostgreSQL instance belongs.
    // *   **ecsOnVpc**: The self-managed PostgreSQL instance resides on an ECS instance.
    std::shared_ptr<string> sourceCategory_ = nullptr;
    // The private IP address that is used to connect to the self-managed PostgreSQL instance.
    std::shared_ptr<string> sourceIpAddress_ = nullptr;
    // The password.
    std::shared_ptr<string> sourcePassword_ = nullptr;
    // The port number that is used to connect to the self-managed PostgreSQL instance.
    std::shared_ptr<int64_t> sourcePort_ = nullptr;
    // The time when the switchover was performed.
    std::shared_ptr<string> switchTime_ = nullptr;
    // A reserved parameter. The return value of this parameter is empty.
    std::shared_ptr<string> targetEip_ = nullptr;
    // The ID of the destination instance.
    std::shared_ptr<string> targetInstanceName_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The task name.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
