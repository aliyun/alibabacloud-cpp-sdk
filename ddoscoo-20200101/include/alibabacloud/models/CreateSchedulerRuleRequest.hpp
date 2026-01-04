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
    // The details of the CDN interaction rule. This parameter is a JSON string. The following list describes the fields in the value of the parameter:
    // 
    // *   **ParamType**: the type of the scheduling rule. This field is required and must be of the string type. Set the value to **cdn**. This indicates that you want to modify a CDN interaction rule.
    // 
    // *   **ParamData**: the values of parameters that you want to modify for the CDN interaction rule. This field is required and must be of the map type. ParamData contains the following parameters:
    // 
    //     *   **Domain**: the accelerated domain in CDN. This parameter is required and must be of the string type.
    //     *   **Cname**: the CNAME that is assigned to the accelerated domain. This parameter is required and must be of the string type.
    //     *   **AccessQps**: the queries per second (QPS) threshold that is used to switch service traffic to Anti-DDoS Pro or Anti-DDoS Premium. This parameter is required and must be of the integer type.
    //     *   **UpstreamQps**: the QPS threshold that is used to switch service traffic to CDN. This parameter is optional and must be of the integer type.
    shared_ptr<string> param_ {};
    // The ID of the resource group to which the instance belongs in Resource Management. This parameter is empty by default, which indicates that the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The type of the rule. Valid values:
    // 
    // *   **2**: tiered protection
    // *   **3**: network acceleration
    // *   **5**: Alibaba Cloud CDN (CDN) interaction
    // *   **6**: cloud service interaction
    // *   **8**: secure acceleration
    // 
    // This parameter is required.
    shared_ptr<int32_t> ruleType_ {};
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
    // 
    // *   **RegionId**: the region where the interaction resource is deployed. This parameter must be specified when **ValueType** is set to **2**. The value must be of the string type.
    // 
    // This parameter is required.
    shared_ptr<string> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
