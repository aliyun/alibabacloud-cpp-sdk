// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKBYUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKBYUUIDRESPONSEBODY_HPP_
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
  class GetTaskByUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskByUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskByUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    GetTaskByUuidResponseBody() = default ;
    GetTaskByUuidResponseBody(const GetTaskByUuidResponseBody &) = default ;
    GetTaskByUuidResponseBody(GetTaskByUuidResponseBody &&) = default ;
    GetTaskByUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskByUuidResponseBody() = default ;
    GetTaskByUuidResponseBody& operator=(const GetTaskByUuidResponseBody &) = default ;
    GetTaskByUuidResponseBody& operator=(GetTaskByUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
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
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Conversations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conversations& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Script, script_);
          DARABONBA_PTR_TO_JSON(SequenceId, sequenceId_);
          DARABONBA_PTR_TO_JSON(Speaker, speaker_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Conversations& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Script, script_);
          DARABONBA_PTR_FROM_JSON(SequenceId, sequenceId_);
          DARABONBA_PTR_FROM_JSON(Speaker, speaker_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Conversations() = default ;
        Conversations(const Conversations &) = default ;
        Conversations(Conversations &&) = default ;
        Conversations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conversations() = default ;
        Conversations& operator=(const Conversations &) = default ;
        Conversations& operator=(Conversations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->script_ == nullptr && this->sequenceId_ == nullptr && this->speaker_ == nullptr && this->timestamp_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Conversations& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
        inline Conversations& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


        // sequenceId Field Functions 
        bool hasSequenceId() const { return this->sequenceId_ != nullptr;};
        void deleteSequenceId() { this->sequenceId_ = nullptr;};
        inline string getSequenceId() const { DARABONBA_PTR_GET_DEFAULT(sequenceId_, "") };
        inline Conversations& setSequenceId(string sequenceId) { DARABONBA_PTR_SET_VALUE(sequenceId_, sequenceId) };


        // speaker Field Functions 
        bool hasSpeaker() const { return this->speaker_ != nullptr;};
        void deleteSpeaker() { this->speaker_ = nullptr;};
        inline string getSpeaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
        inline Conversations& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Conversations& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<string> script_ {};
        shared_ptr<string> sequenceId_ {};
        shared_ptr<string> speaker_ {};
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->callId_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr && this->conversations_ == nullptr && this->endReason_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobId_ == nullptr
        && this->plannedTime_ == nullptr; };
      // actualTime Field Functions 
      bool hasActualTime() const { return this->actualTime_ != nullptr;};
      void deleteActualTime() { this->actualTime_ = nullptr;};
      inline int64_t getActualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
      inline Task& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


      // callId Field Functions 
      bool hasCallId() const { return this->callId_ != nullptr;};
      void deleteCallId() { this->callId_ = nullptr;};
      inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
      inline Task& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


      // calledNumber Field Functions 
      bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
      void deleteCalledNumber() { this->calledNumber_ = nullptr;};
      inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
      inline Task& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


      // callingNumber Field Functions 
      bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
      void deleteCallingNumber() { this->callingNumber_ = nullptr;};
      inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
      inline Task& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


      // conversations Field Functions 
      bool hasConversations() const { return this->conversations_ != nullptr;};
      void deleteConversations() { this->conversations_ = nullptr;};
      inline const vector<Task::Conversations> & getConversations() const { DARABONBA_PTR_GET_CONST(conversations_, vector<Task::Conversations>) };
      inline vector<Task::Conversations> getConversations() { DARABONBA_PTR_GET(conversations_, vector<Task::Conversations>) };
      inline Task& setConversations(const vector<Task::Conversations> & conversations) { DARABONBA_PTR_SET_VALUE(conversations_, conversations) };
      inline Task& setConversations(vector<Task::Conversations> && conversations) { DARABONBA_PTR_SET_RVALUE(conversations_, conversations) };


      // endReason Field Functions 
      bool hasEndReason() const { return this->endReason_ != nullptr;};
      void deleteEndReason() { this->endReason_ = nullptr;};
      inline string getEndReason() const { DARABONBA_PTR_GET_DEFAULT(endReason_, "") };
      inline Task& setEndReason(string endReason) { DARABONBA_PTR_SET_VALUE(endReason_, endReason) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Task& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Task& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Task& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobGroupId Field Functions 
      bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
      void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
      inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
      inline Task& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Task& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // plannedTime Field Functions 
      bool hasPlannedTime() const { return this->plannedTime_ != nullptr;};
      void deletePlannedTime() { this->plannedTime_ = nullptr;};
      inline int64_t getPlannedTime() const { DARABONBA_PTR_GET_DEFAULT(plannedTime_, 0L) };
      inline Task& setPlannedTime(int64_t plannedTime) { DARABONBA_PTR_SET_VALUE(plannedTime_, plannedTime) };


    protected:
      shared_ptr<int64_t> actualTime_ {};
      shared_ptr<string> callId_ {};
      shared_ptr<string> calledNumber_ {};
      shared_ptr<string> callingNumber_ {};
      shared_ptr<vector<Task::Conversations>> conversations_ {};
      shared_ptr<string> endReason_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> jobGroupId_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<int64_t> plannedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->task_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTaskByUuidResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTaskByUuidResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTaskByUuidResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskByUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTaskByUuidResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetTaskByUuidResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, GetTaskByUuidResponseBody::Task) };
    inline GetTaskByUuidResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, GetTaskByUuidResponseBody::Task) };
    inline GetTaskByUuidResponseBody& setTask(const GetTaskByUuidResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetTaskByUuidResponseBody& setTask(GetTaskByUuidResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<GetTaskByUuidResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
