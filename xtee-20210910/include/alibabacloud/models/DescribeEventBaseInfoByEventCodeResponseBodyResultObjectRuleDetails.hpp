// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTBASEINFOBYEVENTCODERESPONSEBODYRESULTOBJECTRULEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTBASEINFOBYEVENTCODERESPONSEBODYRESULTOBJECTRULEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& obj) { 
      DARABONBA_PTR_TO_JSON(logicExpression, logicExpression_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(ruleActions, ruleActions_);
      DARABONBA_PTR_TO_JSON(ruleAuthType, ruleAuthType_);
      DARABONBA_PTR_TO_JSON(ruleExpressions, ruleExpressions_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(logicExpression, logicExpression_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(ruleActions, ruleActions_);
      DARABONBA_PTR_FROM_JSON(ruleAuthType, ruleAuthType_);
      DARABONBA_PTR_FROM_JSON(ruleExpressions, ruleExpressions_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
    };
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails() = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails(const DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails &) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails(DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails &&) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails() = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& operator=(const DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails &) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& operator=(DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logicExpression_ == nullptr
        && return this->memo_ == nullptr && return this->ruleActions_ == nullptr && return this->ruleAuthType_ == nullptr && return this->ruleExpressions_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr && return this->ruleStatus_ == nullptr; };
    // logicExpression Field Functions 
    bool hasLogicExpression() const { return this->logicExpression_ != nullptr;};
    void deleteLogicExpression() { this->logicExpression_ = nullptr;};
    inline string logicExpression() const { DARABONBA_PTR_GET_DEFAULT(logicExpression_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& setLogicExpression(string logicExpression) { DARABONBA_PTR_SET_VALUE(logicExpression_, logicExpression) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // ruleActions Field Functions 
    bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
    void deleteRuleActions() { this->ruleActions_ = nullptr;};
    inline string ruleActions() const { DARABONBA_PTR_GET_DEFAULT(ruleActions_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& setRuleActions(string ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };


    // ruleAuthType Field Functions 
    bool hasRuleAuthType() const { return this->ruleAuthType_ != nullptr;};
    void deleteRuleAuthType() { this->ruleAuthType_ = nullptr;};
    inline string ruleAuthType() const { DARABONBA_PTR_GET_DEFAULT(ruleAuthType_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& setRuleAuthType(string ruleAuthType) { DARABONBA_PTR_SET_VALUE(ruleAuthType_, ruleAuthType) };


    // ruleExpressions Field Functions 
    bool hasRuleExpressions() const { return this->ruleExpressions_ != nullptr;};
    void deleteRuleExpressions() { this->ruleExpressions_ = nullptr;};
    inline string ruleExpressions() const { DARABONBA_PTR_GET_DEFAULT(ruleExpressions_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& setRuleExpressions(string ruleExpressions) { DARABONBA_PTR_SET_VALUE(ruleExpressions_, ruleExpressions) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


  protected:
    // Policy Execution Logic
    std::shared_ptr<string> logicExpression_ = nullptr;
    // Memo
    std::shared_ptr<string> memo_ = nullptr;
    // Rule Actions
    std::shared_ptr<string> ruleActions_ = nullptr;
    // Policy Type
    std::shared_ptr<string> ruleAuthType_ = nullptr;
    // Event Expressions.
    std::shared_ptr<string> ruleExpressions_ = nullptr;
    // Policy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Policy Name
    std::shared_ptr<string> ruleName_ = nullptr;
    // Policy Status
    std::shared_ptr<string> ruleStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
