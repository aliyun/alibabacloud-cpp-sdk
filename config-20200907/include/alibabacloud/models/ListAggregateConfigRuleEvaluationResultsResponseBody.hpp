// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigRuleEvaluationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigRuleEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigRuleEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateConfigRuleEvaluationResultsResponseBody() = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBody(const ListAggregateConfigRuleEvaluationResultsResponseBody &) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBody(ListAggregateConfigRuleEvaluationResultsResponseBody &&) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigRuleEvaluationResultsResponseBody() = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBody& operator=(const ListAggregateConfigRuleEvaluationResultsResponseBody &) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBody& operator=(ListAggregateConfigRuleEvaluationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->evaluationResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // evaluationResults Field Functions 
    bool hasEvaluationResults() const { return this->evaluationResults_ != nullptr;};
    void deleteEvaluationResults() { this->evaluationResults_ = nullptr;};
    inline const ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults & evaluationResults() const { DARABONBA_PTR_GET_CONST(evaluationResults_, ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults evaluationResults() { DARABONBA_PTR_GET(evaluationResults_, ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBody& setEvaluationResults(const ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults & evaluationResults) { DARABONBA_PTR_SET_VALUE(evaluationResults_, evaluationResults) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBody& setEvaluationResults(ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults && evaluationResults) { DARABONBA_PTR_SET_RVALUE(evaluationResults_, evaluationResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateConfigRuleEvaluationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance evaluation results returned.
    std::shared_ptr<ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults> evaluationResults_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
