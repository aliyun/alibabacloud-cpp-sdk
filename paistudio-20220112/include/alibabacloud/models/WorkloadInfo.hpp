// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKLOADINFO_HPP_
#define ALIBABACLOUD_MODELS_WORKLOADINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueueMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class WorkloadInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkloadInfo& obj) { 
      DARABONBA_PTR_TO_JSON(IsScheduled, isScheduled_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QueueMetas, queueMetas_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WorkloadCreatedTime, workloadCreatedTime_);
      DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
      DARABONBA_PTR_TO_JSON(WorkloadStatus, workloadStatus_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, WorkloadInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(IsScheduled, isScheduled_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QueueMetas, queueMetas_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WorkloadCreatedTime, workloadCreatedTime_);
      DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
      DARABONBA_PTR_FROM_JSON(WorkloadStatus, workloadStatus_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    WorkloadInfo() = default ;
    WorkloadInfo(const WorkloadInfo &) = default ;
    WorkloadInfo(WorkloadInfo &&) = default ;
    WorkloadInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkloadInfo() = default ;
    WorkloadInfo& operator=(const WorkloadInfo &) = default ;
    WorkloadInfo& operator=(WorkloadInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isScheduled_ == nullptr
        && this->priority_ == nullptr && this->queueMetas_ == nullptr && this->tenantId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr
        && this->workloadCreatedTime_ == nullptr && this->workloadId_ == nullptr && this->workloadName_ == nullptr && this->workloadStatus_ == nullptr && this->workloadType_ == nullptr
        && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
    // isScheduled Field Functions 
    bool hasIsScheduled() const { return this->isScheduled_ != nullptr;};
    void deleteIsScheduled() { this->isScheduled_ = nullptr;};
    inline string getIsScheduled() const { DARABONBA_PTR_GET_DEFAULT(isScheduled_, "") };
    inline WorkloadInfo& setIsScheduled(string isScheduled) { DARABONBA_PTR_SET_VALUE(isScheduled_, isScheduled) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline WorkloadInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // queueMetas Field Functions 
    bool hasQueueMetas() const { return this->queueMetas_ != nullptr;};
    void deleteQueueMetas() { this->queueMetas_ = nullptr;};
    inline const vector<QueueMeta> & getQueueMetas() const { DARABONBA_PTR_GET_CONST(queueMetas_, vector<QueueMeta>) };
    inline vector<QueueMeta> getQueueMetas() { DARABONBA_PTR_GET(queueMetas_, vector<QueueMeta>) };
    inline WorkloadInfo& setQueueMetas(const vector<QueueMeta> & queueMetas) { DARABONBA_PTR_SET_VALUE(queueMetas_, queueMetas) };
    inline WorkloadInfo& setQueueMetas(vector<QueueMeta> && queueMetas) { DARABONBA_PTR_SET_RVALUE(queueMetas_, queueMetas) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline WorkloadInfo& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline WorkloadInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline WorkloadInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // workloadCreatedTime Field Functions 
    bool hasWorkloadCreatedTime() const { return this->workloadCreatedTime_ != nullptr;};
    void deleteWorkloadCreatedTime() { this->workloadCreatedTime_ = nullptr;};
    inline string getWorkloadCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(workloadCreatedTime_, "") };
    inline WorkloadInfo& setWorkloadCreatedTime(string workloadCreatedTime) { DARABONBA_PTR_SET_VALUE(workloadCreatedTime_, workloadCreatedTime) };


    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string getWorkloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline WorkloadInfo& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string getWorkloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline WorkloadInfo& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


    // workloadStatus Field Functions 
    bool hasWorkloadStatus() const { return this->workloadStatus_ != nullptr;};
    void deleteWorkloadStatus() { this->workloadStatus_ = nullptr;};
    inline string getWorkloadStatus() const { DARABONBA_PTR_GET_DEFAULT(workloadStatus_, "") };
    inline WorkloadInfo& setWorkloadStatus(string workloadStatus) { DARABONBA_PTR_SET_VALUE(workloadStatus_, workloadStatus) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string getWorkloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline WorkloadInfo& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline WorkloadInfo& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline WorkloadInfo& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    shared_ptr<string> isScheduled_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<vector<QueueMeta>> queueMetas_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> userName_ {};
    shared_ptr<string> workloadCreatedTime_ {};
    shared_ptr<string> workloadId_ {};
    shared_ptr<string> workloadName_ {};
    shared_ptr<string> workloadStatus_ {};
    shared_ptr<string> workloadType_ {};
    shared_ptr<string> workspaceId_ {};
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
