// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTNETREDIRECTPOLICYRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTNETREDIRECTPOLICYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreatePolicyGroupRequestNetRedirectPolicyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyGroupRequestNetRedirectPolicyRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyGroupRequestNetRedirectPolicyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    CreatePolicyGroupRequestNetRedirectPolicyRules() = default ;
    CreatePolicyGroupRequestNetRedirectPolicyRules(const CreatePolicyGroupRequestNetRedirectPolicyRules &) = default ;
    CreatePolicyGroupRequestNetRedirectPolicyRules(CreatePolicyGroupRequestNetRedirectPolicyRules &&) = default ;
    CreatePolicyGroupRequestNetRedirectPolicyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyGroupRequestNetRedirectPolicyRules() = default ;
    CreatePolicyGroupRequestNetRedirectPolicyRules& operator=(const CreatePolicyGroupRequestNetRedirectPolicyRules &) = default ;
    CreatePolicyGroupRequestNetRedirectPolicyRules& operator=(CreatePolicyGroupRequestNetRedirectPolicyRules &&) = default ;
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
    inline CreatePolicyGroupRequestNetRedirectPolicyRules& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline CreatePolicyGroupRequestNetRedirectPolicyRules& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The type of the rule.
    // 
    // Valid values:
    // 
    // *   prc: an application package name.
    // *   domain: a domain name.
    std::shared_ptr<string> ruleType_ = nullptr;
    // The name of the application package or domain name.
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
