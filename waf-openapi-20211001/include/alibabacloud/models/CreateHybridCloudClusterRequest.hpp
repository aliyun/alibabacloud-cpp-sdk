// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDCLOUDCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDCLOUDCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateHybridCloudClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridCloudClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(AccessRegion, accessRegion_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
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
    friend void from_json(const Darabonba::Json& j, CreateHybridCloudClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(AccessRegion, accessRegion_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
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
    CreateHybridCloudClusterRequest() = default ;
    CreateHybridCloudClusterRequest(const CreateHybridCloudClusterRequest &) = default ;
    CreateHybridCloudClusterRequest(CreateHybridCloudClusterRequest &&) = default ;
    CreateHybridCloudClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridCloudClusterRequest() = default ;
    CreateHybridCloudClusterRequest& operator=(const CreateHybridCloudClusterRequest &) = default ;
    CreateHybridCloudClusterRequest& operator=(CreateHybridCloudClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessMode_ != nullptr
        && this->accessRegion_ != nullptr && this->clusterName_ != nullptr && this->httpPorts_ != nullptr && this->httpsPorts_ != nullptr && this->instanceId_ != nullptr
        && this->logFieldsNotReturned_ != nullptr && this->protectionServerCount_ != nullptr && this->proxyStatus_ != nullptr && this->proxyType_ != nullptr && this->regionId_ != nullptr
        && this->remark_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->ruleConfig_ != nullptr && this->ruleStatus_ != nullptr && this->ruleType_ != nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline CreateHybridCloudClusterRequest& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // accessRegion Field Functions 
    bool hasAccessRegion() const { return this->accessRegion_ != nullptr;};
    void deleteAccessRegion() { this->accessRegion_ = nullptr;};
    inline string accessRegion() const { DARABONBA_PTR_GET_DEFAULT(accessRegion_, "") };
    inline CreateHybridCloudClusterRequest& setAccessRegion(string accessRegion) { DARABONBA_PTR_SET_VALUE(accessRegion_, accessRegion) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateHybridCloudClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string httpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline CreateHybridCloudClusterRequest& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string httpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline CreateHybridCloudClusterRequest& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateHybridCloudClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logFieldsNotReturned Field Functions 
    bool hasLogFieldsNotReturned() const { return this->logFieldsNotReturned_ != nullptr;};
    void deleteLogFieldsNotReturned() { this->logFieldsNotReturned_ = nullptr;};
    inline string logFieldsNotReturned() const { DARABONBA_PTR_GET_DEFAULT(logFieldsNotReturned_, "") };
    inline CreateHybridCloudClusterRequest& setLogFieldsNotReturned(string logFieldsNotReturned) { DARABONBA_PTR_SET_VALUE(logFieldsNotReturned_, logFieldsNotReturned) };


    // protectionServerCount Field Functions 
    bool hasProtectionServerCount() const { return this->protectionServerCount_ != nullptr;};
    void deleteProtectionServerCount() { this->protectionServerCount_ = nullptr;};
    inline int32_t protectionServerCount() const { DARABONBA_PTR_GET_DEFAULT(protectionServerCount_, 0) };
    inline CreateHybridCloudClusterRequest& setProtectionServerCount(int32_t protectionServerCount) { DARABONBA_PTR_SET_VALUE(protectionServerCount_, protectionServerCount) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string proxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline CreateHybridCloudClusterRequest& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline CreateHybridCloudClusterRequest& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHybridCloudClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateHybridCloudClusterRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateHybridCloudClusterRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline CreateHybridCloudClusterRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline CreateHybridCloudClusterRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline CreateHybridCloudClusterRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The network access mode. Valid values:
    // 
    // *   **internet**: Internet access.
    // *   **vpc**: internal network access by using Express Connect circuits.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessMode_ = nullptr;
    // The region where the virtual private cloud (VPC) resides. Valid values:
    // 
    // *   **cn-hangzhou**: China (Hangzhou).
    // *   **cn-beiijng**: China (Beijing).
    // *   **cn-shanghai**: China (Shanghai).
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
    // The status of the proxy gateway. Valid value:
    // 
    // *   **on**: enabled.
    // *   **off**: disabled.
    std::shared_ptr<string> proxyStatus_ = nullptr;
    // The type of the cluster. Valid value:
    // 
    // *   **cname**: reverse proxy cluster.
    // *   **service**: SDK-based traffic mirroring cluster.
    std::shared_ptr<string> proxyType_ = nullptr;
    // The region in which the WAF instance is deployed. Valid value:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The remarks about the cluster.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The configurations of the rule.
    std::shared_ptr<string> ruleConfig_ = nullptr;
    // The status of manual bypass. Valid values:
    // 
    // *   **on**: enabled.
    // *   **off**: disabled.
    std::shared_ptr<string> ruleStatus_ = nullptr;
    // The type of the rule. Valid value:
    // 
    // *   **bypass**: allows requests without security checks.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
