// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig.hpp>
#include <vector>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersOperationLocks.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersTags.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersZoneMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancers& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
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
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancers& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
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
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    ListLoadBalancersResponseBodyLoadBalancers() = default ;
    ListLoadBalancersResponseBodyLoadBalancers(const ListLoadBalancersResponseBodyLoadBalancers &) = default ;
    ListLoadBalancersResponseBodyLoadBalancers(ListLoadBalancersResponseBodyLoadBalancers &&) = default ;
    ListLoadBalancersResponseBodyLoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBodyLoadBalancers() = default ;
    ListLoadBalancersResponseBodyLoadBalancers& operator=(const ListLoadBalancersResponseBodyLoadBalancers &) = default ;
    ListLoadBalancersResponseBodyLoadBalancers& operator=(ListLoadBalancersResponseBodyLoadBalancers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressIpVersion_ != nullptr
        && this->addressType_ != nullptr && this->bandwidthPackageId_ != nullptr && this->createTime_ != nullptr && this->crossZoneEnabled_ != nullptr && this->DNSName_ != nullptr
        && this->deletionProtectionConfig_ != nullptr && this->ipv6AddressType_ != nullptr && this->loadBalancerBillingConfig_ != nullptr && this->loadBalancerBusinessStatus_ != nullptr && this->loadBalancerId_ != nullptr
        && this->loadBalancerName_ != nullptr && this->loadBalancerStatus_ != nullptr && this->loadBalancerType_ != nullptr && this->modificationProtectionConfig_ != nullptr && this->operationLocks_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->securityGroupIds_ != nullptr && this->tags_ != nullptr && this->vpcId_ != nullptr
        && this->zoneMappings_ != nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossZoneEnabled Field Functions 
    bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
    void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
    inline bool crossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


    // DNSName Field Functions 
    bool hasDNSName() const { return this->DNSName_ != nullptr;};
    void deleteDNSName() { this->DNSName_ = nullptr;};
    inline string DNSName() const { DARABONBA_PTR_GET_DEFAULT(DNSName_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setDNSName(string DNSName) { DARABONBA_PTR_SET_VALUE(DNSName_, DNSName) };


    // deletionProtectionConfig Field Functions 
    bool hasDeletionProtectionConfig() const { return this->deletionProtectionConfig_ != nullptr;};
    void deleteDeletionProtectionConfig() { this->deletionProtectionConfig_ = nullptr;};
    inline const Models::ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig & deletionProtectionConfig() const { DARABONBA_PTR_GET_CONST(deletionProtectionConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig) };
    inline Models::ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig deletionProtectionConfig() { DARABONBA_PTR_GET(deletionProtectionConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setDeletionProtectionConfig(const Models::ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig & deletionProtectionConfig) { DARABONBA_PTR_SET_VALUE(deletionProtectionConfig_, deletionProtectionConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setDeletionProtectionConfig(Models::ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig && deletionProtectionConfig) { DARABONBA_PTR_SET_RVALUE(deletionProtectionConfig_, deletionProtectionConfig) };


    // ipv6AddressType Field Functions 
    bool hasIpv6AddressType() const { return this->ipv6AddressType_ != nullptr;};
    void deleteIpv6AddressType() { this->ipv6AddressType_ = nullptr;};
    inline string ipv6AddressType() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressType_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setIpv6AddressType(string ipv6AddressType) { DARABONBA_PTR_SET_VALUE(ipv6AddressType_, ipv6AddressType) };


    // loadBalancerBillingConfig Field Functions 
    bool hasLoadBalancerBillingConfig() const { return this->loadBalancerBillingConfig_ != nullptr;};
    void deleteLoadBalancerBillingConfig() { this->loadBalancerBillingConfig_ = nullptr;};
    inline const Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig & loadBalancerBillingConfig() const { DARABONBA_PTR_GET_CONST(loadBalancerBillingConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig) };
    inline Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig loadBalancerBillingConfig() { DARABONBA_PTR_GET(loadBalancerBillingConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerBillingConfig(const Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig & loadBalancerBillingConfig) { DARABONBA_PTR_SET_VALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerBillingConfig(Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig && loadBalancerBillingConfig) { DARABONBA_PTR_SET_RVALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };


    // loadBalancerBusinessStatus Field Functions 
    bool hasLoadBalancerBusinessStatus() const { return this->loadBalancerBusinessStatus_ != nullptr;};
    void deleteLoadBalancerBusinessStatus() { this->loadBalancerBusinessStatus_ = nullptr;};
    inline string loadBalancerBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBusinessStatus_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerBusinessStatus(string loadBalancerBusinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBusinessStatus_, loadBalancerBusinessStatus) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // loadBalancerType Field Functions 
    bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
    void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
    inline string loadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig & modificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig) };
    inline Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig modificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setModificationProtectionConfig(const Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setModificationProtectionConfig(Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const vector<Models::ListLoadBalancersResponseBodyLoadBalancersOperationLocks> & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersOperationLocks>) };
    inline vector<Models::ListLoadBalancersResponseBodyLoadBalancersOperationLocks> operationLocks() { DARABONBA_PTR_GET(operationLocks_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersOperationLocks>) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setOperationLocks(const vector<Models::ListLoadBalancersResponseBodyLoadBalancersOperationLocks> & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setOperationLocks(vector<Models::ListLoadBalancersResponseBodyLoadBalancersOperationLocks> && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListLoadBalancersResponseBodyLoadBalancersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersTags>) };
    inline vector<Models::ListLoadBalancersResponseBodyLoadBalancersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersTags>) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setTags(const vector<Models::ListLoadBalancersResponseBodyLoadBalancersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setTags(vector<Models::ListLoadBalancersResponseBodyLoadBalancersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappings> & zoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappings>) };
    inline vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappings> zoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappings>) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setZoneMappings(const vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setZoneMappings(vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The IP version. Valid values:
    // 
    // *   **ipv4**: IPv4
    // *   **DualStack**: dual stack
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The type of IPv4 address used by the NLB instance. Valid values:
    // 
    // *   **Internet**: The NLB instance uses a public IP address. The domain name of the NLB instance is resolved to the public IP address. Therefore, the NLB instance can be accessed over the Internet.
    // *   **Intranet**: The NLB instance uses a private IP address. The domain name of the NLB instance is resolved to the private IP address. Therefore, the NLB instance can be accessed over the VPC where the NLB instance is deployed.
    std::shared_ptr<string> addressType_ = nullptr;
    // The ID of the EIP bandwidth plan that is associated with the NLB instance if the NLB instance uses a public IP address.
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    // The time when the resource was created. The time is displayed in UTC in the `yyyy-MM-ddTHH:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether cross-zone load balancing is enabled for the NLB instance. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<bool> crossZoneEnabled_ = nullptr;
    // The domain name of the NLB instance.
    std::shared_ptr<string> DNSName_ = nullptr;
    // The configuration of the deletion protection feature.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig> deletionProtectionConfig_ = nullptr;
    // The type of IPv6 address used by the NLB instance. Valid values:
    // 
    // *   **Internet**: The NLB instance uses a public IP address. The domain name of the NLB instance is resolved to the public IP address. Therefore, the NLB instance can be accessed over the Internet.
    // *   **Intranet**: The NLB instance uses a private IP address. The domain name of the NLB instance is resolved to the private IP address. Therefore, the NLB instance can be accessed over the VPC where the NLB instance is deployed.
    std::shared_ptr<string> ipv6AddressType_ = nullptr;
    // The billing settings of the NLB instance.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig> loadBalancerBillingConfig_ = nullptr;
    // The business status of the NLB instance. Valid values:
    // 
    // *   **Abnormal**: The NLB instance is not working as expected.
    // *   **Normal**: The NLB instance is working as expected.
    std::shared_ptr<string> loadBalancerBusinessStatus_ = nullptr;
    // The ID of the NLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the NLB instance.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The status of the NLB instance. Valid values:
    // 
    // *   **Inactive**: The NLB instance is disabled. Listeners of NLB instances in the Inactive state do not forward traffic.
    // *   **Active**: The NLB instance is running.
    // *   **Provisioning**: The NLB instance is being created.
    // *   **Configuring**: The NLB instance is being modified.
    // *   **Deleting**: The NLB instance is being deleted.
    // *   **Deleted**: The NLB instance is deleted.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    // The type of the SLB instance. Only **Network** is returned, which indicates NLB.
    std::shared_ptr<string> loadBalancerType_ = nullptr;
    // The configuration of the configuration read-only mode.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig> modificationProtectionConfig_ = nullptr;
    // The configuration of the operation lock. This parameter takes effect if the value of `LoadBalancerBussinessStatus` is **Abnormal**.
    std::shared_ptr<vector<Models::ListLoadBalancersResponseBodyLoadBalancersOperationLocks>> operationLocks_ = nullptr;
    // The ID of the region where the NLB instance is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security group to which the NLB instance is added.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::ListLoadBalancersResponseBodyLoadBalancersTags>> tags_ = nullptr;
    // The ID of the VPC where the NLB instance is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The mappings between zones and vSwitches.
    std::shared_ptr<vector<Models::ListLoadBalancersResponseBodyLoadBalancersZoneMappings>> zoneMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
