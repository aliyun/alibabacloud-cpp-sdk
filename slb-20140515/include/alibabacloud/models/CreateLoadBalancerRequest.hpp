// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateLoadBalancerRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest(CreateLoadBalancerRequest &&) = default ;
    CreateLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest& operator=(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest& operator=(CreateLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressIPVersion_ == nullptr && return this->addressType_ == nullptr && return this->autoPay_ == nullptr && return this->bandwidth_ == nullptr && return this->clientToken_ == nullptr
        && return this->deleteProtection_ == nullptr && return this->duration_ == nullptr && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr && return this->loadBalancerName_ == nullptr
        && return this->loadBalancerSpec_ == nullptr && return this->masterZoneId_ == nullptr && return this->modificationProtectionReason_ == nullptr && return this->modificationProtectionStatus_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->payType_ == nullptr && return this->pricingCycle_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->slaveZoneId_ == nullptr && return this->tag_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vpcId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateLoadBalancerRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline CreateLoadBalancerRequest& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline CreateLoadBalancerRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateLoadBalancerRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateLoadBalancerRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLoadBalancerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteProtection Field Functions 
    bool hasDeleteProtection() const { return this->deleteProtection_ != nullptr;};
    void deleteDeleteProtection() { this->deleteProtection_ = nullptr;};
    inline string deleteProtection() const { DARABONBA_PTR_GET_DEFAULT(deleteProtection_, "") };
    inline CreateLoadBalancerRequest& setDeleteProtection(string deleteProtection) { DARABONBA_PTR_SET_VALUE(deleteProtection_, deleteProtection) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateLoadBalancerRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateLoadBalancerRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateLoadBalancerRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string masterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline CreateLoadBalancerRequest& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // modificationProtectionReason Field Functions 
    bool hasModificationProtectionReason() const { return this->modificationProtectionReason_ != nullptr;};
    void deleteModificationProtectionReason() { this->modificationProtectionReason_ = nullptr;};
    inline string modificationProtectionReason() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionReason_, "") };
    inline CreateLoadBalancerRequest& setModificationProtectionReason(string modificationProtectionReason) { DARABONBA_PTR_SET_VALUE(modificationProtectionReason_, modificationProtectionReason) };


    // modificationProtectionStatus Field Functions 
    bool hasModificationProtectionStatus() const { return this->modificationProtectionStatus_ != nullptr;};
    void deleteModificationProtectionStatus() { this->modificationProtectionStatus_ = nullptr;};
    inline string modificationProtectionStatus() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionStatus_, "") };
    inline CreateLoadBalancerRequest& setModificationProtectionStatus(string modificationProtectionStatus) { DARABONBA_PTR_SET_VALUE(modificationProtectionStatus_, modificationProtectionStatus) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateLoadBalancerRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLoadBalancerRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateLoadBalancerRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateLoadBalancerRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLoadBalancerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLoadBalancerRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateLoadBalancerRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateLoadBalancerRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // slaveZoneId Field Functions 
    bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
    void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
    inline string slaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
    inline CreateLoadBalancerRequest& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateLoadBalancerRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateLoadBalancerRequestTag>) };
    inline vector<CreateLoadBalancerRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateLoadBalancerRequestTag>) };
    inline CreateLoadBalancerRequest& setTag(const vector<CreateLoadBalancerRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateLoadBalancerRequest& setTag(vector<CreateLoadBalancerRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateLoadBalancerRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateLoadBalancerRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The private IP address of the CLB instance. The private IP address must belong to the destination CIDR block of the vSwitch.
    std::shared_ptr<string> address_ = nullptr;
    // The IP version of the CLB instance. Valid values: **ipv4** and **ipv6**.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The network type of the CLB instance. Valid values:
    // 
    // *   **internet**: After an Internet-facing CLB instance is created, the system allocates a public IP address to the instance. The CLB instance can forward requests over the Internet.
    // *   **intranet**: After an internal-facing CLB instance is created, the system allocates a private IP address to the CLB instance. The CLB instance can forward requests only within the VPC.
    std::shared_ptr<string> addressType_ = nullptr;
    // Specifies whether to automatically pay the subscription fee of the Internet-facing CLB instance. Valid values:
    // 
    // *   **true**: yes. The CLB instance is created after you call the API operation.
    // *   **false** (default): After you call the operation, the order is created but the payment is not completed. You can view pending orders in the console. The CLB instance will not be created until you complete the payment.
    // 
    // >  This parameter takes effect only for subscription CLB instances created on the Alibaba Cloud China site.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The maximum bandwidth of the listener. Unit: Mbit/s.
    // 
    // Valid values: **1** to **5120**. For a pay-by-bandwidth Internet-facing CLB instance, you can specify a maximum bandwidth for each listener. The sum of the maximum bandwidth of all listeners cannot exceed the maximum bandwidth of the CLB instance.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // >  If you do not specify this parameter, the system uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to enable deletion protection for the CLB instance. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> deleteProtection_ = nullptr;
    // The subscription duration of the Internet-facing CLB instance. Valid values:
    // 
    // *   If **PricingCycle** is set to **month**, the valid values are **1 to 9**.
    // *   If **PricingCycle** is set to **year**, the valid values are **1 to 5**.
    // 
    // >  This parameter is supported only by subscription instances created on the Alibaba Cloud China site.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The metering method of the CLB instance. Valid values:
    // 
    // *   **PayBySpec** (default)
    // *   **PayByCLCU**
    // 
    // >  This parameter is supported only by instances created on the Alibaba Cloud China site and only when **PayType** is set to **PayOnDemand**.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the Internet-facing CLB instance. Valid values:
    // 
    // *   **paybytraffic** (default): pay-by-data-transfer
    // 
    //     >  If you set InternetChargeType to **paybytraffic**, you do not need to configure the **Bandwidth** parameter. The value of **Bandwidth** does not take effect even if you specify one.
    // 
    // *   **paybybandwidth**: pay-by-bandwidth
    // 
    // >  If you set **PayType** to **PayOnDemand** and **InstanceChargeType** to **PayByCLCU**, the only valid value for InternetChargeType is **paybytraffic**.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The CLB instance name.
    // 
    // The name must be 1 to 80 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    // 
    // If you do not specify this parameter, the system automatically assigns a name to the CLB instance.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The specification of the CLB instance. Valid values:
    // 
    // *   **slb.s1.small**
    // 
    // *   **slb.s2.small**
    // 
    // *   **slb.s2.medium**
    // 
    // *   **slb.s3.small**
    // 
    // *   **slb.s3.medium**
    // 
    // *   **slb.s3.large**
    // 
    //     
    //  >   If you do not specify this parameter, a shared-resource CLB instance is created. Shared-resource CLB instances are no longer available for purchase. Therefore, you must specify this parameter.
    // 
    // If **InstanceChargeType** is set to **PayByCLCU**, this parameter is invalid and you do not need to specify this parameter.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
    // The ID of the primary zone to which the CLB instance belongs.
    // 
    // You can call the [DescribeZone](https://help.aliyun.com/document_detail/2401683.html) operation to query the primary and secondary zones in the region where you want to create the CLB instance.
    std::shared_ptr<string> masterZoneId_ = nullptr;
    // The reason for enabling the configuration read-only mode. The reason must be 1 to 80 characters in length. It must start with a letter and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // >  This parameter takes effect only when **ModificationProtectionStatus** is set to **ConsoleProtection**.
    std::shared_ptr<string> modificationProtectionReason_ = nullptr;
    // Specifies whether to enable the configuration read-only mode. Valid values:
    // 
    // *   **NonProtection**: disables the configuration read-only mode. After you disable the configuration read-only mode, the value of **ModificationProtectionReason** is cleared.
    // *   **ConsoleProtection**: enables the configuration read-only mode.
    // 
    // >  If you set this parameter to **ConsoleProtection**, you cannot modify instance configurations in the CLB console. However, you can modify instance configurations by calling API operations.
    std::shared_ptr<string> modificationProtectionStatus_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The billing method of the CLB instance. Valid values:
    // 
    // **PayOnDemand**: pay-as-you-go.
    // 
    // >  The Alibaba Cloud International site supports only pay-as-you-go CLB instances.
    std::shared_ptr<string> payType_ = nullptr;
    // The billing cycle of the subscription Internet-facing CLB instance. Valid values:
    // 
    // *   **month**
    // *   **year**
    // 
    // >  This parameter is supported only by subscription instances created on the Alibaba Cloud China site.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The region ID of the CLB instance.
    // 
    // You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the secondary zone to which the CLB instance belongs.
    // 
    // You can call the [DescribeZone](https://help.aliyun.com/document_detail/2401683.html) operation to query the primary and secondary zones in the region where you want to create the CLB instance.
    std::shared_ptr<string> slaveZoneId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateLoadBalancerRequestTag>> tag_ = nullptr;
    // The ID of the vSwitch to which the CLB instance belongs.
    // 
    // If you want to deploy the CLB instance in a VPC, this parameter is required. If this parameter is specified, **AddessType** is set to **intranet** by default.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the CLB instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
