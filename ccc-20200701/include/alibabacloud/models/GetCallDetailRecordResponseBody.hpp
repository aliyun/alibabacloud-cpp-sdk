// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODY_HPP_
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
  class GetCallDetailRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCallDetailRecordResponseBody() = default ;
    GetCallDetailRecordResponseBody(const GetCallDetailRecordResponseBody &) = default ;
    GetCallDetailRecordResponseBody(GetCallDetailRecordResponseBody &&) = default ;
    GetCallDetailRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBody() = default ;
    GetCallDetailRecordResponseBody& operator=(const GetCallDetailRecordResponseBody &) = default ;
    GetCallDetailRecordResponseBody& operator=(GetCallDetailRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentEvents, agentEvents_);
        DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
        DARABONBA_PTR_TO_JSON(AgentNames, agentNames_);
        DARABONBA_PTR_TO_JSON(AnalyticsReport, analyticsReport_);
        DARABONBA_PTR_TO_JSON(AnalyticsReportReady, analyticsReportReady_);
        DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
        DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
        DARABONBA_PTR_TO_JSON(CalleeLocation, calleeLocation_);
        DARABONBA_PTR_TO_JSON(CallerLocation, callerLocation_);
        DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
        DARABONBA_PTR_TO_JSON(ContactDisposition, contactDisposition_);
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(ContactType, contactType_);
        DARABONBA_PTR_TO_JSON(CustomerEvents, customerEvents_);
        DARABONBA_PTR_TO_JSON(EarlyMediaState, earlyMediaState_);
        DARABONBA_PTR_TO_JSON(EstablishedTime, establishedTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IvrEvents, ivrEvents_);
        DARABONBA_PTR_TO_JSON(OutsideNumberReleaseReason, outsideNumberReleaseReason_);
        DARABONBA_PTR_TO_JSON(QueueEvents, queueEvents_);
        DARABONBA_PTR_TO_JSON(RecordingReady, recordingReady_);
        DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
        DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
        DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(Satisfaction, satisfaction_);
        DARABONBA_PTR_TO_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
        DARABONBA_PTR_TO_JSON(SatisfactionSurveyOffered, satisfactionSurveyOffered_);
        DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
        DARABONBA_PTR_TO_JSON(SkillGroupNames, skillGroupNames_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentEvents, agentEvents_);
        DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
        DARABONBA_PTR_FROM_JSON(AgentNames, agentNames_);
        DARABONBA_PTR_FROM_JSON(AnalyticsReport, analyticsReport_);
        DARABONBA_PTR_FROM_JSON(AnalyticsReportReady, analyticsReportReady_);
        DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
        DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
        DARABONBA_PTR_FROM_JSON(CalleeLocation, calleeLocation_);
        DARABONBA_PTR_FROM_JSON(CallerLocation, callerLocation_);
        DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
        DARABONBA_PTR_FROM_JSON(ContactDisposition, contactDisposition_);
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
        DARABONBA_PTR_FROM_JSON(CustomerEvents, customerEvents_);
        DARABONBA_PTR_FROM_JSON(EarlyMediaState, earlyMediaState_);
        DARABONBA_PTR_FROM_JSON(EstablishedTime, establishedTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IvrEvents, ivrEvents_);
        DARABONBA_PTR_FROM_JSON(OutsideNumberReleaseReason, outsideNumberReleaseReason_);
        DARABONBA_PTR_FROM_JSON(QueueEvents, queueEvents_);
        DARABONBA_PTR_FROM_JSON(RecordingReady, recordingReady_);
        DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
        DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
        DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(Satisfaction, satisfaction_);
        DARABONBA_PTR_FROM_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
        DARABONBA_PTR_FROM_JSON(SatisfactionSurveyOffered, satisfactionSurveyOffered_);
        DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
        DARABONBA_PTR_FROM_JSON(SkillGroupNames, skillGroupNames_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      class QueueEvents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueueEvents& obj) { 
          DARABONBA_PTR_TO_JSON(EventSequence, eventSequence_);
          DARABONBA_PTR_TO_JSON(FlowId, flowId_);
          DARABONBA_PTR_TO_JSON(QueueId, queueId_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(QueueType, queueType_);
        };
        friend void from_json(const Darabonba::Json& j, QueueEvents& obj) { 
          DARABONBA_PTR_FROM_JSON(EventSequence, eventSequence_);
          DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
          DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
        };
        QueueEvents() = default ;
        QueueEvents(const QueueEvents &) = default ;
        QueueEvents(QueueEvents &&) = default ;
        QueueEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueueEvents() = default ;
        QueueEvents& operator=(const QueueEvents &) = default ;
        QueueEvents& operator=(QueueEvents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventSequence : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventSequence& obj) { 
            DARABONBA_PTR_TO_JSON(Event, event_);
            DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          };
          friend void from_json(const Darabonba::Json& j, EventSequence& obj) { 
            DARABONBA_PTR_FROM_JSON(Event, event_);
            DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          };
          EventSequence() = default ;
          EventSequence(const EventSequence &) = default ;
          EventSequence(EventSequence &&) = default ;
          EventSequence(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventSequence() = default ;
          EventSequence& operator=(const EventSequence &) = default ;
          EventSequence& operator=(EventSequence &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->event_ == nullptr
        && this->eventTime_ == nullptr; };
          // event Field Functions 
          bool hasEvent() const { return this->event_ != nullptr;};
          void deleteEvent() { this->event_ = nullptr;};
          inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
          inline EventSequence& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


          // eventTime Field Functions 
          bool hasEventTime() const { return this->eventTime_ != nullptr;};
          void deleteEventTime() { this->eventTime_ = nullptr;};
          inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
          inline EventSequence& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        protected:
          shared_ptr<string> event_ {};
          shared_ptr<int64_t> eventTime_ {};
        };

        virtual bool empty() const override { return this->eventSequence_ == nullptr
        && this->flowId_ == nullptr && this->queueId_ == nullptr && this->queueName_ == nullptr && this->queueType_ == nullptr; };
        // eventSequence Field Functions 
        bool hasEventSequence() const { return this->eventSequence_ != nullptr;};
        void deleteEventSequence() { this->eventSequence_ = nullptr;};
        inline const vector<QueueEvents::EventSequence> & getEventSequence() const { DARABONBA_PTR_GET_CONST(eventSequence_, vector<QueueEvents::EventSequence>) };
        inline vector<QueueEvents::EventSequence> getEventSequence() { DARABONBA_PTR_GET(eventSequence_, vector<QueueEvents::EventSequence>) };
        inline QueueEvents& setEventSequence(const vector<QueueEvents::EventSequence> & eventSequence) { DARABONBA_PTR_SET_VALUE(eventSequence_, eventSequence) };
        inline QueueEvents& setEventSequence(vector<QueueEvents::EventSequence> && eventSequence) { DARABONBA_PTR_SET_RVALUE(eventSequence_, eventSequence) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
        inline QueueEvents& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // queueId Field Functions 
        bool hasQueueId() const { return this->queueId_ != nullptr;};
        void deleteQueueId() { this->queueId_ = nullptr;};
        inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
        inline QueueEvents& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline QueueEvents& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // queueType Field Functions 
        bool hasQueueType() const { return this->queueType_ != nullptr;};
        void deleteQueueType() { this->queueType_ = nullptr;};
        inline int32_t getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, 0) };
        inline QueueEvents& setQueueType(int32_t queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


      protected:
        shared_ptr<vector<QueueEvents::EventSequence>> eventSequence_ {};
        shared_ptr<string> flowId_ {};
        shared_ptr<string> queueId_ {};
        shared_ptr<string> queueName_ {};
        shared_ptr<int32_t> queueType_ {};
      };

      class IvrEvents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IvrEvents& obj) { 
          DARABONBA_PTR_TO_JSON(EventSequence, eventSequence_);
          DARABONBA_PTR_TO_JSON(FlowId, flowId_);
          DARABONBA_PTR_TO_JSON(FlowType, flowType_);
        };
        friend void from_json(const Darabonba::Json& j, IvrEvents& obj) { 
          DARABONBA_PTR_FROM_JSON(EventSequence, eventSequence_);
          DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
          DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
        };
        IvrEvents() = default ;
        IvrEvents(const IvrEvents &) = default ;
        IvrEvents(IvrEvents &&) = default ;
        IvrEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IvrEvents() = default ;
        IvrEvents& operator=(const IvrEvents &) = default ;
        IvrEvents& operator=(IvrEvents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventSequence : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventSequence& obj) { 
            DARABONBA_PTR_TO_JSON(Event, event_);
            DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          };
          friend void from_json(const Darabonba::Json& j, EventSequence& obj) { 
            DARABONBA_PTR_FROM_JSON(Event, event_);
            DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          };
          EventSequence() = default ;
          EventSequence(const EventSequence &) = default ;
          EventSequence(EventSequence &&) = default ;
          EventSequence(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventSequence() = default ;
          EventSequence& operator=(const EventSequence &) = default ;
          EventSequence& operator=(EventSequence &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->event_ == nullptr
        && this->eventTime_ == nullptr; };
          // event Field Functions 
          bool hasEvent() const { return this->event_ != nullptr;};
          void deleteEvent() { this->event_ = nullptr;};
          inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
          inline EventSequence& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


          // eventTime Field Functions 
          bool hasEventTime() const { return this->eventTime_ != nullptr;};
          void deleteEventTime() { this->eventTime_ = nullptr;};
          inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
          inline EventSequence& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        protected:
          shared_ptr<string> event_ {};
          shared_ptr<int64_t> eventTime_ {};
        };

        virtual bool empty() const override { return this->eventSequence_ == nullptr
        && this->flowId_ == nullptr && this->flowType_ == nullptr; };
        // eventSequence Field Functions 
        bool hasEventSequence() const { return this->eventSequence_ != nullptr;};
        void deleteEventSequence() { this->eventSequence_ = nullptr;};
        inline const vector<IvrEvents::EventSequence> & getEventSequence() const { DARABONBA_PTR_GET_CONST(eventSequence_, vector<IvrEvents::EventSequence>) };
        inline vector<IvrEvents::EventSequence> getEventSequence() { DARABONBA_PTR_GET(eventSequence_, vector<IvrEvents::EventSequence>) };
        inline IvrEvents& setEventSequence(const vector<IvrEvents::EventSequence> & eventSequence) { DARABONBA_PTR_SET_VALUE(eventSequence_, eventSequence) };
        inline IvrEvents& setEventSequence(vector<IvrEvents::EventSequence> && eventSequence) { DARABONBA_PTR_SET_RVALUE(eventSequence_, eventSequence) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
        inline IvrEvents& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // flowType Field Functions 
        bool hasFlowType() const { return this->flowType_ != nullptr;};
        void deleteFlowType() { this->flowType_ = nullptr;};
        inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
        inline IvrEvents& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


      protected:
        shared_ptr<vector<IvrEvents::EventSequence>> eventSequence_ {};
        shared_ptr<string> flowId_ {};
        shared_ptr<string> flowType_ {};
      };

      class CustomerEvents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomerEvents& obj) { 
          DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
          DARABONBA_PTR_TO_JSON(EventSequence, eventSequence_);
        };
        friend void from_json(const Darabonba::Json& j, CustomerEvents& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
          DARABONBA_PTR_FROM_JSON(EventSequence, eventSequence_);
        };
        CustomerEvents() = default ;
        CustomerEvents(const CustomerEvents &) = default ;
        CustomerEvents(CustomerEvents &&) = default ;
        CustomerEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomerEvents() = default ;
        CustomerEvents& operator=(const CustomerEvents &) = default ;
        CustomerEvents& operator=(CustomerEvents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventSequence : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventSequence& obj) { 
            DARABONBA_PTR_TO_JSON(Event, event_);
            DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          };
          friend void from_json(const Darabonba::Json& j, EventSequence& obj) { 
            DARABONBA_PTR_FROM_JSON(Event, event_);
            DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          };
          EventSequence() = default ;
          EventSequence(const EventSequence &) = default ;
          EventSequence(EventSequence &&) = default ;
          EventSequence(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventSequence() = default ;
          EventSequence& operator=(const EventSequence &) = default ;
          EventSequence& operator=(EventSequence &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->event_ == nullptr
        && this->eventTime_ == nullptr; };
          // event Field Functions 
          bool hasEvent() const { return this->event_ != nullptr;};
          void deleteEvent() { this->event_ = nullptr;};
          inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
          inline EventSequence& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


          // eventTime Field Functions 
          bool hasEventTime() const { return this->eventTime_ != nullptr;};
          void deleteEventTime() { this->eventTime_ = nullptr;};
          inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
          inline EventSequence& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        protected:
          shared_ptr<string> event_ {};
          shared_ptr<int64_t> eventTime_ {};
        };

        virtual bool empty() const override { return this->customerId_ == nullptr
        && this->eventSequence_ == nullptr; };
        // customerId Field Functions 
        bool hasCustomerId() const { return this->customerId_ != nullptr;};
        void deleteCustomerId() { this->customerId_ = nullptr;};
        inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
        inline CustomerEvents& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


        // eventSequence Field Functions 
        bool hasEventSequence() const { return this->eventSequence_ != nullptr;};
        void deleteEventSequence() { this->eventSequence_ = nullptr;};
        inline const vector<CustomerEvents::EventSequence> & getEventSequence() const { DARABONBA_PTR_GET_CONST(eventSequence_, vector<CustomerEvents::EventSequence>) };
        inline vector<CustomerEvents::EventSequence> getEventSequence() { DARABONBA_PTR_GET(eventSequence_, vector<CustomerEvents::EventSequence>) };
        inline CustomerEvents& setEventSequence(const vector<CustomerEvents::EventSequence> & eventSequence) { DARABONBA_PTR_SET_VALUE(eventSequence_, eventSequence) };
        inline CustomerEvents& setEventSequence(vector<CustomerEvents::EventSequence> && eventSequence) { DARABONBA_PTR_SET_RVALUE(eventSequence_, eventSequence) };


      protected:
        shared_ptr<string> customerId_ {};
        shared_ptr<vector<CustomerEvents::EventSequence>> eventSequence_ {};
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

      class AgentEvents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentEvents& obj) { 
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(EventSequence, eventSequence_);
          DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, AgentEvents& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(EventSequence, eventSequence_);
          DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
        };
        AgentEvents() = default ;
        AgentEvents(const AgentEvents &) = default ;
        AgentEvents(AgentEvents &&) = default ;
        AgentEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentEvents() = default ;
        AgentEvents& operator=(const AgentEvents &) = default ;
        AgentEvents& operator=(AgentEvents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventSequence : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventSequence& obj) { 
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Event, event_);
            DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          };
          friend void from_json(const Darabonba::Json& j, EventSequence& obj) { 
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Event, event_);
            DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          };
          EventSequence() = default ;
          EventSequence(const EventSequence &) = default ;
          EventSequence(EventSequence &&) = default ;
          EventSequence(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventSequence() = default ;
          EventSequence& operator=(const EventSequence &) = default ;
          EventSequence& operator=(EventSequence &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->duration_ == nullptr
        && this->event_ == nullptr && this->eventTime_ == nullptr; };
          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
          inline EventSequence& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // event Field Functions 
          bool hasEvent() const { return this->event_ != nullptr;};
          void deleteEvent() { this->event_ = nullptr;};
          inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
          inline EventSequence& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


          // eventTime Field Functions 
          bool hasEventTime() const { return this->eventTime_ != nullptr;};
          void deleteEventTime() { this->eventTime_ = nullptr;};
          inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
          inline EventSequence& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        protected:
          shared_ptr<int64_t> duration_ {};
          shared_ptr<string> event_ {};
          shared_ptr<int64_t> eventTime_ {};
        };

        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->eventSequence_ == nullptr && this->skillGroupId_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline AgentEvents& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline AgentEvents& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // eventSequence Field Functions 
        bool hasEventSequence() const { return this->eventSequence_ != nullptr;};
        void deleteEventSequence() { this->eventSequence_ = nullptr;};
        inline const vector<AgentEvents::EventSequence> & getEventSequence() const { DARABONBA_PTR_GET_CONST(eventSequence_, vector<AgentEvents::EventSequence>) };
        inline vector<AgentEvents::EventSequence> getEventSequence() { DARABONBA_PTR_GET(eventSequence_, vector<AgentEvents::EventSequence>) };
        inline AgentEvents& setEventSequence(const vector<AgentEvents::EventSequence> & eventSequence) { DARABONBA_PTR_SET_VALUE(eventSequence_, eventSequence) };
        inline AgentEvents& setEventSequence(vector<AgentEvents::EventSequence> && eventSequence) { DARABONBA_PTR_SET_RVALUE(eventSequence_, eventSequence) };


        // skillGroupId Field Functions 
        bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
        void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
        inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
        inline AgentEvents& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> agentName_ {};
        shared_ptr<vector<AgentEvents::EventSequence>> eventSequence_ {};
        shared_ptr<string> skillGroupId_ {};
      };

      virtual bool empty() const override { return this->agentEvents_ == nullptr
        && this->agentIds_ == nullptr && this->agentNames_ == nullptr && this->analyticsReport_ == nullptr && this->analyticsReportReady_ == nullptr && this->callDuration_ == nullptr
        && this->calledNumber_ == nullptr && this->calleeLocation_ == nullptr && this->callerLocation_ == nullptr && this->callingNumber_ == nullptr && this->contactDisposition_ == nullptr
        && this->contactId_ == nullptr && this->contactType_ == nullptr && this->customerEvents_ == nullptr && this->earlyMediaState_ == nullptr && this->establishedTime_ == nullptr
        && this->instanceId_ == nullptr && this->ivrEvents_ == nullptr && this->outsideNumberReleaseReason_ == nullptr && this->queueEvents_ == nullptr && this->recordingReady_ == nullptr
        && this->releaseInitiator_ == nullptr && this->releaseReason_ == nullptr && this->releaseTime_ == nullptr && this->satisfaction_ == nullptr && this->satisfactionSurveyChannel_ == nullptr
        && this->satisfactionSurveyOffered_ == nullptr && this->skillGroupIds_ == nullptr && this->skillGroupNames_ == nullptr && this->startTime_ == nullptr; };
      // agentEvents Field Functions 
      bool hasAgentEvents() const { return this->agentEvents_ != nullptr;};
      void deleteAgentEvents() { this->agentEvents_ = nullptr;};
      inline const vector<Data::AgentEvents> & getAgentEvents() const { DARABONBA_PTR_GET_CONST(agentEvents_, vector<Data::AgentEvents>) };
      inline vector<Data::AgentEvents> getAgentEvents() { DARABONBA_PTR_GET(agentEvents_, vector<Data::AgentEvents>) };
      inline Data& setAgentEvents(const vector<Data::AgentEvents> & agentEvents) { DARABONBA_PTR_SET_VALUE(agentEvents_, agentEvents) };
      inline Data& setAgentEvents(vector<Data::AgentEvents> && agentEvents) { DARABONBA_PTR_SET_RVALUE(agentEvents_, agentEvents) };


      // agentIds Field Functions 
      bool hasAgentIds() const { return this->agentIds_ != nullptr;};
      void deleteAgentIds() { this->agentIds_ = nullptr;};
      inline string getAgentIds() const { DARABONBA_PTR_GET_DEFAULT(agentIds_, "") };
      inline Data& setAgentIds(string agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };


      // agentNames Field Functions 
      bool hasAgentNames() const { return this->agentNames_ != nullptr;};
      void deleteAgentNames() { this->agentNames_ = nullptr;};
      inline string getAgentNames() const { DARABONBA_PTR_GET_DEFAULT(agentNames_, "") };
      inline Data& setAgentNames(string agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };


      // analyticsReport Field Functions 
      bool hasAnalyticsReport() const { return this->analyticsReport_ != nullptr;};
      void deleteAnalyticsReport() { this->analyticsReport_ = nullptr;};
      inline const Data::AnalyticsReport & getAnalyticsReport() const { DARABONBA_PTR_GET_CONST(analyticsReport_, Data::AnalyticsReport) };
      inline Data::AnalyticsReport getAnalyticsReport() { DARABONBA_PTR_GET(analyticsReport_, Data::AnalyticsReport) };
      inline Data& setAnalyticsReport(const Data::AnalyticsReport & analyticsReport) { DARABONBA_PTR_SET_VALUE(analyticsReport_, analyticsReport) };
      inline Data& setAnalyticsReport(Data::AnalyticsReport && analyticsReport) { DARABONBA_PTR_SET_RVALUE(analyticsReport_, analyticsReport) };


      // analyticsReportReady Field Functions 
      bool hasAnalyticsReportReady() const { return this->analyticsReportReady_ != nullptr;};
      void deleteAnalyticsReportReady() { this->analyticsReportReady_ = nullptr;};
      inline bool getAnalyticsReportReady() const { DARABONBA_PTR_GET_DEFAULT(analyticsReportReady_, false) };
      inline Data& setAnalyticsReportReady(bool analyticsReportReady) { DARABONBA_PTR_SET_VALUE(analyticsReportReady_, analyticsReportReady) };


      // callDuration Field Functions 
      bool hasCallDuration() const { return this->callDuration_ != nullptr;};
      void deleteCallDuration() { this->callDuration_ = nullptr;};
      inline int64_t getCallDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, 0L) };
      inline Data& setCallDuration(int64_t callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


      // calledNumber Field Functions 
      bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
      void deleteCalledNumber() { this->calledNumber_ = nullptr;};
      inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
      inline Data& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


      // calleeLocation Field Functions 
      bool hasCalleeLocation() const { return this->calleeLocation_ != nullptr;};
      void deleteCalleeLocation() { this->calleeLocation_ = nullptr;};
      inline string getCalleeLocation() const { DARABONBA_PTR_GET_DEFAULT(calleeLocation_, "") };
      inline Data& setCalleeLocation(string calleeLocation) { DARABONBA_PTR_SET_VALUE(calleeLocation_, calleeLocation) };


      // callerLocation Field Functions 
      bool hasCallerLocation() const { return this->callerLocation_ != nullptr;};
      void deleteCallerLocation() { this->callerLocation_ = nullptr;};
      inline string getCallerLocation() const { DARABONBA_PTR_GET_DEFAULT(callerLocation_, "") };
      inline Data& setCallerLocation(string callerLocation) { DARABONBA_PTR_SET_VALUE(callerLocation_, callerLocation) };


      // callingNumber Field Functions 
      bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
      void deleteCallingNumber() { this->callingNumber_ = nullptr;};
      inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
      inline Data& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


      // contactDisposition Field Functions 
      bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
      void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
      inline string getContactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
      inline Data& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Data& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // contactType Field Functions 
      bool hasContactType() const { return this->contactType_ != nullptr;};
      void deleteContactType() { this->contactType_ = nullptr;};
      inline string getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
      inline Data& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


      // customerEvents Field Functions 
      bool hasCustomerEvents() const { return this->customerEvents_ != nullptr;};
      void deleteCustomerEvents() { this->customerEvents_ = nullptr;};
      inline const vector<Data::CustomerEvents> & getCustomerEvents() const { DARABONBA_PTR_GET_CONST(customerEvents_, vector<Data::CustomerEvents>) };
      inline vector<Data::CustomerEvents> getCustomerEvents() { DARABONBA_PTR_GET(customerEvents_, vector<Data::CustomerEvents>) };
      inline Data& setCustomerEvents(const vector<Data::CustomerEvents> & customerEvents) { DARABONBA_PTR_SET_VALUE(customerEvents_, customerEvents) };
      inline Data& setCustomerEvents(vector<Data::CustomerEvents> && customerEvents) { DARABONBA_PTR_SET_RVALUE(customerEvents_, customerEvents) };


      // earlyMediaState Field Functions 
      bool hasEarlyMediaState() const { return this->earlyMediaState_ != nullptr;};
      void deleteEarlyMediaState() { this->earlyMediaState_ = nullptr;};
      inline string getEarlyMediaState() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaState_, "") };
      inline Data& setEarlyMediaState(string earlyMediaState) { DARABONBA_PTR_SET_VALUE(earlyMediaState_, earlyMediaState) };


      // establishedTime Field Functions 
      bool hasEstablishedTime() const { return this->establishedTime_ != nullptr;};
      void deleteEstablishedTime() { this->establishedTime_ = nullptr;};
      inline int64_t getEstablishedTime() const { DARABONBA_PTR_GET_DEFAULT(establishedTime_, 0L) };
      inline Data& setEstablishedTime(int64_t establishedTime) { DARABONBA_PTR_SET_VALUE(establishedTime_, establishedTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ivrEvents Field Functions 
      bool hasIvrEvents() const { return this->ivrEvents_ != nullptr;};
      void deleteIvrEvents() { this->ivrEvents_ = nullptr;};
      inline const vector<Data::IvrEvents> & getIvrEvents() const { DARABONBA_PTR_GET_CONST(ivrEvents_, vector<Data::IvrEvents>) };
      inline vector<Data::IvrEvents> getIvrEvents() { DARABONBA_PTR_GET(ivrEvents_, vector<Data::IvrEvents>) };
      inline Data& setIvrEvents(const vector<Data::IvrEvents> & ivrEvents) { DARABONBA_PTR_SET_VALUE(ivrEvents_, ivrEvents) };
      inline Data& setIvrEvents(vector<Data::IvrEvents> && ivrEvents) { DARABONBA_PTR_SET_RVALUE(ivrEvents_, ivrEvents) };


      // outsideNumberReleaseReason Field Functions 
      bool hasOutsideNumberReleaseReason() const { return this->outsideNumberReleaseReason_ != nullptr;};
      void deleteOutsideNumberReleaseReason() { this->outsideNumberReleaseReason_ = nullptr;};
      inline string getOutsideNumberReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(outsideNumberReleaseReason_, "") };
      inline Data& setOutsideNumberReleaseReason(string outsideNumberReleaseReason) { DARABONBA_PTR_SET_VALUE(outsideNumberReleaseReason_, outsideNumberReleaseReason) };


      // queueEvents Field Functions 
      bool hasQueueEvents() const { return this->queueEvents_ != nullptr;};
      void deleteQueueEvents() { this->queueEvents_ = nullptr;};
      inline const vector<Data::QueueEvents> & getQueueEvents() const { DARABONBA_PTR_GET_CONST(queueEvents_, vector<Data::QueueEvents>) };
      inline vector<Data::QueueEvents> getQueueEvents() { DARABONBA_PTR_GET(queueEvents_, vector<Data::QueueEvents>) };
      inline Data& setQueueEvents(const vector<Data::QueueEvents> & queueEvents) { DARABONBA_PTR_SET_VALUE(queueEvents_, queueEvents) };
      inline Data& setQueueEvents(vector<Data::QueueEvents> && queueEvents) { DARABONBA_PTR_SET_RVALUE(queueEvents_, queueEvents) };


      // recordingReady Field Functions 
      bool hasRecordingReady() const { return this->recordingReady_ != nullptr;};
      void deleteRecordingReady() { this->recordingReady_ = nullptr;};
      inline bool getRecordingReady() const { DARABONBA_PTR_GET_DEFAULT(recordingReady_, false) };
      inline Data& setRecordingReady(bool recordingReady) { DARABONBA_PTR_SET_VALUE(recordingReady_, recordingReady) };


      // releaseInitiator Field Functions 
      bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
      void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
      inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
      inline Data& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


      // releaseReason Field Functions 
      bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
      void deleteReleaseReason() { this->releaseReason_ = nullptr;};
      inline string getReleaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
      inline Data& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
      inline Data& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // satisfaction Field Functions 
      bool hasSatisfaction() const { return this->satisfaction_ != nullptr;};
      void deleteSatisfaction() { this->satisfaction_ = nullptr;};
      inline int32_t getSatisfaction() const { DARABONBA_PTR_GET_DEFAULT(satisfaction_, 0) };
      inline Data& setSatisfaction(int32_t satisfaction) { DARABONBA_PTR_SET_VALUE(satisfaction_, satisfaction) };


      // satisfactionSurveyChannel Field Functions 
      bool hasSatisfactionSurveyChannel() const { return this->satisfactionSurveyChannel_ != nullptr;};
      void deleteSatisfactionSurveyChannel() { this->satisfactionSurveyChannel_ = nullptr;};
      inline string getSatisfactionSurveyChannel() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyChannel_, "") };
      inline Data& setSatisfactionSurveyChannel(string satisfactionSurveyChannel) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyChannel_, satisfactionSurveyChannel) };


      // satisfactionSurveyOffered Field Functions 
      bool hasSatisfactionSurveyOffered() const { return this->satisfactionSurveyOffered_ != nullptr;};
      void deleteSatisfactionSurveyOffered() { this->satisfactionSurveyOffered_ = nullptr;};
      inline bool getSatisfactionSurveyOffered() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyOffered_, false) };
      inline Data& setSatisfactionSurveyOffered(bool satisfactionSurveyOffered) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyOffered_, satisfactionSurveyOffered) };


      // skillGroupIds Field Functions 
      bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
      void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
      inline string getSkillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
      inline Data& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


      // skillGroupNames Field Functions 
      bool hasSkillGroupNames() const { return this->skillGroupNames_ != nullptr;};
      void deleteSkillGroupNames() { this->skillGroupNames_ = nullptr;};
      inline string getSkillGroupNames() const { DARABONBA_PTR_GET_DEFAULT(skillGroupNames_, "") };
      inline Data& setSkillGroupNames(string skillGroupNames) { DARABONBA_PTR_SET_VALUE(skillGroupNames_, skillGroupNames) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<vector<Data::AgentEvents>> agentEvents_ {};
      shared_ptr<string> agentIds_ {};
      shared_ptr<string> agentNames_ {};
      shared_ptr<Data::AnalyticsReport> analyticsReport_ {};
      shared_ptr<bool> analyticsReportReady_ {};
      shared_ptr<int64_t> callDuration_ {};
      shared_ptr<string> calledNumber_ {};
      shared_ptr<string> calleeLocation_ {};
      shared_ptr<string> callerLocation_ {};
      shared_ptr<string> callingNumber_ {};
      shared_ptr<string> contactDisposition_ {};
      shared_ptr<string> contactId_ {};
      shared_ptr<string> contactType_ {};
      shared_ptr<vector<Data::CustomerEvents>> customerEvents_ {};
      shared_ptr<string> earlyMediaState_ {};
      shared_ptr<int64_t> establishedTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<Data::IvrEvents>> ivrEvents_ {};
      shared_ptr<string> outsideNumberReleaseReason_ {};
      shared_ptr<vector<Data::QueueEvents>> queueEvents_ {};
      shared_ptr<bool> recordingReady_ {};
      shared_ptr<string> releaseInitiator_ {};
      shared_ptr<string> releaseReason_ {};
      shared_ptr<int64_t> releaseTime_ {};
      shared_ptr<int32_t> satisfaction_ {};
      shared_ptr<string> satisfactionSurveyChannel_ {};
      shared_ptr<bool> satisfactionSurveyOffered_ {};
      shared_ptr<string> skillGroupIds_ {};
      shared_ptr<string> skillGroupNames_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCallDetailRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCallDetailRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCallDetailRecordResponseBody::Data) };
    inline GetCallDetailRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCallDetailRecordResponseBody::Data) };
    inline GetCallDetailRecordResponseBody& setData(const GetCallDetailRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCallDetailRecordResponseBody& setData(GetCallDetailRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCallDetailRecordResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCallDetailRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCallDetailRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCallDetailRecordResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
