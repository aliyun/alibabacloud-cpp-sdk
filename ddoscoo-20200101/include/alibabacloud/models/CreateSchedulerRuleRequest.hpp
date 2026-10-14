// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class CreateSchedulerRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSchedulerRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSchedulerRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    CreateSchedulerRuleRequest() = default ;
    CreateSchedulerRuleRequest(const CreateSchedulerRuleRequest &) = default ;
    CreateSchedulerRuleRequest(CreateSchedulerRuleRequest &&) = default ;
    CreateSchedulerRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSchedulerRuleRequest() = default ;
    CreateSchedulerRuleRequest& operator=(const CreateSchedulerRuleRequest &) = default ;
    CreateSchedulerRuleRequest& operator=(CreateSchedulerRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->param_ == nullptr
        && this->resourceGroupId_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->rules_ == nullptr; };
    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline CreateSchedulerRuleRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSchedulerRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateSchedulerRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline CreateSchedulerRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline CreateSchedulerRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // The details of the CDN interaction rule. This parameter is a JSON format character string. The following list describes the structure:
    // - **ParamType**: Required. String type. The type of CDN interaction. Valid values: **cdn**, which indicates CDN interaction.
    // - **ParamData**: Required. Map type. The CDN interaction parameters. The following list describes the structure:
    //     - **Domain**: Required. String type. The CDN-accelerated domain name.
    //     - **Cname**: Required. String type. The CNAME of the accelerated domain name.
    //     - **AccessQps**: Required. Integer type. The access QPS threshold. If the QPS exceeds this threshold, traffic is switched to Anti-DDoS Pro and Anti-DDoS Premium.
    //     - **UpstreamQps**: Optional. Integer type. The back-to-origin QPS threshold. If the QPS is lower than this threshold, traffic is switched to CDN.
    shared_ptr<string> param_ {};
    // The ID of the resource group to which the Anti-DDoS Pro or Anti-DDoS Premium instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The type of the rule. Valid values:
    // - **2**: tiered protection
    // - **3**: acceleration for China-to-global traffic
    // - **5**: CDN interaction
    // - **6**: cloud service interaction
    // - **8**: secure acceleration
    // 
    // This parameter is required.
    shared_ptr<int32_t> ruleType_ {};
    // The details of the general interaction rule. This parameter is a JSON string that consists of the following characters. The following list describes the structure:
    // - **Type**: String type. Required. The format of the Resource for Interaction address. Valid values:
    //     - **A**: IP address
    //     - **CNAME**: domain name
    // - **Value**: String type. Required. The address of the Resource for Interaction.
    // - **Priority**: Integer type. Required. The priority of the rule. Valid values: **0** to **100**. A larger value indicates a higher priority.
    // - **ValueType**: Integer type. Required. The type of the Resource for Interaction. Valid values:
    //     - **1**: IP Address of Anti-DDoS Proxy instance 
    //     - **2**: (Tiered protection) IP addresses of cloud resources
    //     - **3**: (Sec-acceleration for China-to-global traffic) acceleration line IP address
    //     - **5**: (CDN interaction) acceleration domain name
    //     - **6**: (Cloud service interaction) IP addresses of cloud resources
    // - **RegionId**: String type. Optional (required when **ValueType** is **2**). The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
