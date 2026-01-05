// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBASESYSTEMRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBASESYSTEMRULESRESPONSEBODY_HPP_
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
  class DescribeBaseSystemRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBaseSystemRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBaseSystemRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBaseSystemRulesResponseBody() = default ;
    DescribeBaseSystemRulesResponseBody(const DescribeBaseSystemRulesResponseBody &) = default ;
    DescribeBaseSystemRulesResponseBody(DescribeBaseSystemRulesResponseBody &&) = default ;
    DescribeBaseSystemRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBaseSystemRulesResponseBody() = default ;
    DescribeBaseSystemRulesResponseBody& operator=(const DescribeBaseSystemRulesResponseBody &) = default ;
    DescribeBaseSystemRulesResponseBody& operator=(DescribeBaseSystemRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(CveId, cveId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DetectType, detectType_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(CveId, cveId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DetectType, detectType_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
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
        && this->description_ == nullptr && this->detectType_ == nullptr && this->riskLevel_ == nullptr && this->ruleAction_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->updateTime_ == nullptr; };
      // cveId Field Functions 
      bool hasCveId() const { return this->cveId_ != nullptr;};
      void deleteCveId() { this->cveId_ = nullptr;};
      inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
      inline Rules& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Rules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // detectType Field Functions 
      bool hasDetectType() const { return this->detectType_ != nullptr;};
      void deleteDetectType() { this->detectType_ = nullptr;};
      inline string getDetectType() const { DARABONBA_PTR_GET_DEFAULT(detectType_, "") };
      inline Rules& setDetectType(string detectType) { DARABONBA_PTR_SET_VALUE(detectType_, detectType) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Rules& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
      inline Rules& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


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


      // ruleStatus Field Functions 
      bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
      void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
      inline int32_t getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, 0) };
      inline Rules& setRuleStatus(int32_t ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Rules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> cveId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> detectType_ {};
      shared_ptr<string> riskLevel_ {};
      shared_ptr<string> ruleAction_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<int32_t> ruleStatus_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rules_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBaseSystemRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeBaseSystemRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeBaseSystemRulesResponseBody::Rules>) };
    inline vector<DescribeBaseSystemRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<DescribeBaseSystemRulesResponseBody::Rules>) };
    inline DescribeBaseSystemRulesResponseBody& setRules(const vector<DescribeBaseSystemRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeBaseSystemRulesResponseBody& setRules(vector<DescribeBaseSystemRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBaseSystemRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeBaseSystemRulesResponseBody::Rules>> rules_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
