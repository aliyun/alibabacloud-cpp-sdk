// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContractResultGenerationResponseBodyOutput.hpp>
#include <alibabacloud/models/RunContractResultGenerationResponseBodyUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
    };
    RunContractResultGenerationResponseBody() = default ;
    RunContractResultGenerationResponseBody(const RunContractResultGenerationResponseBody &) = default ;
    RunContractResultGenerationResponseBody(RunContractResultGenerationResponseBody &&) = default ;
    RunContractResultGenerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationResponseBody() = default ;
    RunContractResultGenerationResponseBody& operator=(const RunContractResultGenerationResponseBody &) = default ;
    RunContractResultGenerationResponseBody& operator=(RunContractResultGenerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->output_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->usage_ == nullptr
        && return this->httpStatusCode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RunContractResultGenerationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunContractResultGenerationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const RunContractResultGenerationResponseBodyOutput & output() const { DARABONBA_PTR_GET_CONST(output_, RunContractResultGenerationResponseBodyOutput) };
    inline RunContractResultGenerationResponseBodyOutput output() { DARABONBA_PTR_GET(output_, RunContractResultGenerationResponseBodyOutput) };
    inline RunContractResultGenerationResponseBody& setOutput(const RunContractResultGenerationResponseBodyOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunContractResultGenerationResponseBody& setOutput(RunContractResultGenerationResponseBodyOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunContractResultGenerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunContractResultGenerationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const RunContractResultGenerationResponseBodyUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, RunContractResultGenerationResponseBodyUsage) };
    inline RunContractResultGenerationResponseBodyUsage usage() { DARABONBA_PTR_GET(usage_, RunContractResultGenerationResponseBodyUsage) };
    inline RunContractResultGenerationResponseBody& setUsage(const RunContractResultGenerationResponseBodyUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunContractResultGenerationResponseBody& setUsage(RunContractResultGenerationResponseBodyUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline RunContractResultGenerationResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<RunContractResultGenerationResponseBodyOutput> output_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<RunContractResultGenerationResponseBodyUsage> usage_ = nullptr;
    std::shared_ptr<string> httpStatusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
