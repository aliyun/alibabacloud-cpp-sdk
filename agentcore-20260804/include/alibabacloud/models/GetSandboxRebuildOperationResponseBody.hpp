// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSANDBOXREBUILDOPERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSANDBOXREBUILDOPERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetSandboxRebuildOperationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSandboxRebuildOperationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSandboxRebuildOperationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetSandboxRebuildOperationResponseBody() = default ;
    GetSandboxRebuildOperationResponseBody(const GetSandboxRebuildOperationResponseBody &) = default ;
    GetSandboxRebuildOperationResponseBody(GetSandboxRebuildOperationResponseBody &&) = default ;
    GetSandboxRebuildOperationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSandboxRebuildOperationResponseBody() = default ;
    GetSandboxRebuildOperationResponseBody& operator=(const GetSandboxRebuildOperationResponseBody &) = default ;
    GetSandboxRebuildOperationResponseBody& operator=(GetSandboxRebuildOperationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(error, error_);
        DARABONBA_PTR_TO_JSON(operationId, operationId_);
        DARABONBA_PTR_TO_JSON(sandboxId, sandboxId_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(error, error_);
        DARABONBA_PTR_FROM_JSON(operationId, operationId_);
        DARABONBA_PTR_FROM_JSON(sandboxId, sandboxId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The task error code. This code is used to distinguish between rebuild failures, subsequent instance creation failures, cancellations, or supersessions.
        shared_ptr<string> code_ {};
        // The publicly accessible task error message. Keep the task ID for troubleshooting.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->error_ == nullptr
        && this->operationId_ == nullptr && this->sandboxId_ == nullptr && this->status_ == nullptr; };
      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Data::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Data::Error) };
      inline Data::Error getError() { DARABONBA_PTR_GET(error_, Data::Error) };
      inline Data& setError(const Data::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Data& setError(Data::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline Data& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // sandboxId Field Functions 
      bool hasSandboxId() const { return this->sandboxId_ != nullptr;};
      void deleteSandboxId() { this->sandboxId_ = nullptr;};
      inline string getSandboxId() const { DARABONBA_PTR_GET_DEFAULT(sandboxId_, "") };
      inline Data& setSandboxId(string sandboxId) { DARABONBA_PTR_SET_VALUE(sandboxId_, sandboxId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The publicly accessible node error. This error is returned when the node fails, is canceled, or subsequent operations override it. It can be empty in other states.
      shared_ptr<Data::Error> error_ {};
      // The initial rebuild task ID. Use the operationId returned by RebuildSandbox. Always use this ID to query the overall result. You do not need to switch to the ID of a subsequent creation task.
      shared_ptr<string> operationId_ {};
      // The logical sandbox ID corresponding to this rebuild. The logical ID remains unchanged after the rebuild.
      shared_ptr<string> sandboxId_ {};
      // The overall rebuild status. Valid values:
      // - PENDING: Waiting to be processed.
      // - RUNNING: execute in progress.
      // - SUCCEEDED: Overall success.
      // - FAILED: Failed.
      // - CANCELED: Canceled.
      // - SUPERSEDED: override by subsequent operations.
      // - UNKNOWN: Unconfirmed.
      // Only SUCCEEDED indicates completion. Do not treat UNKNOWN, missing status, or query exceptions as success, and do not automatically resubmit the rebuild.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSandboxRebuildOperationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSandboxRebuildOperationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSandboxRebuildOperationResponseBody::Data) };
    inline GetSandboxRebuildOperationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSandboxRebuildOperationResponseBody::Data) };
    inline GetSandboxRebuildOperationResponseBody& setData(const GetSandboxRebuildOperationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSandboxRebuildOperationResponseBody& setData(GetSandboxRebuildOperationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSandboxRebuildOperationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSandboxRebuildOperationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSandboxRebuildOperationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSandboxRebuildOperationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code of the API request. A successful request returns SUCCESS. Query the asynchronous task result separately.
    shared_ptr<string> code_ {};
    // The overall result of the rebuild task.
    shared_ptr<GetSandboxRebuildOperationResponseBody::Data> data_ {};
    // The HTTP status code of the API request.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The result message of the API request. This message does not indicate that the asynchronous rebuild task is completed.
    shared_ptr<string> message_ {};
    // The request ID used to trace the API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API request is successful. A value of true does not indicate that the sandbox rebuild is completed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
