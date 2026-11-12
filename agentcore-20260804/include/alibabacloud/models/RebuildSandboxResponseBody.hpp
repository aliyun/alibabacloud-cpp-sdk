// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBUILDSANDBOXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REBUILDSANDBOXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class RebuildSandboxResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebuildSandboxResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RebuildSandboxResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    RebuildSandboxResponseBody() = default ;
    RebuildSandboxResponseBody(const RebuildSandboxResponseBody &) = default ;
    RebuildSandboxResponseBody(RebuildSandboxResponseBody &&) = default ;
    RebuildSandboxResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebuildSandboxResponseBody() = default ;
    RebuildSandboxResponseBody& operator=(const RebuildSandboxResponseBody &) = default ;
    RebuildSandboxResponseBody& operator=(RebuildSandboxResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(incarnation, incarnation_);
        DARABONBA_PTR_TO_JSON(operationId, operationId_);
        DARABONBA_PTR_TO_JSON(sandboxId, sandboxId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(incarnation, incarnation_);
        DARABONBA_PTR_FROM_JSON(operationId, operationId_);
        DARABONBA_PTR_FROM_JSON(sandboxId, sandboxId_);
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
      virtual bool empty() const override { return this->incarnation_ == nullptr
        && this->operationId_ == nullptr && this->sandboxId_ == nullptr; };
      // incarnation Field Functions 
      bool hasIncarnation() const { return this->incarnation_ != nullptr;};
      void deleteIncarnation() { this->incarnation_ = nullptr;};
      inline int64_t getIncarnation() const { DARABONBA_PTR_GET_DEFAULT(incarnation_, 0L) };
      inline Data& setIncarnation(int64_t incarnation) { DARABONBA_PTR_SET_VALUE(incarnation_, incarnation) };


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


    protected:
      // The target instance incarnation for this rebuild. The rebuild increases the incarnation. The returned value only indicates that the request is accepted, not that the new instance is ready.
      shared_ptr<int64_t> incarnation_ {};
      // The initial rebuild task ID. Use the operationId returned by RebuildSandbox. Always use this ID to query the overall result. You do not need to switch to the IDs of subsequently created tasks.
      shared_ptr<string> operationId_ {};
      // The logical sandbox ID corresponding to this rebuild. The logical ID remains unchanged after the rebuild.
      shared_ptr<string> sandboxId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RebuildSandboxResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RebuildSandboxResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RebuildSandboxResponseBody::Data) };
    inline RebuildSandboxResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RebuildSandboxResponseBody::Data) };
    inline RebuildSandboxResponseBody& setData(const RebuildSandboxResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RebuildSandboxResponseBody& setData(RebuildSandboxResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline RebuildSandboxResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RebuildSandboxResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RebuildSandboxResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RebuildSandboxResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Task result code of this API request. A successful request returns SUCCESS. Query task result of the asynchronous task separately.
    shared_ptr<string> code_ {};
    // The acceptance result of the rebuild request.
    shared_ptr<RebuildSandboxResponseBody::Data> data_ {};
    // The HTTP status code corresponding to this API request.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The result description of this API request. This does not indicate that the asynchronous rebuild task is complete.
    shared_ptr<string> message_ {};
    // The request ID used to trace this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether this API request is successful. A value of true does not indicate that the sandbox rebuild is complete.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
