// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDCLUSTERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDCLUSTERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyHybridCloudClusterRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridCloudClusterRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridCloudClusterRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ModifyHybridCloudClusterRuleRequest() = default ;
    ModifyHybridCloudClusterRuleRequest(const ModifyHybridCloudClusterRuleRequest &) = default ;
    ModifyHybridCloudClusterRuleRequest(ModifyHybridCloudClusterRuleRequest &&) = default ;
    ModifyHybridCloudClusterRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridCloudClusterRuleRequest() = default ;
    ModifyHybridCloudClusterRuleRequest& operator=(const ModifyHybridCloudClusterRuleRequest &) = default ;
    ModifyHybridCloudClusterRuleRequest& operator=(ModifyHybridCloudClusterRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterRuleResourceId_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->ruleConfig_ != nullptr
        && this->ruleStatus_ != nullptr && this->ruleType_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline ModifyHybridCloudClusterRuleRequest& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterRuleResourceId Field Functions 
    bool hasClusterRuleResourceId() const { return this->clusterRuleResourceId_ != nullptr;};
    void deleteClusterRuleResourceId() { this->clusterRuleResourceId_ = nullptr;};
    inline string clusterRuleResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterRuleResourceId_, "") };
    inline ModifyHybridCloudClusterRuleRequest& setClusterRuleResourceId(string clusterRuleResourceId) { DARABONBA_PTR_SET_VALUE(clusterRuleResourceId_, clusterRuleResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHybridCloudClusterRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridCloudClusterRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyHybridCloudClusterRuleRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline ModifyHybridCloudClusterRuleRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline ModifyHybridCloudClusterRuleRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ModifyHybridCloudClusterRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The ID of the hybrid cloud cluster.
    std::shared_ptr<int64_t> clusterId_ = nullptr;
    std::shared_ptr<string> clusterRuleResourceId_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the DescribeInstanceInfo operation to query the ID of the WAF instance.[](~~140857~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region of the WAF instance. Valid value:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The configuration of the rule.
    std::shared_ptr<string> ruleConfig_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **on**: enables the rule.
    // *   **off**: disables the rule.
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **pullin**: The traffic redirection rule.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
