// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBASERULECHANGELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBASERULECHANGELOGRESPONSEBODY_HPP_
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
  class DescribeBaseRuleChangeLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBaseRuleChangeLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBaseRuleChangeLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBaseRuleChangeLogResponseBody() = default ;
    DescribeBaseRuleChangeLogResponseBody(const DescribeBaseRuleChangeLogResponseBody &) = default ;
    DescribeBaseRuleChangeLogResponseBody(DescribeBaseRuleChangeLogResponseBody &&) = default ;
    DescribeBaseRuleChangeLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBaseRuleChangeLogResponseBody() = default ;
    DescribeBaseRuleChangeLogResponseBody& operator=(const DescribeBaseRuleChangeLogResponseBody &) = default ;
    DescribeBaseRuleChangeLogResponseBody& operator=(DescribeBaseRuleChangeLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(CveId, cveId_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(CveId, cveId_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      virtual bool empty() const override { return this->cveId_ == nullptr
        && this->operation_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->updateTime_ == nullptr; };
      // cveId Field Functions 
      bool hasCveId() const { return this->cveId_ != nullptr;};
      void deleteCveId() { this->cveId_ = nullptr;};
      inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
      inline Rules& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline Rules& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


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


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Rules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> cveId_ {};
      shared_ptr<string> operation_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rules_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBaseRuleChangeLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeBaseRuleChangeLogResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeBaseRuleChangeLogResponseBody::Rules>) };
    inline vector<DescribeBaseRuleChangeLogResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeBaseRuleChangeLogResponseBody::Rules>) };
    inline DescribeBaseRuleChangeLogResponseBody& setRules(const vector<DescribeBaseRuleChangeLogResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeBaseRuleChangeLogResponseBody& setRules(vector<DescribeBaseRuleChangeLogResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBaseRuleChangeLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeBaseRuleChangeLogResponseBody::Rules>> rules_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
