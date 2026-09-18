// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAICALLTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAICALLTASKREQUEST_HPP_
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
  class UpdateAiCallTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiCallTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallDay, callDay_);
      DARABONBA_PTR_TO_JSON(CallExpireDate, callExpireDate_);
      DARABONBA_PTR_TO_JSON(CallExpireMinutes, callExpireMinutes_);
      DARABONBA_PTR_TO_JSON(CallExpireType, callExpireType_);
      DARABONBA_PTR_TO_JSON(CallRetryInterval, callRetryInterval_);
      DARABONBA_PTR_TO_JSON(CallRetryReason, callRetryReason_);
      DARABONBA_PTR_TO_JSON(CallRetryTimes, callRetryTimes_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_TO_JSON(LineEncoding, lineEncoding_);
      DARABONBA_PTR_TO_JSON(LinePhoneNum, linePhoneNum_);
      DARABONBA_PTR_TO_JSON(MissCallRetry, missCallRetry_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneType, phoneType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartType, startType_);
      DARABONBA_PTR_TO_JSON(TaskCps, taskCps_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_TO_JSON(VirtualNumber, virtualNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiCallTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDay, callDay_);
      DARABONBA_PTR_FROM_JSON(CallExpireDate, callExpireDate_);
      DARABONBA_PTR_FROM_JSON(CallExpireMinutes, callExpireMinutes_);
      DARABONBA_PTR_FROM_JSON(CallExpireType, callExpireType_);
      DARABONBA_PTR_FROM_JSON(CallRetryInterval, callRetryInterval_);
      DARABONBA_PTR_FROM_JSON(CallRetryReason, callRetryReason_);
      DARABONBA_PTR_FROM_JSON(CallRetryTimes, callRetryTimes_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_FROM_JSON(LineEncoding, lineEncoding_);
      DARABONBA_PTR_FROM_JSON(LinePhoneNum, linePhoneNum_);
      DARABONBA_PTR_FROM_JSON(MissCallRetry, missCallRetry_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneType, phoneType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartType, startType_);
      DARABONBA_PTR_FROM_JSON(TaskCps, taskCps_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_FROM_JSON(VirtualNumber, virtualNumber_);
    };
    UpdateAiCallTaskRequest() = default ;
    UpdateAiCallTaskRequest(const UpdateAiCallTaskRequest &) = default ;
    UpdateAiCallTaskRequest(UpdateAiCallTaskRequest &&) = default ;
    UpdateAiCallTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiCallTaskRequest() = default ;
    UpdateAiCallTaskRequest& operator=(const UpdateAiCallTaskRequest &) = default ;
    UpdateAiCallTaskRequest& operator=(UpdateAiCallTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callDay_ == nullptr
        && this->callExpireDate_ == nullptr && this->callExpireMinutes_ == nullptr && this->callExpireType_ == nullptr && this->callRetryInterval_ == nullptr && this->callRetryReason_ == nullptr
        && this->callRetryTimes_ == nullptr && this->callTime_ == nullptr && this->callableTime_ == nullptr && this->lineEncoding_ == nullptr && this->linePhoneNum_ == nullptr
        && this->missCallRetry_ == nullptr && this->ownerId_ == nullptr && this->phoneType_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->source_ == nullptr && this->startType_ == nullptr && this->taskCps_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->taskStartTime_ == nullptr && this->virtualNumber_ == nullptr; };
    // callDay Field Functions 
    bool hasCallDay() const { return this->callDay_ != nullptr;};
    void deleteCallDay() { this->callDay_ = nullptr;};
    inline const vector<string> & getCallDay() const { DARABONBA_PTR_GET_CONST(callDay_, vector<string>) };
    inline vector<string> getCallDay() { DARABONBA_PTR_GET(callDay_, vector<string>) };
    inline UpdateAiCallTaskRequest& setCallDay(const vector<string> & callDay) { DARABONBA_PTR_SET_VALUE(callDay_, callDay) };
    inline UpdateAiCallTaskRequest& setCallDay(vector<string> && callDay) { DARABONBA_PTR_SET_RVALUE(callDay_, callDay) };


    // callExpireDate Field Functions 
    bool hasCallExpireDate() const { return this->callExpireDate_ != nullptr;};
    void deleteCallExpireDate() { this->callExpireDate_ = nullptr;};
    inline string getCallExpireDate() const { DARABONBA_PTR_GET_DEFAULT(callExpireDate_, "") };
    inline UpdateAiCallTaskRequest& setCallExpireDate(string callExpireDate) { DARABONBA_PTR_SET_VALUE(callExpireDate_, callExpireDate) };


    // callExpireMinutes Field Functions 
    bool hasCallExpireMinutes() const { return this->callExpireMinutes_ != nullptr;};
    void deleteCallExpireMinutes() { this->callExpireMinutes_ = nullptr;};
    inline int64_t getCallExpireMinutes() const { DARABONBA_PTR_GET_DEFAULT(callExpireMinutes_, 0L) };
    inline UpdateAiCallTaskRequest& setCallExpireMinutes(int64_t callExpireMinutes) { DARABONBA_PTR_SET_VALUE(callExpireMinutes_, callExpireMinutes) };


    // callExpireType Field Functions 
    bool hasCallExpireType() const { return this->callExpireType_ != nullptr;};
    void deleteCallExpireType() { this->callExpireType_ = nullptr;};
    inline int64_t getCallExpireType() const { DARABONBA_PTR_GET_DEFAULT(callExpireType_, 0L) };
    inline UpdateAiCallTaskRequest& setCallExpireType(int64_t callExpireType) { DARABONBA_PTR_SET_VALUE(callExpireType_, callExpireType) };


    // callRetryInterval Field Functions 
    bool hasCallRetryInterval() const { return this->callRetryInterval_ != nullptr;};
    void deleteCallRetryInterval() { this->callRetryInterval_ = nullptr;};
    inline int64_t getCallRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(callRetryInterval_, 0L) };
    inline UpdateAiCallTaskRequest& setCallRetryInterval(int64_t callRetryInterval) { DARABONBA_PTR_SET_VALUE(callRetryInterval_, callRetryInterval) };


    // callRetryReason Field Functions 
    bool hasCallRetryReason() const { return this->callRetryReason_ != nullptr;};
    void deleteCallRetryReason() { this->callRetryReason_ = nullptr;};
    inline const vector<string> & getCallRetryReason() const { DARABONBA_PTR_GET_CONST(callRetryReason_, vector<string>) };
    inline vector<string> getCallRetryReason() { DARABONBA_PTR_GET(callRetryReason_, vector<string>) };
    inline UpdateAiCallTaskRequest& setCallRetryReason(const vector<string> & callRetryReason) { DARABONBA_PTR_SET_VALUE(callRetryReason_, callRetryReason) };
    inline UpdateAiCallTaskRequest& setCallRetryReason(vector<string> && callRetryReason) { DARABONBA_PTR_SET_RVALUE(callRetryReason_, callRetryReason) };


    // callRetryTimes Field Functions 
    bool hasCallRetryTimes() const { return this->callRetryTimes_ != nullptr;};
    void deleteCallRetryTimes() { this->callRetryTimes_ = nullptr;};
    inline int64_t getCallRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(callRetryTimes_, 0L) };
    inline UpdateAiCallTaskRequest& setCallRetryTimes(int64_t callRetryTimes) { DARABONBA_PTR_SET_VALUE(callRetryTimes_, callRetryTimes) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline const vector<string> & getCallTime() const { DARABONBA_PTR_GET_CONST(callTime_, vector<string>) };
    inline vector<string> getCallTime() { DARABONBA_PTR_GET(callTime_, vector<string>) };
    inline UpdateAiCallTaskRequest& setCallTime(const vector<string> & callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };
    inline UpdateAiCallTaskRequest& setCallTime(vector<string> && callTime) { DARABONBA_PTR_SET_RVALUE(callTime_, callTime) };


    // callableTime Field Functions 
    bool hasCallableTime() const { return this->callableTime_ != nullptr;};
    void deleteCallableTime() { this->callableTime_ = nullptr;};
    inline const vector<string> & getCallableTime() const { DARABONBA_PTR_GET_CONST(callableTime_, vector<string>) };
    inline vector<string> getCallableTime() { DARABONBA_PTR_GET(callableTime_, vector<string>) };
    inline UpdateAiCallTaskRequest& setCallableTime(const vector<string> & callableTime) { DARABONBA_PTR_SET_VALUE(callableTime_, callableTime) };
    inline UpdateAiCallTaskRequest& setCallableTime(vector<string> && callableTime) { DARABONBA_PTR_SET_RVALUE(callableTime_, callableTime) };


    // lineEncoding Field Functions 
    bool hasLineEncoding() const { return this->lineEncoding_ != nullptr;};
    void deleteLineEncoding() { this->lineEncoding_ = nullptr;};
    inline string getLineEncoding() const { DARABONBA_PTR_GET_DEFAULT(lineEncoding_, "") };
    inline UpdateAiCallTaskRequest& setLineEncoding(string lineEncoding) { DARABONBA_PTR_SET_VALUE(lineEncoding_, lineEncoding) };


    // linePhoneNum Field Functions 
    bool hasLinePhoneNum() const { return this->linePhoneNum_ != nullptr;};
    void deleteLinePhoneNum() { this->linePhoneNum_ = nullptr;};
    inline string getLinePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(linePhoneNum_, "") };
    inline UpdateAiCallTaskRequest& setLinePhoneNum(string linePhoneNum) { DARABONBA_PTR_SET_VALUE(linePhoneNum_, linePhoneNum) };


    // missCallRetry Field Functions 
    bool hasMissCallRetry() const { return this->missCallRetry_ != nullptr;};
    void deleteMissCallRetry() { this->missCallRetry_ = nullptr;};
    inline bool getMissCallRetry() const { DARABONBA_PTR_GET_DEFAULT(missCallRetry_, false) };
    inline UpdateAiCallTaskRequest& setMissCallRetry(bool missCallRetry) { DARABONBA_PTR_SET_VALUE(missCallRetry_, missCallRetry) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateAiCallTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneType Field Functions 
    bool hasPhoneType() const { return this->phoneType_ != nullptr;};
    void deletePhoneType() { this->phoneType_ = nullptr;};
    inline int64_t getPhoneType() const { DARABONBA_PTR_GET_DEFAULT(phoneType_, 0L) };
    inline UpdateAiCallTaskRequest& setPhoneType(int64_t phoneType) { DARABONBA_PTR_SET_VALUE(phoneType_, phoneType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateAiCallTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateAiCallTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int64_t getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, 0L) };
    inline UpdateAiCallTaskRequest& setSource(int64_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startType Field Functions 
    bool hasStartType() const { return this->startType_ != nullptr;};
    void deleteStartType() { this->startType_ = nullptr;};
    inline string getStartType() const { DARABONBA_PTR_GET_DEFAULT(startType_, "") };
    inline UpdateAiCallTaskRequest& setStartType(string startType) { DARABONBA_PTR_SET_VALUE(startType_, startType) };


    // taskCps Field Functions 
    bool hasTaskCps() const { return this->taskCps_ != nullptr;};
    void deleteTaskCps() { this->taskCps_ = nullptr;};
    inline int64_t getTaskCps() const { DARABONBA_PTR_GET_DEFAULT(taskCps_, 0L) };
    inline UpdateAiCallTaskRequest& setTaskCps(int64_t taskCps) { DARABONBA_PTR_SET_VALUE(taskCps_, taskCps) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateAiCallTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateAiCallTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStartTime Field Functions 
    bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
    void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
    inline int64_t getTaskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, 0L) };
    inline UpdateAiCallTaskRequest& setTaskStartTime(int64_t taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    // virtualNumber Field Functions 
    bool hasVirtualNumber() const { return this->virtualNumber_ != nullptr;};
    void deleteVirtualNumber() { this->virtualNumber_ = nullptr;};
    inline string getVirtualNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualNumber_, "") };
    inline UpdateAiCallTaskRequest& setVirtualNumber(string virtualNumber) { DARABONBA_PTR_SET_VALUE(virtualNumber_, virtualNumber) };


  protected:
    // The available call days.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> callDay_ {};
    // The expiration date of outbound call details (the specific deadline).
    shared_ptr<string> callExpireDate_ {};
    // The expiration duration of outbound call details. Unit: minutes.
    shared_ptr<int64_t> callExpireMinutes_ {};
    // The outbound call validity type. Valid values:
    // 
    // 0: permanently valid.
    // 1: valid for a specified duration after import.
    // 2: valid until a specified date.
    shared_ptr<int64_t> callExpireType_ {};
    // The retry interval. Unit: minutes. The maximum value is 120 minutes.
    shared_ptr<int64_t> callRetryInterval_ {};
    // The reasons for retry upon failure.
    shared_ptr<vector<string>> callRetryReason_ {};
    // The number of retries. The maximum value is 3.
    shared_ptr<int64_t> callRetryTimes_ {};
    // The available call time periods.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> callTime_ {};
    shared_ptr<vector<string>> callableTime_ {};
    // The line encoding.
    shared_ptr<string> lineEncoding_ {};
    // The customer-provided line number.
    shared_ptr<string> linePhoneNum_ {};
    // Specifies whether to enable retry. Valid values:
    // 
    // - true: Enabled.
    // 
    // - false (default): Disabled.
    shared_ptr<bool> missCallRetry_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number type. This parameter is used when the creation source is engine-based.
    // 
    // 0: Alibaba Cloud number.
    // 
    // 1: Customer-provided line.
    shared_ptr<int64_t> phoneType_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The creation source. Valid values:
    // 
    // 0: created by agent.
    // 
    // 1: created by engine.
    shared_ptr<int64_t> source_ {};
    // The start mode. Valid values:
    // 
    // - IMMEDIATE: starts immediately.
    // 
    // - SCHEDULE: starts at a scheduled time.
    // 
    // This parameter is required.
    shared_ptr<string> startType_ {};
    // The task concurrency. The maximum value is 500.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskCps_ {};
    // The ID of the task to update.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The task name. The name must be unique within the same account.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The preset start time of the task. The value is a UNIX timestamp in milliseconds. This parameter is valid and required when the StartType parameter is set to SCHEDULE. The task automatically starts at the time specified by this parameter.
    shared_ptr<int64_t> taskStartTime_ {};
    // The service instance used for outbound calls.
    shared_ptr<string> virtualNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
