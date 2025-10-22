// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAICALLTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAICALLTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateAiCallTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAiCallTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(CallDay, callDay_);
      DARABONBA_PTR_TO_JSON(CallRetryInterval, callRetryInterval_);
      DARABONBA_PTR_TO_JSON(CallRetryReason, callRetryReason_);
      DARABONBA_PTR_TO_JSON(CallRetryTimes, callRetryTimes_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(MissCallRetry, missCallRetry_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartType, startType_);
      DARABONBA_PTR_TO_JSON(TaskCps, taskCps_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_TO_JSON(VirtualNumber, virtualNumber_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAiCallTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(CallDay, callDay_);
      DARABONBA_PTR_FROM_JSON(CallRetryInterval, callRetryInterval_);
      DARABONBA_PTR_FROM_JSON(CallRetryReason, callRetryReason_);
      DARABONBA_PTR_FROM_JSON(CallRetryTimes, callRetryTimes_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(MissCallRetry, missCallRetry_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartType, startType_);
      DARABONBA_PTR_FROM_JSON(TaskCps, taskCps_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_FROM_JSON(VirtualNumber, virtualNumber_);
    };
    CreateAiCallTaskRequest() = default ;
    CreateAiCallTaskRequest(const CreateAiCallTaskRequest &) = default ;
    CreateAiCallTaskRequest(CreateAiCallTaskRequest &&) = default ;
    CreateAiCallTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAiCallTaskRequest() = default ;
    CreateAiCallTaskRequest& operator=(const CreateAiCallTaskRequest &) = default ;
    CreateAiCallTaskRequest& operator=(CreateAiCallTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->callDay_ == nullptr && return this->callRetryInterval_ == nullptr && return this->callRetryReason_ == nullptr && return this->callRetryTimes_ == nullptr && return this->callTime_ == nullptr
        && return this->missCallRetry_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->startType_ == nullptr
        && return this->taskCps_ == nullptr && return this->taskName_ == nullptr && return this->taskStartTime_ == nullptr && return this->virtualNumber_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreateAiCallTaskRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // callDay Field Functions 
    bool hasCallDay() const { return this->callDay_ != nullptr;};
    void deleteCallDay() { this->callDay_ = nullptr;};
    inline const vector<string> & callDay() const { DARABONBA_PTR_GET_CONST(callDay_, vector<string>) };
    inline vector<string> callDay() { DARABONBA_PTR_GET(callDay_, vector<string>) };
    inline CreateAiCallTaskRequest& setCallDay(const vector<string> & callDay) { DARABONBA_PTR_SET_VALUE(callDay_, callDay) };
    inline CreateAiCallTaskRequest& setCallDay(vector<string> && callDay) { DARABONBA_PTR_SET_RVALUE(callDay_, callDay) };


    // callRetryInterval Field Functions 
    bool hasCallRetryInterval() const { return this->callRetryInterval_ != nullptr;};
    void deleteCallRetryInterval() { this->callRetryInterval_ = nullptr;};
    inline int64_t callRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(callRetryInterval_, 0L) };
    inline CreateAiCallTaskRequest& setCallRetryInterval(int64_t callRetryInterval) { DARABONBA_PTR_SET_VALUE(callRetryInterval_, callRetryInterval) };


    // callRetryReason Field Functions 
    bool hasCallRetryReason() const { return this->callRetryReason_ != nullptr;};
    void deleteCallRetryReason() { this->callRetryReason_ = nullptr;};
    inline const vector<string> & callRetryReason() const { DARABONBA_PTR_GET_CONST(callRetryReason_, vector<string>) };
    inline vector<string> callRetryReason() { DARABONBA_PTR_GET(callRetryReason_, vector<string>) };
    inline CreateAiCallTaskRequest& setCallRetryReason(const vector<string> & callRetryReason) { DARABONBA_PTR_SET_VALUE(callRetryReason_, callRetryReason) };
    inline CreateAiCallTaskRequest& setCallRetryReason(vector<string> && callRetryReason) { DARABONBA_PTR_SET_RVALUE(callRetryReason_, callRetryReason) };


    // callRetryTimes Field Functions 
    bool hasCallRetryTimes() const { return this->callRetryTimes_ != nullptr;};
    void deleteCallRetryTimes() { this->callRetryTimes_ = nullptr;};
    inline int64_t callRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(callRetryTimes_, 0L) };
    inline CreateAiCallTaskRequest& setCallRetryTimes(int64_t callRetryTimes) { DARABONBA_PTR_SET_VALUE(callRetryTimes_, callRetryTimes) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline const vector<string> & callTime() const { DARABONBA_PTR_GET_CONST(callTime_, vector<string>) };
    inline vector<string> callTime() { DARABONBA_PTR_GET(callTime_, vector<string>) };
    inline CreateAiCallTaskRequest& setCallTime(const vector<string> & callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };
    inline CreateAiCallTaskRequest& setCallTime(vector<string> && callTime) { DARABONBA_PTR_SET_RVALUE(callTime_, callTime) };


    // missCallRetry Field Functions 
    bool hasMissCallRetry() const { return this->missCallRetry_ != nullptr;};
    void deleteMissCallRetry() { this->missCallRetry_ = nullptr;};
    inline bool missCallRetry() const { DARABONBA_PTR_GET_DEFAULT(missCallRetry_, false) };
    inline CreateAiCallTaskRequest& setMissCallRetry(bool missCallRetry) { DARABONBA_PTR_SET_VALUE(missCallRetry_, missCallRetry) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAiCallTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAiCallTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAiCallTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startType Field Functions 
    bool hasStartType() const { return this->startType_ != nullptr;};
    void deleteStartType() { this->startType_ = nullptr;};
    inline string startType() const { DARABONBA_PTR_GET_DEFAULT(startType_, "") };
    inline CreateAiCallTaskRequest& setStartType(string startType) { DARABONBA_PTR_SET_VALUE(startType_, startType) };


    // taskCps Field Functions 
    bool hasTaskCps() const { return this->taskCps_ != nullptr;};
    void deleteTaskCps() { this->taskCps_ = nullptr;};
    inline int64_t taskCps() const { DARABONBA_PTR_GET_DEFAULT(taskCps_, 0L) };
    inline CreateAiCallTaskRequest& setTaskCps(int64_t taskCps) { DARABONBA_PTR_SET_VALUE(taskCps_, taskCps) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateAiCallTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStartTime Field Functions 
    bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
    void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
    inline int64_t taskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, 0L) };
    inline CreateAiCallTaskRequest& setTaskStartTime(int64_t taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    // virtualNumber Field Functions 
    bool hasVirtualNumber() const { return this->virtualNumber_ != nullptr;};
    void deleteVirtualNumber() { this->virtualNumber_ = nullptr;};
    inline string virtualNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualNumber_, "") };
    inline CreateAiCallTaskRequest& setVirtualNumber(string virtualNumber) { DARABONBA_PTR_SET_VALUE(virtualNumber_, virtualNumber) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> callDay_ = nullptr;
    std::shared_ptr<int64_t> callRetryInterval_ = nullptr;
    std::shared_ptr<vector<string>> callRetryReason_ = nullptr;
    std::shared_ptr<int64_t> callRetryTimes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> callTime_ = nullptr;
    std::shared_ptr<bool> missCallRetry_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startType_ = nullptr;
    std::shared_ptr<int64_t> taskCps_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<int64_t> taskStartTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> virtualNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
