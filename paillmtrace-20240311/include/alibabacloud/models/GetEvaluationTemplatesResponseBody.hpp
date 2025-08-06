// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVALUATIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVALUATIONTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class GetEvaluationTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEvaluationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EvaluationTemplates, evaluationTemplates_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEvaluationTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EvaluationTemplates, evaluationTemplates_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEvaluationTemplatesResponseBody() = default ;
    GetEvaluationTemplatesResponseBody(const GetEvaluationTemplatesResponseBody &) = default ;
    GetEvaluationTemplatesResponseBody(GetEvaluationTemplatesResponseBody &&) = default ;
    GetEvaluationTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEvaluationTemplatesResponseBody() = default ;
    GetEvaluationTemplatesResponseBody& operator=(const GetEvaluationTemplatesResponseBody &) = default ;
    GetEvaluationTemplatesResponseBody& operator=(GetEvaluationTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->evaluationTemplates_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEvaluationTemplatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // evaluationTemplates Field Functions 
    bool hasEvaluationTemplates() const { return this->evaluationTemplates_ != nullptr;};
    void deleteEvaluationTemplates() { this->evaluationTemplates_ = nullptr;};
    inline const vector<Darabonba::Json> & evaluationTemplates() const { DARABONBA_PTR_GET_CONST(evaluationTemplates_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> evaluationTemplates() { DARABONBA_PTR_GET(evaluationTemplates_, vector<Darabonba::Json>) };
    inline GetEvaluationTemplatesResponseBody& setEvaluationTemplates(const vector<Darabonba::Json> & evaluationTemplates) { DARABONBA_PTR_SET_VALUE(evaluationTemplates_, evaluationTemplates) };
    inline GetEvaluationTemplatesResponseBody& setEvaluationTemplates(vector<Darabonba::Json> && evaluationTemplates) { DARABONBA_PTR_SET_RVALUE(evaluationTemplates_, evaluationTemplates) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEvaluationTemplatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEvaluationTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Internal error code. Set only when the response has an error.
    std::shared_ptr<string> code_ = nullptr;
    // A series of templates used internally by the evaluation system to construct LLM interaction information.
    std::shared_ptr<vector<Darabonba::Json>> evaluationTemplates_ = nullptr;
    // Response error message. Set only when the response has an error.
    std::shared_ptr<string> message_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
