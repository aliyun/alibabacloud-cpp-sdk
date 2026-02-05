// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODY_HPP_
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
  class ListJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListJobsResponseBody() = default ;
    ListJobsResponseBody(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody(ListJobsResponseBody &&) = default ;
    ListJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBody() = default ;
    ListJobsResponseBody& operator=(const ListJobsResponseBody &) = default ;
    ListJobsResponseBody& operator=(ListJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Jobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
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
        DARABONBA_PTR_TO_JSON(SystemPriority, systemPriority_);
        DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      };
      friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
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
        DARABONBA_PTR_FROM_JSON(SystemPriority, systemPriority_);
        DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
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
          DARABONBA_PTR_TO_JSON(Conversation, conversation_);
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
          DARABONBA_PTR_FROM_JSON(Conversation, conversation_);
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
        class Conversation : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conversation& obj) { 
            DARABONBA_PTR_TO_JSON(Script, script_);
            DARABONBA_PTR_TO_JSON(Speaker, speaker_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          };
          friend void from_json(const Darabonba::Json& j, Conversation& obj) { 
            DARABONBA_PTR_FROM_JSON(Script, script_);
            DARABONBA_PTR_FROM_JSON(Speaker, speaker_);
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          };
          Conversation() = default ;
          Conversation(const Conversation &) = default ;
          Conversation(Conversation &&) = default ;
          Conversation(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Conversation() = default ;
          Conversation& operator=(const Conversation &) = default ;
          Conversation& operator=(Conversation &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Summary : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Summary& obj) { 
              DARABONBA_PTR_TO_JSON(Category, category_);
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(SummaryName, summaryName_);
            };
            friend void from_json(const Darabonba::Json& j, Summary& obj) { 
              DARABONBA_PTR_FROM_JSON(Category, category_);
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(SummaryName, summaryName_);
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
        && this->content_ == nullptr && this->summaryName_ == nullptr; };
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


            // summaryName Field Functions 
            bool hasSummaryName() const { return this->summaryName_ != nullptr;};
            void deleteSummaryName() { this->summaryName_ = nullptr;};
            inline string getSummaryName() const { DARABONBA_PTR_GET_DEFAULT(summaryName_, "") };
            inline Summary& setSummaryName(string summaryName) { DARABONBA_PTR_SET_VALUE(summaryName_, summaryName) };


          protected:
            shared_ptr<string> category_ {};
            shared_ptr<string> content_ {};
            shared_ptr<string> summaryName_ {};
          };

          virtual bool empty() const override { return this->script_ == nullptr
        && this->speaker_ == nullptr && this->summary_ == nullptr && this->timestamp_ == nullptr; };
          // script Field Functions 
          bool hasScript() const { return this->script_ != nullptr;};
          void deleteScript() { this->script_ = nullptr;};
          inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
          inline Conversation& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


          // speaker Field Functions 
          bool hasSpeaker() const { return this->speaker_ != nullptr;};
          void deleteSpeaker() { this->speaker_ = nullptr;};
          inline string getSpeaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
          inline Conversation& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline const vector<Conversation::Summary> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Conversation::Summary>) };
          inline vector<Conversation::Summary> getSummary() { DARABONBA_PTR_GET(summary_, vector<Conversation::Summary>) };
          inline Conversation& setSummary(const vector<Conversation::Summary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
          inline Conversation& setSummary(vector<Conversation::Summary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline Conversation& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        protected:
          shared_ptr<string> script_ {};
          shared_ptr<string> speaker_ {};
          shared_ptr<vector<Conversation::Summary>> summary_ {};
          shared_ptr<int64_t> timestamp_ {};
        };

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
          shared_ptr<string> contactId_ {};
          shared_ptr<string> contactName_ {};
          shared_ptr<string> honorific_ {};
          shared_ptr<string> jobId_ {};
          shared_ptr<string> phoneNumber_ {};
          shared_ptr<string> referenceId_ {};
          shared_ptr<string> role_ {};
          shared_ptr<string> state_ {};
        };

        virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->brief_ == nullptr && this->callId_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr && this->chatbotId_ == nullptr
        && this->contact_ == nullptr && this->conversation_ == nullptr && this->duration_ == nullptr && this->jobId_ == nullptr && this->planedTime_ == nullptr
        && this->scenarioId_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
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


        // conversation Field Functions 
        bool hasConversation() const { return this->conversation_ != nullptr;};
        void deleteConversation() { this->conversation_ = nullptr;};
        inline const vector<Tasks::Conversation> & getConversation() const { DARABONBA_PTR_GET_CONST(conversation_, vector<Tasks::Conversation>) };
        inline vector<Tasks::Conversation> getConversation() { DARABONBA_PTR_GET(conversation_, vector<Tasks::Conversation>) };
        inline Tasks& setConversation(const vector<Tasks::Conversation> & conversation) { DARABONBA_PTR_SET_VALUE(conversation_, conversation) };
        inline Tasks& setConversation(vector<Tasks::Conversation> && conversation) { DARABONBA_PTR_SET_RVALUE(conversation_, conversation) };


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
        shared_ptr<int64_t> actualTime_ {};
        shared_ptr<string> brief_ {};
        shared_ptr<string> callId_ {};
        shared_ptr<string> calledNumber_ {};
        shared_ptr<string> callingNumber_ {};
        shared_ptr<string> chatbotId_ {};
        shared_ptr<Tasks::Contact> contact_ {};
        shared_ptr<vector<Tasks::Conversation>> conversation_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<int64_t> planedTime_ {};
        shared_ptr<string> scenarioId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> taskId_ {};
      };

      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(SummaryName, summaryName_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(SummaryName, summaryName_);
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
        && this->content_ == nullptr && this->summaryName_ == nullptr; };
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


        // summaryName Field Functions 
        bool hasSummaryName() const { return this->summaryName_ != nullptr;};
        void deleteSummaryName() { this->summaryName_ = nullptr;};
        inline string getSummaryName() const { DARABONBA_PTR_GET_DEFAULT(summaryName_, "") };
        inline Summary& setSummaryName(string summaryName) { DARABONBA_PTR_SET_VALUE(summaryName_, summaryName) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> summaryName_ {};
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
        shared_ptr<string> key_ {};
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
        shared_ptr<string> contactId_ {};
        shared_ptr<string> contactName_ {};
        shared_ptr<string> honorific_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<string> phoneNumber_ {};
        shared_ptr<string> referenceId_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->callingNumbers_ == nullptr
        && this->contacts_ == nullptr && this->extras_ == nullptr && this->failureReason_ == nullptr && this->jobGroupId_ == nullptr && this->jobId_ == nullptr
        && this->priority_ == nullptr && this->referenceId_ == nullptr && this->scenarioId_ == nullptr && this->status_ == nullptr && this->strategyId_ == nullptr
        && this->summary_ == nullptr && this->systemPriority_ == nullptr && this->tasks_ == nullptr; };
      // callingNumbers Field Functions 
      bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
      void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
      inline const vector<string> & getCallingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
      inline vector<string> getCallingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
      inline Jobs& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
      inline Jobs& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline const vector<Jobs::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Jobs::Contacts>) };
      inline vector<Jobs::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<Jobs::Contacts>) };
      inline Jobs& setContacts(const vector<Jobs::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
      inline Jobs& setContacts(vector<Jobs::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


      // extras Field Functions 
      bool hasExtras() const { return this->extras_ != nullptr;};
      void deleteExtras() { this->extras_ = nullptr;};
      inline const vector<Jobs::Extras> & getExtras() const { DARABONBA_PTR_GET_CONST(extras_, vector<Jobs::Extras>) };
      inline vector<Jobs::Extras> getExtras() { DARABONBA_PTR_GET(extras_, vector<Jobs::Extras>) };
      inline Jobs& setExtras(const vector<Jobs::Extras> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
      inline Jobs& setExtras(vector<Jobs::Extras> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


      // failureReason Field Functions 
      bool hasFailureReason() const { return this->failureReason_ != nullptr;};
      void deleteFailureReason() { this->failureReason_ = nullptr;};
      inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
      inline Jobs& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


      // jobGroupId Field Functions 
      bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
      void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
      inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
      inline Jobs& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Jobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Jobs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline Jobs& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


      // scenarioId Field Functions 
      bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
      void deleteScenarioId() { this->scenarioId_ = nullptr;};
      inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
      inline Jobs& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Jobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
      inline Jobs& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const vector<Jobs::Summary> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Jobs::Summary>) };
      inline vector<Jobs::Summary> getSummary() { DARABONBA_PTR_GET(summary_, vector<Jobs::Summary>) };
      inline Jobs& setSummary(const vector<Jobs::Summary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline Jobs& setSummary(vector<Jobs::Summary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


      // systemPriority Field Functions 
      bool hasSystemPriority() const { return this->systemPriority_ != nullptr;};
      void deleteSystemPriority() { this->systemPriority_ = nullptr;};
      inline int32_t getSystemPriority() const { DARABONBA_PTR_GET_DEFAULT(systemPriority_, 0) };
      inline Jobs& setSystemPriority(int32_t systemPriority) { DARABONBA_PTR_SET_VALUE(systemPriority_, systemPriority) };


      // tasks Field Functions 
      bool hasTasks() const { return this->tasks_ != nullptr;};
      void deleteTasks() { this->tasks_ = nullptr;};
      inline const vector<Jobs::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Jobs::Tasks>) };
      inline vector<Jobs::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<Jobs::Tasks>) };
      inline Jobs& setTasks(const vector<Jobs::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
      inline Jobs& setTasks(vector<Jobs::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    protected:
      shared_ptr<vector<string>> callingNumbers_ {};
      shared_ptr<vector<Jobs::Contacts>> contacts_ {};
      shared_ptr<vector<Jobs::Extras>> extras_ {};
      shared_ptr<string> failureReason_ {};
      shared_ptr<string> jobGroupId_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<string> referenceId_ {};
      shared_ptr<string> scenarioId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> strategyId_ {};
      shared_ptr<vector<Jobs::Summary>> summary_ {};
      shared_ptr<int32_t> systemPriority_ {};
      shared_ptr<vector<Jobs::Tasks>> tasks_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->jobs_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListJobsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<ListJobsResponseBody::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ListJobsResponseBody::Jobs>) };
    inline vector<ListJobsResponseBody::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<ListJobsResponseBody::Jobs>) };
    inline ListJobsResponseBody& setJobs(const vector<ListJobsResponseBody::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListJobsResponseBody& setJobs(vector<ListJobsResponseBody::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<ListJobsResponseBody::Jobs>> jobs_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
