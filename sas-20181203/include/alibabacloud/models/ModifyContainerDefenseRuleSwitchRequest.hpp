// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTAINERDEFENSERULESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTAINERDEFENSERULESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyContainerDefenseRuleSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyContainerDefenseRuleSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyContainerDefenseRuleSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
    };
    ModifyContainerDefenseRuleSwitchRequest() = default ;
    ModifyContainerDefenseRuleSwitchRequest(const ModifyContainerDefenseRuleSwitchRequest &) = default ;
    ModifyContainerDefenseRuleSwitchRequest(ModifyContainerDefenseRuleSwitchRequest &&) = default ;
    ModifyContainerDefenseRuleSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyContainerDefenseRuleSwitchRequest() = default ;
    ModifyContainerDefenseRuleSwitchRequest& operator=(const ModifyContainerDefenseRuleSwitchRequest &) = default ;
    ModifyContainerDefenseRuleSwitchRequest& operator=(ModifyContainerDefenseRuleSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleIds_ != nullptr
        && this->ruleSwitch_ != nullptr; };
    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<int64_t> & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
    inline vector<int64_t> ruleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
    inline ModifyContainerDefenseRuleSwitchRequest& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline ModifyContainerDefenseRuleSwitchRequest& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline ModifyContainerDefenseRuleSwitchRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


  protected:
    // The IDs of the rules.
    std::shared_ptr<vector<int64_t>> ruleIds_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> ruleSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
