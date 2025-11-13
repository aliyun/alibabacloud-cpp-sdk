// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContractRuleGenerationResponseBodyOutput.hpp>
#include <alibabacloud/models/RunContractRuleGenerationResponseBodyUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractRuleGenerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractRuleGenerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractRuleGenerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
    };
    RunContractRuleGenerationResponseBody() = default ;
    RunContractRuleGenerationResponseBody(const RunContractRuleGenerationResponseBody &) = default ;
    RunContractRuleGenerationResponseBody(RunContractRuleGenerationResponseBody &&) = default ;
    RunContractRuleGenerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractRuleGenerationResponseBody() = default ;
    RunContractRuleGenerationResponseBody& operator=(const RunContractRuleGenerationResponseBody &) = default ;
    RunContractRuleGenerationResponseBody& operator=(RunContractRuleGenerationResponseBody &&) = default ;
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
    inline RunContractRuleGenerationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunContractRuleGenerationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const RunContractRuleGenerationResponseBodyOutput & output() const { DARABONBA_PTR_GET_CONST(output_, RunContractRuleGenerationResponseBodyOutput) };
    inline RunContractRuleGenerationResponseBodyOutput output() { DARABONBA_PTR_GET(output_, RunContractRuleGenerationResponseBodyOutput) };
    inline RunContractRuleGenerationResponseBody& setOutput(const RunContractRuleGenerationResponseBodyOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunContractRuleGenerationResponseBody& setOutput(RunContractRuleGenerationResponseBodyOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunContractRuleGenerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunContractRuleGenerationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const RunContractRuleGenerationResponseBodyUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, RunContractRuleGenerationResponseBodyUsage) };
    inline RunContractRuleGenerationResponseBodyUsage usage() { DARABONBA_PTR_GET(usage_, RunContractRuleGenerationResponseBodyUsage) };
    inline RunContractRuleGenerationResponseBody& setUsage(const RunContractRuleGenerationResponseBodyUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunContractRuleGenerationResponseBody& setUsage(RunContractRuleGenerationResponseBodyUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline RunContractRuleGenerationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<RunContractRuleGenerationResponseBodyOutput> output_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<RunContractRuleGenerationResponseBodyUsage> usage_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
