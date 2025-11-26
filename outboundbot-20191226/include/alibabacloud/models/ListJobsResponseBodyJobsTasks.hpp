// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBSTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobsResponseBodyJobsTasksContact.hpp>
#include <vector>
#include <alibabacloud/models/ListJobsResponseBodyJobsTasksConversation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobsResponseBodyJobsTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobsTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_TO_JSON(Brief, brief_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(Conversation, conversation_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PlanedTime, planedTime_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobsTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_FROM_JSON(Brief, brief_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(Conversation, conversation_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PlanedTime, planedTime_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListJobsResponseBodyJobsTasks() = default ;
    ListJobsResponseBodyJobsTasks(const ListJobsResponseBodyJobsTasks &) = default ;
    ListJobsResponseBodyJobsTasks(ListJobsResponseBodyJobsTasks &&) = default ;
    ListJobsResponseBodyJobsTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobsTasks() = default ;
    ListJobsResponseBodyJobsTasks& operator=(const ListJobsResponseBodyJobsTasks &) = default ;
    ListJobsResponseBodyJobsTasks& operator=(ListJobsResponseBodyJobsTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTime_ == nullptr
        && return this->brief_ == nullptr && return this->callId_ == nullptr && return this->calledNumber_ == nullptr && return this->callingNumber_ == nullptr && return this->chatbotId_ == nullptr
        && return this->contact_ == nullptr && return this->conversation_ == nullptr && return this->duration_ == nullptr && return this->jobId_ == nullptr && return this->planedTime_ == nullptr
        && return this->scenarioId_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr; };
    // actualTime Field Functions 
    bool hasActualTime() const { return this->actualTime_ != nullptr;};
    void deleteActualTime() { this->actualTime_ = nullptr;};
    inline int64_t actualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
    inline ListJobsResponseBodyJobsTasks& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


    // brief Field Functions 
    bool hasBrief() const { return this->brief_ != nullptr;};
    void deleteBrief() { this->brief_ = nullptr;};
    inline string brief() const { DARABONBA_PTR_GET_DEFAULT(brief_, "") };
    inline ListJobsResponseBodyJobsTasks& setBrief(string brief) { DARABONBA_PTR_SET_VALUE(brief_, brief) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline ListJobsResponseBodyJobsTasks& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline ListJobsResponseBodyJobsTasks& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline ListJobsResponseBodyJobsTasks& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string chatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline ListJobsResponseBodyJobsTasks& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const Models::ListJobsResponseBodyJobsTasksContact & contact() const { DARABONBA_PTR_GET_CONST(contact_, Models::ListJobsResponseBodyJobsTasksContact) };
    inline Models::ListJobsResponseBodyJobsTasksContact contact() { DARABONBA_PTR_GET(contact_, Models::ListJobsResponseBodyJobsTasksContact) };
    inline ListJobsResponseBodyJobsTasks& setContact(const Models::ListJobsResponseBodyJobsTasksContact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline ListJobsResponseBodyJobsTasks& setContact(Models::ListJobsResponseBodyJobsTasksContact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // conversation Field Functions 
    bool hasConversation() const { return this->conversation_ != nullptr;};
    void deleteConversation() { this->conversation_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyJobsTasksConversation> & conversation() const { DARABONBA_PTR_GET_CONST(conversation_, vector<Models::ListJobsResponseBodyJobsTasksConversation>) };
    inline vector<Models::ListJobsResponseBodyJobsTasksConversation> conversation() { DARABONBA_PTR_GET(conversation_, vector<Models::ListJobsResponseBodyJobsTasksConversation>) };
    inline ListJobsResponseBodyJobsTasks& setConversation(const vector<Models::ListJobsResponseBodyJobsTasksConversation> & conversation) { DARABONBA_PTR_SET_VALUE(conversation_, conversation) };
    inline ListJobsResponseBodyJobsTasks& setConversation(vector<Models::ListJobsResponseBodyJobsTasksConversation> && conversation) { DARABONBA_PTR_SET_RVALUE(conversation_, conversation) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ListJobsResponseBodyJobsTasks& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobsResponseBodyJobsTasks& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // planedTime Field Functions 
    bool hasPlanedTime() const { return this->planedTime_ != nullptr;};
    void deletePlanedTime() { this->planedTime_ = nullptr;};
    inline int64_t planedTime() const { DARABONBA_PTR_GET_DEFAULT(planedTime_, 0L) };
    inline ListJobsResponseBodyJobsTasks& setPlanedTime(int64_t planedTime) { DARABONBA_PTR_SET_VALUE(planedTime_, planedTime) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline ListJobsResponseBodyJobsTasks& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsResponseBodyJobsTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListJobsResponseBodyJobsTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> actualTime_ = nullptr;
    std::shared_ptr<string> brief_ = nullptr;
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> chatbotId_ = nullptr;
    std::shared_ptr<Models::ListJobsResponseBodyJobsTasksContact> contact_ = nullptr;
    std::shared_ptr<vector<Models::ListJobsResponseBodyJobsTasksConversation>> conversation_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> planedTime_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
