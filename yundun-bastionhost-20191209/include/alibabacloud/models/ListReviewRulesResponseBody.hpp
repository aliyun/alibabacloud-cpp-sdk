// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREVIEWRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREVIEWRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListReviewRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReviewRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReviewRules, reviewRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListReviewRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReviewRules, reviewRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListReviewRulesResponseBody() = default ;
    ListReviewRulesResponseBody(const ListReviewRulesResponseBody &) = default ;
    ListReviewRulesResponseBody(ListReviewRulesResponseBody &&) = default ;
    ListReviewRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReviewRulesResponseBody() = default ;
    ListReviewRulesResponseBody& operator=(const ListReviewRulesResponseBody &) = default ;
    ListReviewRulesResponseBody& operator=(ListReviewRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReviewRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReviewRules& obj) { 
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(ReviewRuleId, reviewRuleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      };
      friend void from_json(const Darabonba::Json& j, ReviewRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(ReviewRuleId, reviewRuleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      };
      ReviewRules() = default ;
      ReviewRules(const ReviewRules &) = default ;
      ReviewRules(ReviewRules &&) = default ;
      ReviewRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReviewRules() = default ;
      ReviewRules& operator=(const ReviewRules &) = default ;
      ReviewRules& operator=(ReviewRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->remark_ == nullptr
        && this->reviewRuleId_ == nullptr && this->ruleName_ == nullptr && this->scopeType_ == nullptr; };
      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline ReviewRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // reviewRuleId Field Functions 
      bool hasReviewRuleId() const { return this->reviewRuleId_ != nullptr;};
      void deleteReviewRuleId() { this->reviewRuleId_ = nullptr;};
      inline int64_t getReviewRuleId() const { DARABONBA_PTR_GET_DEFAULT(reviewRuleId_, 0L) };
      inline ReviewRules& setReviewRuleId(int64_t reviewRuleId) { DARABONBA_PTR_SET_VALUE(reviewRuleId_, reviewRuleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ReviewRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline int32_t getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, 0) };
      inline ReviewRules& setScopeType(int32_t scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    protected:
      // The remarks of the audit policy.
      shared_ptr<string> remark_ {};
      // The ID of the audit policy.
      shared_ptr<int64_t> reviewRuleId_ {};
      // The name of the audit policy.
      shared_ptr<string> ruleName_ {};
      // The type of the rule that specifies the scope of auditable assets in the audit policy. Valid values:
      // 
      // - **1**: All projects.
      // 
      // - **2**: Specified projects.
      shared_ptr<int32_t> scopeType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->reviewRules_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListReviewRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReviewRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReviewRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewRules Field Functions 
    bool hasReviewRules() const { return this->reviewRules_ != nullptr;};
    void deleteReviewRules() { this->reviewRules_ = nullptr;};
    inline const vector<ListReviewRulesResponseBody::ReviewRules> & getReviewRules() const { DARABONBA_PTR_GET_CONST(reviewRules_, vector<ListReviewRulesResponseBody::ReviewRules>) };
    inline vector<ListReviewRulesResponseBody::ReviewRules> getReviewRules() { DARABONBA_PTR_GET(reviewRules_, vector<ListReviewRulesResponseBody::ReviewRules>) };
    inline ListReviewRulesResponseBody& setReviewRules(const vector<ListReviewRulesResponseBody::ReviewRules> & reviewRules) { DARABONBA_PTR_SET_VALUE(reviewRules_, reviewRules) };
    inline ListReviewRulesResponseBody& setReviewRules(vector<ListReviewRulesResponseBody::ReviewRules> && reviewRules) { DARABONBA_PTR_SET_RVALUE(reviewRules_, reviewRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListReviewRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The value of the MaxResults request parameter. If a valid MaxResults parameter is specified in the request, the specified value is returned. Otherwise, the default value is returned.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. You can use this token in the NextToken request parameter for the next paged query. If this field is empty in the response, no more data is available.
    shared_ptr<string> nextToken_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // The audit policy list.
    shared_ptr<vector<ListReviewRulesResponseBody::ReviewRules>> reviewRules_ {};
    // The total number of queried audit policy entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
