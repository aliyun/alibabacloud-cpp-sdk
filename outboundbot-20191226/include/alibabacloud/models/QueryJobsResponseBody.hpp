// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryJobsResponseBody() = default ;
    QueryJobsResponseBody(const QueryJobsResponseBody &) = default ;
    QueryJobsResponseBody(QueryJobsResponseBody &&) = default ;
    QueryJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsResponseBody() = default ;
    QueryJobsResponseBody& operator=(const QueryJobsResponseBody &) = default ;
    QueryJobsResponseBody& operator=(QueryJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Jobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Jobs() = default ;
      Jobs(const Jobs &) = default ;
      Jobs(Jobs &&) = default ;
      Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Jobs() = default ;
      Jobs& operator=(const Jobs &) = default ;
      Jobs& operator=(Jobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
          DARABONBA_PTR_TO_JSON(Contacts, contacts_);
          DARABONBA_PTR_TO_JSON(Extras, extras_);
          DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
          DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
          DARABONBA_PTR_TO_JSON(TagHits, tagHits_);
          DARABONBA_PTR_TO_JSON(Tasks, tasks_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
          DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
          DARABONBA_PTR_FROM_JSON(Extras, extras_);
          DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
          DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
          DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
          DARABONBA_PTR_FROM_JSON(TagHits, tagHits_);
          DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tasks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
            DARABONBA_PTR_TO_JSON(ActualTime, actualTime_);
            DARABONBA_PTR_TO_JSON(Brief, brief_);
            DARABONBA_PTR_TO_JSON(CallId, callId_);
            DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
            DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
            DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
            DARABONBA_PTR_TO_JSON(Contact, contact_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(PlanedTime, planedTime_);
            DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          };
          friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
            DARABONBA_PTR_FROM_JSON(ActualTime, actualTime_);
            DARABONBA_PTR_FROM_JSON(Brief, brief_);
            DARABONBA_PTR_FROM_JSON(CallId, callId_);
            DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
            DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
            DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
            DARABONBA_PTR_FROM_JSON(Contact, contact_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(PlanedTime, planedTime_);
            DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          };
          Tasks() = default ;
          Tasks(const Tasks &) = default ;
          Tasks(Tasks &&) = default ;
          Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tasks() = default ;
          Tasks& operator=(const Tasks &) = default ;
          Tasks& operator=(Tasks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Contact : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Contact& obj) { 
              DARABONBA_PTR_TO_JSON(ContactId, contactId_);
              DARABONBA_PTR_TO_JSON(ContactName, contactName_);
              DARABONBA_PTR_TO_JSON(Honorific, honorific_);
              DARABONBA_PTR_TO_JSON(JobId, jobId_);
              DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
              DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
              DARABONBA_PTR_TO_JSON(Role, role_);
              DARABONBA_PTR_TO_JSON(State, state_);
            };
            friend void from_json(const Darabonba::Json& j, Contact& obj) { 
              DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
              DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
              DARABONBA_PTR_FROM_JSON(Honorific, honorific_);
              DARABONBA_PTR_FROM_JSON(JobId, jobId_);
              DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
              DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
              DARABONBA_PTR_FROM_JSON(State, state_);
            };
            Contact() = default ;
            Contact(const Contact &) = default ;
            Contact(Contact &&) = default ;
            Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Contact() = default ;
            Contact& operator=(const Contact &) = default ;
            Contact& operator=(Contact &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->contactId_ == nullptr
        && this->contactName_ == nullptr && this->honorific_ == nullptr && this->jobId_ == nullptr && this->phoneNumber_ == nullptr && this->referenceId_ == nullptr
        && this->role_ == nullptr && this->state_ == nullptr; };
            // contactId Field Functions 
            bool hasContactId() const { return this->contactId_ != nullptr;};
            void deleteContactId() { this->contactId_ = nullptr;};
            inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
            inline Contact& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


            // contactName Field Functions 
            bool hasContactName() const { return this->contactName_ != nullptr;};
            void deleteContactName() { this->contactName_ = nullptr;};
            inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
            inline Contact& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


            // honorific Field Functions 
            bool hasHonorific() const { return this->honorific_ != nullptr;};
            void deleteHonorific() { this->honorific_ = nullptr;};
            inline string getHonorific() const { DARABONBA_PTR_GET_DEFAULT(honorific_, "") };
            inline Contact& setHonorific(string honorific) { DARABONBA_PTR_SET_VALUE(honorific_, honorific) };


            // jobId Field Functions 
            bool hasJobId() const { return this->jobId_ != nullptr;};
            void deleteJobId() { this->jobId_ = nullptr;};
            inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
            inline Contact& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


            // phoneNumber Field Functions 
            bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
            void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
            inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
            inline Contact& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


            // referenceId Field Functions 
            bool hasReferenceId() const { return this->referenceId_ != nullptr;};
            void deleteReferenceId() { this->referenceId_ = nullptr;};
            inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
            inline Contact& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline Contact& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


            // state Field Functions 
            bool hasState() const { return this->state_ != nullptr;};
            void deleteState() { this->state_ = nullptr;};
            inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
            inline Contact& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          protected:
            // Contact ID.
            shared_ptr<string> contactId_ {};
            // Contact name.
            shared_ptr<string> contactName_ {};
            // Honorific.
            shared_ptr<string> honorific_ {};
            // Job ID.
            shared_ptr<string> jobId_ {};
            // Contact phone number.
            shared_ptr<string> phoneNumber_ {};
            // Business association ID.
            shared_ptr<string> referenceId_ {};
            // Role.
            shared_ptr<string> role_ {};
            // Status.
            shared_ptr<string> state_ {};
          };

          virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->brief_ == nullptr && this->callId_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr && this->chatbotId_ == nullptr
        && this->contact_ == nullptr && this->duration_ == nullptr && this->jobId_ == nullptr && this->planedTime_ == nullptr && this->scenarioId_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr; };
          // actualTime Field Functions 
          bool hasActualTime() const { return this->actualTime_ != nullptr;};
          void deleteActualTime() { this->actualTime_ = nullptr;};
          inline int64_t getActualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
          inline Tasks& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


          // brief Field Functions 
          bool hasBrief() const { return this->brief_ != nullptr;};
          void deleteBrief() { this->brief_ = nullptr;};
          inline string getBrief() const { DARABONBA_PTR_GET_DEFAULT(brief_, "") };
          inline Tasks& setBrief(string brief) { DARABONBA_PTR_SET_VALUE(brief_, brief) };


          // callId Field Functions 
          bool hasCallId() const { return this->callId_ != nullptr;};
          void deleteCallId() { this->callId_ = nullptr;};
          inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
          inline Tasks& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


          // calledNumber Field Functions 
          bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
          void deleteCalledNumber() { this->calledNumber_ = nullptr;};
          inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
          inline Tasks& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


          // callingNumber Field Functions 
          bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
          void deleteCallingNumber() { this->callingNumber_ = nullptr;};
          inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
          inline Tasks& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


          // chatbotId Field Functions 
          bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
          void deleteChatbotId() { this->chatbotId_ = nullptr;};
          inline string getChatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
          inline Tasks& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


          // contact Field Functions 
          bool hasContact() const { return this->contact_ != nullptr;};
          void deleteContact() { this->contact_ = nullptr;};
          inline const Tasks::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, Tasks::Contact) };
          inline Tasks::Contact getContact() { DARABONBA_PTR_GET(contact_, Tasks::Contact) };
          inline Tasks& setContact(const Tasks::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
          inline Tasks& setContact(Tasks::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
          inline Tasks& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline Tasks& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // planedTime Field Functions 
          bool hasPlanedTime() const { return this->planedTime_ != nullptr;};
          void deletePlanedTime() { this->planedTime_ = nullptr;};
          inline int64_t getPlanedTime() const { DARABONBA_PTR_GET_DEFAULT(planedTime_, 0L) };
          inline Tasks& setPlanedTime(int64_t planedTime) { DARABONBA_PTR_SET_VALUE(planedTime_, planedTime) };


          // scenarioId Field Functions 
          bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
          void deleteScenarioId() { this->scenarioId_ = nullptr;};
          inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
          inline Tasks& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Tasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
          inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        protected:
          // Actual call time.
          shared_ptr<int64_t> actualTime_ {};
          // Summary. This field is deprecated.
          shared_ptr<string> brief_ {};
          // SIP call ID.
          shared_ptr<string> callId_ {};
          // Callee number.
          shared_ptr<string> calledNumber_ {};
          // Caller number.
          shared_ptr<string> callingNumber_ {};
          // Chatbot ID.
          shared_ptr<string> chatbotId_ {};
          // Contact information.
          shared_ptr<Tasks::Contact> contact_ {};
          // Call duration in seconds.
          shared_ptr<int32_t> duration_ {};
          // Job ID.
          shared_ptr<string> jobId_ {};
          // Scheduled call time.
          shared_ptr<int64_t> planedTime_ {};
          // Scenario ID.
          shared_ptr<string> scenarioId_ {};
          // The status of the task. Valid values are described below. Note that the Succeeded status is subdivided by reason. The generic Succeeded: 1 (Connected) status is no longer returned, and a specific success reason is provided instead.
          // 
          // - Executing: 0 (Calling).
          // 
          // - Succeeded: 1 (Connected).
          // 
          // - NoAnswer: 2 (Not connected – No answer).
          // 
          // - NotExist: 3 (Not connected – Nonexistent number).
          // 
          // - Busy: 4 (Not connected – Line busy).
          // 
          // - Cancelled: 5 (Not dialed – Task stopped).
          // 
          // - Failed: 6 (Failed).
          // 
          // - NotConnected: 7 (Not connected – Unreachable).
          // 
          // - PoweredOff: 8 (Not connected – Powered off).
          // 
          // - OutOfService: 9 (Not connected – Service suspended).
          // 
          // - InArrears: 10 (Not connected – Account has an overdue payment).
          // 
          // - EmptyNumber: 11 (Not dialed – Invalid number).
          // 
          // - PerDayCallCountLimit: 12 (Not dialed – Daily call limit exceeded).
          // 
          // - ContactBlockList: 13 (Not dialed – Number on blocklist).
          // 
          // - CallerNotRegistered: 14 (Not dialed – Caller ID not registered).
          // 
          // - Terminated: 15 (Not dialed – Terminated).
          // 
          // - VerificationCancelled: 16 (Not dialed – Canceled due to pre-call validation failure).
          // 
          // - OutOfServiceNoCall: 17 (Not dialed – Service suspended).
          // 
          // - InArrearsNoCall: 18 (Not dialed – Account has an overdue payment).
          // 
          // - CallingNumberNotExist: 19 (Not dialed – Caller ID does not exist).
          // 
          // - SucceededFinish: 20 (Connected – Completed normally).
          // 
          // - SucceededChatbotHangUpAfterNoAnswer: 21 (Connected – Bot hung up due to unrecognized input).
          // 
          // - SucceededChatbotHangUpAfterSilence: 22 (Connected – Bot hung up due to a silence timeout).
          // 
          // - SucceededClientHangUpAfterNoAnswer: 23 (Connected – User hung up due to unrecognized input).
          // 
          // - SucceededClientHangUp: 24 (Connected – User hung up).
          // 
          // - SucceededTransferByIntent: 25 (Connected – Transferred to an agent based on an intent match).
          // 
          // - SucceededTransferAfterNoAnswer: 26 (Connected – Transferred to an agent due to unrecognized input).
          // 
          // - SucceededInoInterAction: 27 (Connected – No user interaction).
          // 
          // - SucceededError: 28 (Connected – Call interrupted by a system error).
          // 
          // - SucceededSpecialInterceptVoiceAssistant: 29 (Connected – Intercepted by a voice assistant).
          // 
          // - SucceededSpecialInterceptExtensionNumberTransfer: 30 (Connected – Intercepted due to an extension transfer).
          // 
          // - SucceededSpecialInterceptCustomSpecialIntercept: 31 (Connected – Intercepted by a custom rule).
          // 
          // - HighRiskSipCode: 32 (Not dialed – High-risk number).
          shared_ptr<string> status_ {};
          // Call ID.
          shared_ptr<string> taskId_ {};
        };

        class TagHits : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagHits& obj) { 
            DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
            DARABONBA_PTR_TO_JSON(TagName, tagName_);
          };
          friend void from_json(const Darabonba::Json& j, TagHits& obj) { 
            DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
            DARABONBA_PTR_FROM_JSON(TagName, tagName_);
          };
          TagHits() = default ;
          TagHits(const TagHits &) = default ;
          TagHits(TagHits &&) = default ;
          TagHits(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagHits() = default ;
          TagHits& operator=(const TagHits &) = default ;
          TagHits& operator=(TagHits &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagGroup_ == nullptr
        && this->tagName_ == nullptr; };
          // tagGroup Field Functions 
          bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
          void deleteTagGroup() { this->tagGroup_ = nullptr;};
          inline string getTagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
          inline TagHits& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


          // tagName Field Functions 
          bool hasTagName() const { return this->tagName_ != nullptr;};
          void deleteTagName() { this->tagName_ = nullptr;};
          inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
          inline TagHits& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


        protected:
          // Tag group name.
          shared_ptr<string> tagGroup_ {};
          // Tag name.
          shared_ptr<string> tagName_ {};
        };

        class Summary : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Summary& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(ConversationDetailId, conversationDetailId_);
            DARABONBA_PTR_TO_JSON(GroupId, groupId_);
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(SummaryId, summaryId_);
            DARABONBA_PTR_TO_JSON(SummaryName, summaryName_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          };
          friend void from_json(const Darabonba::Json& j, Summary& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(ConversationDetailId, conversationDetailId_);
            DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(SummaryId, summaryId_);
            DARABONBA_PTR_FROM_JSON(SummaryName, summaryName_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          };
          Summary() = default ;
          Summary(const Summary &) = default ;
          Summary(Summary &&) = default ;
          Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Summary() = default ;
          Summary& operator=(const Summary &) = default ;
          Summary& operator=(Summary &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->category_ == nullptr
        && this->content_ == nullptr && this->conversationDetailId_ == nullptr && this->groupId_ == nullptr && this->jobId_ == nullptr && this->summaryId_ == nullptr
        && this->summaryName_ == nullptr && this->taskId_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline Summary& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Summary& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // conversationDetailId Field Functions 
          bool hasConversationDetailId() const { return this->conversationDetailId_ != nullptr;};
          void deleteConversationDetailId() { this->conversationDetailId_ = nullptr;};
          inline string getConversationDetailId() const { DARABONBA_PTR_GET_DEFAULT(conversationDetailId_, "") };
          inline Summary& setConversationDetailId(string conversationDetailId) { DARABONBA_PTR_SET_VALUE(conversationDetailId_, conversationDetailId) };


          // groupId Field Functions 
          bool hasGroupId() const { return this->groupId_ != nullptr;};
          void deleteGroupId() { this->groupId_ = nullptr;};
          inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
          inline Summary& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline Summary& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // summaryId Field Functions 
          bool hasSummaryId() const { return this->summaryId_ != nullptr;};
          void deleteSummaryId() { this->summaryId_ = nullptr;};
          inline string getSummaryId() const { DARABONBA_PTR_GET_DEFAULT(summaryId_, "") };
          inline Summary& setSummaryId(string summaryId) { DARABONBA_PTR_SET_VALUE(summaryId_, summaryId) };


          // summaryName Field Functions 
          bool hasSummaryName() const { return this->summaryName_ != nullptr;};
          void deleteSummaryName() { this->summaryName_ = nullptr;};
          inline string getSummaryName() const { DARABONBA_PTR_GET_DEFAULT(summaryName_, "") };
          inline Summary& setSummaryName(string summaryName) { DARABONBA_PTR_SET_VALUE(summaryName_, summaryName) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
          inline Summary& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        protected:
          // Category.
          shared_ptr<string> category_ {};
          // Content.
          shared_ptr<string> content_ {};
          // Call record ID.
          shared_ptr<string> conversationDetailId_ {};
          // Task ID.
          shared_ptr<string> groupId_ {};
          // Job ID.
          shared_ptr<string> jobId_ {};
          // Summary ID.
          shared_ptr<string> summaryId_ {};
          // Summary name.
          shared_ptr<string> summaryName_ {};
          // Call ID.
          shared_ptr<string> taskId_ {};
        };

        class Extras : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Extras& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Extras& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Extras() = default ;
          Extras(const Extras &) = default ;
          Extras(Extras &&) = default ;
          Extras(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Extras() = default ;
          Extras& operator=(const Extras &) = default ;
          Extras& operator=(Extras &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Extras& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Extras& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Business data key.
          shared_ptr<string> key_ {};
          // Business data value.
          shared_ptr<string> value_ {};
        };

        class Contacts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Contacts& obj) { 
            DARABONBA_PTR_TO_JSON(ContactId, contactId_);
            DARABONBA_PTR_TO_JSON(ContactName, contactName_);
            DARABONBA_PTR_TO_JSON(Honorific, honorific_);
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
            DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
            DARABONBA_PTR_TO_JSON(Role, role_);
            DARABONBA_PTR_TO_JSON(State, state_);
          };
          friend void from_json(const Darabonba::Json& j, Contacts& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
            DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
            DARABONBA_PTR_FROM_JSON(Honorific, honorific_);
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
            DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
            DARABONBA_PTR_FROM_JSON(State, state_);
          };
          Contacts() = default ;
          Contacts(const Contacts &) = default ;
          Contacts(Contacts &&) = default ;
          Contacts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Contacts() = default ;
          Contacts& operator=(const Contacts &) = default ;
          Contacts& operator=(Contacts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contactId_ == nullptr
        && this->contactName_ == nullptr && this->honorific_ == nullptr && this->jobId_ == nullptr && this->phoneNumber_ == nullptr && this->referenceId_ == nullptr
        && this->role_ == nullptr && this->state_ == nullptr; };
          // contactId Field Functions 
          bool hasContactId() const { return this->contactId_ != nullptr;};
          void deleteContactId() { this->contactId_ = nullptr;};
          inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
          inline Contacts& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


          // contactName Field Functions 
          bool hasContactName() const { return this->contactName_ != nullptr;};
          void deleteContactName() { this->contactName_ = nullptr;};
          inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
          inline Contacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


          // honorific Field Functions 
          bool hasHonorific() const { return this->honorific_ != nullptr;};
          void deleteHonorific() { this->honorific_ = nullptr;};
          inline string getHonorific() const { DARABONBA_PTR_GET_DEFAULT(honorific_, "") };
          inline Contacts& setHonorific(string honorific) { DARABONBA_PTR_SET_VALUE(honorific_, honorific) };


          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline Contacts& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // phoneNumber Field Functions 
          bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
          void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
          inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
          inline Contacts& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


          // referenceId Field Functions 
          bool hasReferenceId() const { return this->referenceId_ != nullptr;};
          void deleteReferenceId() { this->referenceId_ = nullptr;};
          inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
          inline Contacts& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Contacts& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline Contacts& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        protected:
          // Contact ID.
          shared_ptr<string> contactId_ {};
          // Contact name.
          shared_ptr<string> contactName_ {};
          // Honorific.
          shared_ptr<string> honorific_ {};
          // Job ID.
          shared_ptr<string> jobId_ {};
          // Phone number.
          shared_ptr<string> phoneNumber_ {};
          // Associated business ID.
          shared_ptr<string> referenceId_ {};
          // Role.
          shared_ptr<string> role_ {};
          // Status.
          // 
          // - Available
          // 
          // - WrongNumber
          // 
          // - DoesNotExist
          // 
          // - Suspended
          shared_ptr<string> state_ {};
        };

        virtual bool empty() const override { return this->callingNumbers_ == nullptr
        && this->contacts_ == nullptr && this->extras_ == nullptr && this->failureReason_ == nullptr && this->jobGroupId_ == nullptr && this->jobId_ == nullptr
        && this->priority_ == nullptr && this->referenceId_ == nullptr && this->scenarioId_ == nullptr && this->status_ == nullptr && this->strategyId_ == nullptr
        && this->summary_ == nullptr && this->tagHits_ == nullptr && this->tasks_ == nullptr; };
        // callingNumbers Field Functions 
        bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
        void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
        inline const vector<string> & getCallingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
        inline vector<string> getCallingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
        inline List& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
        inline List& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


        // contacts Field Functions 
        bool hasContacts() const { return this->contacts_ != nullptr;};
        void deleteContacts() { this->contacts_ = nullptr;};
        inline const vector<List::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<List::Contacts>) };
        inline vector<List::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<List::Contacts>) };
        inline List& setContacts(const vector<List::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
        inline List& setContacts(vector<List::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


        // extras Field Functions 
        bool hasExtras() const { return this->extras_ != nullptr;};
        void deleteExtras() { this->extras_ = nullptr;};
        inline const vector<List::Extras> & getExtras() const { DARABONBA_PTR_GET_CONST(extras_, vector<List::Extras>) };
        inline vector<List::Extras> getExtras() { DARABONBA_PTR_GET(extras_, vector<List::Extras>) };
        inline List& setExtras(const vector<List::Extras> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
        inline List& setExtras(vector<List::Extras> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


        // failureReason Field Functions 
        bool hasFailureReason() const { return this->failureReason_ != nullptr;};
        void deleteFailureReason() { this->failureReason_ = nullptr;};
        inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
        inline List& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


        // jobGroupId Field Functions 
        bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
        void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
        inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
        inline List& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline List& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline List& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // referenceId Field Functions 
        bool hasReferenceId() const { return this->referenceId_ != nullptr;};
        void deleteReferenceId() { this->referenceId_ = nullptr;};
        inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
        inline List& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


        // scenarioId Field Functions 
        bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
        void deleteScenarioId() { this->scenarioId_ = nullptr;};
        inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
        inline List& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // strategyId Field Functions 
        bool hasStrategyId() const { return this->strategyId_ != nullptr;};
        void deleteStrategyId() { this->strategyId_ = nullptr;};
        inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
        inline List& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline const vector<List::Summary> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, vector<List::Summary>) };
        inline vector<List::Summary> getSummary() { DARABONBA_PTR_GET(summary_, vector<List::Summary>) };
        inline List& setSummary(const vector<List::Summary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
        inline List& setSummary(vector<List::Summary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


        // tagHits Field Functions 
        bool hasTagHits() const { return this->tagHits_ != nullptr;};
        void deleteTagHits() { this->tagHits_ = nullptr;};
        inline const vector<List::TagHits> & getTagHits() const { DARABONBA_PTR_GET_CONST(tagHits_, vector<List::TagHits>) };
        inline vector<List::TagHits> getTagHits() { DARABONBA_PTR_GET(tagHits_, vector<List::TagHits>) };
        inline List& setTagHits(const vector<List::TagHits> & tagHits) { DARABONBA_PTR_SET_VALUE(tagHits_, tagHits) };
        inline List& setTagHits(vector<List::TagHits> && tagHits) { DARABONBA_PTR_SET_RVALUE(tagHits_, tagHits) };


        // tasks Field Functions 
        bool hasTasks() const { return this->tasks_ != nullptr;};
        void deleteTasks() { this->tasks_ = nullptr;};
        inline const vector<List::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<List::Tasks>) };
        inline vector<List::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<List::Tasks>) };
        inline List& setTasks(const vector<List::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
        inline List& setTasks(vector<List::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


      protected:
        // Caller number list.
        shared_ptr<vector<string>> callingNumbers_ {};
        // Contact information. This parameter is deprecated.
        // 
        // > Use the DescribeJob operation instead.
        shared_ptr<vector<List::Contacts>> contacts_ {};
        // Business data. Shows tag collection status for Large Language Model (LLM) scenarios.
        // 
        // > Keys TenantId and ServiceId are system parameters.
        shared_ptr<vector<List::Extras>> extras_ {};
        // Failure reason.
        // 
        // - Unknown
        // 
        // - NoAnswer
        // 
        // - InvalidStrategy
        // 
        // - TimeUp
        // 
        // - NoStrategy
        // 
        // - CallFailed
        // 
        // - PerDayCallCountLimit
        // 
        // - ContactBlockList
        // 
        // - EmptyNumber
        // 
        // - JobPerDayCallCountLimit
        // 
        // - VerificationCancelled
        // 
        // - ContactSuspended
        // 
        // - InArrears
        // 
        // - OutOfService
        shared_ptr<string> failureReason_ {};
        // Task ID.
        shared_ptr<string> jobGroupId_ {};
        // Job ID.
        shared_ptr<string> jobId_ {};
        // Priority.
        shared_ptr<int32_t> priority_ {};
        // Associated business ID.
        shared_ptr<string> referenceId_ {};
        // Scenario ID. This parameter is deprecated.
        shared_ptr<string> scenarioId_ {};
        // Job status.
        // 
        // - Scheduling (0)
        // 
        // - Executing (1)
        // 
        // - Succeeded (2)
        // 
        // - Paused (3)
        // 
        // - Failed (4)
        // 
        // - Cancelled (5)
        // 
        // - Drafted (6)
        shared_ptr<string> status_ {};
        // Strategy ID.
        shared_ptr<string> strategyId_ {};
        // Conversation summary. This field is deprecated.
        shared_ptr<vector<List::Summary>> summary_ {};
        // Tags hit in small model scenarios.
        shared_ptr<vector<List::TagHits>> tagHits_ {};
        // Call list. This parameter is deprecated.
        // 
        // > Use the searchTask operation instead.
        shared_ptr<vector<List::Tasks>> tasks_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Jobs::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Jobs::List>) };
      inline vector<Jobs::List> getList() { DARABONBA_PTR_GET(list_, vector<Jobs::List>) };
      inline Jobs& setList(const vector<Jobs::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Jobs& setList(vector<Jobs::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Jobs& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Jobs& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Jobs& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Job array.
      shared_ptr<vector<Jobs::List>> list_ {};
      // Page number.
      shared_ptr<int32_t> pageNumber_ {};
      // Page size.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->jobs_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryJobsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const QueryJobsResponseBody::Jobs & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, QueryJobsResponseBody::Jobs) };
    inline QueryJobsResponseBody::Jobs getJobs() { DARABONBA_PTR_GET(jobs_, QueryJobsResponseBody::Jobs) };
    inline QueryJobsResponseBody& setJobs(const QueryJobsResponseBody::Jobs & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline QueryJobsResponseBody& setJobs(QueryJobsResponseBody::Jobs && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // HTTP status code.
    shared_ptr<string> code_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Job data.
    shared_ptr<QueryJobsResponseBody::Jobs> jobs_ {};
    // Response message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call succeeded.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
