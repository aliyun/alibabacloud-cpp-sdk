// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUEUEINFO_HPP_
#define ALIBABACLOUD_MODELS_QUEUEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceAmount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QueueInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueueInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CodeType, codeType_);
      DARABONBA_PTR_TO_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_TO_JSON(GmtDequeuedTime, gmtDequeuedTime_);
      DARABONBA_PTR_TO_JSON(GmtEnqueuedTime, gmtEnqueuedTime_);
      DARABONBA_PTR_TO_JSON(GmtPositionModifiedTime, gmtPositionModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UseOversoldResource, useOversoldResource_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
      DARABONBA_PTR_TO_JSON(WorkloadStatus, workloadStatus_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, QueueInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CodeType, codeType_);
      DARABONBA_PTR_FROM_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_FROM_JSON(GmtDequeuedTime, gmtDequeuedTime_);
      DARABONBA_PTR_FROM_JSON(GmtEnqueuedTime, gmtEnqueuedTime_);
      DARABONBA_PTR_FROM_JSON(GmtPositionModifiedTime, gmtPositionModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UseOversoldResource, useOversoldResource_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
      DARABONBA_PTR_FROM_JSON(WorkloadStatus, workloadStatus_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    QueueInfo() = default ;
    QueueInfo(const QueueInfo &) = default ;
    QueueInfo(QueueInfo &&) = default ;
    QueueInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueueInfo() = default ;
    QueueInfo& operator=(const QueueInfo &) = default ;
    QueueInfo& operator=(QueueInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->codeType_ != nullptr && this->gmtCreatedTime_ != nullptr && this->gmtDequeuedTime_ != nullptr && this->gmtEnqueuedTime_ != nullptr && this->gmtPositionModifiedTime_ != nullptr
        && this->name_ != nullptr && this->position_ != nullptr && this->priority_ != nullptr && this->queueStrategy_ != nullptr && this->quotaId_ != nullptr
        && this->reason_ != nullptr && this->resource_ != nullptr && this->status_ != nullptr && this->useOversoldResource_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr && this->workloadId_ != nullptr && this->workloadName_ != nullptr && this->workloadStatus_ != nullptr && this->workloadType_ != nullptr
        && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueueInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string codeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline QueueInfo& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline QueueInfo& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtDequeuedTime Field Functions 
    bool hasGmtDequeuedTime() const { return this->gmtDequeuedTime_ != nullptr;};
    void deleteGmtDequeuedTime() { this->gmtDequeuedTime_ = nullptr;};
    inline string gmtDequeuedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtDequeuedTime_, "") };
    inline QueueInfo& setGmtDequeuedTime(string gmtDequeuedTime) { DARABONBA_PTR_SET_VALUE(gmtDequeuedTime_, gmtDequeuedTime) };


    // gmtEnqueuedTime Field Functions 
    bool hasGmtEnqueuedTime() const { return this->gmtEnqueuedTime_ != nullptr;};
    void deleteGmtEnqueuedTime() { this->gmtEnqueuedTime_ = nullptr;};
    inline string gmtEnqueuedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEnqueuedTime_, "") };
    inline QueueInfo& setGmtEnqueuedTime(string gmtEnqueuedTime) { DARABONBA_PTR_SET_VALUE(gmtEnqueuedTime_, gmtEnqueuedTime) };


    // gmtPositionModifiedTime Field Functions 
    bool hasGmtPositionModifiedTime() const { return this->gmtPositionModifiedTime_ != nullptr;};
    void deleteGmtPositionModifiedTime() { this->gmtPositionModifiedTime_ = nullptr;};
    inline string gmtPositionModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtPositionModifiedTime_, "") };
    inline QueueInfo& setGmtPositionModifiedTime(string gmtPositionModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtPositionModifiedTime_, gmtPositionModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueueInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline QueueInfo& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline QueueInfo& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // queueStrategy Field Functions 
    bool hasQueueStrategy() const { return this->queueStrategy_ != nullptr;};
    void deleteQueueStrategy() { this->queueStrategy_ = nullptr;};
    inline string queueStrategy() const { DARABONBA_PTR_GET_DEFAULT(queueStrategy_, "") };
    inline QueueInfo& setQueueStrategy(string queueStrategy) { DARABONBA_PTR_SET_VALUE(queueStrategy_, queueStrategy) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline QueueInfo& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline QueueInfo& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const ResourceAmount & resource() const { DARABONBA_PTR_GET_CONST(resource_, ResourceAmount) };
    inline ResourceAmount resource() { DARABONBA_PTR_GET(resource_, ResourceAmount) };
    inline QueueInfo& setResource(const ResourceAmount & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline QueueInfo& setResource(ResourceAmount && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueueInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // useOversoldResource Field Functions 
    bool hasUseOversoldResource() const { return this->useOversoldResource_ != nullptr;};
    void deleteUseOversoldResource() { this->useOversoldResource_ = nullptr;};
    inline bool useOversoldResource() const { DARABONBA_PTR_GET_DEFAULT(useOversoldResource_, false) };
    inline QueueInfo& setUseOversoldResource(bool useOversoldResource) { DARABONBA_PTR_SET_VALUE(useOversoldResource_, useOversoldResource) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueueInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline QueueInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string workloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline QueueInfo& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline QueueInfo& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


    // workloadStatus Field Functions 
    bool hasWorkloadStatus() const { return this->workloadStatus_ != nullptr;};
    void deleteWorkloadStatus() { this->workloadStatus_ = nullptr;};
    inline string workloadStatus() const { DARABONBA_PTR_GET_DEFAULT(workloadStatus_, "") };
    inline QueueInfo& setWorkloadStatus(string workloadStatus) { DARABONBA_PTR_SET_VALUE(workloadStatus_, workloadStatus) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string workloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline QueueInfo& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueueInfo& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueueInfo& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> codeType_ = nullptr;
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    std::shared_ptr<string> gmtDequeuedTime_ = nullptr;
    std::shared_ptr<string> gmtEnqueuedTime_ = nullptr;
    std::shared_ptr<string> gmtPositionModifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> position_ = nullptr;
    std::shared_ptr<int64_t> priority_ = nullptr;
    std::shared_ptr<string> queueStrategy_ = nullptr;
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<ResourceAmount> resource_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<bool> useOversoldResource_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> workloadId_ = nullptr;
    std::shared_ptr<string> workloadName_ = nullptr;
    std::shared_ptr<string> workloadStatus_ = nullptr;
    std::shared_ptr<string> workloadType_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
