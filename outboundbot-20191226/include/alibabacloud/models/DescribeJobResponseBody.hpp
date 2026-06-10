// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODY_HPP_
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
  class DescribeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeJobResponseBody() = default ;
    DescribeJobResponseBody(const DescribeJobResponseBody &) = default ;
    DescribeJobResponseBody(DescribeJobResponseBody &&) = default ;
    DescribeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBody() = default ;
    DescribeJobResponseBody& operator=(const DescribeJobResponseBody &) = default ;
    DescribeJobResponseBody& operator=(DescribeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(ActualTime, actualTime_);
        DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
        DARABONBA_PTR_TO_JSON(CallingNumbers, callingNumbers_);
        DARABONBA_PTR_TO_JSON(Contacts, contacts_);
        DARABONBA_PTR_TO_JSON(DsReport, dsReport_);
        DARABONBA_PTR_TO_JSON(EndReason, endReason_);
        DARABONBA_PTR_TO_JSON(Extras, extras_);
        DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(NextExecutionTime, nextExecutionTime_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
        DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
        DARABONBA_PTR_TO_JSON(Script, script_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(SystemPriority, systemPriority_);
        DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualTime, actualTime_);
        DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
        DARABONBA_PTR_FROM_JSON(CallingNumbers, callingNumbers_);
        DARABONBA_PTR_FROM_JSON(Contacts, contacts_);
        DARABONBA_PTR_FROM_JSON(DsReport, dsReport_);
        DARABONBA_PTR_FROM_JSON(EndReason, endReason_);
        DARABONBA_PTR_FROM_JSON(Extras, extras_);
        DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(NextExecutionTime, nextExecutionTime_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
        DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(SystemPriority, systemPriority_);
        DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
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
          DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
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
          DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
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
            DARABONBA_PTR_TO_JSON(Action, action_);
            DARABONBA_PTR_TO_JSON(ActionParams, actionParams_);
            DARABONBA_PTR_TO_JSON(Script, script_);
            DARABONBA_PTR_TO_JSON(SequenceId, sequenceId_);
            DARABONBA_PTR_TO_JSON(Speaker, speaker_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          };
          friend void from_json(const Darabonba::Json& j, Conversation& obj) { 
            DARABONBA_PTR_FROM_JSON(Action, action_);
            DARABONBA_PTR_FROM_JSON(ActionParams, actionParams_);
            DARABONBA_PTR_FROM_JSON(Script, script_);
            DARABONBA_PTR_FROM_JSON(SequenceId, sequenceId_);
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
            // The category of the conversation summary. [Deprecated]
            shared_ptr<string> category_ {};
            // The content of the summary.
            shared_ptr<string> content_ {};
            // The name of the summary.
            shared_ptr<string> summaryName_ {};
          };

          virtual bool empty() const override { return this->action_ == nullptr
        && this->actionParams_ == nullptr && this->script_ == nullptr && this->sequenceId_ == nullptr && this->speaker_ == nullptr && this->summary_ == nullptr
        && this->timestamp_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
          inline Conversation& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


          // actionParams Field Functions 
          bool hasActionParams() const { return this->actionParams_ != nullptr;};
          void deleteActionParams() { this->actionParams_ = nullptr;};
          inline string getActionParams() const { DARABONBA_PTR_GET_DEFAULT(actionParams_, "") };
          inline Conversation& setActionParams(string actionParams) { DARABONBA_PTR_SET_VALUE(actionParams_, actionParams) };


          // script Field Functions 
          bool hasScript() const { return this->script_ != nullptr;};
          void deleteScript() { this->script_ = nullptr;};
          inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
          inline Conversation& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


          // sequenceId Field Functions 
          bool hasSequenceId() const { return this->sequenceId_ != nullptr;};
          void deleteSequenceId() { this->sequenceId_ = nullptr;};
          inline string getSequenceId() const { DARABONBA_PTR_GET_DEFAULT(sequenceId_, "") };
          inline Conversation& setSequenceId(string sequenceId) { DARABONBA_PTR_SET_VALUE(sequenceId_, sequenceId) };


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
          // The action.
          shared_ptr<string> action_ {};
          // Action-specific parameters. For example, if barge-in occurs, this parameter contains details about the interrupted speech, such as the text in the `answer` field.
          // 
          // - -
          shared_ptr<string> actionParams_ {};
          // The conversation transcript.
          shared_ptr<string> script_ {};
          // The conversation ID.
          shared_ptr<string> sequenceId_ {};
          // The speaker in the conversation. `Robot` indicates the chatbot, and `Contact` indicates the contact.
          shared_ptr<string> speaker_ {};
          // The conversation summary data. [Deprecated]
          shared_ptr<vector<Conversation::Summary>> summary_ {};
          // The timestamp for this event in the conversation.
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
          // The ID of the contact. This ID is generated by the system.
          shared_ptr<string> contactId_ {};
          // The name of the contact.
          shared_ptr<string> contactName_ {};
          // The honorific of the contact.
          shared_ptr<string> honorific_ {};
          // The job ID. [Deprecated]
          shared_ptr<string> jobId_ {};
          // The phone number.
          shared_ptr<string> phoneNumber_ {};
          // The business ID of the contact.
          // 
          // > This is the `ContactId` that you specified for the contact.
          shared_ptr<string> referenceId_ {};
          // The role of the contact. [Deprecated]
          shared_ptr<string> role_ {};
          // The status of the contact. [Deprecated]
          shared_ptr<string> state_ {};
        };

        virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->brief_ == nullptr && this->callId_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr && this->chatbotId_ == nullptr
        && this->contact_ == nullptr && this->conversation_ == nullptr && this->duration_ == nullptr && this->endReason_ == nullptr && this->endTime_ == nullptr
        && this->hangUpDirection_ == nullptr && this->jobId_ == nullptr && this->planedTime_ == nullptr && this->realRingingDuration_ == nullptr && this->ringingDuration_ == nullptr
        && this->scenarioId_ == nullptr && this->sipCode_ == nullptr && this->sipDuration_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->totalDuration_ == nullptr; };
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


        // endReason Field Functions 
        bool hasEndReason() const { return this->endReason_ != nullptr;};
        void deleteEndReason() { this->endReason_ = nullptr;};
        inline string getEndReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, "") };
        inline Tasks& setEndReason(string endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Tasks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // hangUpDirection Field Functions 
        bool hasHangUpDirection() const { return this->hangUpDirection_ != nullptr;};
        void deleteHangUpDirection() { this->hangUpDirection_ = nullptr;};
        inline string getHangUpDirection() const { DARABONBA_PTR_GET_DEFAULT(hangUpDirection_, "") };
        inline Tasks& setHangUpDirection(string hangUpDirection) { DARABONBA_PTR_SET_VALUE(hangUpDirection_, hangUpDirection) };


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


        // realRingingDuration Field Functions 
        bool hasRealRingingDuration() const { return this->realRingingDuration_ != nullptr;};
        void deleteRealRingingDuration() { this->realRingingDuration_ = nullptr;};
        inline int64_t getRealRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(realRingingDuration_, 0L) };
        inline Tasks& setRealRingingDuration(int64_t realRingingDuration) { DARABONBA_PTR_SET_VALUE(realRingingDuration_, realRingingDuration) };


        // ringingDuration Field Functions 
        bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
        void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
        inline int64_t getRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
        inline Tasks& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


        // scenarioId Field Functions 
        bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
        void deleteScenarioId() { this->scenarioId_ = nullptr;};
        inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
        inline Tasks& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


        // sipCode Field Functions 
        bool hasSipCode() const { return this->sipCode_ != nullptr;};
        void deleteSipCode() { this->sipCode_ = nullptr;};
        inline string getSipCode() const { DARABONBA_PTR_GET_DEFAULT(sipCode_, "") };
        inline Tasks& setSipCode(string sipCode) { DARABONBA_PTR_SET_VALUE(sipCode_, sipCode) };


        // sipDuration Field Functions 
        bool hasSipDuration() const { return this->sipDuration_ != nullptr;};
        void deleteSipDuration() { this->sipDuration_ = nullptr;};
        inline int64_t getSipDuration() const { DARABONBA_PTR_GET_DEFAULT(sipDuration_, 0L) };
        inline Tasks& setSipDuration(int64_t sipDuration) { DARABONBA_PTR_SET_VALUE(sipDuration_, sipDuration) };


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


        // totalDuration Field Functions 
        bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
        void deleteTotalDuration() { this->totalDuration_ = nullptr;};
        inline int64_t getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
        inline Tasks& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


      protected:
        // The actual execution time.
        shared_ptr<int64_t> actualTime_ {};
        // The business result. [Deprecated]
        shared_ptr<string> brief_ {};
        // The SIP call ID.
        shared_ptr<string> callId_ {};
        // The called number.
        shared_ptr<string> calledNumber_ {};
        // The calling number.
        shared_ptr<string> callingNumber_ {};
        // The ID of the chatbot used in the conversation.
        shared_ptr<string> chatbotId_ {};
        // The contact information.
        shared_ptr<Tasks::Contact> contact_ {};
        // The conversation transcripts for the task.
        shared_ptr<vector<Tasks::Conversation>> conversation_ {};
        // The duration of the conversation. This parameter is deprecated and its value should be ignored.
        // 
        // > The conversation duration is now provided in the `ActionParams` of the final object in the `Conversation` array.
        shared_ptr<int32_t> duration_ {};
        // The reason why the task ended.
        shared_ptr<string> endReason_ {};
        // The actual end time.
        shared_ptr<int64_t> endTime_ {};
        // The party that hung up.
        // 
        // - `client`: The contact.
        // 
        // - `ivr`: The chatbot.
        shared_ptr<string> hangUpDirection_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The scheduled dial time.
        shared_ptr<int64_t> planedTime_ {};
        // The actual ringing duration.
        shared_ptr<int64_t> realRingingDuration_ {};
        // The ringing duration.
        shared_ptr<int64_t> ringingDuration_ {};
        // The scenario ID.
        shared_ptr<string> scenarioId_ {};
        // The SIP status code for the call task.
        shared_ptr<string> sipCode_ {};
        // The duration of the SIP signaling. [Deprecated]
        shared_ptr<int64_t> sipDuration_ {};
        // The status of the task. Valid values:
        // Note: The generic `Succeeded` status (1) is deprecated and has been replaced by more specific success statuses (20 to 31).
        // 
        // - **Executing**: 0 - Dialing.
        // 
        // - **Succeeded**: 1 - Connected.
        // 
        // - **NoAnswer**: 2 - Not connected: No answer.
        // 
        // - **NotExist**: 3 - Not connected: Invalid number.
        // 
        // - **Busy**: 4 - Not connected: Busy.
        // 
        // - **Cancelled**: 5 - Not dialed: Task stopped.
        // 
        // - **Failed**: 6 - Failed.
        // 
        // - **NotConnected**: 7 - Not connected: Unable to connect.
        // 
        // - **PoweredOff**: 8 - Not connected: Powered off.
        // 
        // - **OutOfService**: 9 - Not connected: Called number is out of service.
        // 
        // - **InArrears**: 10 - Not connected: Called number has an overdue payment.
        // 
        // - **EmptyNumber**: 11 - Not dialed: Empty number.
        // 
        // - **PerDayCallCountLimit**: 12 - Not dialed: Daily limit exceeded.
        // 
        // - **ContactBlockList**: 13 - Not dialed: Blocklisted.
        // 
        // - **CallerNotRegistered**: 14 - Not dialed: Calling number not registered.
        // 
        // - **Terminated**: 15 - Not dialed: Terminated.
        // 
        // - **VerificationCancelled**: 16 - Not dialed: Canceled due to pre-call verification failure.
        // 
        // - **OutOfServiceNoCall**: 17 - Not dialed: Called number is out of service.
        // 
        // - **InArrearsNoCall**: 18 - Not dialed: Called number has an overdue payment.
        // 
        // - **CallingNumberNotExist**: 19 - Not dialed: Calling number does not exist.
        // 
        // - **SucceededFinish**: 20 - Connected: Ended normally.
        // 
        // - **SucceededChatbotHangUpAfterNoAnswer**: 21 - Connected: Chatbot hung up after failing to recognize user intent.
        // 
        // - **SucceededChatbotHangUpAfterSilence**: 22 - Connected: Chatbot hung up due to a silence timeout.
        // 
        // - **SucceededClientHangUpAfterNoAnswer**: 23 - Connected: User hung up after the chatbot failed to recognize intent.
        // 
        // - **SucceededClientHangUp**: 24 - Connected: User hung up.
        // 
        // - **SucceededTransferByIntent**: 25 - Connected: Transferred to a human agent by intent.
        // 
        // - **SucceededTransferAfterNoAnswer**: 26 - Connected: Transferred to a human agent after the chatbot failed to recognize intent.
        // 
        // - **SucceededInoInterAction**: 27 - Connected: No user interaction.
        // 
        // - **SucceededError**: 28 - Connected: System error.
        // 
        // - **SucceededSpecialInterceptVoiceAssistant**: 29 - Connected: Special intercept - voice assistant.
        // 
        // - **SucceededSpecialInterceptExtensionNumberTransfer**: 30 - Connected: Special intercept - extension number transfer.
        // 
        // - **SucceededSpecialInterceptCustomSpecialIntercept**: 31 - Connected: Special intercept - custom.
        // 
        // - **HighRiskSipCode**: 32 - Not dialed: High-risk number.
        shared_ptr<string> status_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
        shared_ptr<int64_t> totalDuration_ {};
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
        // The category of the conversation summary. [Deprecated]
        shared_ptr<string> category_ {};
        // The tag value.
        shared_ptr<string> content_ {};
        // The tag name.
        shared_ptr<string> summaryName_ {};
      };

      class Script : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Script& obj) { 
          DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
          DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
          DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
          DARABONBA_PTR_TO_JSON(Industry, industry_);
          DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
          DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
          DARABONBA_PTR_TO_JSON(MiniPlaybackConfigEnabled, miniPlaybackConfigEnabled_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Script& obj) { 
          DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
          DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
          DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
          DARABONBA_PTR_FROM_JSON(Industry, industry_);
          DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
          DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
          DARABONBA_PTR_FROM_JSON(MiniPlaybackConfigEnabled, miniPlaybackConfigEnabled_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Script() = default ;
        Script(const Script &) = default ;
        Script(Script &&) = default ;
        Script(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Script() = default ;
        Script& operator=(const Script &) = default ;
        Script& operator=(Script &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->asrConfig_ == nullptr
        && this->chatbotId_ == nullptr && this->debugStatus_ == nullptr && this->industry_ == nullptr && this->isDebugDrafted_ == nullptr && this->isDrafted_ == nullptr
        && this->miniPlaybackConfigEnabled_ == nullptr && this->name_ == nullptr && this->scene_ == nullptr && this->scriptDescription_ == nullptr && this->scriptId_ == nullptr
        && this->status_ == nullptr && this->ttsConfig_ == nullptr && this->updateTime_ == nullptr; };
        // asrConfig Field Functions 
        bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
        void deleteAsrConfig() { this->asrConfig_ = nullptr;};
        inline string getAsrConfig() const { DARABONBA_PTR_GET_DEFAULT(asrConfig_, "") };
        inline Script& setAsrConfig(string asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };


        // chatbotId Field Functions 
        bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
        void deleteChatbotId() { this->chatbotId_ = nullptr;};
        inline string getChatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
        inline Script& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


        // debugStatus Field Functions 
        bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
        void deleteDebugStatus() { this->debugStatus_ = nullptr;};
        inline string getDebugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
        inline Script& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


        // industry Field Functions 
        bool hasIndustry() const { return this->industry_ != nullptr;};
        void deleteIndustry() { this->industry_ = nullptr;};
        inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
        inline Script& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


        // isDebugDrafted Field Functions 
        bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
        void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
        inline bool getIsDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
        inline Script& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


        // isDrafted Field Functions 
        bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
        void deleteIsDrafted() { this->isDrafted_ = nullptr;};
        inline bool getIsDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
        inline Script& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


        // miniPlaybackConfigEnabled Field Functions 
        bool hasMiniPlaybackConfigEnabled() const { return this->miniPlaybackConfigEnabled_ != nullptr;};
        void deleteMiniPlaybackConfigEnabled() { this->miniPlaybackConfigEnabled_ = nullptr;};
        inline bool getMiniPlaybackConfigEnabled() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackConfigEnabled_, false) };
        inline Script& setMiniPlaybackConfigEnabled(bool miniPlaybackConfigEnabled) { DARABONBA_PTR_SET_VALUE(miniPlaybackConfigEnabled_, miniPlaybackConfigEnabled) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Script& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline Script& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // scriptDescription Field Functions 
        bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
        void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
        inline string getScriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
        inline Script& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline Script& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Script& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // ttsConfig Field Functions 
        bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
        void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
        inline string getTtsConfig() const { DARABONBA_PTR_GET_DEFAULT(ttsConfig_, "") };
        inline Script& setTtsConfig(string ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Script& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The ASR configuration for the script. [Deprecated]
        shared_ptr<string> asrConfig_ {};
        // The chatbot ID.
        shared_ptr<string> chatbotId_ {};
        // The debug status.
        shared_ptr<string> debugStatus_ {};
        // The industry.
        shared_ptr<string> industry_ {};
        // Indicates whether the debug version is a draft.
        shared_ptr<bool> isDebugDrafted_ {};
        // Indicates whether the script is a draft.
        shared_ptr<bool> isDrafted_ {};
        // Indicates whether continuation speech is enabled. This parameter is deprecated and its value should be ignored.
        shared_ptr<bool> miniPlaybackConfigEnabled_ {};
        // The script name.
        shared_ptr<string> name_ {};
        // The scene.
        shared_ptr<string> scene_ {};
        // The script description.
        shared_ptr<string> scriptDescription_ {};
        // The script ID.
        shared_ptr<string> scriptId_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The TTS configuration for the script. [Deprecated]
        shared_ptr<string> ttsConfig_ {};
        // The timestamp of the last script update.
        shared_ptr<int64_t> updateTime_ {};
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
        // The name of the business parameter.
        shared_ptr<string> key_ {};
        // The value of the business parameter.
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
        // The ID of the contact. This ID is generated by the system.
        shared_ptr<string> contactId_ {};
        // The name of the contact.
        shared_ptr<string> contactName_ {};
        // The honorific of the contact.
        shared_ptr<string> honorific_ {};
        // The job ID.
        shared_ptr<string> jobId_ {};
        // The contact\\"s phone number.
        shared_ptr<string> phoneNumber_ {};
        // The business ID of the contact.
        shared_ptr<string> referenceId_ {};
        // The role of the contact. [Deprecated]
        shared_ptr<string> role_ {};
        // The status of the contact. [Deprecated]
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->calledNumber_ == nullptr && this->callingNumbers_ == nullptr && this->contacts_ == nullptr && this->dsReport_ == nullptr && this->endReason_ == nullptr
        && this->extras_ == nullptr && this->failureReason_ == nullptr && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobId_ == nullptr
        && this->nextExecutionTime_ == nullptr && this->priority_ == nullptr && this->referenceId_ == nullptr && this->scenarioId_ == nullptr && this->script_ == nullptr
        && this->status_ == nullptr && this->strategyId_ == nullptr && this->summary_ == nullptr && this->systemPriority_ == nullptr && this->tasks_ == nullptr; };
      // actualTime Field Functions 
      bool hasActualTime() const { return this->actualTime_ != nullptr;};
      void deleteActualTime() { this->actualTime_ = nullptr;};
      inline int64_t getActualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
      inline Job& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


      // calledNumber Field Functions 
      bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
      void deleteCalledNumber() { this->calledNumber_ = nullptr;};
      inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
      inline Job& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


      // callingNumbers Field Functions 
      bool hasCallingNumbers() const { return this->callingNumbers_ != nullptr;};
      void deleteCallingNumbers() { this->callingNumbers_ = nullptr;};
      inline const vector<string> & getCallingNumbers() const { DARABONBA_PTR_GET_CONST(callingNumbers_, vector<string>) };
      inline vector<string> getCallingNumbers() { DARABONBA_PTR_GET(callingNumbers_, vector<string>) };
      inline Job& setCallingNumbers(const vector<string> & callingNumbers) { DARABONBA_PTR_SET_VALUE(callingNumbers_, callingNumbers) };
      inline Job& setCallingNumbers(vector<string> && callingNumbers) { DARABONBA_PTR_SET_RVALUE(callingNumbers_, callingNumbers) };


      // contacts Field Functions 
      bool hasContacts() const { return this->contacts_ != nullptr;};
      void deleteContacts() { this->contacts_ = nullptr;};
      inline const vector<Job::Contacts> & getContacts() const { DARABONBA_PTR_GET_CONST(contacts_, vector<Job::Contacts>) };
      inline vector<Job::Contacts> getContacts() { DARABONBA_PTR_GET(contacts_, vector<Job::Contacts>) };
      inline Job& setContacts(const vector<Job::Contacts> & contacts) { DARABONBA_PTR_SET_VALUE(contacts_, contacts) };
      inline Job& setContacts(vector<Job::Contacts> && contacts) { DARABONBA_PTR_SET_RVALUE(contacts_, contacts) };


      // dsReport Field Functions 
      bool hasDsReport() const { return this->dsReport_ != nullptr;};
      void deleteDsReport() { this->dsReport_ = nullptr;};
      inline string getDsReport() const { DARABONBA_PTR_GET_DEFAULT(dsReport_, "") };
      inline Job& setDsReport(string dsReport) { DARABONBA_PTR_SET_VALUE(dsReport_, dsReport) };


      // endReason Field Functions 
      bool hasEndReason() const { return this->endReason_ != nullptr;};
      void deleteEndReason() { this->endReason_ = nullptr;};
      inline int32_t getEndReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, 0) };
      inline Job& setEndReason(int32_t endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


      // extras Field Functions 
      bool hasExtras() const { return this->extras_ != nullptr;};
      void deleteExtras() { this->extras_ = nullptr;};
      inline const vector<Job::Extras> & getExtras() const { DARABONBA_PTR_GET_CONST(extras_, vector<Job::Extras>) };
      inline vector<Job::Extras> getExtras() { DARABONBA_PTR_GET(extras_, vector<Job::Extras>) };
      inline Job& setExtras(const vector<Job::Extras> & extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };
      inline Job& setExtras(vector<Job::Extras> && extras) { DARABONBA_PTR_SET_RVALUE(extras_, extras) };


      // failureReason Field Functions 
      bool hasFailureReason() const { return this->failureReason_ != nullptr;};
      void deleteFailureReason() { this->failureReason_ = nullptr;};
      inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
      inline Job& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Job& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobGroupId Field Functions 
      bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
      void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
      inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
      inline Job& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // nextExecutionTime Field Functions 
      bool hasNextExecutionTime() const { return this->nextExecutionTime_ != nullptr;};
      void deleteNextExecutionTime() { this->nextExecutionTime_ = nullptr;};
      inline int64_t getNextExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(nextExecutionTime_, 0L) };
      inline Job& setNextExecutionTime(int64_t nextExecutionTime) { DARABONBA_PTR_SET_VALUE(nextExecutionTime_, nextExecutionTime) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Job& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline Job& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


      // scenarioId Field Functions 
      bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
      void deleteScenarioId() { this->scenarioId_ = nullptr;};
      inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
      inline Job& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline const Job::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, Job::Script) };
      inline Job::Script getScript() { DARABONBA_PTR_GET(script_, Job::Script) };
      inline Job& setScript(const Job::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
      inline Job& setScript(Job::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
      inline Job& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const vector<Job::Summary> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Job::Summary>) };
      inline vector<Job::Summary> getSummary() { DARABONBA_PTR_GET(summary_, vector<Job::Summary>) };
      inline Job& setSummary(const vector<Job::Summary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline Job& setSummary(vector<Job::Summary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


      // systemPriority Field Functions 
      bool hasSystemPriority() const { return this->systemPriority_ != nullptr;};
      void deleteSystemPriority() { this->systemPriority_ = nullptr;};
      inline int32_t getSystemPriority() const { DARABONBA_PTR_GET_DEFAULT(systemPriority_, 0) };
      inline Job& setSystemPriority(int32_t systemPriority) { DARABONBA_PTR_SET_VALUE(systemPriority_, systemPriority) };


      // tasks Field Functions 
      bool hasTasks() const { return this->tasks_ != nullptr;};
      void deleteTasks() { this->tasks_ = nullptr;};
      inline const vector<Job::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Job::Tasks>) };
      inline vector<Job::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<Job::Tasks>) };
      inline Job& setTasks(const vector<Job::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
      inline Job& setTasks(vector<Job::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    protected:
      // The actual execution time of the job. [Deprecated]
      shared_ptr<int64_t> actualTime_ {};
      // The called number.
      shared_ptr<string> calledNumber_ {};
      // The list of calling numbers.
      shared_ptr<vector<string>> callingNumbers_ {};
      // The contact information.
      shared_ptr<vector<Job::Contacts>> contacts_ {};
      // The status of task tag hits. [Deprecated]
      shared_ptr<string> dsReport_ {};
      // The reason why the call ended. Valid values:
      // 
      // - **1**: `FINISHED` (The call ended normally.)
      // 
      // - **2**: `CHATBOT_HANGUP_AFTER_NOANSWER`: The chatbot hung up after an intent recognition failure.
      // 
      // - **3**: `CHATBOT_HANGUP_AFTER_SILENCE` (The chatbot hung up due to a silence timeout.)
      // 
      // - **4**: `CLIENT_HANGUP_AFTER_NOANSWER` (The user hung up after the chatbot failed to recognize their intent.)
      // 
      // - **5**: `CLIENT_HANGUP`: The user hung up.
      // 
      // - **6**: `TRANSFER_BY_INTENT`: The call was transferred to a human agent based on a matched intent.
      // 
      // - **7**: `TRANSFER_AFTER_NOANSWER` (The call was transferred to a human agent because the chatbot failed to recognize the user\\"s intent.)
      // 
      // - **8**: `INO_INTERACTION` (No interaction from the user.)
      // 
      // - **9**: `ERROR` (The call was interrupted by a system error.)
      shared_ptr<int32_t> endReason_ {};
      // The business parameters.
      // 
      // > The `TenantId` and `ServiceId` parameters are generated by the system. Other parameters are user-defined.
      shared_ptr<vector<Job::Extras>> extras_ {};
      // The reason why the job failed.
      shared_ptr<string> failureReason_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The job group ID.
      shared_ptr<string> jobGroupId_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The next scheduled execution time for the task.
      shared_ptr<int64_t> nextExecutionTime_ {};
      // The job priority.
      shared_ptr<int32_t> priority_ {};
      // The ID of the associated contact. This corresponds to the `ContactId` that you provided when the contact was uploaded.
      // 
      // >
      shared_ptr<string> referenceId_ {};
      // The scenario ID.
      shared_ptr<string> scenarioId_ {};
      // The script.
      shared_ptr<Job::Script> script_ {};
      // The status of the job. Valid values:
      // 
      // - `Scheduling`: The job is being scheduled.
      // 
      // - `Executing`: The job is running.
      // 
      // - `Succeeded`: The job was successful.
      // 
      // - `Paused`: The job is paused.
      // 
      // - `Failed`: The job failed.
      // 
      // - `Cancelled`: The job is canceled.
      // 
      // - `Drafted`: A temporary status during file import.
      shared_ptr<string> status_ {};
      // The strategy ID.
      shared_ptr<string> strategyId_ {};
      // The business tag data for the conversation.
      // 
      // - For LLM-based scenarios, this parameter contains data for tags matched during the conversation.
      // 
      // - For small language model-based scenarios, this parameter contains the final values of conversation variables.
      shared_ptr<vector<Job::Summary>> summary_ {};
      // The system priority of the job.
      shared_ptr<int32_t> systemPriority_ {};
      // The list of calls.
      shared_ptr<vector<Job::Tasks>> tasks_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->job_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeJobResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const DescribeJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, DescribeJobResponseBody::Job) };
    inline DescribeJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, DescribeJobResponseBody::Job) };
    inline DescribeJobResponseBody& setJob(const DescribeJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline DescribeJobResponseBody& setJob(DescribeJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code of the request.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The job details.
    shared_ptr<DescribeJobResponseBody::Job> job_ {};
    // The message returned for the request.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
