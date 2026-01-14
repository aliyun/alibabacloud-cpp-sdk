// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAILTASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMAILTASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetMailTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMailTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMailTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMailTaskStatusResponseBody() = default ;
    GetMailTaskStatusResponseBody(const GetMailTaskStatusResponseBody &) = default ;
    GetMailTaskStatusResponseBody(GetMailTaskStatusResponseBody &&) = default ;
    GetMailTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMailTaskStatusResponseBody() = default ;
    GetMailTaskStatusResponseBody& operator=(const GetMailTaskStatusResponseBody &) = default ;
    GetMailTaskStatusResponseBody& operator=(GetMailTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(execTime, execTime_);
        DARABONBA_PTR_TO_JSON(mailId, mailId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(execTime, execTime_);
        DARABONBA_PTR_FROM_JSON(mailId, mailId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->execTime_ == nullptr
        && this->mailId_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
      // execTime Field Functions 
      bool hasExecTime() const { return this->execTime_ != nullptr;};
      void deleteExecTime() { this->execTime_ = nullptr;};
      inline string getExecTime() const { DARABONBA_PTR_GET_DEFAULT(execTime_, "") };
      inline Result& setExecTime(string execTime) { DARABONBA_PTR_SET_VALUE(execTime_, execTime) };


      // mailId Field Functions 
      bool hasMailId() const { return this->mailId_ != nullptr;};
      void deleteMailId() { this->mailId_ = nullptr;};
      inline string getMailId() const { DARABONBA_PTR_GET_DEFAULT(mailId_, "") };
      inline Result& setMailId(string mailId) { DARABONBA_PTR_SET_VALUE(mailId_, mailId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Result& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // Execution time, in the format yyyy-MM-dd HH:mm:ss
      shared_ptr<string> execTime_ {};
      // Mail ID
      shared_ptr<string> mailId_ {};
      // Mail status. Possible values:
      // 
      // - Success: SENT
      // - Failure: FAILED 
      // - In Progress: PROCESSING
      shared_ptr<string> status_ {};
      // Task ID
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMailTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetMailTaskStatusResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetMailTaskStatusResponseBody::Result>) };
    inline vector<GetMailTaskStatusResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetMailTaskStatusResponseBody::Result>) };
    inline GetMailTaskStatusResponseBody& setResult(const vector<GetMailTaskStatusResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetMailTaskStatusResponseBody& setResult(vector<GetMailTaskStatusResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMailTaskStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return result.
    shared_ptr<vector<GetMailTaskStatusResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Possible values:
    // - true: The request was successful. 
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
