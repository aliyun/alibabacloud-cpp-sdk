// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNatGatewayShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatGatewayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessModeShrink_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EipBindMode, eipBindMode_);
      DARABONBA_PTR_TO_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NatType, natType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PrivateLinkEnabled, privateLinkEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityProtectionEnabled, securityProtectionEnabled_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessModeShrink_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EipBindMode, eipBindMode_);
      DARABONBA_PTR_FROM_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatType, natType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkEnabled, privateLinkEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtectionEnabled, securityProtectionEnabled_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateNatGatewayShrinkRequest() = default ;
    CreateNatGatewayShrinkRequest(const CreateNatGatewayShrinkRequest &) = default ;
    CreateNatGatewayShrinkRequest(CreateNatGatewayShrinkRequest &&) = default ;
    CreateNatGatewayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayShrinkRequest() = default ;
    CreateNatGatewayShrinkRequest& operator=(const CreateNatGatewayShrinkRequest &) = default ;
    CreateNatGatewayShrinkRequest& operator=(CreateNatGatewayShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessModeShrink_ == nullptr
        && return this->autoPay_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->duration_ == nullptr && return this->eipBindMode_ == nullptr
        && return this->icmpReplyEnabled_ == nullptr && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr && return this->ipv4Prefix_ == nullptr && return this->name_ == nullptr
        && return this->natIp_ == nullptr && return this->natType_ == nullptr && return this->networkType_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->pricingCycle_ == nullptr && return this->privateLinkEnabled_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->securityProtectionEnabled_ == nullptr && return this->spec_ == nullptr && return this->tag_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // accessModeShrink Field Functions 
    bool hasAccessModeShrink() const { return this->accessModeShrink_ != nullptr;};
    void deleteAccessModeShrink() { this->accessModeShrink_ = nullptr;};
    inline string accessModeShrink() const { DARABONBA_PTR_GET_DEFAULT(accessModeShrink_, "") };
    inline CreateNatGatewayShrinkRequest& setAccessModeShrink(string accessModeShrink) { DARABONBA_PTR_SET_VALUE(accessModeShrink_, accessModeShrink) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateNatGatewayShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNatGatewayShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNatGatewayShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateNatGatewayShrinkRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // eipBindMode Field Functions 
    bool hasEipBindMode() const { return this->eipBindMode_ != nullptr;};
    void deleteEipBindMode() { this->eipBindMode_ = nullptr;};
    inline string eipBindMode() const { DARABONBA_PTR_GET_DEFAULT(eipBindMode_, "") };
    inline CreateNatGatewayShrinkRequest& setEipBindMode(string eipBindMode) { DARABONBA_PTR_SET_VALUE(eipBindMode_, eipBindMode) };


    // icmpReplyEnabled Field Functions 
    bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
    void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
    inline bool icmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
    inline CreateNatGatewayShrinkRequest& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateNatGatewayShrinkRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateNatGatewayShrinkRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline string ipv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
    inline CreateNatGatewayShrinkRequest& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateNatGatewayShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string natIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline CreateNatGatewayShrinkRequest& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natType Field Functions 
    bool hasNatType() const { return this->natType_ != nullptr;};
    void deleteNatType() { this->natType_ = nullptr;};
    inline string natType() const { DARABONBA_PTR_GET_DEFAULT(natType_, "") };
    inline CreateNatGatewayShrinkRequest& setNatType(string natType) { DARABONBA_PTR_SET_VALUE(natType_, natType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateNatGatewayShrinkRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateNatGatewayShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNatGatewayShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateNatGatewayShrinkRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // privateLinkEnabled Field Functions 
    bool hasPrivateLinkEnabled() const { return this->privateLinkEnabled_ != nullptr;};
    void deletePrivateLinkEnabled() { this->privateLinkEnabled_ = nullptr;};
    inline bool privateLinkEnabled() const { DARABONBA_PTR_GET_DEFAULT(privateLinkEnabled_, false) };
    inline CreateNatGatewayShrinkRequest& setPrivateLinkEnabled(bool privateLinkEnabled) { DARABONBA_PTR_SET_VALUE(privateLinkEnabled_, privateLinkEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNatGatewayShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNatGatewayShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateNatGatewayShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityProtectionEnabled Field Functions 
    bool hasSecurityProtectionEnabled() const { return this->securityProtectionEnabled_ != nullptr;};
    void deleteSecurityProtectionEnabled() { this->securityProtectionEnabled_ = nullptr;};
    inline bool securityProtectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(securityProtectionEnabled_, false) };
    inline CreateNatGatewayShrinkRequest& setSecurityProtectionEnabled(bool securityProtectionEnabled) { DARABONBA_PTR_SET_VALUE(securityProtectionEnabled_, securityProtectionEnabled) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateNatGatewayShrinkRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNatGatewayShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNatGatewayShrinkRequestTag>) };
    inline vector<CreateNatGatewayShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateNatGatewayShrinkRequestTag>) };
    inline CreateNatGatewayShrinkRequest& setTag(const vector<CreateNatGatewayShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNatGatewayShrinkRequest& setTag(vector<CreateNatGatewayShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNatGatewayShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateNatGatewayShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The access mode for reverse access to the VPC NAT gateway.
    std::shared_ptr<string> accessModeShrink_ = nullptr;
    // Subscription Internet NAT gateways are no longer available for purchase. Ignore this parameter.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the NAT gateway.
    // 
    // You can leave this parameter empty or enter a description. If you enter a description, the description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // Subscription Internet NAT gateways are no longer available for purchase. Ignore this parameter.
    std::shared_ptr<string> duration_ = nullptr;
    // The mode in which the EIP is associated with the NAT gateway. Valid values:
    // 
    // - **MULTI_BINDED**(default): the multi-EIP-to-ENI mode.
    // 
    // - **NAT**: NAT mode, which is compatible with IPv4 addresses.
    // 
    // > If an EIP is associated with a NAT gateway in NAT mode, the EIP occupies a private IP address of the vSwitch where the NAT gateway is deployed. Make sure that the vSwitch has sufficient private IP addresses. Otherwise, EIPs cannot be associated with the NAT gateway. In NAT mode, a maximum number of 50 EIPs can be associated with each NAT gateway.
    std::shared_ptr<string> eipBindMode_ = nullptr;
    // Specifies whether to enable ICMP retrieval. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> icmpReplyEnabled_ = nullptr;
    // The billing method of the NAT gateway.
    // 
    // Set the value to **PostPaid** (pay-as-you-go), which is the default value.
    // 
    // For more information, see [Internet NAT gateway billing](https://help.aliyun.com/document_detail/48126.html) and [VPC NAT gateway billing](https://help.aliyun.com/document_detail/270913.html).
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the NAT gateway. Set the value to **PayByLcu**, which specifies the pay-by-CU metering method.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    std::shared_ptr<string> ipv4Prefix_ = nullptr;
    // The name of the NAT gateway.
    // 
    // The name must be 2 to 128 characters in length and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    // 
    // If this parameter is not set, the system assigns a default name to the NAT gateway.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> natIp_ = nullptr;
    // The type of NAT gateway. Set the value to **Enhanced**, which specifies enhanced NAT gateway.
    std::shared_ptr<string> natType_ = nullptr;
    // The network type of the NAT gateway. Valid values:
    // 
    // *   **internet**: Internet
    // *   **intranet**: VPC
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Subscription Internet NAT gateways are no longer available for purchase. Ignore this parameter.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // PrivateLink is not supported by default. If you set the value to true, PrivateLink is supported.
    std::shared_ptr<bool> privateLinkEnabled_ = nullptr;
    // The region ID of the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to enable the firewall feature. Valid values:
    // 
    // *   **false** (default)>Notice: This parameter is deprecated.
    std::shared_ptr<bool> securityProtectionEnabled_ = nullptr;
    // Subscription Internet NAT gateways are no longer available for purchase. Ignore this parameter.
    std::shared_ptr<string> spec_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateNatGatewayShrinkRequestTag>> tag_ = nullptr;
    // The ID of the vSwitch to which the NAT gateway is attached.
    // 
    // When you create a NAT gateway, you must specify a vSwitch for the NAT gateway. Then, the system assigns an idle private IP address from the vSwitch to the NAT gateway.
    // 
    // *   To attach the NAT gateway to an existing vSwitch, make sure that the zone to which the vSwitch belongs supports NAT gateways. In addition, the vSwitch must have idle IP addresses.
    // *   If no vSwitch exists in the VPC, create a vSwitch in a zone that supports NAT gateways. Then, specify the vSwitch for the NAT gateway.
    // 
    // >  You can call the [ListEnhanhcedNatGatewayAvailableZones](https://help.aliyun.com/document_detail/182292.html) operation to query zones that support NAT gateways. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query idle IP addresses in a vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC where you want to create the NAT gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
