// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitBatchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubmitResult, submitResult_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubmitResult, submitResult_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SubmitBatchTaskResponseBody() = default ;
    SubmitBatchTaskResponseBody(const SubmitBatchTaskResponseBody &) = default ;
    SubmitBatchTaskResponseBody(SubmitBatchTaskResponseBody &&) = default ;
    SubmitBatchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchTaskResponseBody() = default ;
    SubmitBatchTaskResponseBody& operator=(const SubmitBatchTaskResponseBody &) = default ;
    SubmitBatchTaskResponseBody& operator=(SubmitBatchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitResult& obj) { 
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(SubmitId, submitId_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitResult& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(SubmitId, submitId_);
      };
      SubmitResult() = default ;
      SubmitResult(const SubmitResult &) = default ;
      SubmitResult(SubmitResult &&) = default ;
      SubmitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitResult() = default ;
      SubmitResult& operator=(const SubmitResult &) = default ;
      SubmitResult& operator=(SubmitResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->submitId_ == nullptr; };
      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline SubmitResult& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // submitId Field Functions 
      bool hasSubmitId() const { return this->submitId_ != nullptr;};
      void deleteSubmitId() { this->submitId_ = nullptr;};
      inline int64_t getSubmitId() const { DARABONBA_PTR_GET_DEFAULT(submitId_, 0L) };
      inline SubmitResult& setSubmitId(int64_t submitId) { DARABONBA_PTR_SET_VALUE(submitId_, submitId) };


    protected:
      shared_ptr<string> nodeId_ {};
      shared_ptr<int64_t> submitId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->submitResult_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitBatchTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SubmitBatchTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitBatchTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitBatchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // submitResult Field Functions 
    bool hasSubmitResult() const { return this->submitResult_ != nullptr;};
    void deleteSubmitResult() { this->submitResult_ = nullptr;};
    inline const SubmitBatchTaskResponseBody::SubmitResult & getSubmitResult() const { DARABONBA_PTR_GET_CONST(submitResult_, SubmitBatchTaskResponseBody::SubmitResult) };
    inline SubmitBatchTaskResponseBody::SubmitResult getSubmitResult() { DARABONBA_PTR_GET(submitResult_, SubmitBatchTaskResponseBody::SubmitResult) };
    inline SubmitBatchTaskResponseBody& setSubmitResult(const SubmitBatchTaskResponseBody::SubmitResult & submitResult) { DARABONBA_PTR_SET_VALUE(submitResult_, submitResult) };
    inline SubmitBatchTaskResponseBody& setSubmitResult(SubmitBatchTaskResponseBody::SubmitResult && submitResult) { DARABONBA_PTR_SET_RVALUE(submitResult_, submitResult) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SubmitBatchTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<SubmitBatchTaskResponseBody::SubmitResult> submitResult_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
