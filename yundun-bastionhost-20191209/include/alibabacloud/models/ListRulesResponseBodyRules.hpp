// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleState, ruleState_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleState, ruleState_);
    };
    ListRulesResponseBodyRules() = default ;
    ListRulesResponseBodyRules(const ListRulesResponseBodyRules &) = default ;
    ListRulesResponseBodyRules(ListRulesResponseBodyRules &&) = default ;
    ListRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRules() = default ;
    ListRulesResponseBodyRules& operator=(const ListRulesResponseBodyRules &) = default ;
    ListRulesResponseBodyRules& operator=(ListRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->effectiveEndTime_ != nullptr && this->effectiveStartTime_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->ruleState_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListRulesResponseBodyRules& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline int64_t effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, 0L) };
    inline ListRulesResponseBodyRules& setEffectiveEndTime(int64_t effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline int64_t effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, 0L) };
    inline ListRulesResponseBodyRules& setEffectiveStartTime(int64_t effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ListRulesResponseBodyRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListRulesResponseBodyRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleState Field Functions 
    bool hasRuleState() const { return this->ruleState_ != nullptr;};
    void deleteRuleState() { this->ruleState_ = nullptr;};
    inline string ruleState() const { DARABONBA_PTR_GET_DEFAULT(ruleState_, "") };
    inline ListRulesResponseBodyRules& setRuleState(string ruleState) { DARABONBA_PTR_SET_VALUE(ruleState_, ruleState) };


  protected:
    // The remarks of the authorization rule.
    std::shared_ptr<string> comment_ = nullptr;
    // The end time of the validity period of the authorization rule. The value is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> effectiveEndTime_ = nullptr;
    // The start time of the validity period of the authorization rule. The value is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> effectiveStartTime_ = nullptr;
    // The authorization rule ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the authorization rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The state of the authorization rule.
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> ruleState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
