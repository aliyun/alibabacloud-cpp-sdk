// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINGRESSRESPONSEBODYDATARULESRULEACTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINGRESSRESPONSEBODYDATARULESRULEACTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeIngressResponseBodyDataRulesRuleActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIngressResponseBodyDataRulesRuleActions& obj) { 
      DARABONBA_PTR_TO_JSON(ActionConfig, actionConfig_);
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIngressResponseBodyDataRulesRuleActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionConfig, actionConfig_);
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
    };
    DescribeIngressResponseBodyDataRulesRuleActions() = default ;
    DescribeIngressResponseBodyDataRulesRuleActions(const DescribeIngressResponseBodyDataRulesRuleActions &) = default ;
    DescribeIngressResponseBodyDataRulesRuleActions(DescribeIngressResponseBodyDataRulesRuleActions &&) = default ;
    DescribeIngressResponseBodyDataRulesRuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIngressResponseBodyDataRulesRuleActions() = default ;
    DescribeIngressResponseBodyDataRulesRuleActions& operator=(const DescribeIngressResponseBodyDataRulesRuleActions &) = default ;
    DescribeIngressResponseBodyDataRulesRuleActions& operator=(DescribeIngressResponseBodyDataRulesRuleActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionConfig_ == nullptr
        && return this->actionType_ == nullptr; };
    // actionConfig Field Functions 
    bool hasActionConfig() const { return this->actionConfig_ != nullptr;};
    void deleteActionConfig() { this->actionConfig_ = nullptr;};
    inline string actionConfig() const { DARABONBA_PTR_GET_DEFAULT(actionConfig_, "") };
    inline DescribeIngressResponseBodyDataRulesRuleActions& setActionConfig(string actionConfig) { DARABONBA_PTR_SET_VALUE(actionConfig_, actionConfig) };


    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline DescribeIngressResponseBodyDataRulesRuleActions& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


  protected:
    std::shared_ptr<string> actionConfig_ = nullptr;
    std::shared_ptr<string> actionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
