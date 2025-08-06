// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATETRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EVALUATETRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class EvaluateTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EvaluationId, evaluationId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EvaluateTraceResponseBody() = default ;
    EvaluateTraceResponseBody(const EvaluateTraceResponseBody &) = default ;
    EvaluateTraceResponseBody(EvaluateTraceResponseBody &&) = default ;
    EvaluateTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateTraceResponseBody() = default ;
    EvaluateTraceResponseBody& operator=(const EvaluateTraceResponseBody &) = default ;
    EvaluateTraceResponseBody& operator=(EvaluateTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->evaluationId_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EvaluateTraceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // evaluationId Field Functions 
    bool hasEvaluationId() const { return this->evaluationId_ != nullptr;};
    void deleteEvaluationId() { this->evaluationId_ = nullptr;};
    inline string evaluationId() const { DARABONBA_PTR_GET_DEFAULT(evaluationId_, "") };
    inline EvaluateTraceResponseBody& setEvaluationId(string evaluationId) { DARABONBA_PTR_SET_VALUE(evaluationId_, evaluationId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EvaluateTraceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EvaluateTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The internal error code. This parameter is returned if an exception occurred.
    std::shared_ptr<string> code_ = nullptr;
    // the task ID of the evaluation task to which the trace belongs.
    std::shared_ptr<string> evaluationId_ = nullptr;
    // The error message. This parameter is returned if an exception occurred.
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
