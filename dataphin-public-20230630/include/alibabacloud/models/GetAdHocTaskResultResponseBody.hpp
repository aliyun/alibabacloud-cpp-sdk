// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADHOCTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADHOCTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAdHocTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdHocTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExecuteResult, executeResult_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdHocTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExecuteResult, executeResult_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAdHocTaskResultResponseBody() = default ;
    GetAdHocTaskResultResponseBody(const GetAdHocTaskResultResponseBody &) = default ;
    GetAdHocTaskResultResponseBody(GetAdHocTaskResultResponseBody &&) = default ;
    GetAdHocTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdHocTaskResultResponseBody() = default ;
    GetAdHocTaskResultResponseBody& operator=(const GetAdHocTaskResultResponseBody &) = default ;
    GetAdHocTaskResultResponseBody& operator=(GetAdHocTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecuteResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecuteResult& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(ScheduleTaskId, scheduleTaskId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, ExecuteResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(ScheduleTaskId, scheduleTaskId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      ExecuteResult() = default ;
      ExecuteResult(const ExecuteResult &) = default ;
      ExecuteResult(ExecuteResult &&) = default ;
      ExecuteResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecuteResult() = default ;
      ExecuteResult& operator=(const ExecuteResult &) = default ;
      ExecuteResult& operator=(ExecuteResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->result_ == nullptr
        && this->scheduleTaskId_ == nullptr && this->taskId_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline ExecuteResult& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // scheduleTaskId Field Functions 
      bool hasScheduleTaskId() const { return this->scheduleTaskId_ != nullptr;};
      void deleteScheduleTaskId() { this->scheduleTaskId_ = nullptr;};
      inline string getScheduleTaskId() const { DARABONBA_PTR_GET_DEFAULT(scheduleTaskId_, "") };
      inline ExecuteResult& setScheduleTaskId(string scheduleTaskId) { DARABONBA_PTR_SET_VALUE(scheduleTaskId_, scheduleTaskId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ExecuteResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> result_ {};
      shared_ptr<string> scheduleTaskId_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->executeResult_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAdHocTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // executeResult Field Functions 
    bool hasExecuteResult() const { return this->executeResult_ != nullptr;};
    void deleteExecuteResult() { this->executeResult_ = nullptr;};
    inline const GetAdHocTaskResultResponseBody::ExecuteResult & getExecuteResult() const { DARABONBA_PTR_GET_CONST(executeResult_, GetAdHocTaskResultResponseBody::ExecuteResult) };
    inline GetAdHocTaskResultResponseBody::ExecuteResult getExecuteResult() { DARABONBA_PTR_GET(executeResult_, GetAdHocTaskResultResponseBody::ExecuteResult) };
    inline GetAdHocTaskResultResponseBody& setExecuteResult(const GetAdHocTaskResultResponseBody::ExecuteResult & executeResult) { DARABONBA_PTR_SET_VALUE(executeResult_, executeResult) };
    inline GetAdHocTaskResultResponseBody& setExecuteResult(GetAdHocTaskResultResponseBody::ExecuteResult && executeResult) { DARABONBA_PTR_SET_RVALUE(executeResult_, executeResult) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAdHocTaskResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAdHocTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAdHocTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAdHocTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAdHocTaskResultResponseBody::ExecuteResult> executeResult_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
