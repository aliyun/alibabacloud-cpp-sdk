// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERECOMMENDMANAGEDRULESRESPONSEBODYRECOMMENDEDMANAGEDRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERECOMMENDMANAGEDRULESRESPONSEBODYRECOMMENDEDMANAGEDRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RecommendedManagedRuleList, recommendedManagedRuleList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RecommendedManagedRuleList, recommendedManagedRuleList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules() = default ;
    ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules(const ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules &) = default ;
    ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules(ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules &&) = default ;
    ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules() = default ;
    ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& operator=(const ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules &) = default ;
    ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& operator=(ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->recommendedManagedRuleList_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recommendedManagedRuleList Field Functions 
    bool hasRecommendedManagedRuleList() const { return this->recommendedManagedRuleList_ != nullptr;};
    void deleteRecommendedManagedRuleList() { this->recommendedManagedRuleList_ = nullptr;};
    inline const vector<Models::ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList> & recommendedManagedRuleList() const { DARABONBA_PTR_GET_CONST(recommendedManagedRuleList_, vector<Models::ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList>) };
    inline vector<Models::ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList> recommendedManagedRuleList() { DARABONBA_PTR_GET(recommendedManagedRuleList_, vector<Models::ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList>) };
    inline ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& setRecommendedManagedRuleList(const vector<Models::ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList> & recommendedManagedRuleList) { DARABONBA_PTR_SET_VALUE(recommendedManagedRuleList_, recommendedManagedRuleList) };
    inline ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& setRecommendedManagedRuleList(vector<Models::ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList> && recommendedManagedRuleList) { DARABONBA_PTR_SET_RVALUE(recommendedManagedRuleList_, recommendedManagedRuleList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRules& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<Models::ListAggregateRecommendManagedRulesResponseBodyRecommendedManagedRulesRecommendedManagedRuleList>> recommendedManagedRuleList_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
