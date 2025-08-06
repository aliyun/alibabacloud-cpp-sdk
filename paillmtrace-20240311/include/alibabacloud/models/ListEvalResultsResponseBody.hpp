// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALRESULTSRESPONSEBODY_HPP_
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
  class ListEvalResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvalResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvalResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEvalResultsResponseBody() = default ;
    ListEvalResultsResponseBody(const ListEvalResultsResponseBody &) = default ;
    ListEvalResultsResponseBody(ListEvalResultsResponseBody &&) = default ;
    ListEvalResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvalResultsResponseBody() = default ;
    ListEvalResultsResponseBody& operator=(const ListEvalResultsResponseBody &) = default ;
    ListEvalResultsResponseBody& operator=(ListEvalResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->evaluationResults_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEvalResultsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // evaluationResults Field Functions 
    bool hasEvaluationResults() const { return this->evaluationResults_ != nullptr;};
    void deleteEvaluationResults() { this->evaluationResults_ = nullptr;};
    inline const vector<string> & evaluationResults() const { DARABONBA_PTR_GET_CONST(evaluationResults_, vector<string>) };
    inline vector<string> evaluationResults() { DARABONBA_PTR_GET(evaluationResults_, vector<string>) };
    inline ListEvalResultsResponseBody& setEvaluationResults(const vector<string> & evaluationResults) { DARABONBA_PTR_SET_VALUE(evaluationResults_, evaluationResults) };
    inline ListEvalResultsResponseBody& setEvaluationResults(vector<string> && evaluationResults) { DARABONBA_PTR_SET_RVALUE(evaluationResults_, evaluationResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEvalResultsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvalResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListEvalResultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The internal error code. This parameter is returned only when an error occurs.
    std::shared_ptr<string> code_ = nullptr;
    // The evaluation results.
    std::shared_ptr<vector<string>> evaluationResults_ = nullptr;
    // The error message. This parameter is returned only when an error occurs.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the POP request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of results that meet the condition.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
