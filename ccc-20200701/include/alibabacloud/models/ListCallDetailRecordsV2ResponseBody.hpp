// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCallDetailRecordsV2ResponseBody() = default ;
    ListCallDetailRecordsV2ResponseBody(const ListCallDetailRecordsV2ResponseBody &) = default ;
    ListCallDetailRecordsV2ResponseBody(ListCallDetailRecordsV2ResponseBody &&) = default ;
    ListCallDetailRecordsV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsV2ResponseBody() = default ;
    ListCallDetailRecordsV2ResponseBody& operator=(const ListCallDetailRecordsV2ResponseBody &) = default ;
    ListCallDetailRecordsV2ResponseBody& operator=(ListCallDetailRecordsV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AccessChannelName, accessChannelName_);
          DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
          DARABONBA_PTR_TO_JSON(AccessChannelUserId, accessChannelUserId_);
          DARABONBA_PTR_TO_JSON(AccessChannelUserName, accessChannelUserName_);
          DARABONBA_PTR_TO_JSON(AdditionalBroker, additionalBroker_);
          DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
          DARABONBA_PTR_TO_JSON(AgentNames, agentNames_);
          DARABONBA_PTR_TO_JSON(AnalyticsReport, analyticsReport_);
          DARABONBA_PTR_TO_JSON(AnalyticsReportReady, analyticsReportReady_);
          DARABONBA_PTR_TO_JSON(Broker, broker_);
          DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
          DARABONBA_PTR_TO_JSON(CallIds, callIds_);
          DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
          DARABONBA_PTR_TO_JSON(CalleeLocation, calleeLocation_);
          DARABONBA_PTR_TO_JSON(CallerLocation, callerLocation_);
          DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
          DARABONBA_PTR_TO_JSON(ClientAppName, clientAppName_);
          DARABONBA_PTR_TO_JSON(ClientIpAddress, clientIpAddress_);
          DARABONBA_PTR_TO_JSON(ClientLocation, clientLocation_);
          DARABONBA_PTR_TO_JSON(ClientUserAgent, clientUserAgent_);
          DARABONBA_PTR_TO_JSON(ContactDisposition, contactDisposition_);
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(ContactType, contactType_);
          DARABONBA_PTR_TO_JSON(DialingTime, dialingTime_);
          DARABONBA_PTR_TO_JSON(EarlyMediaState, earlyMediaState_);
          DARABONBA_PTR_TO_JSON(EarlyMediaText, earlyMediaText_);
          DARABONBA_PTR_TO_JSON(EstablishedTime, establishedTime_);
          DARABONBA_PTR_TO_JSON(FirstResponseTime, firstResponseTime_);
          DARABONBA_PTR_TO_JSON(HeldTime, heldTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IvrTime, ivrTime_);
          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
          DARABONBA_PTR_TO_JSON(MessagesSent, messagesSent_);
          DARABONBA_PTR_TO_JSON(MessagesSentByAgent, messagesSentByAgent_);
          DARABONBA_PTR_TO_JSON(MessagesSentByCustomer, messagesSentByCustomer_);
          DARABONBA_PTR_TO_JSON(OffSiteAgentIds, offSiteAgentIds_);
          DARABONBA_PTR_TO_JSON(OffsiteAgentDestinationNumbers, offsiteAgentDestinationNumbers_);
          DARABONBA_PTR_TO_JSON(OffsiteAgentOriginatorNumbers, offsiteAgentOriginatorNumbers_);
          DARABONBA_PTR_TO_JSON(OffsiteAgentReleaseReason, offsiteAgentReleaseReason_);
          DARABONBA_PTR_TO_JSON(OutsideNumberReleaseReason, outsideNumberReleaseReason_);
          DARABONBA_PTR_TO_JSON(QueueTime, queueTime_);
          DARABONBA_PTR_TO_JSON(RecordingDuration, recordingDuration_);
          DARABONBA_PTR_TO_JSON(RecordingReady, recordingReady_);
          DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
          DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
          DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_TO_JSON(RingTime, ringTime_);
          DARABONBA_PTR_TO_JSON(SatisfactionDescription, satisfactionDescription_);
          DARABONBA_PTR_TO_JSON(SatisfactionIndex, satisfactionIndex_);
          DARABONBA_PTR_TO_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
          DARABONBA_PTR_TO_JSON(SatisfactionSurveyOffered, satisfactionSurveyOffered_);
          DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
          DARABONBA_PTR_TO_JSON(SkillGroupNames, skillGroupNames_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(SummaryIndex, summaryIndex_);
          DARABONBA_PTR_TO_JSON(TalkTime, talkTime_);
          DARABONBA_PTR_TO_JSON(TransferCount, transferCount_);
          DARABONBA_PTR_TO_JSON(VoicebotDestinationNumber, voicebotDestinationNumber_);
          DARABONBA_PTR_TO_JSON(VoicebotOriginatorNumber, voicebotOriginatorNumber_);
          DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessChannelName, accessChannelName_);
          DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
          DARABONBA_PTR_FROM_JSON(AccessChannelUserId, accessChannelUserId_);
          DARABONBA_PTR_FROM_JSON(AccessChannelUserName, accessChannelUserName_);
          DARABONBA_PTR_FROM_JSON(AdditionalBroker, additionalBroker_);
          DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
          DARABONBA_PTR_FROM_JSON(AgentNames, agentNames_);
          DARABONBA_PTR_FROM_JSON(AnalyticsReport, analyticsReport_);
          DARABONBA_PTR_FROM_JSON(AnalyticsReportReady, analyticsReportReady_);
          DARABONBA_PTR_FROM_JSON(Broker, broker_);
          DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
          DARABONBA_PTR_FROM_JSON(CallIds, callIds_);
          DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
          DARABONBA_PTR_FROM_JSON(CalleeLocation, calleeLocation_);
          DARABONBA_PTR_FROM_JSON(CallerLocation, callerLocation_);
          DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
          DARABONBA_PTR_FROM_JSON(ClientAppName, clientAppName_);
          DARABONBA_PTR_FROM_JSON(ClientIpAddress, clientIpAddress_);
          DARABONBA_PTR_FROM_JSON(ClientLocation, clientLocation_);
          DARABONBA_PTR_FROM_JSON(ClientUserAgent, clientUserAgent_);
          DARABONBA_PTR_FROM_JSON(ContactDisposition, contactDisposition_);
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
          DARABONBA_PTR_FROM_JSON(DialingTime, dialingTime_);
          DARABONBA_PTR_FROM_JSON(EarlyMediaState, earlyMediaState_);
          DARABONBA_PTR_FROM_JSON(EarlyMediaText, earlyMediaText_);
          DARABONBA_PTR_FROM_JSON(EstablishedTime, establishedTime_);
          DARABONBA_PTR_FROM_JSON(FirstResponseTime, firstResponseTime_);
          DARABONBA_PTR_FROM_JSON(HeldTime, heldTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IvrTime, ivrTime_);
          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
          DARABONBA_PTR_FROM_JSON(MessagesSent, messagesSent_);
          DARABONBA_PTR_FROM_JSON(MessagesSentByAgent, messagesSentByAgent_);
          DARABONBA_PTR_FROM_JSON(MessagesSentByCustomer, messagesSentByCustomer_);
          DARABONBA_PTR_FROM_JSON(OffSiteAgentIds, offSiteAgentIds_);
          DARABONBA_PTR_FROM_JSON(OffsiteAgentDestinationNumbers, offsiteAgentDestinationNumbers_);
          DARABONBA_PTR_FROM_JSON(OffsiteAgentOriginatorNumbers, offsiteAgentOriginatorNumbers_);
          DARABONBA_PTR_FROM_JSON(OffsiteAgentReleaseReason, offsiteAgentReleaseReason_);
          DARABONBA_PTR_FROM_JSON(OutsideNumberReleaseReason, outsideNumberReleaseReason_);
          DARABONBA_PTR_FROM_JSON(QueueTime, queueTime_);
          DARABONBA_PTR_FROM_JSON(RecordingDuration, recordingDuration_);
          DARABONBA_PTR_FROM_JSON(RecordingReady, recordingReady_);
          DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
          DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
          DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_FROM_JSON(RingTime, ringTime_);
          DARABONBA_PTR_FROM_JSON(SatisfactionDescription, satisfactionDescription_);
          DARABONBA_PTR_FROM_JSON(SatisfactionIndex, satisfactionIndex_);
          DARABONBA_PTR_FROM_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
          DARABONBA_PTR_FROM_JSON(SatisfactionSurveyOffered, satisfactionSurveyOffered_);
          DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
          DARABONBA_PTR_FROM_JSON(SkillGroupNames, skillGroupNames_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(SummaryIndex, summaryIndex_);
          DARABONBA_PTR_FROM_JSON(TalkTime, talkTime_);
          DARABONBA_PTR_FROM_JSON(TransferCount, transferCount_);
          DARABONBA_PTR_FROM_JSON(VoicebotDestinationNumber, voicebotDestinationNumber_);
          DARABONBA_PTR_FROM_JSON(VoicebotOriginatorNumber, voicebotOriginatorNumber_);
          DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
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
        class SummaryIndex : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SummaryIndex& obj) { 
            DARABONBA_PTR_TO_JSON(Keywords, keywords_);
          };
          friend void from_json(const Darabonba::Json& j, SummaryIndex& obj) { 
            DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
          };
          SummaryIndex() = default ;
          SummaryIndex(const SummaryIndex &) = default ;
          SummaryIndex(SummaryIndex &&) = default ;
          SummaryIndex(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SummaryIndex() = default ;
          SummaryIndex& operator=(const SummaryIndex &) = default ;
          SummaryIndex& operator=(SummaryIndex &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->keywords_ == nullptr; };
          // keywords Field Functions 
          bool hasKeywords() const { return this->keywords_ != nullptr;};
          void deleteKeywords() { this->keywords_ = nullptr;};
          inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
          inline SummaryIndex& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


        protected:
          shared_ptr<string> keywords_ {};
        };

        class AnalyticsReport : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnalyticsReport& obj) { 
            DARABONBA_PTR_TO_JSON(Emotion, emotion_);
            DARABONBA_PTR_TO_JSON(ProblemSolving, problemSolving_);
            DARABONBA_PTR_TO_JSON(Satisfaction, satisfaction_);
            DARABONBA_PTR_TO_JSON(TodoList, todoList_);
          };
          friend void from_json(const Darabonba::Json& j, AnalyticsReport& obj) { 
            DARABONBA_PTR_FROM_JSON(Emotion, emotion_);
            DARABONBA_PTR_FROM_JSON(ProblemSolving, problemSolving_);
            DARABONBA_PTR_FROM_JSON(Satisfaction, satisfaction_);
            DARABONBA_PTR_FROM_JSON(TodoList, todoList_);
          };
          AnalyticsReport() = default ;
          AnalyticsReport(const AnalyticsReport &) = default ;
          AnalyticsReport(AnalyticsReport &&) = default ;
          AnalyticsReport(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnalyticsReport() = default ;
          AnalyticsReport& operator=(const AnalyticsReport &) = default ;
          AnalyticsReport& operator=(AnalyticsReport &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TodoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TodoList& obj) { 
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(TaskId, taskId_);
              DARABONBA_PTR_TO_JSON(Tasks, tasks_);
            };
            friend void from_json(const Darabonba::Json& j, TodoList& obj) { 
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
              DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
            };
            TodoList() = default ;
            TodoList(const TodoList &) = default ;
            TodoList(TodoList &&) = default ;
            TodoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TodoList() = default ;
            TodoList& operator=(const TodoList &) = default ;
            TodoList& operator=(TodoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->success_ == nullptr
        && this->taskId_ == nullptr && this->tasks_ == nullptr; };
            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
            inline TodoList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // taskId Field Functions 
            bool hasTaskId() const { return this->taskId_ != nullptr;};
            void deleteTaskId() { this->taskId_ = nullptr;};
            inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
            inline TodoList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


            // tasks Field Functions 
            bool hasTasks() const { return this->tasks_ != nullptr;};
            void deleteTasks() { this->tasks_ = nullptr;};
            inline const vector<string> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<string>) };
            inline vector<string> getTasks() { DARABONBA_PTR_GET(tasks_, vector<string>) };
            inline TodoList& setTasks(const vector<string> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
            inline TodoList& setTasks(vector<string> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


          protected:
            shared_ptr<bool> success_ {};
            shared_ptr<string> taskId_ {};
            shared_ptr<vector<string>> tasks_ {};
          };

          class Satisfaction : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Satisfaction& obj) { 
              DARABONBA_PTR_TO_JSON(Remark, remark_);
              DARABONBA_PTR_TO_JSON(SatisfactionDescription, satisfactionDescription_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            };
            friend void from_json(const Darabonba::Json& j, Satisfaction& obj) { 
              DARABONBA_PTR_FROM_JSON(Remark, remark_);
              DARABONBA_PTR_FROM_JSON(SatisfactionDescription, satisfactionDescription_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            };
            Satisfaction() = default ;
            Satisfaction(const Satisfaction &) = default ;
            Satisfaction(Satisfaction &&) = default ;
            Satisfaction(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Satisfaction() = default ;
            Satisfaction& operator=(const Satisfaction &) = default ;
            Satisfaction& operator=(Satisfaction &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->remark_ == nullptr
        && this->satisfactionDescription_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
            // remark Field Functions 
            bool hasRemark() const { return this->remark_ != nullptr;};
            void deleteRemark() { this->remark_ = nullptr;};
            inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
            inline Satisfaction& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


            // satisfactionDescription Field Functions 
            bool hasSatisfactionDescription() const { return this->satisfactionDescription_ != nullptr;};
            void deleteSatisfactionDescription() { this->satisfactionDescription_ = nullptr;};
            inline string getSatisfactionDescription() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescription_, "") };
            inline Satisfaction& setSatisfactionDescription(string satisfactionDescription) { DARABONBA_PTR_SET_VALUE(satisfactionDescription_, satisfactionDescription) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
            inline Satisfaction& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // taskId Field Functions 
            bool hasTaskId() const { return this->taskId_ != nullptr;};
            void deleteTaskId() { this->taskId_ = nullptr;};
            inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
            inline Satisfaction& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          protected:
            shared_ptr<string> remark_ {};
            shared_ptr<string> satisfactionDescription_ {};
            shared_ptr<bool> success_ {};
            shared_ptr<string> taskId_ {};
          };

          class ProblemSolving : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ProblemSolving& obj) { 
              DARABONBA_PTR_TO_JSON(Problem, problem_);
              DARABONBA_PTR_TO_JSON(Solution, solution_);
              DARABONBA_PTR_TO_JSON(Solved, solved_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            };
            friend void from_json(const Darabonba::Json& j, ProblemSolving& obj) { 
              DARABONBA_PTR_FROM_JSON(Problem, problem_);
              DARABONBA_PTR_FROM_JSON(Solution, solution_);
              DARABONBA_PTR_FROM_JSON(Solved, solved_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            };
            ProblemSolving() = default ;
            ProblemSolving(const ProblemSolving &) = default ;
            ProblemSolving(ProblemSolving &&) = default ;
            ProblemSolving(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ProblemSolving() = default ;
            ProblemSolving& operator=(const ProblemSolving &) = default ;
            ProblemSolving& operator=(ProblemSolving &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->problem_ == nullptr
        && this->solution_ == nullptr && this->solved_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
            // problem Field Functions 
            bool hasProblem() const { return this->problem_ != nullptr;};
            void deleteProblem() { this->problem_ = nullptr;};
            inline string getProblem() const { DARABONBA_PTR_GET_DEFAULT(problem_, "") };
            inline ProblemSolving& setProblem(string problem) { DARABONBA_PTR_SET_VALUE(problem_, problem) };


            // solution Field Functions 
            bool hasSolution() const { return this->solution_ != nullptr;};
            void deleteSolution() { this->solution_ = nullptr;};
            inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
            inline ProblemSolving& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


            // solved Field Functions 
            bool hasSolved() const { return this->solved_ != nullptr;};
            void deleteSolved() { this->solved_ = nullptr;};
            inline bool getSolved() const { DARABONBA_PTR_GET_DEFAULT(solved_, false) };
            inline ProblemSolving& setSolved(bool solved) { DARABONBA_PTR_SET_VALUE(solved_, solved) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
            inline ProblemSolving& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // taskId Field Functions 
            bool hasTaskId() const { return this->taskId_ != nullptr;};
            void deleteTaskId() { this->taskId_ = nullptr;};
            inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
            inline ProblemSolving& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          protected:
            shared_ptr<string> problem_ {};
            shared_ptr<string> solution_ {};
            shared_ptr<bool> solved_ {};
            shared_ptr<bool> success_ {};
            shared_ptr<string> taskId_ {};
          };

          class Emotion : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Emotion& obj) { 
              DARABONBA_PTR_TO_JSON(Confidence, confidence_);
              DARABONBA_PTR_TO_JSON(Remark, remark_);
              DARABONBA_PTR_TO_JSON(Success, success_);
              DARABONBA_PTR_TO_JSON(TaskId, taskId_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Emotion& obj) { 
              DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
              DARABONBA_PTR_FROM_JSON(Remark, remark_);
              DARABONBA_PTR_FROM_JSON(Success, success_);
              DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Emotion() = default ;
            Emotion(const Emotion &) = default ;
            Emotion(Emotion &&) = default ;
            Emotion(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Emotion() = default ;
            Emotion& operator=(const Emotion &) = default ;
            Emotion& operator=(Emotion &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->confidence_ == nullptr
        && this->remark_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr && this->type_ == nullptr; };
            // confidence Field Functions 
            bool hasConfidence() const { return this->confidence_ != nullptr;};
            void deleteConfidence() { this->confidence_ = nullptr;};
            inline int32_t getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0) };
            inline Emotion& setConfidence(int32_t confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


            // remark Field Functions 
            bool hasRemark() const { return this->remark_ != nullptr;};
            void deleteRemark() { this->remark_ = nullptr;};
            inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
            inline Emotion& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


            // success Field Functions 
            bool hasSuccess() const { return this->success_ != nullptr;};
            void deleteSuccess() { this->success_ = nullptr;};
            inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
            inline Emotion& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            // taskId Field Functions 
            bool hasTaskId() const { return this->taskId_ != nullptr;};
            void deleteTaskId() { this->taskId_ = nullptr;};
            inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
            inline Emotion& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Emotion& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<int32_t> confidence_ {};
            shared_ptr<string> remark_ {};
            shared_ptr<bool> success_ {};
            shared_ptr<string> taskId_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->emotion_ == nullptr
        && this->problemSolving_ == nullptr && this->satisfaction_ == nullptr && this->todoList_ == nullptr; };
          // emotion Field Functions 
          bool hasEmotion() const { return this->emotion_ != nullptr;};
          void deleteEmotion() { this->emotion_ = nullptr;};
          inline const AnalyticsReport::Emotion & getEmotion() const { DARABONBA_PTR_GET_CONST(emotion_, AnalyticsReport::Emotion) };
          inline AnalyticsReport::Emotion getEmotion() { DARABONBA_PTR_GET(emotion_, AnalyticsReport::Emotion) };
          inline AnalyticsReport& setEmotion(const AnalyticsReport::Emotion & emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };
          inline AnalyticsReport& setEmotion(AnalyticsReport::Emotion && emotion) { DARABONBA_PTR_SET_RVALUE(emotion_, emotion) };


          // problemSolving Field Functions 
          bool hasProblemSolving() const { return this->problemSolving_ != nullptr;};
          void deleteProblemSolving() { this->problemSolving_ = nullptr;};
          inline const AnalyticsReport::ProblemSolving & getProblemSolving() const { DARABONBA_PTR_GET_CONST(problemSolving_, AnalyticsReport::ProblemSolving) };
          inline AnalyticsReport::ProblemSolving getProblemSolving() { DARABONBA_PTR_GET(problemSolving_, AnalyticsReport::ProblemSolving) };
          inline AnalyticsReport& setProblemSolving(const AnalyticsReport::ProblemSolving & problemSolving) { DARABONBA_PTR_SET_VALUE(problemSolving_, problemSolving) };
          inline AnalyticsReport& setProblemSolving(AnalyticsReport::ProblemSolving && problemSolving) { DARABONBA_PTR_SET_RVALUE(problemSolving_, problemSolving) };


          // satisfaction Field Functions 
          bool hasSatisfaction() const { return this->satisfaction_ != nullptr;};
          void deleteSatisfaction() { this->satisfaction_ = nullptr;};
          inline const AnalyticsReport::Satisfaction & getSatisfaction() const { DARABONBA_PTR_GET_CONST(satisfaction_, AnalyticsReport::Satisfaction) };
          inline AnalyticsReport::Satisfaction getSatisfaction() { DARABONBA_PTR_GET(satisfaction_, AnalyticsReport::Satisfaction) };
          inline AnalyticsReport& setSatisfaction(const AnalyticsReport::Satisfaction & satisfaction) { DARABONBA_PTR_SET_VALUE(satisfaction_, satisfaction) };
          inline AnalyticsReport& setSatisfaction(AnalyticsReport::Satisfaction && satisfaction) { DARABONBA_PTR_SET_RVALUE(satisfaction_, satisfaction) };


          // todoList Field Functions 
          bool hasTodoList() const { return this->todoList_ != nullptr;};
          void deleteTodoList() { this->todoList_ = nullptr;};
          inline const AnalyticsReport::TodoList & getTodoList() const { DARABONBA_PTR_GET_CONST(todoList_, AnalyticsReport::TodoList) };
          inline AnalyticsReport::TodoList getTodoList() { DARABONBA_PTR_GET(todoList_, AnalyticsReport::TodoList) };
          inline AnalyticsReport& setTodoList(const AnalyticsReport::TodoList & todoList) { DARABONBA_PTR_SET_VALUE(todoList_, todoList) };
          inline AnalyticsReport& setTodoList(AnalyticsReport::TodoList && todoList) { DARABONBA_PTR_SET_RVALUE(todoList_, todoList) };


        protected:
          shared_ptr<AnalyticsReport::Emotion> emotion_ {};
          shared_ptr<AnalyticsReport::ProblemSolving> problemSolving_ {};
          shared_ptr<AnalyticsReport::Satisfaction> satisfaction_ {};
          shared_ptr<AnalyticsReport::TodoList> todoList_ {};
        };

        virtual bool empty() const override { return this->accessChannelName_ == nullptr
        && this->accessChannelType_ == nullptr && this->accessChannelUserId_ == nullptr && this->accessChannelUserName_ == nullptr && this->additionalBroker_ == nullptr && this->agentIds_ == nullptr
        && this->agentNames_ == nullptr && this->analyticsReport_ == nullptr && this->analyticsReportReady_ == nullptr && this->broker_ == nullptr && this->callDuration_ == nullptr
        && this->callIds_ == nullptr && this->calledNumber_ == nullptr && this->calleeLocation_ == nullptr && this->callerLocation_ == nullptr && this->callingNumber_ == nullptr
        && this->clientAppName_ == nullptr && this->clientIpAddress_ == nullptr && this->clientLocation_ == nullptr && this->clientUserAgent_ == nullptr && this->contactDisposition_ == nullptr
        && this->contactId_ == nullptr && this->contactType_ == nullptr && this->dialingTime_ == nullptr && this->earlyMediaState_ == nullptr && this->earlyMediaText_ == nullptr
        && this->establishedTime_ == nullptr && this->firstResponseTime_ == nullptr && this->heldTime_ == nullptr && this->instanceId_ == nullptr && this->ivrTime_ == nullptr
        && this->mediaType_ == nullptr && this->messagesSent_ == nullptr && this->messagesSentByAgent_ == nullptr && this->messagesSentByCustomer_ == nullptr && this->offSiteAgentIds_ == nullptr
        && this->offsiteAgentDestinationNumbers_ == nullptr && this->offsiteAgentOriginatorNumbers_ == nullptr && this->offsiteAgentReleaseReason_ == nullptr && this->outsideNumberReleaseReason_ == nullptr && this->queueTime_ == nullptr
        && this->recordingDuration_ == nullptr && this->recordingReady_ == nullptr && this->releaseInitiator_ == nullptr && this->releaseReason_ == nullptr && this->releaseTime_ == nullptr
        && this->ringTime_ == nullptr && this->satisfactionDescription_ == nullptr && this->satisfactionIndex_ == nullptr && this->satisfactionSurveyChannel_ == nullptr && this->satisfactionSurveyOffered_ == nullptr
        && this->skillGroupIds_ == nullptr && this->skillGroupNames_ == nullptr && this->startTime_ == nullptr && this->summaryIndex_ == nullptr && this->talkTime_ == nullptr
        && this->transferCount_ == nullptr && this->voicebotDestinationNumber_ == nullptr && this->voicebotOriginatorNumber_ == nullptr && this->waitTime_ == nullptr; };
        // accessChannelName Field Functions 
        bool hasAccessChannelName() const { return this->accessChannelName_ != nullptr;};
        void deleteAccessChannelName() { this->accessChannelName_ = nullptr;};
        inline string getAccessChannelName() const { DARABONBA_PTR_GET_DEFAULT(accessChannelName_, "") };
        inline List& setAccessChannelName(string accessChannelName) { DARABONBA_PTR_SET_VALUE(accessChannelName_, accessChannelName) };


        // accessChannelType Field Functions 
        bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
        void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
        inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
        inline List& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


        // accessChannelUserId Field Functions 
        bool hasAccessChannelUserId() const { return this->accessChannelUserId_ != nullptr;};
        void deleteAccessChannelUserId() { this->accessChannelUserId_ = nullptr;};
        inline string getAccessChannelUserId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelUserId_, "") };
        inline List& setAccessChannelUserId(string accessChannelUserId) { DARABONBA_PTR_SET_VALUE(accessChannelUserId_, accessChannelUserId) };


        // accessChannelUserName Field Functions 
        bool hasAccessChannelUserName() const { return this->accessChannelUserName_ != nullptr;};
        void deleteAccessChannelUserName() { this->accessChannelUserName_ = nullptr;};
        inline string getAccessChannelUserName() const { DARABONBA_PTR_GET_DEFAULT(accessChannelUserName_, "") };
        inline List& setAccessChannelUserName(string accessChannelUserName) { DARABONBA_PTR_SET_VALUE(accessChannelUserName_, accessChannelUserName) };


        // additionalBroker Field Functions 
        bool hasAdditionalBroker() const { return this->additionalBroker_ != nullptr;};
        void deleteAdditionalBroker() { this->additionalBroker_ = nullptr;};
        inline string getAdditionalBroker() const { DARABONBA_PTR_GET_DEFAULT(additionalBroker_, "") };
        inline List& setAdditionalBroker(string additionalBroker) { DARABONBA_PTR_SET_VALUE(additionalBroker_, additionalBroker) };


        // agentIds Field Functions 
        bool hasAgentIds() const { return this->agentIds_ != nullptr;};
        void deleteAgentIds() { this->agentIds_ = nullptr;};
        inline string getAgentIds() const { DARABONBA_PTR_GET_DEFAULT(agentIds_, "") };
        inline List& setAgentIds(string agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };


        // agentNames Field Functions 
        bool hasAgentNames() const { return this->agentNames_ != nullptr;};
        void deleteAgentNames() { this->agentNames_ = nullptr;};
        inline string getAgentNames() const { DARABONBA_PTR_GET_DEFAULT(agentNames_, "") };
        inline List& setAgentNames(string agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };


        // analyticsReport Field Functions 
        bool hasAnalyticsReport() const { return this->analyticsReport_ != nullptr;};
        void deleteAnalyticsReport() { this->analyticsReport_ = nullptr;};
        inline const List::AnalyticsReport & getAnalyticsReport() const { DARABONBA_PTR_GET_CONST(analyticsReport_, List::AnalyticsReport) };
        inline List::AnalyticsReport getAnalyticsReport() { DARABONBA_PTR_GET(analyticsReport_, List::AnalyticsReport) };
        inline List& setAnalyticsReport(const List::AnalyticsReport & analyticsReport) { DARABONBA_PTR_SET_VALUE(analyticsReport_, analyticsReport) };
        inline List& setAnalyticsReport(List::AnalyticsReport && analyticsReport) { DARABONBA_PTR_SET_RVALUE(analyticsReport_, analyticsReport) };


        // analyticsReportReady Field Functions 
        bool hasAnalyticsReportReady() const { return this->analyticsReportReady_ != nullptr;};
        void deleteAnalyticsReportReady() { this->analyticsReportReady_ = nullptr;};
        inline bool getAnalyticsReportReady() const { DARABONBA_PTR_GET_DEFAULT(analyticsReportReady_, false) };
        inline List& setAnalyticsReportReady(bool analyticsReportReady) { DARABONBA_PTR_SET_VALUE(analyticsReportReady_, analyticsReportReady) };


        // broker Field Functions 
        bool hasBroker() const { return this->broker_ != nullptr;};
        void deleteBroker() { this->broker_ = nullptr;};
        inline string getBroker() const { DARABONBA_PTR_GET_DEFAULT(broker_, "") };
        inline List& setBroker(string broker) { DARABONBA_PTR_SET_VALUE(broker_, broker) };


        // callDuration Field Functions 
        bool hasCallDuration() const { return this->callDuration_ != nullptr;};
        void deleteCallDuration() { this->callDuration_ = nullptr;};
        inline string getCallDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, "") };
        inline List& setCallDuration(string callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


        // callIds Field Functions 
        bool hasCallIds() const { return this->callIds_ != nullptr;};
        void deleteCallIds() { this->callIds_ = nullptr;};
        inline string getCallIds() const { DARABONBA_PTR_GET_DEFAULT(callIds_, "") };
        inline List& setCallIds(string callIds) { DARABONBA_PTR_SET_VALUE(callIds_, callIds) };


        // calledNumber Field Functions 
        bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
        void deleteCalledNumber() { this->calledNumber_ = nullptr;};
        inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
        inline List& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


        // calleeLocation Field Functions 
        bool hasCalleeLocation() const { return this->calleeLocation_ != nullptr;};
        void deleteCalleeLocation() { this->calleeLocation_ = nullptr;};
        inline string getCalleeLocation() const { DARABONBA_PTR_GET_DEFAULT(calleeLocation_, "") };
        inline List& setCalleeLocation(string calleeLocation) { DARABONBA_PTR_SET_VALUE(calleeLocation_, calleeLocation) };


        // callerLocation Field Functions 
        bool hasCallerLocation() const { return this->callerLocation_ != nullptr;};
        void deleteCallerLocation() { this->callerLocation_ = nullptr;};
        inline string getCallerLocation() const { DARABONBA_PTR_GET_DEFAULT(callerLocation_, "") };
        inline List& setCallerLocation(string callerLocation) { DARABONBA_PTR_SET_VALUE(callerLocation_, callerLocation) };


        // callingNumber Field Functions 
        bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
        void deleteCallingNumber() { this->callingNumber_ = nullptr;};
        inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
        inline List& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


        // clientAppName Field Functions 
        bool hasClientAppName() const { return this->clientAppName_ != nullptr;};
        void deleteClientAppName() { this->clientAppName_ = nullptr;};
        inline string getClientAppName() const { DARABONBA_PTR_GET_DEFAULT(clientAppName_, "") };
        inline List& setClientAppName(string clientAppName) { DARABONBA_PTR_SET_VALUE(clientAppName_, clientAppName) };


        // clientIpAddress Field Functions 
        bool hasClientIpAddress() const { return this->clientIpAddress_ != nullptr;};
        void deleteClientIpAddress() { this->clientIpAddress_ = nullptr;};
        inline string getClientIpAddress() const { DARABONBA_PTR_GET_DEFAULT(clientIpAddress_, "") };
        inline List& setClientIpAddress(string clientIpAddress) { DARABONBA_PTR_SET_VALUE(clientIpAddress_, clientIpAddress) };


        // clientLocation Field Functions 
        bool hasClientLocation() const { return this->clientLocation_ != nullptr;};
        void deleteClientLocation() { this->clientLocation_ = nullptr;};
        inline string getClientLocation() const { DARABONBA_PTR_GET_DEFAULT(clientLocation_, "") };
        inline List& setClientLocation(string clientLocation) { DARABONBA_PTR_SET_VALUE(clientLocation_, clientLocation) };


        // clientUserAgent Field Functions 
        bool hasClientUserAgent() const { return this->clientUserAgent_ != nullptr;};
        void deleteClientUserAgent() { this->clientUserAgent_ = nullptr;};
        inline string getClientUserAgent() const { DARABONBA_PTR_GET_DEFAULT(clientUserAgent_, "") };
        inline List& setClientUserAgent(string clientUserAgent) { DARABONBA_PTR_SET_VALUE(clientUserAgent_, clientUserAgent) };


        // contactDisposition Field Functions 
        bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
        void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
        inline string getContactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
        inline List& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
        inline List& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // contactType Field Functions 
        bool hasContactType() const { return this->contactType_ != nullptr;};
        void deleteContactType() { this->contactType_ = nullptr;};
        inline string getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
        inline List& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


        // dialingTime Field Functions 
        bool hasDialingTime() const { return this->dialingTime_ != nullptr;};
        void deleteDialingTime() { this->dialingTime_ = nullptr;};
        inline int64_t getDialingTime() const { DARABONBA_PTR_GET_DEFAULT(dialingTime_, 0L) };
        inline List& setDialingTime(int64_t dialingTime) { DARABONBA_PTR_SET_VALUE(dialingTime_, dialingTime) };


        // earlyMediaState Field Functions 
        bool hasEarlyMediaState() const { return this->earlyMediaState_ != nullptr;};
        void deleteEarlyMediaState() { this->earlyMediaState_ = nullptr;};
        inline string getEarlyMediaState() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaState_, "") };
        inline List& setEarlyMediaState(string earlyMediaState) { DARABONBA_PTR_SET_VALUE(earlyMediaState_, earlyMediaState) };


        // earlyMediaText Field Functions 
        bool hasEarlyMediaText() const { return this->earlyMediaText_ != nullptr;};
        void deleteEarlyMediaText() { this->earlyMediaText_ = nullptr;};
        inline string getEarlyMediaText() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaText_, "") };
        inline List& setEarlyMediaText(string earlyMediaText) { DARABONBA_PTR_SET_VALUE(earlyMediaText_, earlyMediaText) };


        // establishedTime Field Functions 
        bool hasEstablishedTime() const { return this->establishedTime_ != nullptr;};
        void deleteEstablishedTime() { this->establishedTime_ = nullptr;};
        inline int64_t getEstablishedTime() const { DARABONBA_PTR_GET_DEFAULT(establishedTime_, 0L) };
        inline List& setEstablishedTime(int64_t establishedTime) { DARABONBA_PTR_SET_VALUE(establishedTime_, establishedTime) };


        // firstResponseTime Field Functions 
        bool hasFirstResponseTime() const { return this->firstResponseTime_ != nullptr;};
        void deleteFirstResponseTime() { this->firstResponseTime_ = nullptr;};
        inline int64_t getFirstResponseTime() const { DARABONBA_PTR_GET_DEFAULT(firstResponseTime_, 0L) };
        inline List& setFirstResponseTime(int64_t firstResponseTime) { DARABONBA_PTR_SET_VALUE(firstResponseTime_, firstResponseTime) };


        // heldTime Field Functions 
        bool hasHeldTime() const { return this->heldTime_ != nullptr;};
        void deleteHeldTime() { this->heldTime_ = nullptr;};
        inline int64_t getHeldTime() const { DARABONBA_PTR_GET_DEFAULT(heldTime_, 0L) };
        inline List& setHeldTime(int64_t heldTime) { DARABONBA_PTR_SET_VALUE(heldTime_, heldTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ivrTime Field Functions 
        bool hasIvrTime() const { return this->ivrTime_ != nullptr;};
        void deleteIvrTime() { this->ivrTime_ = nullptr;};
        inline int64_t getIvrTime() const { DARABONBA_PTR_GET_DEFAULT(ivrTime_, 0L) };
        inline List& setIvrTime(int64_t ivrTime) { DARABONBA_PTR_SET_VALUE(ivrTime_, ivrTime) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline List& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        // messagesSent Field Functions 
        bool hasMessagesSent() const { return this->messagesSent_ != nullptr;};
        void deleteMessagesSent() { this->messagesSent_ = nullptr;};
        inline int64_t getMessagesSent() const { DARABONBA_PTR_GET_DEFAULT(messagesSent_, 0L) };
        inline List& setMessagesSent(int64_t messagesSent) { DARABONBA_PTR_SET_VALUE(messagesSent_, messagesSent) };


        // messagesSentByAgent Field Functions 
        bool hasMessagesSentByAgent() const { return this->messagesSentByAgent_ != nullptr;};
        void deleteMessagesSentByAgent() { this->messagesSentByAgent_ = nullptr;};
        inline int64_t getMessagesSentByAgent() const { DARABONBA_PTR_GET_DEFAULT(messagesSentByAgent_, 0L) };
        inline List& setMessagesSentByAgent(int64_t messagesSentByAgent) { DARABONBA_PTR_SET_VALUE(messagesSentByAgent_, messagesSentByAgent) };


        // messagesSentByCustomer Field Functions 
        bool hasMessagesSentByCustomer() const { return this->messagesSentByCustomer_ != nullptr;};
        void deleteMessagesSentByCustomer() { this->messagesSentByCustomer_ = nullptr;};
        inline int64_t getMessagesSentByCustomer() const { DARABONBA_PTR_GET_DEFAULT(messagesSentByCustomer_, 0L) };
        inline List& setMessagesSentByCustomer(int64_t messagesSentByCustomer) { DARABONBA_PTR_SET_VALUE(messagesSentByCustomer_, messagesSentByCustomer) };


        // offSiteAgentIds Field Functions 
        bool hasOffSiteAgentIds() const { return this->offSiteAgentIds_ != nullptr;};
        void deleteOffSiteAgentIds() { this->offSiteAgentIds_ = nullptr;};
        inline string getOffSiteAgentIds() const { DARABONBA_PTR_GET_DEFAULT(offSiteAgentIds_, "") };
        inline List& setOffSiteAgentIds(string offSiteAgentIds) { DARABONBA_PTR_SET_VALUE(offSiteAgentIds_, offSiteAgentIds) };


        // offsiteAgentDestinationNumbers Field Functions 
        bool hasOffsiteAgentDestinationNumbers() const { return this->offsiteAgentDestinationNumbers_ != nullptr;};
        void deleteOffsiteAgentDestinationNumbers() { this->offsiteAgentDestinationNumbers_ = nullptr;};
        inline string getOffsiteAgentDestinationNumbers() const { DARABONBA_PTR_GET_DEFAULT(offsiteAgentDestinationNumbers_, "") };
        inline List& setOffsiteAgentDestinationNumbers(string offsiteAgentDestinationNumbers) { DARABONBA_PTR_SET_VALUE(offsiteAgentDestinationNumbers_, offsiteAgentDestinationNumbers) };


        // offsiteAgentOriginatorNumbers Field Functions 
        bool hasOffsiteAgentOriginatorNumbers() const { return this->offsiteAgentOriginatorNumbers_ != nullptr;};
        void deleteOffsiteAgentOriginatorNumbers() { this->offsiteAgentOriginatorNumbers_ = nullptr;};
        inline string getOffsiteAgentOriginatorNumbers() const { DARABONBA_PTR_GET_DEFAULT(offsiteAgentOriginatorNumbers_, "") };
        inline List& setOffsiteAgentOriginatorNumbers(string offsiteAgentOriginatorNumbers) { DARABONBA_PTR_SET_VALUE(offsiteAgentOriginatorNumbers_, offsiteAgentOriginatorNumbers) };


        // offsiteAgentReleaseReason Field Functions 
        bool hasOffsiteAgentReleaseReason() const { return this->offsiteAgentReleaseReason_ != nullptr;};
        void deleteOffsiteAgentReleaseReason() { this->offsiteAgentReleaseReason_ = nullptr;};
        inline string getOffsiteAgentReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(offsiteAgentReleaseReason_, "") };
        inline List& setOffsiteAgentReleaseReason(string offsiteAgentReleaseReason) { DARABONBA_PTR_SET_VALUE(offsiteAgentReleaseReason_, offsiteAgentReleaseReason) };


        // outsideNumberReleaseReason Field Functions 
        bool hasOutsideNumberReleaseReason() const { return this->outsideNumberReleaseReason_ != nullptr;};
        void deleteOutsideNumberReleaseReason() { this->outsideNumberReleaseReason_ = nullptr;};
        inline string getOutsideNumberReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(outsideNumberReleaseReason_, "") };
        inline List& setOutsideNumberReleaseReason(string outsideNumberReleaseReason) { DARABONBA_PTR_SET_VALUE(outsideNumberReleaseReason_, outsideNumberReleaseReason) };


        // queueTime Field Functions 
        bool hasQueueTime() const { return this->queueTime_ != nullptr;};
        void deleteQueueTime() { this->queueTime_ = nullptr;};
        inline int64_t getQueueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
        inline List& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


        // recordingDuration Field Functions 
        bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
        void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
        inline int64_t getRecordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0L) };
        inline List& setRecordingDuration(int64_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


        // recordingReady Field Functions 
        bool hasRecordingReady() const { return this->recordingReady_ != nullptr;};
        void deleteRecordingReady() { this->recordingReady_ = nullptr;};
        inline bool getRecordingReady() const { DARABONBA_PTR_GET_DEFAULT(recordingReady_, false) };
        inline List& setRecordingReady(bool recordingReady) { DARABONBA_PTR_SET_VALUE(recordingReady_, recordingReady) };


        // releaseInitiator Field Functions 
        bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
        void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
        inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
        inline List& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


        // releaseReason Field Functions 
        bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
        void deleteReleaseReason() { this->releaseReason_ = nullptr;};
        inline string getReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
        inline List& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
        inline List& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // ringTime Field Functions 
        bool hasRingTime() const { return this->ringTime_ != nullptr;};
        void deleteRingTime() { this->ringTime_ = nullptr;};
        inline int64_t getRingTime() const { DARABONBA_PTR_GET_DEFAULT(ringTime_, 0L) };
        inline List& setRingTime(int64_t ringTime) { DARABONBA_PTR_SET_VALUE(ringTime_, ringTime) };


        // satisfactionDescription Field Functions 
        bool hasSatisfactionDescription() const { return this->satisfactionDescription_ != nullptr;};
        void deleteSatisfactionDescription() { this->satisfactionDescription_ = nullptr;};
        inline string getSatisfactionDescription() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescription_, "") };
        inline List& setSatisfactionDescription(string satisfactionDescription) { DARABONBA_PTR_SET_VALUE(satisfactionDescription_, satisfactionDescription) };


        // satisfactionIndex Field Functions 
        bool hasSatisfactionIndex() const { return this->satisfactionIndex_ != nullptr;};
        void deleteSatisfactionIndex() { this->satisfactionIndex_ = nullptr;};
        inline int32_t getSatisfactionIndex() const { DARABONBA_PTR_GET_DEFAULT(satisfactionIndex_, 0) };
        inline List& setSatisfactionIndex(int32_t satisfactionIndex) { DARABONBA_PTR_SET_VALUE(satisfactionIndex_, satisfactionIndex) };


        // satisfactionSurveyChannel Field Functions 
        bool hasSatisfactionSurveyChannel() const { return this->satisfactionSurveyChannel_ != nullptr;};
        void deleteSatisfactionSurveyChannel() { this->satisfactionSurveyChannel_ = nullptr;};
        inline string getSatisfactionSurveyChannel() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyChannel_, "") };
        inline List& setSatisfactionSurveyChannel(string satisfactionSurveyChannel) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyChannel_, satisfactionSurveyChannel) };


        // satisfactionSurveyOffered Field Functions 
        bool hasSatisfactionSurveyOffered() const { return this->satisfactionSurveyOffered_ != nullptr;};
        void deleteSatisfactionSurveyOffered() { this->satisfactionSurveyOffered_ = nullptr;};
        inline bool getSatisfactionSurveyOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyOffered_, false) };
        inline List& setSatisfactionSurveyOffered(bool satisfactionSurveyOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyOffered_, satisfactionSurveyOffered) };


        // skillGroupIds Field Functions 
        bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
        void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
        inline string getSkillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
        inline List& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


        // skillGroupNames Field Functions 
        bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
        void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
        inline string getSkillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
        inline List& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline List& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // summaryIndex Field Functions 
        bool hasSummaryIndex() const { return this->summaryIndex_ != nullptr;};
        void deleteSummaryIndex() { this->summaryIndex_ = nullptr;};
        inline const List::SummaryIndex & getSummaryIndex() const { DARABONBA_PTR_GET_CONST(summaryIndex_, List::SummaryIndex) };
        inline List::SummaryIndex getSummaryIndex() { DARABONBA_PTR_GET(summaryIndex_, List::SummaryIndex) };
        inline List& setSummaryIndex(const List::SummaryIndex & summaryIndex) { DARABONBA_PTR_SET_VALUE(summaryIndex_, summaryIndex) };
        inline List& setSummaryIndex(List::SummaryIndex && summaryIndex) { DARABONBA_PTR_SET_RVALUE(summaryIndex_, summaryIndex) };


        // talkTime Field Functions 
        bool hasTalkTime() const { return this->talkTime_ != nullptr;};
        void deleteTalkTime() { this->talkTime_ = nullptr;};
        inline int64_t getTalkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0L) };
        inline List& setTalkTime(int64_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


        // transferCount Field Functions 
        bool hasTransferCount() const { return this->transferCount_ != nullptr;};
        void deleteTransferCount() { this->transferCount_ = nullptr;};
        inline int64_t getTransferCount() const { DARABONBA_PTR_GET_DEFAULT(transferCount_, 0L) };
        inline List& setTransferCount(int64_t transferCount) { DARABONBA_PTR_SET_VALUE(transferCount_, transferCount) };


        // voicebotDestinationNumber Field Functions 
        bool hasVoicebotDestinationNumber() const { return this->voicebotDestinationNumber_ != nullptr;};
        void deleteVoicebotDestinationNumber() { this->voicebotDestinationNumber_ = nullptr;};
        inline string getVoicebotDestinationNumber() const { DARABONBA_PTR_GET_DEFAULT(voicebotDestinationNumber_, "") };
        inline List& setVoicebotDestinationNumber(string voicebotDestinationNumber) { DARABONBA_PTR_SET_VALUE(voicebotDestinationNumber_, voicebotDestinationNumber) };


        // voicebotOriginatorNumber Field Functions 
        bool hasVoicebotOriginatorNumber() const { return this->voicebotOriginatorNumber_ != nullptr;};
        void deleteVoicebotOriginatorNumber() { this->voicebotOriginatorNumber_ = nullptr;};
        inline string getVoicebotOriginatorNumber() const { DARABONBA_PTR_GET_DEFAULT(voicebotOriginatorNumber_, "") };
        inline List& setVoicebotOriginatorNumber(string voicebotOriginatorNumber) { DARABONBA_PTR_SET_VALUE(voicebotOriginatorNumber_, voicebotOriginatorNumber) };


        // waitTime Field Functions 
        bool hasWaitTime() const { return this->waitTime_ != nullptr;};
        void deleteWaitTime() { this->waitTime_ = nullptr;};
        inline int64_t getWaitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0L) };
        inline List& setWaitTime(int64_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


      protected:
        shared_ptr<string> accessChannelName_ {};
        shared_ptr<string> accessChannelType_ {};
        shared_ptr<string> accessChannelUserId_ {};
        shared_ptr<string> accessChannelUserName_ {};
        shared_ptr<string> additionalBroker_ {};
        shared_ptr<string> agentIds_ {};
        shared_ptr<string> agentNames_ {};
        shared_ptr<List::AnalyticsReport> analyticsReport_ {};
        shared_ptr<bool> analyticsReportReady_ {};
        shared_ptr<string> broker_ {};
        shared_ptr<string> callDuration_ {};
        shared_ptr<string> callIds_ {};
        shared_ptr<string> calledNumber_ {};
        shared_ptr<string> calleeLocation_ {};
        shared_ptr<string> callerLocation_ {};
        shared_ptr<string> callingNumber_ {};
        shared_ptr<string> clientAppName_ {};
        shared_ptr<string> clientIpAddress_ {};
        shared_ptr<string> clientLocation_ {};
        shared_ptr<string> clientUserAgent_ {};
        shared_ptr<string> contactDisposition_ {};
        shared_ptr<string> contactId_ {};
        shared_ptr<string> contactType_ {};
        shared_ptr<int64_t> dialingTime_ {};
        shared_ptr<string> earlyMediaState_ {};
        shared_ptr<string> earlyMediaText_ {};
        shared_ptr<int64_t> establishedTime_ {};
        shared_ptr<int64_t> firstResponseTime_ {};
        shared_ptr<int64_t> heldTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> ivrTime_ {};
        shared_ptr<string> mediaType_ {};
        shared_ptr<int64_t> messagesSent_ {};
        shared_ptr<int64_t> messagesSentByAgent_ {};
        shared_ptr<int64_t> messagesSentByCustomer_ {};
        shared_ptr<string> offSiteAgentIds_ {};
        shared_ptr<string> offsiteAgentDestinationNumbers_ {};
        shared_ptr<string> offsiteAgentOriginatorNumbers_ {};
        shared_ptr<string> offsiteAgentReleaseReason_ {};
        shared_ptr<string> outsideNumberReleaseReason_ {};
        shared_ptr<int64_t> queueTime_ {};
        shared_ptr<int64_t> recordingDuration_ {};
        shared_ptr<bool> recordingReady_ {};
        shared_ptr<string> releaseInitiator_ {};
        shared_ptr<string> releaseReason_ {};
        shared_ptr<int64_t> releaseTime_ {};
        shared_ptr<int64_t> ringTime_ {};
        shared_ptr<string> satisfactionDescription_ {};
        shared_ptr<int32_t> satisfactionIndex_ {};
        shared_ptr<string> satisfactionSurveyChannel_ {};
        shared_ptr<bool> satisfactionSurveyOffered_ {};
        shared_ptr<string> skillGroupIds_ {};
        shared_ptr<string> skillGroupNames_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<List::SummaryIndex> summaryIndex_ {};
        shared_ptr<int64_t> talkTime_ {};
        shared_ptr<int64_t> transferCount_ {};
        shared_ptr<string> voicebotDestinationNumber_ {};
        shared_ptr<string> voicebotOriginatorNumber_ {};
        shared_ptr<int64_t> waitTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCallDetailRecordsV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCallDetailRecordsV2ResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCallDetailRecordsV2ResponseBody::Data) };
    inline ListCallDetailRecordsV2ResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCallDetailRecordsV2ResponseBody::Data) };
    inline ListCallDetailRecordsV2ResponseBody& setData(const ListCallDetailRecordsV2ResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCallDetailRecordsV2ResponseBody& setData(ListCallDetailRecordsV2ResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCallDetailRecordsV2ResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCallDetailRecordsV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCallDetailRecordsV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListCallDetailRecordsV2ResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
