// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeJobResponseBodyJobTasksContact.hpp>
#include <vector>
#include <alibabacloud/models/DescribeJobResponseBodyJobTasksConversation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobResponseBodyJobTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBodyJobTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_TO_JSON(Brief, brief_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(Conversation, conversation_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndReason, endReason_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HangUpDirection, hangUpDirection_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PlanedTime, planedTime_);
      DARABONBA_PTR_TO_JSON(RealRingingDuration, realRingingDuration_);
      DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(SipCode, sipCode_);
      DARABONBA_PTR_TO_JSON(SipDuration, sipDuration_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBodyJobTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_FROM_JSON(Brief, brief_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(Conversation, conversation_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HangUpDirection, hangUpDirection_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PlanedTime, planedTime_);
      DARABONBA_PTR_FROM_JSON(RealRingingDuration, realRingingDuration_);
      DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(SipCode, sipCode_);
      DARABONBA_PTR_FROM_JSON(SipDuration, sipDuration_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeJobResponseBodyJobTasks() = default ;
    DescribeJobResponseBodyJobTasks(const DescribeJobResponseBodyJobTasks &) = default ;
    DescribeJobResponseBodyJobTasks(DescribeJobResponseBodyJobTasks &&) = default ;
    DescribeJobResponseBodyJobTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBodyJobTasks() = default ;
    DescribeJobResponseBodyJobTasks& operator=(const DescribeJobResponseBodyJobTasks &) = default ;
    DescribeJobResponseBodyJobTasks& operator=(DescribeJobResponseBodyJobTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTime_ == nullptr
        && return this->brief_ == nullptr && return this->callId_ == nullptr && return this->calledNumber_ == nullptr && return this->callingNumber_ == nullptr && return this->chatbotId_ == nullptr
        && return this->contact_ == nullptr && return this->conversation_ == nullptr && return this->duration_ == nullptr && return this->endReason_ == nullptr && return this->endTime_ == nullptr
        && return this->hangUpDirection_ == nullptr && return this->jobId_ == nullptr && return this->planedTime_ == nullptr && return this->realRingingDuration_ == nullptr && return this->ringingDuration_ == nullptr
        && return this->scenarioId_ == nullptr && return this->sipCode_ == nullptr && return this->sipDuration_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // actualTime Field Functions 
    bool hasActualTime() const { return this->actualTime_ != nullptr;};
    void deleteActualTime() { this->actualTime_ = nullptr;};
    inline int64_t actualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
    inline DescribeJobResponseBodyJobTasks& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


    // brief Field Functions 
    bool hasBrief() const { return this->brief_ != nullptr;};
    void deleteBrief() { this->brief_ = nullptr;};
    inline string brief() const { DARABONBA_PTR_GET_DEFAULT(brief_, "") };
    inline DescribeJobResponseBodyJobTasks& setBrief(string brief) { DARABONBA_PTR_SET_VALUE(brief_, brief) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline DescribeJobResponseBodyJobTasks& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline DescribeJobResponseBodyJobTasks& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline DescribeJobResponseBodyJobTasks& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string chatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline DescribeJobResponseBodyJobTasks& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const Models::DescribeJobResponseBodyJobTasksContact & contact() const { DARABONBA_PTR_GET_CONST(contact_, Models::DescribeJobResponseBodyJobTasksContact) };
    inline Models::DescribeJobResponseBodyJobTasksContact contact() { DARABONBA_PTR_GET(contact_, Models::DescribeJobResponseBodyJobTasksContact) };
    inline DescribeJobResponseBodyJobTasks& setContact(const Models::DescribeJobResponseBodyJobTasksContact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline DescribeJobResponseBodyJobTasks& setContact(Models::DescribeJobResponseBodyJobTasksContact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // conversation Field Functions 
    bool hasConversation() const { return this->conversation_ != nullptr;};
    void deleteConversation() { this->conversation_ = nullptr;};
    inline const vector<Models::DescribeJobResponseBodyJobTasksConversation> & conversation() const { DARABONBA_PTR_GET_CONST(conversation_, vector<Models::DescribeJobResponseBodyJobTasksConversation>) };
    inline vector<Models::DescribeJobResponseBodyJobTasksConversation> conversation() { DARABONBA_PTR_GET(conversation_, vector<Models::DescribeJobResponseBodyJobTasksConversation>) };
    inline DescribeJobResponseBodyJobTasks& setConversation(const vector<Models::DescribeJobResponseBodyJobTasksConversation> & conversation) { DARABONBA_PTR_SET_VALUE(conversation_, conversation) };
    inline DescribeJobResponseBodyJobTasks& setConversation(vector<Models::DescribeJobResponseBodyJobTasksConversation> && conversation) { DARABONBA_PTR_SET_RVALUE(conversation_, conversation) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeJobResponseBodyJobTasks& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endReason Field Functions 
    bool hasEndReason() const { return this->endReason_ != nullptr;};
    void deleteEndReason() { this->endReason_ = nullptr;};
    inline string endReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, "") };
    inline DescribeJobResponseBodyJobTasks& setEndReason(string endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeJobResponseBodyJobTasks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hangUpDirection Field Functions 
    bool hasHangUpDirection() const { return this->hangUpDirection_ != nullptr;};
    void deleteHangUpDirection() { this->hangUpDirection_ = nullptr;};
    inline string hangUpDirection() const { DARABONBA_PTR_GET_DEFAULT(hangUpDirection_, "") };
    inline DescribeJobResponseBodyJobTasks& setHangUpDirection(string hangUpDirection) { DARABONBA_PTR_SET_VALUE(hangUpDirection_, hangUpDirection) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobResponseBodyJobTasks& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // planedTime Field Functions 
    bool hasPlanedTime() const { return this->planedTime_ != nullptr;};
    void deletePlanedTime() { this->planedTime_ = nullptr;};
    inline int64_t planedTime() const { DARABONBA_PTR_GET_DEFAULT(planedTime_, 0L) };
    inline DescribeJobResponseBodyJobTasks& setPlanedTime(int64_t planedTime) { DARABONBA_PTR_SET_VALUE(planedTime_, planedTime) };


    // realRingingDuration Field Functions 
    bool hasRealRingingDuration() const { return this->realRingingDuration_ != nullptr;};
    void deleteRealRingingDuration() { this->realRingingDuration_ = nullptr;};
    inline int64_t realRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(realRingingDuration_, 0L) };
    inline DescribeJobResponseBodyJobTasks& setRealRingingDuration(int64_t realRingingDuration) { DARABONBA_PTR_SET_VALUE(realRingingDuration_, realRingingDuration) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t ringingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline DescribeJobResponseBodyJobTasks& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline DescribeJobResponseBodyJobTasks& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // sipCode Field Functions 
    bool hasSipCode() const { return this->sipCode_ != nullptr;};
    void deleteSipCode() { this->sipCode_ = nullptr;};
    inline string sipCode() const { DARABONBA_PTR_GET_DEFAULT(sipCode_, "") };
    inline DescribeJobResponseBodyJobTasks& setSipCode(string sipCode) { DARABONBA_PTR_SET_VALUE(sipCode_, sipCode) };


    // sipDuration Field Functions 
    bool hasSipDuration() const { return this->sipDuration_ != nullptr;};
    void deleteSipDuration() { this->sipDuration_ = nullptr;};
    inline int64_t sipDuration() const { DARABONBA_PTR_GET_DEFAULT(sipDuration_, 0L) };
    inline DescribeJobResponseBodyJobTasks& setSipDuration(int64_t sipDuration) { DARABONBA_PTR_SET_VALUE(sipDuration_, sipDuration) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeJobResponseBodyJobTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeJobResponseBodyJobTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> actualTime_ = nullptr;
    std::shared_ptr<string> brief_ = nullptr;
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> chatbotId_ = nullptr;
    std::shared_ptr<Models::DescribeJobResponseBodyJobTasksContact> contact_ = nullptr;
    std::shared_ptr<vector<Models::DescribeJobResponseBodyJobTasksConversation>> conversation_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> endReason_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> hangUpDirection_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> planedTime_ = nullptr;
    std::shared_ptr<int64_t> realRingingDuration_ = nullptr;
    std::shared_ptr<int64_t> ringingDuration_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<string> sipCode_ = nullptr;
    std::shared_ptr<int64_t> sipDuration_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
