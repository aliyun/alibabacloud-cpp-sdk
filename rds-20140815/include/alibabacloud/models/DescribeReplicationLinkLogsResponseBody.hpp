// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONLINKLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONLINKLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReplicationLinkLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationLinkLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationLinkLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeReplicationLinkLogsResponseBody() = default ;
    DescribeReplicationLinkLogsResponseBody(const DescribeReplicationLinkLogsResponseBody &) = default ;
    DescribeReplicationLinkLogsResponseBody(DescribeReplicationLinkLogsResponseBody &&) = default ;
    DescribeReplicationLinkLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationLinkLogsResponseBody() = default ;
    DescribeReplicationLinkLogsResponseBody& operator=(const DescribeReplicationLinkLogsResponseBody &) = default ;
    DescribeReplicationLinkLogsResponseBody& operator=(DescribeReplicationLinkLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->replicationInfo_ == nullptr && this->replicationState_ == nullptr && this->replicatorAccount_ == nullptr
        && this->replicatorPassword_ == nullptr && this->sourceAddress_ == nullptr && this->sourceCategory_ == nullptr && this->sourcePort_ == nullptr && this->targetInstanceId_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskStage_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Items& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Items& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // replicationInfo Field Functions 
      bool hasReplicationInfo() const { return this->replicationInfo_ != nullptr;};
      void deleteReplicationInfo() { this->replicationInfo_ = nullptr;};
      inline string getReplicationInfo() const { DARABONBA_PTR_GET_DEFAULT(replicationInfo_, "") };
      inline Items& setReplicationInfo(string replicationInfo) { DARABONBA_PTR_SET_VALUE(replicationInfo_, replicationInfo) };


      // replicationState Field Functions 
      bool hasReplicationState() const { return this->replicationState_ != nullptr;};
      void deleteReplicationState() { this->replicationState_ = nullptr;};
      inline string getReplicationState() const { DARABONBA_PTR_GET_DEFAULT(replicationState_, "") };
      inline Items& setReplicationState(string replicationState) { DARABONBA_PTR_SET_VALUE(replicationState_, replicationState) };


      // replicatorAccount Field Functions 
      bool hasReplicatorAccount() const { return this->replicatorAccount_ != nullptr;};
      void deleteReplicatorAccount() { this->replicatorAccount_ = nullptr;};
      inline string getReplicatorAccount() const { DARABONBA_PTR_GET_DEFAULT(replicatorAccount_, "") };
      inline Items& setReplicatorAccount(string replicatorAccount) { DARABONBA_PTR_SET_VALUE(replicatorAccount_, replicatorAccount) };


      // replicatorPassword Field Functions 
      bool hasReplicatorPassword() const { return this->replicatorPassword_ != nullptr;};
      void deleteReplicatorPassword() { this->replicatorPassword_ = nullptr;};
      inline string getReplicatorPassword() const { DARABONBA_PTR_GET_DEFAULT(replicatorPassword_, "") };
      inline Items& setReplicatorPassword(string replicatorPassword) { DARABONBA_PTR_SET_VALUE(replicatorPassword_, replicatorPassword) };


      // sourceAddress Field Functions 
      bool hasSourceAddress() const { return this->sourceAddress_ != nullptr;};
      void deleteSourceAddress() { this->sourceAddress_ = nullptr;};
      inline string getSourceAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceAddress_, "") };
      inline Items& setSourceAddress(string sourceAddress) { DARABONBA_PTR_SET_VALUE(sourceAddress_, sourceAddress) };


      // sourceCategory Field Functions 
      bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
      void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
      inline string getSourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
      inline Items& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


      // sourcePort Field Functions 
      bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
      void deleteSourcePort() { this->sourcePort_ = nullptr;};
      inline int64_t getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
      inline Items& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


      // targetInstanceId Field Functions 
      bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
      void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
      inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
      inline Items& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Items& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Items& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskStage Field Functions 
      bool hasTaskStage() const { return this->taskStage_ != nullptr;};
      void deleteTaskStage() { this->taskStage_ = nullptr;};
      inline string getTaskStage() const { DARABONBA_PTR_GET_DEFAULT(taskStage_, "") };
      inline Items& setTaskStage(string taskStage) { DARABONBA_PTR_SET_VALUE(taskStage_, taskStage) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Items& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Items& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The details of the task.
      shared_ptr<string> detail_ {};
      // The creation time. The time is displayed in UTC.
      shared_ptr<string> gmtCreated_ {};
      // The modification time. The time is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The synchronization information. This parameter is a reserved parameter.
      shared_ptr<string> replicationInfo_ {};
      // The status of the synchronization. Valid values:
      // 
      // *   **steaming**: The synchronization is in progress.
      // *   **finish**: The synchronization is complete.
      // *   **disconnect**: The synchronization is disconnected.
      shared_ptr<string> replicationState_ {};
      // The account of the database that is used for data synchronization.
      shared_ptr<string> replicatorAccount_ {};
      // The password of the account.
      shared_ptr<string> replicatorPassword_ {};
      // The endpoint of the source instance.
      shared_ptr<string> sourceAddress_ {};
      // The type of the source instance. Valid values:
      // 
      // *   other: other instances
      // *   aliyunRDS: an ApsaraDB RDS instance
      shared_ptr<string> sourceCategory_ {};
      // The port number of the source instance.
      shared_ptr<int64_t> sourcePort_ {};
      // The destination instance ID.
      shared_ptr<string> targetInstanceId_ {};
      // The ID of the task.
      shared_ptr<int64_t> taskId_ {};
      // The name of the task.
      shared_ptr<string> taskName_ {};
      // The stage of the task. Valid values:
      // 
      // *   **precheck**: the precheck stage.
      // *   **basebackup**: the basic backup stage.
      // *   **startup**: the startup stage.
      // *   **increment**: the incremental synchronization stage.
      shared_ptr<string> taskStage_ {};
      // The status of the task. Valid values:
      // 
      // *   **success**
      // *   **failure**
      // *   **running**
      shared_ptr<string> taskStatus_ {};
      // The type of the task. Valid values:
      // 
      // *   **create**: creates a synchronization link.
      // *   **create-dryrun**: performs a precheck before a synchronization link is created.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->items_ == nullptr && this->requestId_ == nullptr && this->totalSize_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeReplicationLinkLogsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeReplicationLinkLogsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeReplicationLinkLogsResponseBody::Items>) };
    inline vector<DescribeReplicationLinkLogsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeReplicationLinkLogsResponseBody::Items>) };
    inline DescribeReplicationLinkLogsResponseBody& setItems(const vector<DescribeReplicationLinkLogsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeReplicationLinkLogsResponseBody& setItems(vector<DescribeReplicationLinkLogsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReplicationLinkLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeReplicationLinkLogsResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The ID of the instance.
    shared_ptr<string> DBInstanceId_ {};
    // The items.
    shared_ptr<vector<DescribeReplicationLinkLogsResponseBody::Items>> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
