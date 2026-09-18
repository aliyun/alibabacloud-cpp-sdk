// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAICALLTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAICALLTASKDETAILRESPONSEBODY_HPP_
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
  class QueryAiCallTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiCallTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiCallTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAiCallTaskDetailResponseBody() = default ;
    QueryAiCallTaskDetailResponseBody(const QueryAiCallTaskDetailResponseBody &) = default ;
    QueryAiCallTaskDetailResponseBody(QueryAiCallTaskDetailResponseBody &&) = default ;
    QueryAiCallTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiCallTaskDetailResponseBody() = default ;
    QueryAiCallTaskDetailResponseBody& operator=(const QueryAiCallTaskDetailResponseBody &) = default ;
    QueryAiCallTaskDetailResponseBody& operator=(QueryAiCallTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(CallDays, callDays_);
        DARABONBA_PTR_TO_JSON(CallExpireDate, callExpireDate_);
        DARABONBA_PTR_TO_JSON(CallExpireMinutes, callExpireMinutes_);
        DARABONBA_PTR_TO_JSON(CallExpireType, callExpireType_);
        DARABONBA_PTR_TO_JSON(CallTimes, callTimes_);
        DARABONBA_PTR_TO_JSON(CallableTimes, callableTimes_);
        DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
        DARABONBA_PTR_TO_JSON(ConcurrentCount, concurrentCount_);
        DARABONBA_PTR_TO_JSON(LineEncoding, lineEncoding_);
        DARABONBA_PTR_TO_JSON(LinePhoneNum, linePhoneNum_);
        DARABONBA_PTR_TO_JSON(PhoneType, phoneType_);
        DARABONBA_PTR_TO_JSON(RealStartTime, realStartTime_);
        DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
        DARABONBA_PTR_TO_JSON(RetryEnable, retryEnable_);
        DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
        DARABONBA_PTR_TO_JSON(RetryReasons, retryReasons_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StartType, startType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(CallDays, callDays_);
        DARABONBA_PTR_FROM_JSON(CallExpireDate, callExpireDate_);
        DARABONBA_PTR_FROM_JSON(CallExpireMinutes, callExpireMinutes_);
        DARABONBA_PTR_FROM_JSON(CallExpireType, callExpireType_);
        DARABONBA_PTR_FROM_JSON(CallTimes, callTimes_);
        DARABONBA_PTR_FROM_JSON(CallableTimes, callableTimes_);
        DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
        DARABONBA_PTR_FROM_JSON(ConcurrentCount, concurrentCount_);
        DARABONBA_PTR_FROM_JSON(LineEncoding, lineEncoding_);
        DARABONBA_PTR_FROM_JSON(LinePhoneNum, linePhoneNum_);
        DARABONBA_PTR_FROM_JSON(PhoneType, phoneType_);
        DARABONBA_PTR_FROM_JSON(RealStartTime, realStartTime_);
        DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
        DARABONBA_PTR_FROM_JSON(RetryEnable, retryEnable_);
        DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
        DARABONBA_PTR_FROM_JSON(RetryReasons, retryReasons_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StartType, startType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
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
      class CallableTimes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallableTimes& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, CallableTimes& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        CallableTimes() = default ;
        CallableTimes(const CallableTimes &) = default ;
        CallableTimes(CallableTimes &&) = default ;
        CallableTimes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallableTimes() = default ;
        CallableTimes& operator=(const CallableTimes &) = default ;
        CallableTimes& operator=(CallableTimes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline CallableTimes& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline CallableTimes& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The end time.
        shared_ptr<string> endTime_ {};
        // The start time.
        shared_ptr<string> startTime_ {};
      };

      class CallTimes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallTimes& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, CallTimes& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        CallTimes() = default ;
        CallTimes(const CallTimes &) = default ;
        CallTimes(CallTimes &&) = default ;
        CallTimes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallTimes() = default ;
        CallTimes& operator=(const CallTimes &) = default ;
        CallTimes& operator=(CallTimes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline CallTimes& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline CallTimes& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The end time.
        shared_ptr<string> endTime_ {};
        // The start time.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->applicationCode_ == nullptr && this->applicationName_ == nullptr && this->callDays_ == nullptr && this->callExpireDate_ == nullptr
        && this->callExpireMinutes_ == nullptr && this->callExpireType_ == nullptr && this->callTimes_ == nullptr && this->callableTimes_ == nullptr && this->callerNumber_ == nullptr
        && this->concurrentCount_ == nullptr && this->lineEncoding_ == nullptr && this->linePhoneNum_ == nullptr && this->phoneType_ == nullptr && this->realStartTime_ == nullptr
        && this->retryCount_ == nullptr && this->retryEnable_ == nullptr && this->retryInterval_ == nullptr && this->retryReasons_ == nullptr && this->startTime_ == nullptr
        && this->startType_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Data& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // applicationCode Field Functions 
      bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
      void deleteApplicationCode() { this->applicationCode_ = nullptr;};
      inline string getApplicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
      inline Data& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Data& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // callDays Field Functions 
      bool hasCallDays() const { return this->callDays_ != nullptr;};
      void deleteCallDays() { this->callDays_ = nullptr;};
      inline const vector<string> & getCallDays() const { DARABONBA_PTR_GET_CONST(callDays_, vector<string>) };
      inline vector<string> getCallDays() { DARABONBA_PTR_GET(callDays_, vector<string>) };
      inline Data& setCallDays(const vector<string> & callDays) { DARABONBA_PTR_SET_VALUE(callDays_, callDays) };
      inline Data& setCallDays(vector<string> && callDays) { DARABONBA_PTR_SET_RVALUE(callDays_, callDays) };


      // callExpireDate Field Functions 
      bool hasCallExpireDate() const { return this->callExpireDate_ != nullptr;};
      void deleteCallExpireDate() { this->callExpireDate_ = nullptr;};
      inline string getCallExpireDate() const { DARABONBA_PTR_GET_DEFAULT(callExpireDate_, "") };
      inline Data& setCallExpireDate(string callExpireDate) { DARABONBA_PTR_SET_VALUE(callExpireDate_, callExpireDate) };


      // callExpireMinutes Field Functions 
      bool hasCallExpireMinutes() const { return this->callExpireMinutes_ != nullptr;};
      void deleteCallExpireMinutes() { this->callExpireMinutes_ = nullptr;};
      inline int64_t getCallExpireMinutes() const { DARABONBA_PTR_GET_DEFAULT(callExpireMinutes_, 0L) };
      inline Data& setCallExpireMinutes(int64_t callExpireMinutes) { DARABONBA_PTR_SET_VALUE(callExpireMinutes_, callExpireMinutes) };


      // callExpireType Field Functions 
      bool hasCallExpireType() const { return this->callExpireType_ != nullptr;};
      void deleteCallExpireType() { this->callExpireType_ = nullptr;};
      inline int64_t getCallExpireType() const { DARABONBA_PTR_GET_DEFAULT(callExpireType_, 0L) };
      inline Data& setCallExpireType(int64_t callExpireType) { DARABONBA_PTR_SET_VALUE(callExpireType_, callExpireType) };


      // callTimes Field Functions 
      bool hasCallTimes() const { return this->callTimes_ != nullptr;};
      void deleteCallTimes() { this->callTimes_ = nullptr;};
      inline const vector<Data::CallTimes> & getCallTimes() const { DARABONBA_PTR_GET_CONST(callTimes_, vector<Data::CallTimes>) };
      inline vector<Data::CallTimes> getCallTimes() { DARABONBA_PTR_GET(callTimes_, vector<Data::CallTimes>) };
      inline Data& setCallTimes(const vector<Data::CallTimes> & callTimes) { DARABONBA_PTR_SET_VALUE(callTimes_, callTimes) };
      inline Data& setCallTimes(vector<Data::CallTimes> && callTimes) { DARABONBA_PTR_SET_RVALUE(callTimes_, callTimes) };


      // callableTimes Field Functions 
      bool hasCallableTimes() const { return this->callableTimes_ != nullptr;};
      void deleteCallableTimes() { this->callableTimes_ = nullptr;};
      inline const vector<Data::CallableTimes> & getCallableTimes() const { DARABONBA_PTR_GET_CONST(callableTimes_, vector<Data::CallableTimes>) };
      inline vector<Data::CallableTimes> getCallableTimes() { DARABONBA_PTR_GET(callableTimes_, vector<Data::CallableTimes>) };
      inline Data& setCallableTimes(const vector<Data::CallableTimes> & callableTimes) { DARABONBA_PTR_SET_VALUE(callableTimes_, callableTimes) };
      inline Data& setCallableTimes(vector<Data::CallableTimes> && callableTimes) { DARABONBA_PTR_SET_RVALUE(callableTimes_, callableTimes) };


      // callerNumber Field Functions 
      bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
      void deleteCallerNumber() { this->callerNumber_ = nullptr;};
      inline string getCallerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
      inline Data& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


      // concurrentCount Field Functions 
      bool hasConcurrentCount() const { return this->concurrentCount_ != nullptr;};
      void deleteConcurrentCount() { this->concurrentCount_ = nullptr;};
      inline int64_t getConcurrentCount() const { DARABONBA_PTR_GET_DEFAULT(concurrentCount_, 0L) };
      inline Data& setConcurrentCount(int64_t concurrentCount) { DARABONBA_PTR_SET_VALUE(concurrentCount_, concurrentCount) };


      // lineEncoding Field Functions 
      bool hasLineEncoding() const { return this->lineEncoding_ != nullptr;};
      void deleteLineEncoding() { this->lineEncoding_ = nullptr;};
      inline string getLineEncoding() const { DARABONBA_PTR_GET_DEFAULT(lineEncoding_, "") };
      inline Data& setLineEncoding(string lineEncoding) { DARABONBA_PTR_SET_VALUE(lineEncoding_, lineEncoding) };


      // linePhoneNum Field Functions 
      bool hasLinePhoneNum() const { return this->linePhoneNum_ != nullptr;};
      void deleteLinePhoneNum() { this->linePhoneNum_ = nullptr;};
      inline string getLinePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(linePhoneNum_, "") };
      inline Data& setLinePhoneNum(string linePhoneNum) { DARABONBA_PTR_SET_VALUE(linePhoneNum_, linePhoneNum) };


      // phoneType Field Functions 
      bool hasPhoneType() const { return this->phoneType_ != nullptr;};
      void deletePhoneType() { this->phoneType_ = nullptr;};
      inline int64_t getPhoneType() const { DARABONBA_PTR_GET_DEFAULT(phoneType_, 0L) };
      inline Data& setPhoneType(int64_t phoneType) { DARABONBA_PTR_SET_VALUE(phoneType_, phoneType) };


      // realStartTime Field Functions 
      bool hasRealStartTime() const { return this->realStartTime_ != nullptr;};
      void deleteRealStartTime() { this->realStartTime_ = nullptr;};
      inline int64_t getRealStartTime() const { DARABONBA_PTR_GET_DEFAULT(realStartTime_, 0L) };
      inline Data& setRealStartTime(int64_t realStartTime) { DARABONBA_PTR_SET_VALUE(realStartTime_, realStartTime) };


      // retryCount Field Functions 
      bool hasRetryCount() const { return this->retryCount_ != nullptr;};
      void deleteRetryCount() { this->retryCount_ = nullptr;};
      inline int64_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0L) };
      inline Data& setRetryCount(int64_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


      // retryEnable Field Functions 
      bool hasRetryEnable() const { return this->retryEnable_ != nullptr;};
      void deleteRetryEnable() { this->retryEnable_ = nullptr;};
      inline bool getRetryEnable() const { DARABONBA_PTR_GET_DEFAULT(retryEnable_, false) };
      inline Data& setRetryEnable(bool retryEnable) { DARABONBA_PTR_SET_VALUE(retryEnable_, retryEnable) };


      // retryInterval Field Functions 
      bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
      void deleteRetryInterval() { this->retryInterval_ = nullptr;};
      inline int64_t getRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0L) };
      inline Data& setRetryInterval(int64_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


      // retryReasons Field Functions 
      bool hasRetryReasons() const { return this->retryReasons_ != nullptr;};
      void deleteRetryReasons() { this->retryReasons_ = nullptr;};
      inline const vector<string> & getRetryReasons() const { DARABONBA_PTR_GET_CONST(retryReasons_, vector<string>) };
      inline vector<string> getRetryReasons() { DARABONBA_PTR_GET(retryReasons_, vector<string>) };
      inline Data& setRetryReasons(const vector<string> & retryReasons) { DARABONBA_PTR_SET_VALUE(retryReasons_, retryReasons) };
      inline Data& setRetryReasons(vector<string> && retryReasons) { DARABONBA_PTR_SET_RVALUE(retryReasons_, retryReasons) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // startType Field Functions 
      bool hasStartType() const { return this->startType_ != nullptr;};
      void deleteStartType() { this->startType_ = nullptr;};
      inline string getStartType() const { DARABONBA_PTR_GET_DEFAULT(startType_, "") };
      inline Data& setStartType(string startType) { DARABONBA_PTR_SET_VALUE(startType_, startType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // The ID of the published agent.
      shared_ptr<string> agentId_ {};
      // The agent name.
      shared_ptr<string> agentName_ {};
      shared_ptr<string> applicationCode_ {};
      shared_ptr<string> applicationName_ {};
      // The list of callable days.
      shared_ptr<vector<string>> callDays_ {};
      // The expiration date of outbound call details (specific deadline).
      shared_ptr<string> callExpireDate_ {};
      // The expiration duration of outbound call details, in minutes.
      shared_ptr<int64_t> callExpireMinutes_ {};
      // The outbound call validity type. Valid values:
      // 
      // 0: Permanently valid.
      // 1: Valid for a period of time after import.
      // 2: Valid until a specified time.
      shared_ptr<int64_t> callExpireType_ {};
      // The allowed call time periods.
      shared_ptr<vector<Data::CallTimes>> callTimes_ {};
      // The callable time periods for the current outbound call instance.
      shared_ptr<vector<Data::CallableTimes>> callableTimes_ {};
      // The caller number.
      shared_ptr<string> callerNumber_ {};
      // The task concurrency.
      shared_ptr<int64_t> concurrentCount_ {};
      shared_ptr<string> lineEncoding_ {};
      shared_ptr<string> linePhoneNum_ {};
      shared_ptr<int64_t> phoneType_ {};
      // The actual start time of the task. This value is a timestamp in milliseconds.
      shared_ptr<int64_t> realStartTime_ {};
      // The number of retry attempts.
      shared_ptr<int64_t> retryCount_ {};
      // Indicates whether call retry is enabled. Valid values:
      // - true: Enabled.
      // - false: Not enabled.
      shared_ptr<bool> retryEnable_ {};
      // The retry interval. Unit: minutes.
      shared_ptr<int64_t> retryInterval_ {};
      // The list of reasons that allow retry on failure.
      shared_ptr<vector<string>> retryReasons_ {};
      // The scheduled start time of the task. This value is a timestamp in milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The start type. Valid values:
      // 
      // - IMMEDIATE: Start immediately.
      // 
      // - SCHEDULE: Start at a scheduled time.
      shared_ptr<string> startType_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryAiCallTaskDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAiCallTaskDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAiCallTaskDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAiCallTaskDetailResponseBody::Data) };
    inline QueryAiCallTaskDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAiCallTaskDetailResponseBody::Data) };
    inline QueryAiCallTaskDetailResponseBody& setData(const QueryAiCallTaskDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAiCallTaskDetailResponseBody& setData(QueryAiCallTaskDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAiCallTaskDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAiCallTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAiCallTaskDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The access denial details. This field is returned only when RAM authentication fails.
    shared_ptr<string> accessDeniedDetail_ {};
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryAiCallTaskDetailResponseBody::Data> data_ {};
    // The error message. This parameter is not returned for successful calls.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Valid values:
    // - **true**: Successful.
    // - **false**: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
