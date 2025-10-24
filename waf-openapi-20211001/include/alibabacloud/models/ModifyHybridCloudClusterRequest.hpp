// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyHybridCloudClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridCloudClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(AccessRegion, accessRegion_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogFieldsNotReturned, logFieldsNotReturned_);
      DARABONBA_PTR_TO_JSON(ProtectionServerCount, protectionServerCount_);
      DARABONBA_PTR_TO_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridCloudClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(AccessRegion, accessRegion_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogFieldsNotReturned, logFieldsNotReturned_);
      DARABONBA_PTR_FROM_JSON(ProtectionServerCount, protectionServerCount_);
      DARABONBA_PTR_FROM_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ModifyHybridCloudClusterRequest() = default ;
    ModifyHybridCloudClusterRequest(const ModifyHybridCloudClusterRequest &) = default ;
    ModifyHybridCloudClusterRequest(ModifyHybridCloudClusterRequest &&) = default ;
    ModifyHybridCloudClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridCloudClusterRequest() = default ;
    ModifyHybridCloudClusterRequest& operator=(const ModifyHybridCloudClusterRequest &) = default ;
    ModifyHybridCloudClusterRequest& operator=(ModifyHybridCloudClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessMode_ == nullptr
        && return this->accessRegion_ == nullptr && return this->clusterName_ == nullptr && return this->httpPorts_ == nullptr && return this->httpsPorts_ == nullptr && return this->id_ == nullptr
        && return this->instanceId_ == nullptr && return this->logFieldsNotReturned_ == nullptr && return this->protectionServerCount_ == nullptr && return this->proxyStatus_ == nullptr && return this->proxyType_ == nullptr
        && return this->regionId_ == nullptr && return this->remark_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr && return this->ruleConfig_ == nullptr && return this->ruleStatus_ == nullptr
        && return this->ruleType_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline ModifyHybridCloudClusterRequest& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // accessRegion Field Functions 
    bool hasAccessRegion() const { return this->accessRegion_ != nullptr;};
    void deleteAccessRegion() { this->accessRegion_ = nullptr;};
    inline string accessRegion() const { DARABONBA_PTR_GET_DEFAULT(accessRegion_, "") };
    inline ModifyHybridCloudClusterRequest& setAccessRegion(string accessRegion) { DARABONBA_PTR_SET_VALUE(accessRegion_, accessRegion) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ModifyHybridCloudClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string httpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline ModifyHybridCloudClusterRequest& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string httpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline ModifyHybridCloudClusterRequest& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyHybridCloudClusterRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHybridCloudClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logFieldsNotReturned Field Functions 
    bool hasLogFieldsNotReturned() const { return this->logFieldsNotReturned_ != nullptr;};
    void deleteLogFieldsNotReturned() { this->logFieldsNotReturned_ = nullptr;};
    inline string logFieldsNotReturned() const { DARABONBA_PTR_GET_DEFAULT(logFieldsNotReturned_, "") };
    inline ModifyHybridCloudClusterRequest& setLogFieldsNotReturned(string logFieldsNotReturned) { DARABONBA_PTR_SET_VALUE(logFieldsNotReturned_, logFieldsNotReturned) };


    // protectionServerCount Field Functions 
    bool hasProtectionServerCount() const { return this->protectionServerCount_ != nullptr;};
    void deleteProtectionServerCount() { this->protectionServerCount_ = nullptr;};
    inline int32_t protectionServerCount() const { DARABONBA_PTR_GET_DEFAULT(protectionServerCount_, 0) };
    inline ModifyHybridCloudClusterRequest& setProtectionServerCount(int32_t protectionServerCount) { DARABONBA_PTR_SET_VALUE(protectionServerCount_, protectionServerCount) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string proxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline ModifyHybridCloudClusterRequest& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline ModifyHybridCloudClusterRequest& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridCloudClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyHybridCloudClusterRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyHybridCloudClusterRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline ModifyHybridCloudClusterRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline ModifyHybridCloudClusterRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ModifyHybridCloudClusterRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessMode_ = nullptr;
    std::shared_ptr<string> accessRegion_ = nullptr;
    // The name of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The HTTP ports that are supported. Set this parameter to a string. Specify multiple ports in the **port1,port2,port3** format.
    // 
    // This parameter is required.
    std::shared_ptr<string> httpPorts_ = nullptr;
    // The HTTPS ports that are supported. Set this parameter to a string. Specify multiple ports in the **port1,port2,port3** format.
    // 
    // This parameter is required.
    std::shared_ptr<string> httpsPorts_ = nullptr;
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> logFieldsNotReturned_ = nullptr;
    // The number of protection nodes that can be added to the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> protectionServerCount_ = nullptr;
    std::shared_ptr<string> proxyStatus_ = nullptr;
    std::shared_ptr<string> proxyType_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The remarks about the cluster.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    std::shared_ptr<string> ruleConfig_ = nullptr;
    std::shared_ptr<string> ruleStatus_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
