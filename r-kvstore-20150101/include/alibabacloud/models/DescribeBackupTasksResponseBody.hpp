// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeBackupTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(BackupJobs, backupJobs_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(BackupJobs, backupJobs_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupTasksResponseBody() = default ;
    DescribeBackupTasksResponseBody(const DescribeBackupTasksResponseBody &) = default ;
    DescribeBackupTasksResponseBody(DescribeBackupTasksResponseBody &&) = default ;
    DescribeBackupTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTasksResponseBody() = default ;
    DescribeBackupTasksResponseBody& operator=(const DescribeBackupTasksResponseBody &) = default ;
    DescribeBackupTasksResponseBody& operator=(DescribeBackupTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupJobs& obj) { 
        DARABONBA_PTR_TO_JSON(BackupJobID, backupJobID_);
        DARABONBA_PTR_TO_JSON(BackupProgressStatus, backupProgressStatus_);
        DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(Process, process_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      };
      friend void from_json(const Darabonba::Json& j, BackupJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupJobID, backupJobID_);
        DARABONBA_PTR_FROM_JSON(BackupProgressStatus, backupProgressStatus_);
        DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(Process, process_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      };
      BackupJobs() = default ;
      BackupJobs(const BackupJobs &) = default ;
      BackupJobs(BackupJobs &&) = default ;
      BackupJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupJobs() = default ;
      BackupJobs& operator=(const BackupJobs &) = default ;
      BackupJobs& operator=(BackupJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupJobID_ == nullptr
        && this->backupProgressStatus_ == nullptr && this->jobMode_ == nullptr && this->nodeId_ == nullptr && this->process_ == nullptr && this->progress_ == nullptr
        && this->startTime_ == nullptr && this->taskAction_ == nullptr; };
      // backupJobID Field Functions 
      bool hasBackupJobID() const { return this->backupJobID_ != nullptr;};
      void deleteBackupJobID() { this->backupJobID_ = nullptr;};
      inline int64_t getBackupJobID() const { DARABONBA_PTR_GET_DEFAULT(backupJobID_, 0L) };
      inline BackupJobs& setBackupJobID(int64_t backupJobID) { DARABONBA_PTR_SET_VALUE(backupJobID_, backupJobID) };


      // backupProgressStatus Field Functions 
      bool hasBackupProgressStatus() const { return this->backupProgressStatus_ != nullptr;};
      void deleteBackupProgressStatus() { this->backupProgressStatus_ = nullptr;};
      inline string getBackupProgressStatus() const { DARABONBA_PTR_GET_DEFAULT(backupProgressStatus_, "") };
      inline BackupJobs& setBackupProgressStatus(string backupProgressStatus) { DARABONBA_PTR_SET_VALUE(backupProgressStatus_, backupProgressStatus) };


      // jobMode Field Functions 
      bool hasJobMode() const { return this->jobMode_ != nullptr;};
      void deleteJobMode() { this->jobMode_ = nullptr;};
      inline string getJobMode() const { DARABONBA_PTR_GET_DEFAULT(jobMode_, "") };
      inline BackupJobs& setJobMode(string jobMode) { DARABONBA_PTR_SET_VALUE(jobMode_, jobMode) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline BackupJobs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline BackupJobs& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline BackupJobs& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline BackupJobs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskAction Field Functions 
      bool hasTaskAction() const { return this->taskAction_ != nullptr;};
      void deleteTaskAction() { this->taskAction_ = nullptr;};
      inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
      inline BackupJobs& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    protected:
      // The ID of the backup task.
      shared_ptr<int64_t> backupJobID_ {};
      // The state of the backup task. Valid values:
      // 
      // *   **NoStart**: The backup task is not started.
      // *   **Preparing**: The backup task is being prepared.
      // *   **Waiting**: The backup task is pending.
      // *   **Uploading**: The system is uploading the backup file.
      // *   **Checking**: The system is checking the uploaded backup file.
      // *   **Finished**: The backup task is completed.
      shared_ptr<string> backupProgressStatus_ {};
      // The backup mode. Valid values:
      // 
      // *   **Automated**: automatic backup
      // *   **Manual**: manual backup
      shared_ptr<string> jobMode_ {};
      // The ID of the data node.
      shared_ptr<string> nodeId_ {};
      // The progress of the backup task in percentage.
      shared_ptr<string> process_ {};
      // The backup progress.
      shared_ptr<string> progress_ {};
      // The start time of the backup task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The type of the backup task. Valid values:
      // 
      // *   **TempBackupTask**: The backup task was manually performed.
      // *   **NormalBackupTask**: The backup task was automatically performed.
      shared_ptr<string> taskAction_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> authAction_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> authPrincipalType_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> noPermissionType_ {};
      // This parameter is no longer used. Ignore this parameter.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->backupJobs_ == nullptr && this->instanceId_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeBackupTasksResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeBackupTasksResponseBody::AccessDeniedDetail) };
    inline DescribeBackupTasksResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeBackupTasksResponseBody::AccessDeniedDetail) };
    inline DescribeBackupTasksResponseBody& setAccessDeniedDetail(const DescribeBackupTasksResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeBackupTasksResponseBody& setAccessDeniedDetail(DescribeBackupTasksResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // backupJobs Field Functions 
    bool hasBackupJobs() const { return this->backupJobs_ != nullptr;};
    void deleteBackupJobs() { this->backupJobs_ = nullptr;};
    inline const vector<DescribeBackupTasksResponseBody::BackupJobs> & getBackupJobs() const { DARABONBA_PTR_GET_CONST(backupJobs_, vector<DescribeBackupTasksResponseBody::BackupJobs>) };
    inline vector<DescribeBackupTasksResponseBody::BackupJobs> getBackupJobs() { DARABONBA_PTR_GET(backupJobs_, vector<DescribeBackupTasksResponseBody::BackupJobs>) };
    inline DescribeBackupTasksResponseBody& setBackupJobs(const vector<DescribeBackupTasksResponseBody::BackupJobs> & backupJobs) { DARABONBA_PTR_SET_VALUE(backupJobs_, backupJobs) };
    inline DescribeBackupTasksResponseBody& setBackupJobs(vector<DescribeBackupTasksResponseBody::BackupJobs> && backupJobs) { DARABONBA_PTR_SET_RVALUE(backupJobs_, backupJobs) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBackupTasksResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The following parameters are no longer used. Ignore the parameters.
    shared_ptr<DescribeBackupTasksResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The details of the backup tasks.
    shared_ptr<vector<DescribeBackupTasksResponseBody::BackupJobs>> backupJobs_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
