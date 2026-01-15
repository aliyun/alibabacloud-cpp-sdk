// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
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
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
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
    CreateNatGatewayRequest() = default ;
    CreateNatGatewayRequest(const CreateNatGatewayRequest &) = default ;
    CreateNatGatewayRequest(CreateNatGatewayRequest &&) = default ;
    CreateNatGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayRequest() = default ;
    CreateNatGatewayRequest& operator=(const CreateNatGatewayRequest &) = default ;
    CreateNatGatewayRequest& operator=(CreateNatGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. The format of Tag.N.Key when you call the operation. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot contain http:// or https://. The tag key cannot start with acs: or aliyun.
      shared_ptr<string> key_ {};
      // The tag value. The format of Tag.N.Value when you call the operation. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot contain http:// or https://. The tag key cannot start with acs: or aliyun.
      shared_ptr<string> value_ {};
    };

    class AccessMode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessMode& obj) { 
        DARABONBA_PTR_TO_JSON(ModeValue, modeValue_);
        DARABONBA_PTR_TO_JSON(TunnelType, tunnelType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessMode& obj) { 
        DARABONBA_PTR_FROM_JSON(ModeValue, modeValue_);
        DARABONBA_PTR_FROM_JSON(TunnelType, tunnelType_);
      };
      AccessMode() = default ;
      AccessMode(const AccessMode &) = default ;
      AccessMode(AccessMode &&) = default ;
      AccessMode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessMode() = default ;
      AccessMode& operator=(const AccessMode &) = default ;
      AccessMode& operator=(AccessMode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modeValue_ == nullptr
        && this->tunnelType_ == nullptr; };
      // modeValue Field Functions 
      bool hasModeValue() const { return this->modeValue_ != nullptr;};
      void deleteModeValue() { this->modeValue_ = nullptr;};
      inline string getModeValue() const { DARABONBA_PTR_GET_DEFAULT(modeValue_, "") };
      inline AccessMode& setModeValue(string modeValue) { DARABONBA_PTR_SET_VALUE(modeValue_, modeValue) };


      // tunnelType Field Functions 
      bool hasTunnelType() const { return this->tunnelType_ != nullptr;};
      void deleteTunnelType() { this->tunnelType_ = nullptr;};
      inline string getTunnelType() const { DARABONBA_PTR_GET_DEFAULT(tunnelType_, "") };
      inline AccessMode& setTunnelType(string tunnelType) { DARABONBA_PTR_SET_VALUE(tunnelType_, tunnelType) };


    protected:
      // Access mode. Valid values:
      // 
      // - **route**: route mode
      // 
      // - **tunnel**: tunnel mode
      // 
      // > If this parameter is specified, you must set **PrivateLinkEnabled** to **true**.
      shared_ptr<string> modeValue_ {};
      // Tunnel mode type:
      // 
      // - **geneve**: Geneve type
      // 
      // > This value takes effect if the access mode is the tunnel mode.
      shared_ptr<string> tunnelType_ {};
    };

    virtual bool empty() const override { return this->accessMode_ == nullptr
        && this->autoPay_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->duration_ == nullptr && this->eipBindMode_ == nullptr
        && this->icmpReplyEnabled_ == nullptr && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr && this->ipv4Prefix_ == nullptr && this->name_ == nullptr
        && this->natIp_ == nullptr && this->natType_ == nullptr && this->networkType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->pricingCycle_ == nullptr && this->privateLinkEnabled_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityProtectionEnabled_ == nullptr && this->spec_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline const CreateNatGatewayRequest::AccessMode & getAccessMode() const { DARABONBA_PTR_GET_CONST(accessMode_, CreateNatGatewayRequest::AccessMode) };
    inline CreateNatGatewayRequest::AccessMode getAccessMode() { DARABONBA_PTR_GET(accessMode_, CreateNatGatewayRequest::AccessMode) };
    inline CreateNatGatewayRequest& setAccessMode(const CreateNatGatewayRequest::AccessMode & accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };
    inline CreateNatGatewayRequest& setAccessMode(CreateNatGatewayRequest::AccessMode && accessMode) { DARABONBA_PTR_SET_RVALUE(accessMode_, accessMode) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateNatGatewayRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNatGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNatGatewayRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateNatGatewayRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // eipBindMode Field Functions 
    bool hasEipBindMode() const { return this->eipBindMode_ != nullptr;};
    void deleteEipBindMode() { this->eipBindMode_ = nullptr;};
    inline string getEipBindMode() const { DARABONBA_PTR_GET_DEFAULT(eipBindMode_, "") };
    inline CreateNatGatewayRequest& setEipBindMode(string eipBindMode) { DARABONBA_PTR_SET_VALUE(eipBindMode_, eipBindMode) };


    // icmpReplyEnabled Field Functions 
    bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
    void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
    inline bool getIcmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
    inline CreateNatGatewayRequest& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateNatGatewayRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateNatGatewayRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline string getIpv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
    inline CreateNatGatewayRequest& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateNatGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string getNatIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline CreateNatGatewayRequest& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natType Field Functions 
    bool hasNatType() const { return this->natType_ != nullptr;};
    void deleteNatType() { this->natType_ = nullptr;};
    inline string getNatType() const { DARABONBA_PTR_GET_DEFAULT(natType_, "") };
    inline CreateNatGatewayRequest& setNatType(string natType) { DARABONBA_PTR_SET_VALUE(natType_, natType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateNatGatewayRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateNatGatewayRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNatGatewayRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateNatGatewayRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // privateLinkEnabled Field Functions 
    bool hasPrivateLinkEnabled() const { return this->privateLinkEnabled_ != nullptr;};
    void deletePrivateLinkEnabled() { this->privateLinkEnabled_ = nullptr;};
    inline bool getPrivateLinkEnabled() const { DARABONBA_PTR_GET_DEFAULT(privateLinkEnabled_, false) };
    inline CreateNatGatewayRequest& setPrivateLinkEnabled(bool privateLinkEnabled) { DARABONBA_PTR_SET_VALUE(privateLinkEnabled_, privateLinkEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNatGatewayRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNatGatewayRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateNatGatewayRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityProtectionEnabled Field Functions 
    bool hasSecurityProtectionEnabled() const { return this->securityProtectionEnabled_ != nullptr;};
    void deleteSecurityProtectionEnabled() { this->securityProtectionEnabled_ = nullptr;};
    inline bool getSecurityProtectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(securityProtectionEnabled_, false) };
    inline CreateNatGatewayRequest& setSecurityProtectionEnabled(bool securityProtectionEnabled) { DARABONBA_PTR_SET_VALUE(securityProtectionEnabled_, securityProtectionEnabled) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateNatGatewayRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNatGatewayRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNatGatewayRequest::Tag>) };
    inline vector<CreateNatGatewayRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateNatGatewayRequest::Tag>) };
    inline CreateNatGatewayRequest& setTag(const vector<CreateNatGatewayRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNatGatewayRequest& setTag(vector<CreateNatGatewayRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNatGatewayRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateNatGatewayRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The access mode for reverse access to the VPC NAT gateway.
    shared_ptr<CreateNatGatewayRequest::AccessMode> accessMode_ {};
    // Subscription Internet NAT gateways are no longer available for purchase. Ignore this parameter.
    shared_ptr<bool> autoPay_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The description of the NAT gateway.
    // 
    // You can leave this parameter empty or enter a description. If you enter a description, the description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Subscription Internet NAT gateways are no longer available for purchase. Ignore this parameter.
    shared_ptr<string> duration_ {};
    // The mode in which the EIP is associated with the NAT gateway. Valid values:
    // 
    // - **MULTI_BINDED**(default): the multi-EIP-to-ENI mode.
    // 
    // - **NAT**: NAT mode, which is compatible with IPv4 addresses.
    // 
    // > If an EIP is associated with a NAT gateway in NAT mode, the EIP occupies a private IP address of the vSwitch where the NAT gateway is deployed. Make sure that the vSwitch has sufficient private IP addresses. Otherwise, EIPs cannot be associated with the NAT gateway. In NAT mode, a maximum number of 50 EIPs can be associated with each NAT gateway.
    shared_ptr<string> eipBindMode_ {};
    // Specifies whether to enable ICMP retrieval. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    shared_ptr<bool> icmpReplyEnabled_ {};
    // The billing method of the NAT gateway.
    // 
    // Set the value to **PostPaid** (pay-as-you-go), which is the default value.
    // 
    // For more information, see [Internet NAT gateway billing](https://help.aliyun.com/document_detail/48126.html) and [VPC NAT gateway billing](https://help.aliyun.com/document_detail/270913.html).
    shared_ptr<string> instanceChargeType_ {};
    // The metering method of the NAT gateway. Set the value to **PayByLcu**, which specifies the pay-by-CU metering method.
    shared_ptr<string> internetChargeType_ {};
    // Create an IP prefix address segment for batch creation of NAT IPs. Please use the reserved and unallocated network segments in the VSwitch where the NAT is located.
    shared_ptr<string> ipv4Prefix_ {};
    // The name of the NAT gateway.
    // 
    // The name must be 2 to 128 characters in length and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    // 
    // If this parameter is not set, the system assigns a default name to the NAT gateway.
    shared_ptr<string> name_ {};
    // The private IP address occupied by the NAT gateway. Please use an unassigned IP from the subnet where the NAT is located. If left empty, an IP address will be randomly assigned.
    shared_ptr<string> natIp_ {};
    // The type of NAT gateway. Set the value to **Enhanced**, which specifies enhanced NAT gateway.
    shared_ptr<string> natType_ {};
    // The network type of the NAT gateway. Valid values:
    // 
    // *   **internet**: Internet
    // *   **intranet**: VPC
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Subscription Internet NAT gateways are no longer available for purchase. Ignore this parameter.
    shared_ptr<string> pricingCycle_ {};
    // PrivateLink is not supported by default. If you set the value to true, PrivateLink is supported.
    shared_ptr<bool> privateLinkEnabled_ {};
    // The region ID of the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the firewall feature. Valid values:
    // 
    // *   **false** (default)>Notice: This parameter is deprecated.
    shared_ptr<bool> securityProtectionEnabled_ {};
    // Subscription Internet NAT gateways are no longer available for purchase. Ignore this parameter.
    shared_ptr<string> spec_ {};
    // The tags.
    shared_ptr<vector<CreateNatGatewayRequest::Tag>> tag_ {};
    // The ID of the vSwitch to which the NAT gateway is attached.
    // 
    // When you create a NAT gateway, you must specify a vSwitch for the NAT gateway. Then, the system assigns an idle private IP address from the vSwitch to the NAT gateway.
    // 
    // *   To attach the NAT gateway to an existing vSwitch, make sure that the zone to which the vSwitch belongs supports NAT gateways. In addition, the vSwitch must have idle IP addresses.
    // *   If no vSwitch exists in the VPC, create a vSwitch in a zone that supports NAT gateways. Then, specify the vSwitch for the NAT gateway.
    // 
    // >  You can call the [ListEnhanhcedNatGatewayAvailableZones](https://help.aliyun.com/document_detail/182292.html) operation to query zones that support NAT gateways. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query idle IP addresses in a vSwitch.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC where you want to create the NAT gateway.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
