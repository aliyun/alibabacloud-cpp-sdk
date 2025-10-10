// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyAccessLogConfig.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyModificationProtectionConfig.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyTags.hpp>
#include <alibabacloud/models/GetLoadBalancerAttributeResponseBodyZoneMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBody& obj) { 
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
    virtual bool empty() const override { this->accessLogConfig_ != nullptr
        && this->addressAllocatedMode_ != nullptr && this->addressIpVersion_ != nullptr && this->addressType_ != nullptr && this->bandwidthPackageId_ != nullptr && this->createTime_ != nullptr
        && this->DNSName_ != nullptr && this->deletionProtectionConfig_ != nullptr && this->ipv6AddressType_ != nullptr && this->loadBalancerBillingConfig_ != nullptr && this->loadBalancerBussinessStatus_ != nullptr
        && this->loadBalancerEdition_ != nullptr && this->loadBalancerId_ != nullptr && this->loadBalancerName_ != nullptr && this->loadBalancerOperationLocks_ != nullptr && this->loadBalancerStatus_ != nullptr
        && this->modificationProtectionConfig_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->securityGroupIds_ != nullptr
        && this->tags_ != nullptr && this->vpcId_ != nullptr && this->zoneMappings_ != nullptr; };
    // accessLogConfig Field Functions 
    bool hasAccessLogConfig() const { return this->accessLogConfig_ != nullptr;};
    void deleteAccessLogConfig() { this->accessLogConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBodyAccessLogConfig & accessLogConfig() const { DARABONBA_PTR_GET_CONST(accessLogConfig_, GetLoadBalancerAttributeResponseBodyAccessLogConfig) };
    inline GetLoadBalancerAttributeResponseBodyAccessLogConfig accessLogConfig() { DARABONBA_PTR_GET(accessLogConfig_, GetLoadBalancerAttributeResponseBodyAccessLogConfig) };
    inline GetLoadBalancerAttributeResponseBody& setAccessLogConfig(const GetLoadBalancerAttributeResponseBodyAccessLogConfig & accessLogConfig) { DARABONBA_PTR_SET_VALUE(accessLogConfig_, accessLogConfig) };
    inline GetLoadBalancerAttributeResponseBody& setAccessLogConfig(GetLoadBalancerAttributeResponseBodyAccessLogConfig && accessLogConfig) { DARABONBA_PTR_SET_RVALUE(accessLogConfig_, accessLogConfig) };


    // addressAllocatedMode Field Functions 
    bool hasAddressAllocatedMode() const { return this->addressAllocatedMode_ != nullptr;};
    void deleteAddressAllocatedMode() { this->addressAllocatedMode_ = nullptr;};
    inline string addressAllocatedMode() const { DARABONBA_PTR_GET_DEFAULT(addressAllocatedMode_, "") };
    inline GetLoadBalancerAttributeResponseBody& setAddressAllocatedMode(string addressAllocatedMode) { DARABONBA_PTR_SET_VALUE(addressAllocatedMode_, addressAllocatedMode) };


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


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLoadBalancerAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


    // loadBalancerBussinessStatus Field Functions 
    bool hasLoadBalancerBussinessStatus() const { return this->loadBalancerBussinessStatus_ != nullptr;};
    void deleteLoadBalancerBussinessStatus() { this->loadBalancerBussinessStatus_ = nullptr;};
    inline string loadBalancerBussinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBussinessStatus_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerBussinessStatus(string loadBalancerBussinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBussinessStatus_, loadBalancerBussinessStatus) };


    // loadBalancerEdition Field Functions 
    bool hasLoadBalancerEdition() const { return this->loadBalancerEdition_ != nullptr;};
    void deleteLoadBalancerEdition() { this->loadBalancerEdition_ = nullptr;};
    inline string loadBalancerEdition() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerEdition_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerEdition(string loadBalancerEdition) { DARABONBA_PTR_SET_VALUE(loadBalancerEdition_, loadBalancerEdition) };


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


    // loadBalancerOperationLocks Field Functions 
    bool hasLoadBalancerOperationLocks() const { return this->loadBalancerOperationLocks_ != nullptr;};
    void deleteLoadBalancerOperationLocks() { this->loadBalancerOperationLocks_ = nullptr;};
    inline const vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks> & loadBalancerOperationLocks() const { DARABONBA_PTR_GET_CONST(loadBalancerOperationLocks_, vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks>) };
    inline vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks> loadBalancerOperationLocks() { DARABONBA_PTR_GET(loadBalancerOperationLocks_, vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks>) };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerOperationLocks(const vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks> & loadBalancerOperationLocks) { DARABONBA_PTR_SET_VALUE(loadBalancerOperationLocks_, loadBalancerOperationLocks) };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerOperationLocks(vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks> && loadBalancerOperationLocks) { DARABONBA_PTR_SET_RVALUE(loadBalancerOperationLocks_, loadBalancerOperationLocks) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline GetLoadBalancerAttributeResponseBody& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig & modificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, GetLoadBalancerAttributeResponseBodyModificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBodyModificationProtectionConfig modificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, GetLoadBalancerAttributeResponseBodyModificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setModificationProtectionConfig(const GetLoadBalancerAttributeResponseBodyModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline GetLoadBalancerAttributeResponseBody& setModificationProtectionConfig(GetLoadBalancerAttributeResponseBodyModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


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
    // The configuration of the access log feature.
    std::shared_ptr<GetLoadBalancerAttributeResponseBodyAccessLogConfig> accessLogConfig_ = nullptr;
    // The mode in which IP addresses are allocated. Valid values:
    // 
    // *   **Fixed**: allocates a static IP address to the ALB instance.
    // *   **Dynamic**: dynamically allocates an IP address to each zone of the ALB instance.
    std::shared_ptr<string> addressAllocatedMode_ = nullptr;
    // The IP version. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The network type of the ALB instance. Valid values:
    // 
    // *   **Internet**: The ALB instance uses a public IP address. The domain name of the ALB instance is resolved to the public IP address. Therefore, the ALB instance can be accessed over the Internet.
    // *   **Intranet**: The ALB instance uses a private IP address. The domain name of the ALB instance is resolved to the private IP address. In this case, the ALB instance can be accessed over the virtual private cloud (VPC) where the ALB instance is deployed.
    std::shared_ptr<string> addressType_ = nullptr;
    // The ID of the elastic IP address (EIP) bandwidth plan that is associated with the Internet-facing ALB instance.
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    // The time when the resource was created. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The domain name of the ALB instance.
    std::shared_ptr<string> DNSName_ = nullptr;
    // The configuration of deletion protection.
    std::shared_ptr<GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig> deletionProtectionConfig_ = nullptr;
    // The type of IPv6 address that is used by the ALB instance. Valid values:
    // 
    // *   **Internet**: The ALB instance uses a public IP address. The domain name of the ALB instance is resolved to the public IP address. Therefore, the ALB instance can be accessed over the Internet.
    // *   **Intranet**: The ALB instance uses a private IP address. The domain name of the ALB instance is resolved to the private IP address. Therefore, the ALB instance can be accessed over the VPC in which the ALB instance is deployed.
    std::shared_ptr<string> ipv6AddressType_ = nullptr;
    // The billing method of the ALB instance.
    std::shared_ptr<GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig> loadBalancerBillingConfig_ = nullptr;
    // The service status of the ALB instance. Valid values:
    // 
    // *   **Abnormal**
    // *   **Normal**
    std::shared_ptr<string> loadBalancerBussinessStatus_ = nullptr;
    // The edition of the ALB instance. The features and billing rules vary based on the edition of the ALB instance. Valid values:
    // 
    // *   **Basic**
    // *   **Standard**
    // *   **StandardWithWaf**
    std::shared_ptr<string> loadBalancerEdition_ = nullptr;
    // The ALB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the ALB instance.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The type of the lock. Valid values:
    // 
    // *   **SecurityLocked**: The ALB instance is locked due to security reasons.
    // *   **RelatedResourceLocked**: The ALB instance is locked due to association issues.
    // *   **FinancialLocked**: The ALB instance is locked due to overdue payments.
    // *   **ResidualLocked**: The ALB instance is locked because the associated resources have overdue payments and the resources are released.
    std::shared_ptr<vector<GetLoadBalancerAttributeResponseBodyLoadBalancerOperationLocks>> loadBalancerOperationLocks_ = nullptr;
    // The status of the ALB instance. Valid values:
    // 
    // *   **Inactive**: The ALB instance is disabled. ALB instances in the Inactive state do not forward traffic.
    // *   **Active**: The ALB instance is running.
    // *   **Provisioning**: The ALB instance is being created.
    // *   **Configuring**: The ALB instance is being modified.
    // *   **CreateFailed**: The system failed to create the ALB instance. In this case, you are not charged for the ALB instance. You can only delete the ALB instance.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    // The configuration read-only mode settings.
    std::shared_ptr<GetLoadBalancerAttributeResponseBodyModificationProtectionConfig> modificationProtectionConfig_ = nullptr;
    // The region ID of the ALB instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IDs of the security groups to which the ALB instance is added.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The tag value.
    // 
    // The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag value cannot contain `http://` or `https://`.
    std::shared_ptr<vector<GetLoadBalancerAttributeResponseBodyTags>> tags_ = nullptr;
    // The ID of the VPC in which the ALB instance is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The mappings between zones and vSwitches. At most 10 zones are returned. If the current region supports two or more zones, at least two zones are returned.
    std::shared_ptr<vector<GetLoadBalancerAttributeResponseBodyZoneMappings>> zoneMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
