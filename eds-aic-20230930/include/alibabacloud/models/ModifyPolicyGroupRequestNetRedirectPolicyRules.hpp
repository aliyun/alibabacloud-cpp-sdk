// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUESTNETREDIRECTPOLICYRULES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUESTNETREDIRECTPOLICYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyPolicyGroupRequestNetRedirectPolicyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyGroupRequestNetRedirectPolicyRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyGroupRequestNetRedirectPolicyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ModifyPolicyGroupRequestNetRedirectPolicyRules() = default ;
    ModifyPolicyGroupRequestNetRedirectPolicyRules(const ModifyPolicyGroupRequestNetRedirectPolicyRules &) = default ;
    ModifyPolicyGroupRequestNetRedirectPolicyRules(ModifyPolicyGroupRequestNetRedirectPolicyRules &&) = default ;
    ModifyPolicyGroupRequestNetRedirectPolicyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyGroupRequestNetRedirectPolicyRules() = default ;
    ModifyPolicyGroupRequestNetRedirectPolicyRules& operator=(const ModifyPolicyGroupRequestNetRedirectPolicyRules &) = default ;
    ModifyPolicyGroupRequestNetRedirectPolicyRules& operator=(ModifyPolicyGroupRequestNetRedirectPolicyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleType_ == nullptr
        && return this->target_ == nullptr; };
    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ModifyPolicyGroupRequestNetRedirectPolicyRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ModifyPolicyGroupRequestNetRedirectPolicyRules& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
