// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYFAILEDCONTEXTDATABASESYNCRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRYFAILEDCONTEXTDATABASESYNCRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class RetryFailedContextDatabaseSyncRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryFailedContextDatabaseSyncRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RetryFailedContextDatabaseSyncRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RetryFailedContextDatabaseSyncRunResponseBody() = default ;
    RetryFailedContextDatabaseSyncRunResponseBody(const RetryFailedContextDatabaseSyncRunResponseBody &) = default ;
    RetryFailedContextDatabaseSyncRunResponseBody(RetryFailedContextDatabaseSyncRunResponseBody &&) = default ;
    RetryFailedContextDatabaseSyncRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryFailedContextDatabaseSyncRunResponseBody() = default ;
    RetryFailedContextDatabaseSyncRunResponseBody& operator=(const RetryFailedContextDatabaseSyncRunResponseBody &) = default ;
    RetryFailedContextDatabaseSyncRunResponseBody& operator=(RetryFailedContextDatabaseSyncRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RetryOfRunId, retryOfRunId_);
        DARABONBA_PTR_TO_JSON(RunId, runId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RetryOfRunId, retryOfRunId_);
        DARABONBA_PTR_FROM_JSON(RunId, runId_);
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
      virtual bool empty() const override { return this->retryOfRunId_ == nullptr
        && this->runId_ == nullptr; };
      // retryOfRunId Field Functions 
      bool hasRetryOfRunId() const { return this->retryOfRunId_ != nullptr;};
      void deleteRetryOfRunId() { this->retryOfRunId_ = nullptr;};
      inline string getRetryOfRunId() const { DARABONBA_PTR_GET_DEFAULT(retryOfRunId_, "") };
      inline Data& setRetryOfRunId(string retryOfRunId) { DARABONBA_PTR_SET_VALUE(retryOfRunId_, retryOfRunId) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Data& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    protected:
      shared_ptr<string> retryOfRunId_ {};
      shared_ptr<string> runId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RetryFailedContextDatabaseSyncRunResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RetryFailedContextDatabaseSyncRunResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RetryFailedContextDatabaseSyncRunResponseBody::Data) };
    inline RetryFailedContextDatabaseSyncRunResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RetryFailedContextDatabaseSyncRunResponseBody::Data) };
    inline RetryFailedContextDatabaseSyncRunResponseBody& setData(const RetryFailedContextDatabaseSyncRunResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RetryFailedContextDatabaseSyncRunResponseBody& setData(RetryFailedContextDatabaseSyncRunResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline RetryFailedContextDatabaseSyncRunResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RetryFailedContextDatabaseSyncRunResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetryFailedContextDatabaseSyncRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RetryFailedContextDatabaseSyncRunResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<RetryFailedContextDatabaseSyncRunResponseBody::Data> data_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
