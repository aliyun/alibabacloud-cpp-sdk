// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyModificationProtectionConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyOperationLocks.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyTags.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyZoneMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_TO_JSON(DNSName, DNSName_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressType, ipv6AddressType_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_FROM_JSON(DNSName, DNSName_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressType, ipv6AddressType_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBusinessStatus, loadBalancerBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    GetLoadBalancerAttributeResponseBody() = default ;
    GetLoadBalancerAttributeResponseBody(const GetLoadBalancerAttributeResponseBody &) = default ;
    GetLoadBalancerAttributeResponseBody(GetLoadBalancerAttributeResponseBody &&) = default ;
    GetLoadBalancerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerAttributeResponseBody() = default ;
    GetLoadBalancerAttributeResponseBody& operator=(const GetLoadBalancerAttributeResponseBody &) = default ;
    GetLoadBalancerAttributeResponseBody& operator=(GetLoadBalancerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressIpVersion_ != nullptr
        && this->addressType_ != nullptr && this->bandwidthPackageId_ != nullptr && this->cps_ != nullptr && this->createTime_ != nullptr && this->crossZoneEnabled_ != nullptr
        && this->DNSName_ != nullptr && this->deletionProtectionConfig_ != nullptr && this->ipv6AddressType_ != nullptr && this->loadBalancerBillingConfig_ != nullptr && this->loadBalancerBusinessStatus_ != nullptr
        && this->loadBalancerId_ != nullptr && this->loadBalancerName_ != nullptr && this->loadBalancerStatus_ != nullptr && this->loadBalancerType_ != nullptr && this->modificationProtectionConfig_ != nullptr
        && this->operationLocks_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->securityGroupIds_ != nullptr
        && this->tags_ != nullptr && this->vpcId_ != nullptr && this->zoneMappings_ != nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline GetLoadBalancerAttributeResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline GetLoadBalancerAttributeResponseBody& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline GetLoadBalancerAttributeResponseBody& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLoadBalancerAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossZoneEnabled Field Functions 
    bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
    void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
    inline bool crossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
    inline GetLoadBalancerAttributeResponseBody& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


    // DNSName Field Functions 
    bool hasDNSName() const { return this->DNSName_ != nullptr;};
    void deleteDNSName() { this->DNSName_ = nullptr;};
    inline string DNSName() const { DARABONBA_PTR_GET_DEFAULT(DNSName_, "") };
    inline GetLoadBalancerAttributeResponseBody& setDNSName(string DNSName) { DARABONBA_PTR_SET_VALUE(DNSName_, DNSName) };


    // deletionProtectionConfig Field Functions 
    bool hasDeletionProtectionConfig() const { return this->deletionProtectionConfig_ != nullptr;};
    void deleteDeletionProtectionConfig() { this->deletionProtectionConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig & deletionProtectionConfig() const { DARABONBA_PTR_GET_CONST(deletionProtectionConfig_, GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig deletionProtectionConfig() { DARABONBA_PTR_GET(deletionProtectionConfig_, GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setDeletionProtectionConfig(const GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig & deletionProtectionConfig) { DARABONBA_PTR_SET_VALUE(deletionProtectionConfig_, deletionProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setDeletionProtectionConfig(GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig && deletionProtectionConfig) { DARABONBA_PTR_SET_RVALUE(deletionProtectionConfig_, deletionProtectionConfig) };


    // ipv6AddressType Field Functions 
    bool hasIpv6AddressType() const { return this->ipv6AddressType_ != nullptr;};
    void deleteIpv6AddressType() { this->ipv6AddressType_ = nullptr;};
    inline string ipv6AddressType() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressType_, "") };
    inline GetLoadBalancerAttributeResponseBody& setIpv6AddressType(string ipv6AddressType) { DARABONBA_PTR_SET_VALUE(ipv6AddressType_, ipv6AddressType) };


    // loadBalancerBillingConfig Field Functions 
    bool hasLoadBalancerBillingConfig() const { return this->loadBalancerBillingConfig_ != nullptr;};
    void deleteLoadBalancerBillingConfig() { this->loadBalancerBillingConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig & loadBalancerBillingConfig() const { DARABONBA_PTR_GET_CONST(loadBalancerBillingConfig_, GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig) };
    inline GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig loadBalancerBillingConfig() { DARABONBA_PTR_GET(loadBalancerBillingConfig_, GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig) };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerBillingConfig(const GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig & loadBalancerBillingConfig) { DARABONBA_PTR_SET_VALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerBillingConfig(GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig && loadBalancerBillingConfig) { DARABONBA_PTR_SET_RVALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };


    // loadBalancerBusinessStatus Field Functions 
    bool hasLoadBalancerBusinessStatus() const { return this->loadBalancerBusinessStatus_ != nullptr;};
    void deleteLoadBalancerBusinessStatus() { this->loadBalancerBusinessStatus_ = nullptr;};
    inline string loadBalancerBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBusinessStatus_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerBusinessStatus(string loadBalancerBusinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBusinessStatus_, loadBalancerBusinessStatus) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // loadBalancerType Field Functions 
    bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
    void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
    inline string loadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig & modificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, GetLoadBalancerAttributeResponseBodyModificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBodyModificationProtectionConfig modificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, GetLoadBalancerAttributeResponseBodyModificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setModificationProtectionConfig(const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setModificationProtectionConfig(GetLoadBalancerAttributeResponseBodyModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const vector<GetLoadBalancerAttributeResponseBodyOperationLocks> & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, vector<GetLoadBalancerAttributeResponseBodyOperationLocks>) };
    inline vector<GetLoadBalancerAttributeResponseBodyOperationLocks> operationLocks() { DARABONBA_PTR_GET(operationLocks_, vector<GetLoadBalancerAttributeResponseBodyOperationLocks>) };
    inline GetLoadBalancerAttributeResponseBody& setOperationLocks(const vector<GetLoadBalancerAttributeResponseBodyOperationLocks> & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline GetLoadBalancerAttributeResponseBody& setOperationLocks(vector<GetLoadBalancerAttributeResponseBodyOperationLocks> && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline GetLoadBalancerAttributeResponseBody& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline GetLoadBalancerAttributeResponseBody& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetLoadBalancerAttributeResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetLoadBalancerAttributeResponseBodyTags>) };
    inline vector<GetLoadBalancerAttributeResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetLoadBalancerAttributeResponseBodyTags>) };
    inline GetLoadBalancerAttributeResponseBody& setTags(const vector<GetLoadBalancerAttributeResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetLoadBalancerAttributeResponseBody& setTags(vector<GetLoadBalancerAttributeResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetLoadBalancerAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<GetLoadBalancerAttributeResponseBodyZoneMappings> & zoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<GetLoadBalancerAttributeResponseBodyZoneMappings>) };
    inline vector<GetLoadBalancerAttributeResponseBodyZoneMappings> zoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<GetLoadBalancerAttributeResponseBodyZoneMappings>) };
    inline GetLoadBalancerAttributeResponseBody& setZoneMappings(const vector<GetLoadBalancerAttributeResponseBodyZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline GetLoadBalancerAttributeResponseBody& setZoneMappings(vector<GetLoadBalancerAttributeResponseBodyZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The protocol version. Valid values:
    // 
    // *   **ipv4**: IPv4
    // *   **DualStack**: dual stack
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The IPv4 network type of the NLB instance. Valid values:
    // 
    // *   **Internet** The domain name of the NLB instance is resolved to the public IP address. Therefore, the NLB instance can be accessed over the Internet.
    // *   **Intranet** The domain name of the NLB instance is resolved to the private IP address. Therefore, the NLB instance can be accessed over the VPC in which the NLB instance is deployed.
    std::shared_ptr<string> addressType_ = nullptr;
    // The ID of the EIP bandwidth plan.
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    // The maximum number of new connections per second supported by the NLB instance in each zone (virtual IP address). Valid values: **0** to **1000000**.
    // 
    // **0** indicates that the number of connections is unlimited.
    std::shared_ptr<int32_t> cps_ = nullptr;
    // The time when the NLB instance was created. This value is a UNIX timestamp.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the NLB instance is accessible across zones. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> crossZoneEnabled_ = nullptr;
    // The domain name of the NLB instance.
    std::shared_ptr<string> DNSName_ = nullptr;
    // The configuration of the deletion protection feature.
    std::shared_ptr<GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig> deletionProtectionConfig_ = nullptr;
    // The IPv6 network type of the NLB instance. Valid values:
    // 
    // *   **Internet**: The NLB instance uses a public IP address. The domain name of the NLB instance is resolved to the public IP address. Therefore, the NLB instance can be accessed over the Internet.
    // *   **Intranet**: The NLB instance uses a private IP address. The domain name of the NLB instance is resolved to the private IP address. In this case, the NLB instance can be accessed over the VPC where the NLB instance is deployed.
    std::shared_ptr<string> ipv6AddressType_ = nullptr;
    // The billing information of the NLB instance.
    std::shared_ptr<GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig> loadBalancerBillingConfig_ = nullptr;
    // The status of workloads on the NLB instance. Valid values:
    // 
    // *   **Abnormal**
    // *   **Normal**
    std::shared_ptr<string> loadBalancerBusinessStatus_ = nullptr;
    // The NLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The NLB instance name.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The NLB instance status. Valid values:
    // 
    // *   **Inactive**: The NLB instance is disabled. The listeners of NLB instances in the Inactive state do not forward traffic.
    // *   **Active**: The NLB instance is running.
    // *   **Provisioning**: The NLB instance is being created.
    // *   **Configuring**: The NLB instance is being modified.
    // *   **CreateFailed**: The system failed to create the NLB instance. In this case, you are not charged for the NLB instance. You can only delete the NLB instance.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    // The type of the Server Load Balancer (SLB) instance. Set the value to **network**, which specifies NLB.
    std::shared_ptr<string> loadBalancerType_ = nullptr;
    // The configuration of the configuration read-only mode.
    std::shared_ptr<GetLoadBalancerAttributeResponseBodyModificationProtectionConfig> modificationProtectionConfig_ = nullptr;
    // The information about the locked NLB instance. This parameter is returned only when `LoadBalancerBussinessStatus` is **Abnormal**.
    std::shared_ptr<vector<GetLoadBalancerAttributeResponseBodyOperationLocks>> operationLocks_ = nullptr;
    // The region ID of the NLB instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group associated with the NLB instance.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetLoadBalancerAttributeResponseBodyTags>> tags_ = nullptr;
    // The VPC ID of the NLB instance.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The list of zones and vSwitches in the zones. You must specify 2 to 10 zones.
    std::shared_ptr<vector<GetLoadBalancerAttributeResponseBodyZoneMappings>> zoneMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
