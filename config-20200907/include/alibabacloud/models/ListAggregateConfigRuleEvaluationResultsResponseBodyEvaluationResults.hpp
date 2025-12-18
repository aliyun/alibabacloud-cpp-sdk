// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSRESPONSEBODYEVALUATIONRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULEEVALUATIONRESULTSRESPONSEBODYEVALUATIONRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationResultList, evaluationResultList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationResultList, evaluationResultList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults() = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults(const ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults &) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults(ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults &&) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults() = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults& operator=(const ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults &) = default ;
    ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults& operator=(ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->evaluationResultList_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // evaluationResultList Field Functions 
    bool hasEvaluationResultList() const { return this->evaluationResultList_ != nullptr;};
    void deleteEvaluationResultList() { this->evaluationResultList_ = nullptr;};
    inline const vector<Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> & evaluationResultList() const { DARABONBA_PTR_GET_CONST(evaluationResultList_, vector<Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>) };
    inline vector<Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> evaluationResultList() { DARABONBA_PTR_GET(evaluationResultList_, vector<Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults& setEvaluationResultList(const vector<Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> & evaluationResultList) { DARABONBA_PTR_SET_VALUE(evaluationResultList_, evaluationResultList) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults& setEvaluationResultList(vector<Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList> && evaluationResultList) { DARABONBA_PTR_SET_RVALUE(evaluationResultList_, evaluationResultList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResults& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The details of the compliance evaluation result.
    std::shared_ptr<vector<Models::ListAggregateConfigRuleEvaluationResultsResponseBodyEvaluationResultsEvaluationResultList>> evaluationResultList_ = nullptr;
    // The maximum number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
