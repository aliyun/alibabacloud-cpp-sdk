// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODYLOADBALANCERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig.hpp>
#include <vector>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig.hpp>
#include <alibabacloud/models/ListLoadBalancersResponseBodyLoadBalancersTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListLoadBalancersResponseBodyLoadBalancers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBodyLoadBalancers& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogConfig, accessLogConfig_);
      DARABONBA_PTR_TO_JSON(AddressAllocatedMode, addressAllocatedMode_);
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DNSName, DNSName_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressType, ipv6AddressType_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBussinessStatus, loadBalancerBussinessStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerOperationLocks, loadBalancerOperationLocks_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBodyLoadBalancers& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogConfig, accessLogConfig_);
      DARABONBA_PTR_FROM_JSON(AddressAllocatedMode, addressAllocatedMode_);
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DNSName, DNSName_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressType, ipv6AddressType_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBussinessStatus, loadBalancerBussinessStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerOperationLocks, loadBalancerOperationLocks_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
    virtual bool empty() const override { this->accessLogConfig_ != nullptr
        && this->addressAllocatedMode_ != nullptr && this->addressIpVersion_ != nullptr && this->addressType_ != nullptr && this->bandwidthPackageId_ != nullptr && this->createTime_ != nullptr
        && this->DNSName_ != nullptr && this->deletionProtectionConfig_ != nullptr && this->ipv6AddressType_ != nullptr && this->loadBalancerBillingConfig_ != nullptr && this->loadBalancerBussinessStatus_ != nullptr
        && this->loadBalancerEdition_ != nullptr && this->loadBalancerId_ != nullptr && this->loadBalancerName_ != nullptr && this->loadBalancerOperationLocks_ != nullptr && this->loadBalancerStatus_ != nullptr
        && this->modificationProtectionConfig_ != nullptr && this->resourceGroupId_ != nullptr && this->securityGroupIds_ != nullptr && this->tags_ != nullptr && this->vpcId_ != nullptr; };
    // accessLogConfig Field Functions 
    bool hasAccessLogConfig() const { return this->accessLogConfig_ != nullptr;};
    void deleteAccessLogConfig() { this->accessLogConfig_ = nullptr;};
    inline const Models::ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig & accessLogConfig() const { DARABONBA_PTR_GET_CONST(accessLogConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig) };
    inline Models::ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig accessLogConfig() { DARABONBA_PTR_GET(accessLogConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setAccessLogConfig(const Models::ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig & accessLogConfig) { DARABONBA_PTR_SET_VALUE(accessLogConfig_, accessLogConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setAccessLogConfig(Models::ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig && accessLogConfig) { DARABONBA_PTR_SET_RVALUE(accessLogConfig_, accessLogConfig) };


    // addressAllocatedMode Field Functions 
    bool hasAddressAllocatedMode() const { return this->addressAllocatedMode_ != nullptr;};
    void deleteAddressAllocatedMode() { this->addressAllocatedMode_ = nullptr;};
    inline string addressAllocatedMode() const { DARABONBA_PTR_GET_DEFAULT(addressAllocatedMode_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setAddressAllocatedMode(string addressAllocatedMode) { DARABONBA_PTR_SET_VALUE(addressAllocatedMode_, addressAllocatedMode) };


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


    // loadBalancerBussinessStatus Field Functions 
    bool hasLoadBalancerBussinessStatus() const { return this->loadBalancerBussinessStatus_ != nullptr;};
    void deleteLoadBalancerBussinessStatus() { this->loadBalancerBussinessStatus_ = nullptr;};
    inline string loadBalancerBussinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBussinessStatus_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerBussinessStatus(string loadBalancerBussinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBussinessStatus_, loadBalancerBussinessStatus) };


    // loadBalancerEdition Field Functions 
    bool hasLoadBalancerEdition() const { return this->loadBalancerEdition_ != nullptr;};
    void deleteLoadBalancerEdition() { this->loadBalancerEdition_ = nullptr;};
    inline string loadBalancerEdition() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerEdition_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerEdition(string loadBalancerEdition) { DARABONBA_PTR_SET_VALUE(loadBalancerEdition_, loadBalancerEdition) };


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


    // loadBalancerOperationLocks Field Functions 
    bool hasLoadBalancerOperationLocks() const { return this->loadBalancerOperationLocks_ != nullptr;};
    void deleteLoadBalancerOperationLocks() { this->loadBalancerOperationLocks_ = nullptr;};
    inline const vector<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks> & loadBalancerOperationLocks() const { DARABONBA_PTR_GET_CONST(loadBalancerOperationLocks_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks>) };
    inline vector<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks> loadBalancerOperationLocks() { DARABONBA_PTR_GET(loadBalancerOperationLocks_, vector<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks>) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerOperationLocks(const vector<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks> & loadBalancerOperationLocks) { DARABONBA_PTR_SET_VALUE(loadBalancerOperationLocks_, loadBalancerOperationLocks) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerOperationLocks(vector<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks> && loadBalancerOperationLocks) { DARABONBA_PTR_SET_RVALUE(loadBalancerOperationLocks_, loadBalancerOperationLocks) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline ListLoadBalancersResponseBodyLoadBalancers& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig & modificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig) };
    inline Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig modificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setModificationProtectionConfig(const Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline ListLoadBalancersResponseBodyLoadBalancers& setModificationProtectionConfig(Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


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


  protected:
    // The configurations of access logs.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersAccessLogConfig> accessLogConfig_ = nullptr;
    // The mode in which IP addresses are allocated. Valid values:
    // 
    // *   **Fixed**: The ALB instance uses a static IP address.
    // *   **Dynamic**: dynamically allocates an IP address to each zone of the ALB instance.
    std::shared_ptr<string> addressAllocatedMode_ = nullptr;
    // The IP version. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The type of IP address that the ALB instance uses to provide services. Valid values:
    // 
    // *   **Internet**: The ALB instance is assigned a public IP address. The domain name is resolved to the public IP address. The ALB instance is accessible over the Internet.
    // *   **Intranet**: The ALB instance is assigned only a private IP address. The domain name is resolved to the private IP address. The ALB instance is accessible only within the VPC of the ALB instance.
    std::shared_ptr<string> addressType_ = nullptr;
    // The ID of the Internet Shared Bandwidth instance that is associated with the Internet-facing ALB instance.
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    // The time when the resource was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The domain name.
    std::shared_ptr<string> DNSName_ = nullptr;
    // The configuration of the deletion protection feature.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig> deletionProtectionConfig_ = nullptr;
    // The type of IPv6 address used by the ALB instance. Valid values:
    // 
    // *   **Internet** The ALB instance is assigned a public IP address. The domain name is resolved to the public IP address. The ALB instance is accessible over the Internet.
    // *   **Intranet** The ALB instance is assigned only a private IP address. The domain name is resolved to the private IP address. The ALB instance is accessible only within the VPC of the ALB instance.
    std::shared_ptr<string> ipv6AddressType_ = nullptr;
    // The billing information about the ALB instance.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig> loadBalancerBillingConfig_ = nullptr;
    // The status of the ALB instance. Valid values:
    // 
    // *   **Abnormal**
    // *   **Normal**
    std::shared_ptr<string> loadBalancerBussinessStatus_ = nullptr;
    // The edition of the ALB instance. The features and billing rules vary based on the edition. Valid values:
    // 
    // *   **Basic**
    // *   **Standard**
    // *   **StandardWithWaf**
    std::shared_ptr<string> loadBalancerEdition_ = nullptr;
    // The ID of the ALB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the ALB instance.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The configuration of the operation lock.
    std::shared_ptr<vector<Models::ListLoadBalancersResponseBodyLoadBalancersLoadBalancerOperationLocks>> loadBalancerOperationLocks_ = nullptr;
    // The status of the ALB instance. Valid values:
    // 
    // *   **Inactive**: The ALB instance is disabled. ALB instances in the Inactive state do not forward traffic.
    // *   **Active**: The ALB instance is running.
    // *   **Provisioning**: The ALB instance is being created.
    // *   **Configuring**: The ALB instance is being modified.
    // *   **CreateFailed**: The system failed to create the ALB instance.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    // The configuration read-only mode settings.
    std::shared_ptr<Models::ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig> modificationProtectionConfig_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The information about the tags.
    std::shared_ptr<vector<Models::ListLoadBalancersResponseBodyLoadBalancersTags>> tags_ = nullptr;
    // The ID of the VPC in which the ALB instance is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
