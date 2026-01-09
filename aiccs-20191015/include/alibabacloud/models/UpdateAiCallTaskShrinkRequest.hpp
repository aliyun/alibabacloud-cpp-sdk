// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAICALLTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAICALLTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class UpdateAiCallTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiCallTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallDay, callDayShrink_);
      DARABONBA_PTR_TO_JSON(CallRetryInterval, callRetryInterval_);
      DARABONBA_PTR_TO_JSON(CallRetryReason, callRetryReasonShrink_);
      DARABONBA_PTR_TO_JSON(CallRetryTimes, callRetryTimes_);
      DARABONBA_PTR_TO_JSON(CallTime, callTimeShrink_);
      DARABONBA_PTR_TO_JSON(MissCallRetry, missCallRetry_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartType, startType_);
      DARABONBA_PTR_TO_JSON(TaskCps, taskCps_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_TO_JSON(VirtualNumber, virtualNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiCallTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDay, callDayShrink_);
      DARABONBA_PTR_FROM_JSON(CallRetryInterval, callRetryInterval_);
      DARABONBA_PTR_FROM_JSON(CallRetryReason, callRetryReasonShrink_);
      DARABONBA_PTR_FROM_JSON(CallRetryTimes, callRetryTimes_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTimeShrink_);
      DARABONBA_PTR_FROM_JSON(MissCallRetry, missCallRetry_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartType, startType_);
      DARABONBA_PTR_FROM_JSON(TaskCps, taskCps_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_FROM_JSON(VirtualNumber, virtualNumber_);
    };
    UpdateAiCallTaskShrinkRequest() = default ;
    UpdateAiCallTaskShrinkRequest(const UpdateAiCallTaskShrinkRequest &) = default ;
    UpdateAiCallTaskShrinkRequest(UpdateAiCallTaskShrinkRequest &&) = default ;
    UpdateAiCallTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiCallTaskShrinkRequest() = default ;
    UpdateAiCallTaskShrinkRequest& operator=(const UpdateAiCallTaskShrinkRequest &) = default ;
    UpdateAiCallTaskShrinkRequest& operator=(UpdateAiCallTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callDayShrink_ == nullptr
        && this->callRetryInterval_ == nullptr && this->callRetryReasonShrink_ == nullptr && this->callRetryTimes_ == nullptr && this->callTimeShrink_ == nullptr && this->missCallRetry_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startType_ == nullptr && this->taskCps_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskStartTime_ == nullptr && this->virtualNumber_ == nullptr; };
    // callDayShrink Field Functions 
    bool hasCallDayShrink() const { return this->callDayShrink_ != nullptr;};
    void deleteCallDayShrink() { this->callDayShrink_ = nullptr;};
    inline string getCallDayShrink() const { DARABONBA_PTR_GET_DEFAULT(callDayShrink_, "") };
    inline UpdateAiCallTaskShrinkRequest& setCallDayShrink(string callDayShrink) { DARABONBA_PTR_SET_VALUE(callDayShrink_, callDayShrink) };


    // callRetryInterval Field Functions 
    bool hasCallRetryInterval() const { return this->callRetryInterval_ != nullptr;};
    void deleteCallRetryInterval() { this->callRetryInterval_ = nullptr;};
    inline int64_t getCallRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(callRetryInterval_, 0L) };
    inline UpdateAiCallTaskShrinkRequest& setCallRetryInterval(int64_t callRetryInterval) { DARABONBA_PTR_SET_VALUE(callRetryInterval_, callRetryInterval) };


    // callRetryReasonShrink Field Functions 
    bool hasCallRetryReasonShrink() const { return this->callRetryReasonShrink_ != nullptr;};
    void deleteCallRetryReasonShrink() { this->callRetryReasonShrink_ = nullptr;};
    inline string getCallRetryReasonShrink() const { DARABONBA_PTR_GET_DEFAULT(callRetryReasonShrink_, "") };
    inline UpdateAiCallTaskShrinkRequest& setCallRetryReasonShrink(string callRetryReasonShrink) { DARABONBA_PTR_SET_VALUE(callRetryReasonShrink_, callRetryReasonShrink) };


    // callRetryTimes Field Functions 
    bool hasCallRetryTimes() const { return this->callRetryTimes_ != nullptr;};
    void deleteCallRetryTimes() { this->callRetryTimes_ = nullptr;};
    inline int64_t getCallRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(callRetryTimes_, 0L) };
    inline UpdateAiCallTaskShrinkRequest& setCallRetryTimes(int64_t callRetryTimes) { DARABONBA_PTR_SET_VALUE(callRetryTimes_, callRetryTimes) };


    // callTimeShrink Field Functions 
    bool hasCallTimeShrink() const { return this->callTimeShrink_ != nullptr;};
    void deleteCallTimeShrink() { this->callTimeShrink_ = nullptr;};
    inline string getCallTimeShrink() const { DARABONBA_PTR_GET_DEFAULT(callTimeShrink_, "") };
    inline UpdateAiCallTaskShrinkRequest& setCallTimeShrink(string callTimeShrink) { DARABONBA_PTR_SET_VALUE(callTimeShrink_, callTimeShrink) };


    // missCallRetry Field Functions 
    bool hasMissCallRetry() const { return this->missCallRetry_ != nullptr;};
    void deleteMissCallRetry() { this->missCallRetry_ = nullptr;};
    inline bool getMissCallRetry() const { DARABONBA_PTR_GET_DEFAULT(missCallRetry_, false) };
    inline UpdateAiCallTaskShrinkRequest& setMissCallRetry(bool missCallRetry) { DARABONBA_PTR_SET_VALUE(missCallRetry_, missCallRetry) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateAiCallTaskShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateAiCallTaskShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateAiCallTaskShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startType Field Functions 
    bool hasStartType() const { return this->startType_ != nullptr;};
    void deleteStartType() { this->startType_ = nullptr;};
    inline string getStartType() const { DARABONBA_PTR_GET_DEFAULT(startType_, "") };
    inline UpdateAiCallTaskShrinkRequest& setStartType(string startType) { DARABONBA_PTR_SET_VALUE(startType_, startType) };


    // taskCps Field Functions 
    bool hasTaskCps() const { return this->taskCps_ != nullptr;};
    void deleteTaskCps() { this->taskCps_ = nullptr;};
    inline int64_t getTaskCps() const { DARABONBA_PTR_GET_DEFAULT(taskCps_, 0L) };
    inline UpdateAiCallTaskShrinkRequest& setTaskCps(int64_t taskCps) { DARABONBA_PTR_SET_VALUE(taskCps_, taskCps) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateAiCallTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateAiCallTaskShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStartTime Field Functions 
    bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
    void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
    inline int64_t getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, 0L) };
    inline UpdateAiCallTaskShrinkRequest& setTaskStartTime(int64_t taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    // virtualNumber Field Functions 
    bool hasVirtualNumber() const { return this->virtualNumber_ != nullptr;};
    void deleteVirtualNumber() { this->virtualNumber_ = nullptr;};
    inline string getVirtualNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualNumber_, "") };
    inline UpdateAiCallTaskShrinkRequest& setVirtualNumber(string virtualNumber) { DARABONBA_PTR_SET_VALUE(virtualNumber_, virtualNumber) };


  protected:
    // This parameter is required.
    shared_ptr<string> callDayShrink_ {};
    shared_ptr<int64_t> callRetryInterval_ {};
    shared_ptr<string> callRetryReasonShrink_ {};
    shared_ptr<int64_t> callRetryTimes_ {};
    // This parameter is required.
    shared_ptr<string> callTimeShrink_ {};
    shared_ptr<bool> missCallRetry_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> startType_ {};
    // This parameter is required.
    shared_ptr<int64_t> taskCps_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    shared_ptr<int64_t> taskStartTime_ {};
    // This parameter is required.
    shared_ptr<string> virtualNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
