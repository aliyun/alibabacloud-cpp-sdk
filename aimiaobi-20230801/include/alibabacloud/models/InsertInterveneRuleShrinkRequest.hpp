// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InterveneRuleConfig, interveneRuleConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InterveneRuleConfig, interveneRuleConfigShrink_);
    };
    InsertInterveneRuleShrinkRequest() = default ;
    InsertInterveneRuleShrinkRequest(const InsertInterveneRuleShrinkRequest &) = default ;
    InsertInterveneRuleShrinkRequest(InsertInterveneRuleShrinkRequest &&) = default ;
    InsertInterveneRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneRuleShrinkRequest() = default ;
    InsertInterveneRuleShrinkRequest& operator=(const InsertInterveneRuleShrinkRequest &) = default ;
    InsertInterveneRuleShrinkRequest& operator=(InsertInterveneRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->interveneRuleConfigShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline InsertInterveneRuleShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // interveneRuleConfigShrink Field Functions 
    bool hasInterveneRuleConfigShrink() const { return this->interveneRuleConfigShrink_ != nullptr;};
    void deleteInterveneRuleConfigShrink() { this->interveneRuleConfigShrink_ = nullptr;};
    inline string interveneRuleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(interveneRuleConfigShrink_, "") };
    inline InsertInterveneRuleShrinkRequest& setInterveneRuleConfigShrink(string interveneRuleConfigShrink) { DARABONBA_PTR_SET_VALUE(interveneRuleConfigShrink_, interveneRuleConfigShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> interveneRuleConfigShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
