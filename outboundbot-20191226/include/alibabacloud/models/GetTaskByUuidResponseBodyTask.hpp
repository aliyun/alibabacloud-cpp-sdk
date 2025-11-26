// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKBYUUIDRESPONSEBODYTASK_HPP_
#define ALIBABACLOUD_MODELS_GETTASKBYUUIDRESPONSEBODYTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskByUuidResponseBodyTaskConversations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetTaskByUuidResponseBodyTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskByUuidResponseBodyTask& obj) { 
      DARABONBA_PTR_TO_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(Conversations, conversations_);
      DARABONBA_PTR_TO_JSON(EndReason, endReason_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PlannedTime, plannedTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskByUuidResponseBodyTask& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(Conversations, conversations_);
      DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PlannedTime, plannedTime_);
    };
    GetTaskByUuidResponseBodyTask() = default ;
    GetTaskByUuidResponseBodyTask(const GetTaskByUuidResponseBodyTask &) = default ;
    GetTaskByUuidResponseBodyTask(GetTaskByUuidResponseBodyTask &&) = default ;
    GetTaskByUuidResponseBodyTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskByUuidResponseBodyTask() = default ;
    GetTaskByUuidResponseBodyTask& operator=(const GetTaskByUuidResponseBodyTask &) = default ;
    GetTaskByUuidResponseBodyTask& operator=(GetTaskByUuidResponseBodyTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTime_ == nullptr
        && return this->callId_ == nullptr && return this->calledNumber_ == nullptr && return this->callingNumber_ == nullptr && return this->conversations_ == nullptr && return this->endReason_ == nullptr
        && return this->endTime_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobId_ == nullptr
        && return this->plannedTime_ == nullptr; };
    // actualTime Field Functions 
    bool hasActualTime() const { return this->actualTime_ != nullptr;};
    void deleteActualTime() { this->actualTime_ = nullptr;};
    inline int64_t actualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
    inline GetTaskByUuidResponseBodyTask& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline GetTaskByUuidResponseBodyTask& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline GetTaskByUuidResponseBodyTask& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline GetTaskByUuidResponseBodyTask& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // conversations Field Functions 
    bool hasConversations() const { return this->conversations_ != nullptr;};
    void deleteConversations() { this->conversations_ = nullptr;};
    inline const vector<Models::GetTaskByUuidResponseBodyTaskConversations> & conversations() const { DARABONBA_PTR_GET_CONST(conversations_, vector<Models::GetTaskByUuidResponseBodyTaskConversations>) };
    inline vector<Models::GetTaskByUuidResponseBodyTaskConversations> conversations() { DARABONBA_PTR_GET(conversations_, vector<Models::GetTaskByUuidResponseBodyTaskConversations>) };
    inline GetTaskByUuidResponseBodyTask& setConversations(const vector<Models::GetTaskByUuidResponseBodyTaskConversations> & conversations) { DARABONBA_PTR_SET_VALUE(conversations_, conversations) };
    inline GetTaskByUuidResponseBodyTask& setConversations(vector<Models::GetTaskByUuidResponseBodyTaskConversations> && conversations) { DARABONBA_PTR_SET_RVALUE(conversations_, conversations) };


    // endReason Field Functions 
    bool hasEndReason() const { return this->endReason_ != nullptr;};
    void deleteEndReason() { this->endReason_ = nullptr;};
    inline string endReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, "") };
    inline GetTaskByUuidResponseBodyTask& setEndReason(string endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetTaskByUuidResponseBodyTask& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetTaskByUuidResponseBodyTask& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTaskByUuidResponseBodyTask& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline GetTaskByUuidResponseBodyTask& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetTaskByUuidResponseBodyTask& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // plannedTime Field Functions 
    bool hasPlannedTime() const { return this->plannedTime_ != nullptr;};
    void deletePlannedTime() { this->plannedTime_ = nullptr;};
    inline int64_t plannedTime() const { DARABONBA_PTR_GET_DEFAULT(plannedTime_, 0L) };
    inline GetTaskByUuidResponseBodyTask& setPlannedTime(int64_t plannedTime) { DARABONBA_PTR_SET_VALUE(plannedTime_, plannedTime) };


  protected:
    std::shared_ptr<int64_t> actualTime_ = nullptr;
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<vector<Models::GetTaskByUuidResponseBodyTaskConversations>> conversations_ = nullptr;
    std::shared_ptr<string> endReason_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> plannedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
