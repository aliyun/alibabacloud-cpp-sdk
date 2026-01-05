// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDCLUSTERBYPASSSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDCLUSTERBYPASSSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyHybridCloudClusterBypassStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridCloudClusterBypassStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterResourceId, clusterResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridCloudClusterBypassStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterResourceId, clusterResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
    };
    ModifyHybridCloudClusterBypassStatusRequest() = default ;
    ModifyHybridCloudClusterBypassStatusRequest(const ModifyHybridCloudClusterBypassStatusRequest &) = default ;
    ModifyHybridCloudClusterBypassStatusRequest(ModifyHybridCloudClusterBypassStatusRequest &&) = default ;
    ModifyHybridCloudClusterBypassStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridCloudClusterBypassStatusRequest() = default ;
    ModifyHybridCloudClusterBypassStatusRequest& operator=(const ModifyHybridCloudClusterBypassStatusRequest &) = default ;
    ModifyHybridCloudClusterBypassStatusRequest& operator=(ModifyHybridCloudClusterBypassStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterResourceId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->ruleStatus_ == nullptr; };
    // clusterResourceId Field Functions 
    bool hasClusterResourceId() const { return this->clusterResourceId_ != nullptr;};
    void deleteClusterResourceId() { this->clusterResourceId_ = nullptr;};
    inline string getClusterResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterResourceId_, "") };
    inline ModifyHybridCloudClusterBypassStatusRequest& setClusterResourceId(string clusterResourceId) { DARABONBA_PTR_SET_VALUE(clusterResourceId_, clusterResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHybridCloudClusterBypassStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridCloudClusterBypassStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyHybridCloudClusterBypassStatusRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline ModifyHybridCloudClusterBypassStatusRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


  protected:
    // The ID of the hybrid cloud cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterResourceId_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // **
    // 
    // **You can call the **DescribeInstanceInfo[ operation to obtain the ID of the WAF instance.](https://help.aliyun.com/document_detail/140857.html)
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The status of manual bypass. Valid values:
    // 
    // *   **on**: enabled.
    // *   **off**: disabled. This is the default value.
    // 
    // This parameter is required.
    shared_ptr<string> ruleStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
