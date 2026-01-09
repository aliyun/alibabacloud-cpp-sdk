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
        DARABONBA_PTR_TO_JSON(CallDays, callDays_);
        DARABONBA_PTR_TO_JSON(CallTimes, callTimes_);
        DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
        DARABONBA_PTR_TO_JSON(ConcurrentCount, concurrentCount_);
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
        DARABONBA_PTR_FROM_JSON(CallDays, callDays_);
        DARABONBA_PTR_FROM_JSON(CallTimes, callTimes_);
        DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
        DARABONBA_PTR_FROM_JSON(ConcurrentCount, concurrentCount_);
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
        shared_ptr<string> endTime_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->callDays_ == nullptr && this->callTimes_ == nullptr && this->callerNumber_ == nullptr && this->concurrentCount_ == nullptr
        && this->realStartTime_ == nullptr && this->retryCount_ == nullptr && this->retryEnable_ == nullptr && this->retryInterval_ == nullptr && this->retryReasons_ == nullptr
        && this->startTime_ == nullptr && this->startType_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
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


      // callDays Field Functions 
      bool hasCallDays() const { return this->callDays_ != nullptr;};
      void deleteCallDays() { this->callDays_ = nullptr;};
      inline const vector<string> & getCallDays() const { DARABONBA_PTR_GET_CONST(callDays_, vector<string>) };
      inline vector<string> getCallDays() { DARABONBA_PTR_GET(callDays_, vector<string>) };
      inline Data& setCallDays(const vector<string> & callDays) { DARABONBA_PTR_SET_VALUE(callDays_, callDays) };
      inline Data& setCallDays(vector<string> && callDays) { DARABONBA_PTR_SET_RVALUE(callDays_, callDays) };


      // callTimes Field Functions 
      bool hasCallTimes() const { return this->callTimes_ != nullptr;};
      void deleteCallTimes() { this->callTimes_ = nullptr;};
      inline const vector<Data::CallTimes> & getCallTimes() const { DARABONBA_PTR_GET_CONST(callTimes_, vector<Data::CallTimes>) };
      inline vector<Data::CallTimes> getCallTimes() { DARABONBA_PTR_GET(callTimes_, vector<Data::CallTimes>) };
      inline Data& setCallTimes(const vector<Data::CallTimes> & callTimes) { DARABONBA_PTR_SET_VALUE(callTimes_, callTimes) };
      inline Data& setCallTimes(vector<Data::CallTimes> && callTimes) { DARABONBA_PTR_SET_RVALUE(callTimes_, callTimes) };


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
      shared_ptr<string> agentId_ {};
      shared_ptr<string> agentName_ {};
      shared_ptr<vector<string>> callDays_ {};
      shared_ptr<vector<Data::CallTimes>> callTimes_ {};
      shared_ptr<string> callerNumber_ {};
      shared_ptr<int64_t> concurrentCount_ {};
      shared_ptr<int64_t> realStartTime_ {};
      shared_ptr<int64_t> retryCount_ {};
      shared_ptr<bool> retryEnable_ {};
      shared_ptr<int64_t> retryInterval_ {};
      shared_ptr<vector<string>> retryReasons_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> startType_ {};
      shared_ptr<string> taskId_ {};
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
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<QueryAiCallTaskDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
