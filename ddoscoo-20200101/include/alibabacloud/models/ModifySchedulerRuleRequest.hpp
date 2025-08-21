// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifySchedulerRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySchedulerRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySchedulerRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ModifySchedulerRuleRequest() = default ;
    ModifySchedulerRuleRequest(const ModifySchedulerRuleRequest &) = default ;
    ModifySchedulerRuleRequest(ModifySchedulerRuleRequest &&) = default ;
    ModifySchedulerRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySchedulerRuleRequest() = default ;
    ModifySchedulerRuleRequest& operator=(const ModifySchedulerRuleRequest &) = default ;
    ModifySchedulerRuleRequest& operator=(ModifySchedulerRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->param_ != nullptr
        && this->resourceGroupId_ != nullptr && this->ruleName_ != nullptr && this->ruleType_ != nullptr && this->rules_ != nullptr; };
    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline ModifySchedulerRuleRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifySchedulerRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifySchedulerRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ModifySchedulerRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline ModifySchedulerRuleRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // The details of the CDN interaction rule. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **ParamType**: the type of the scheduling rule. This field is required and must be of the string type. Set the value to **cdn**. This indicates that you want to modify a CDN interaction rule.
    // 
    // *   **ParamData**: the values of parameters that you want to modify for the CDN interaction rule. This field is required and must be of the map type. The ParamData parameter contains the following parameters:
    // 
    //     *   **Domain**: the accelerated domain in CDN. This parameter is required and must be of the string type.
    //     *   **Cname**: the CNAME that is assigned to the accelerated domain. This parameter is required and must be of the string type.
    //     *   **AccessQps**: the queries per second (QPS) threshold that is used to switch service traffic to Anti-DDoS Pro or Anti-DDoS Premium. This parameter is required and must be of the integer type.
    //     *   **UpstreamQps**: the QPS threshold that is used to switch service traffic to CDN. This parameter is optional and must be of the integer type.
    std::shared_ptr<string> param_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the rule that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the scheduling rule. Valid values:
    // 
    // *   **2**: tiered protection
    // *   **3**: network acceleration
    // *   **5**: CDN interaction
    // *   **6**: cloud service interaction
    // *   **8**: secure acceleration
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    // The details of the scheduling rule. This parameter is a JSON string. The following list describes the fields in the value of the parameter:
    // 
    // *   **Type**: the address type of the interaction resource that you want to use in the scheduling rule. This field is required and must be of the string type. Valid values:
    // 
    //     *   **A**: IP address
    //     *   **CNAME**: domain name
    // 
    // *   **Value**: the address of the interaction resource that you want to use in the scheduling rule. This field is required and must be of the string type.
    // 
    // *   **Priority**: the priority of the scheduling rule. This field is required and must be of the integer type. Valid values: **0** to **100**. A larger value indicates a higher priority.
    // 
    // *   **ValueType**: the type of the interaction resource that you want to use in the scheduling rule. This field is required and must be of the integer type. Valid values:
    // 
    //     *   **1**: the IP address of the Anti-DDoS Pro or Anti-DDoS Premium instance
    //     *   **2**: the IP address of the interaction resource in the tiered protection scenario
    //     *   **3**: the IP address that is used to accelerate access in the network acceleration scenario
    //     *   **5**: the domain name that is configured in Alibaba Cloud CDN (CDN) in the CDN interaction scenario
    //     *   **6** the IP address of the interaction resource in the cloud service interaction scenario
    //     *   **8**: the IP address of the Secure Chinese Mainland Acceleration (Sec-CMA) instance in the secure acceleration scenario
    // 
    // *   **RegionId**: the region where the interaction resource is deployed. This parameter must be specified when **ValueType** is set to **2**. The value must be of the string type.
    // 
    // This parameter is required.
    std::shared_ptr<string> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
