// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONLINKLOGSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONLINKLOGSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReplicationLinkLogsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationLinkLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ReplicationInfo, replicationInfo_);
      DARABONBA_PTR_TO_JSON(ReplicationState, replicationState_);
      DARABONBA_PTR_TO_JSON(ReplicatorAccount, replicatorAccount_);
      DARABONBA_PTR_TO_JSON(ReplicatorPassword, replicatorPassword_);
      DARABONBA_PTR_TO_JSON(SourceAddress, sourceAddress_);
      DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStage, taskStage_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationLinkLogsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ReplicationInfo, replicationInfo_);
      DARABONBA_PTR_FROM_JSON(ReplicationState, replicationState_);
      DARABONBA_PTR_FROM_JSON(ReplicatorAccount, replicatorAccount_);
      DARABONBA_PTR_FROM_JSON(ReplicatorPassword, replicatorPassword_);
      DARABONBA_PTR_FROM_JSON(SourceAddress, sourceAddress_);
      DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStage, taskStage_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeReplicationLinkLogsResponseBodyItems() = default ;
    DescribeReplicationLinkLogsResponseBodyItems(const DescribeReplicationLinkLogsResponseBodyItems &) = default ;
    DescribeReplicationLinkLogsResponseBodyItems(DescribeReplicationLinkLogsResponseBodyItems &&) = default ;
    DescribeReplicationLinkLogsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationLinkLogsResponseBodyItems() = default ;
    DescribeReplicationLinkLogsResponseBodyItems& operator=(const DescribeReplicationLinkLogsResponseBodyItems &) = default ;
    DescribeReplicationLinkLogsResponseBodyItems& operator=(DescribeReplicationLinkLogsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->replicationInfo_ == nullptr && return this->replicationState_ == nullptr && return this->replicatorAccount_ == nullptr
        && return this->replicatorPassword_ == nullptr && return this->sourceAddress_ == nullptr && return this->sourceCategory_ == nullptr && return this->sourcePort_ == nullptr && return this->targetInstanceId_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskStage_ == nullptr && return this->taskStatus_ == nullptr && return this->taskType_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // replicationInfo Field Functions 
    bool hasReplicationInfo() const { return this->replicationInfo_ != nullptr;};
    void deleteReplicationInfo() { this->replicationInfo_ = nullptr;};
    inline string replicationInfo() const { DARABONBA_PTR_GET_DEFAULT(replicationInfo_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setReplicationInfo(string replicationInfo) { DARABONBA_PTR_SET_VALUE(replicationInfo_, replicationInfo) };


    // replicationState Field Functions 
    bool hasReplicationState() const { return this->replicationState_ != nullptr;};
    void deleteReplicationState() { this->replicationState_ = nullptr;};
    inline string replicationState() const { DARABONBA_PTR_GET_DEFAULT(replicationState_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setReplicationState(string replicationState) { DARABONBA_PTR_SET_VALUE(replicationState_, replicationState) };


    // replicatorAccount Field Functions 
    bool hasReplicatorAccount() const { return this->replicatorAccount_ != nullptr;};
    void deleteReplicatorAccount() { this->replicatorAccount_ = nullptr;};
    inline string replicatorAccount() const { DARABONBA_PTR_GET_DEFAULT(replicatorAccount_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setReplicatorAccount(string replicatorAccount) { DARABONBA_PTR_SET_VALUE(replicatorAccount_, replicatorAccount) };


    // replicatorPassword Field Functions 
    bool hasReplicatorPassword() const { return this->replicatorPassword_ != nullptr;};
    void deleteReplicatorPassword() { this->replicatorPassword_ = nullptr;};
    inline string replicatorPassword() const { DARABONBA_PTR_GET_DEFAULT(replicatorPassword_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setReplicatorPassword(string replicatorPassword) { DARABONBA_PTR_SET_VALUE(replicatorPassword_, replicatorPassword) };


    // sourceAddress Field Functions 
    bool hasSourceAddress() const { return this->sourceAddress_ != nullptr;};
    void deleteSourceAddress() { this->sourceAddress_ = nullptr;};
    inline string sourceAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceAddress_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setSourceAddress(string sourceAddress) { DARABONBA_PTR_SET_VALUE(sourceAddress_, sourceAddress) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string sourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int64_t sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
    inline DescribeReplicationLinkLogsResponseBodyItems& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeReplicationLinkLogsResponseBodyItems& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStage Field Functions 
    bool hasTaskStage() const { return this->taskStage_ != nullptr;};
    void deleteTaskStage() { this->taskStage_ = nullptr;};
    inline string taskStage() const { DARABONBA_PTR_GET_DEFAULT(taskStage_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setTaskStage(string taskStage) { DARABONBA_PTR_SET_VALUE(taskStage_, taskStage) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeReplicationLinkLogsResponseBodyItems& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The details of the task.
    std::shared_ptr<string> detail_ = nullptr;
    // The creation time. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The modification time. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The synchronization information. This parameter is a reserved parameter.
    std::shared_ptr<string> replicationInfo_ = nullptr;
    // The status of the synchronization. Valid values:
    // 
    // *   **steaming**: The synchronization is in progress.
    // *   **finish**: The synchronization is complete.
    // *   **disconnect**: The synchronization is disconnected.
    std::shared_ptr<string> replicationState_ = nullptr;
    // The account of the database that is used for data synchronization.
    std::shared_ptr<string> replicatorAccount_ = nullptr;
    // The password of the account.
    std::shared_ptr<string> replicatorPassword_ = nullptr;
    // The endpoint of the source instance.
    std::shared_ptr<string> sourceAddress_ = nullptr;
    // The type of the source instance. Valid values:
    // 
    // *   other: other instances
    // *   aliyunRDS: an ApsaraDB RDS instance
    std::shared_ptr<string> sourceCategory_ = nullptr;
    // The port number of the source instance.
    std::shared_ptr<int64_t> sourcePort_ = nullptr;
    // The destination instance ID.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
    // The ID of the task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The stage of the task. Valid values:
    // 
    // *   **precheck**: the precheck stage.
    // *   **basebackup**: the basic backup stage.
    // *   **startup**: the startup stage.
    // *   **increment**: the incremental synchronization stage.
    std::shared_ptr<string> taskStage_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **success**
    // *   **failure**
    // *   **running**
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **create**: creates a synchronization link.
    // *   **create-dryrun**: performs a precheck before a synchronization link is created.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
