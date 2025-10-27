// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONRULESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINTERCEPTIONRULESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyInterceptionRuleSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInterceptionRuleSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInterceptionRuleSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
    };
    ModifyInterceptionRuleSwitchRequest() = default ;
    ModifyInterceptionRuleSwitchRequest(const ModifyInterceptionRuleSwitchRequest &) = default ;
    ModifyInterceptionRuleSwitchRequest(ModifyInterceptionRuleSwitchRequest &&) = default ;
    ModifyInterceptionRuleSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInterceptionRuleSwitchRequest() = default ;
    ModifyInterceptionRuleSwitchRequest& operator=(const ModifyInterceptionRuleSwitchRequest &) = default ;
    ModifyInterceptionRuleSwitchRequest& operator=(ModifyInterceptionRuleSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->ruleIds_ == nullptr && return this->ruleSwitch_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyInterceptionRuleSwitchRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline string ruleIds() const { DARABONBA_PTR_GET_DEFAULT(ruleIds_, "") };
    inline ModifyInterceptionRuleSwitchRequest& setRuleIds(string ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline ModifyInterceptionRuleSwitchRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


  protected:
    // The ID of the cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The IDs of the rules whose status you want to change. Separate multiple IDs with commas (,).
    // 
    // > You can call the [ListInterceptionRulePage](https://help.aliyun.com/document_detail/182997.html) operation to query the IDs of rules.
    std::shared_ptr<string> ruleIds_ = nullptr;
    // Specifies whether the rule is enabled. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> ruleSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
