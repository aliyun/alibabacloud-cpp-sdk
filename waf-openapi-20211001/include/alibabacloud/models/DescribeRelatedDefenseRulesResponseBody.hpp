// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERELATEDDEFENSERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERELATEDDEFENSERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRelatedDefenseRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRelatedDefenseRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRelatedDefenseRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRelatedDefenseRulesResponseBody() = default ;
    DescribeRelatedDefenseRulesResponseBody(const DescribeRelatedDefenseRulesResponseBody &) = default ;
    DescribeRelatedDefenseRulesResponseBody(DescribeRelatedDefenseRulesResponseBody &&) = default ;
    DescribeRelatedDefenseRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRelatedDefenseRulesResponseBody() = default ;
    DescribeRelatedDefenseRulesResponseBody& operator=(const DescribeRelatedDefenseRulesResponseBody &) = default ;
    DescribeRelatedDefenseRulesResponseBody& operator=(DescribeRelatedDefenseRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_TO_JSON(DefenseType, defenseType_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_FROM_JSON(DefenseType, defenseType_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->defenseType_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->templateId_ == nullptr; };
      // defenseScene Field Functions 
      bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
      void deleteDefenseScene() { this->defenseScene_ = nullptr;};
      inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
      inline Rules& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


      // defenseType Field Functions 
      bool hasDefenseType() const { return this->defenseType_ != nullptr;};
      void deleteDefenseType() { this->defenseType_ = nullptr;};
      inline string getDefenseType() const { DARABONBA_PTR_GET_DEFAULT(defenseType_, "") };
      inline Rules& setDefenseType(string defenseType) { DARABONBA_PTR_SET_VALUE(defenseType_, defenseType) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Rules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Rules& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> defenseScene_ {};
      shared_ptr<string> defenseType_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeRelatedDefenseRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRelatedDefenseRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRelatedDefenseRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeRelatedDefenseRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeRelatedDefenseRulesResponseBody::Rules>) };
    inline vector<DescribeRelatedDefenseRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeRelatedDefenseRulesResponseBody::Rules>) };
    inline DescribeRelatedDefenseRulesResponseBody& setRules(const vector<DescribeRelatedDefenseRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeRelatedDefenseRulesResponseBody& setRules(vector<DescribeRelatedDefenseRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeRelatedDefenseRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeRelatedDefenseRulesResponseBody::Rules>> rules_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
