// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVIRTUALBORDERROUTERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVIRTUALBORDERROUTERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVirtualBorderRouterAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVirtualBorderRouterAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedPhysicalConnections, associatedPhysicalConnections_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetectMultiplier, detectMultiplier_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(MinRxInterval, minRxInterval_);
      DARABONBA_PTR_TO_JSON(MinTxInterval, minTxInterval_);
      DARABONBA_PTR_TO_JSON(Mtu, mtu_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_TO_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SitelinkEnable, sitelinkEnable_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVirtualBorderRouterAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedPhysicalConnections, associatedPhysicalConnections_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetectMultiplier, detectMultiplier_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(MinRxInterval, minRxInterval_);
      DARABONBA_PTR_FROM_JSON(MinTxInterval, minTxInterval_);
      DARABONBA_PTR_FROM_JSON(Mtu, mtu_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SitelinkEnable, sitelinkEnable_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
    };
    ModifyVirtualBorderRouterAttributeRequest() = default ;
    ModifyVirtualBorderRouterAttributeRequest(const ModifyVirtualBorderRouterAttributeRequest &) = default ;
    ModifyVirtualBorderRouterAttributeRequest(ModifyVirtualBorderRouterAttributeRequest &&) = default ;
    ModifyVirtualBorderRouterAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVirtualBorderRouterAttributeRequest() = default ;
    ModifyVirtualBorderRouterAttributeRequest& operator=(const ModifyVirtualBorderRouterAttributeRequest &) = default ;
    ModifyVirtualBorderRouterAttributeRequest& operator=(ModifyVirtualBorderRouterAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedPhysicalConnections_ == nullptr
        && this->bandwidth_ == nullptr && this->circuitCode_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->detectMultiplier_ == nullptr
        && this->enableIpv6_ == nullptr && this->localGatewayIp_ == nullptr && this->localIpv6GatewayIp_ == nullptr && this->minRxInterval_ == nullptr && this->minTxInterval_ == nullptr
        && this->mtu_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->peerGatewayIp_ == nullptr
        && this->peerIpv6GatewayIp_ == nullptr && this->peeringIpv6SubnetMask_ == nullptr && this->peeringSubnetMask_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->sitelinkEnable_ == nullptr && this->vbrId_ == nullptr && this->vlanId_ == nullptr; };
    // associatedPhysicalConnections Field Functions 
    bool hasAssociatedPhysicalConnections() const { return this->associatedPhysicalConnections_ != nullptr;};
    void deleteAssociatedPhysicalConnections() { this->associatedPhysicalConnections_ = nullptr;};
    inline string getAssociatedPhysicalConnections() const { DARABONBA_PTR_GET_DEFAULT(associatedPhysicalConnections_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setAssociatedPhysicalConnections(string associatedPhysicalConnections) { DARABONBA_PTR_SET_VALUE(associatedPhysicalConnections_, associatedPhysicalConnections) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ModifyVirtualBorderRouterAttributeRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detectMultiplier Field Functions 
    bool hasDetectMultiplier() const { return this->detectMultiplier_ != nullptr;};
    void deleteDetectMultiplier() { this->detectMultiplier_ = nullptr;};
    inline int64_t getDetectMultiplier() const { DARABONBA_PTR_GET_DEFAULT(detectMultiplier_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setDetectMultiplier(int64_t detectMultiplier) { DARABONBA_PTR_SET_VALUE(detectMultiplier_, detectMultiplier) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline ModifyVirtualBorderRouterAttributeRequest& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // localIpv6GatewayIp Field Functions 
    bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
    void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
    inline string getLocalIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


    // minRxInterval Field Functions 
    bool hasMinRxInterval() const { return this->minRxInterval_ != nullptr;};
    void deleteMinRxInterval() { this->minRxInterval_ = nullptr;};
    inline int64_t getMinRxInterval() const { DARABONBA_PTR_GET_DEFAULT(minRxInterval_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setMinRxInterval(int64_t minRxInterval) { DARABONBA_PTR_SET_VALUE(minRxInterval_, minRxInterval) };


    // minTxInterval Field Functions 
    bool hasMinTxInterval() const { return this->minTxInterval_ != nullptr;};
    void deleteMinTxInterval() { this->minTxInterval_ = nullptr;};
    inline int64_t getMinTxInterval() const { DARABONBA_PTR_GET_DEFAULT(minTxInterval_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setMinTxInterval(int64_t minTxInterval) { DARABONBA_PTR_SET_VALUE(minTxInterval_, minTxInterval) };


    // mtu Field Functions 
    bool hasMtu() const { return this->mtu_ != nullptr;};
    void deleteMtu() { this->mtu_ = nullptr;};
    inline int32_t getMtu() const { DARABONBA_PTR_GET_DEFAULT(mtu_, 0) };
    inline ModifyVirtualBorderRouterAttributeRequest& setMtu(int32_t mtu) { DARABONBA_PTR_SET_VALUE(mtu_, mtu) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string getPeerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // peerIpv6GatewayIp Field Functions 
    bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
    void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
    inline string getPeerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


    // peeringIpv6SubnetMask Field Functions 
    bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
    void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
    inline string getPeeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


    // peeringSubnetMask Field Functions 
    bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
    void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
    inline string getPeeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sitelinkEnable Field Functions 
    bool hasSitelinkEnable() const { return this->sitelinkEnable_ != nullptr;};
    void deleteSitelinkEnable() { this->sitelinkEnable_ = nullptr;};
    inline bool getSitelinkEnable() const { DARABONBA_PTR_GET_DEFAULT(sitelinkEnable_, false) };
    inline ModifyVirtualBorderRouterAttributeRequest& setSitelinkEnable(bool sitelinkEnable) { DARABONBA_PTR_SET_VALUE(sitelinkEnable_, sitelinkEnable) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline int32_t getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0) };
    inline ModifyVirtualBorderRouterAttributeRequest& setVlanId(int32_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // The list of Express Connect circuits associated with the VBR, which contains the following parameters:
    // 
    // - **VlanId**: The VLAN ID of the VBR instance.
    // - **CircuitCode**: The circuit encoding provided by the carrier for the Express Connect circuit.
    // - **LocalGatewayIp**: The Alibaba Cloud-side IP address of the VBR instance.
    // - **PeerGatewayIp**: The client-side IP address of the VBR instance.
    // - **PeeringSubnetMask**: The subnet mask for the Alibaba Cloud-side and client-side IP addresses of the VBR instance.
    // - **LocalIpv6GatewayIp**: The Alibaba Cloud-side IPv6 address of the VBR instance.
    // - **PeerIpv6GatewayIp**: The client-side IPv6 address of the VBR instance.
    // - **PeeringIpv6SubnetMask**: The subnet mask for the Alibaba Cloud-side and client-side IPv6 addresses of the VBR instance.
    // - **ipv6Enable**: Enables IPv6.
    // - **PhysicalConnectionId**: The Express Connect circuit instance ID.
    shared_ptr<string> associatedPhysicalConnections_ {};
    // The bandwidth value. Unit: Mbit/s.
    shared_ptr<int32_t> bandwidth_ {};
    // The circuit code provided by the carrier for the Express Connect circuit. 
    //           
    // > Only the owner of the Express Connect circuit can specify this parameter.
    shared_ptr<string> circuitCode_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a parameter value from your client to ensure uniqueness across different requests. ClientToken supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the VBR.
    // 
    // The description must be 2 to 256 characters in length and must start with a letter or Chinese character. It cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The detection multiplier, which specifies the maximum number of consecutive packet losses allowed by the receiver from the sender. This parameter is used to detect whether the link is normal.
    // 
    // Valid values: **3 to 10**.
    shared_ptr<int64_t> detectMultiplier_ {};
    // Specifies whether to enable IPv6. Valid values:
    // 
    // - **true**: Enabled.
    // 
    // - **false** (default): Disabled.
    shared_ptr<bool> enableIpv6_ {};
    // The Alibaba Cloud-side IP address of the VBR instance.
    // 
    // This property can be specified or modified only by the VBR owner.
    shared_ptr<string> localGatewayIp_ {};
    // The Alibaba Cloud-side IPv6 address of the VBR instance.
    shared_ptr<string> localIpv6GatewayIp_ {};
    // The receive interval of BFD packets. Valid values: **200 to 1000**. Unit: ms.
    shared_ptr<int64_t> minRxInterval_ {};
    // The alert interval for sending Bidirectional Forwarding Detection (BFD) packets. Valid values: **200 to 1000**. Unit: ms.
    shared_ptr<int64_t> minTxInterval_ {};
    // The MTU value supported by the VBR. Valid values: 1500 and 8500.
    // This value can be set only when the VBR is attached to an Express Connect Router (ECR). This value also affects all other VBRs and VPCs within the same ECR.
    shared_ptr<int32_t> mtu_ {};
    // The name of the VBR.
    // 
    // The name must be 2 to 128 characters in length and must start with a letter or Chinese character. It can contain digits, underscores (_), and hyphens (-). It cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The client-side IP address of the VBR instance.
    // 
    // This property can be specified or modified only by the VBR owner.
    shared_ptr<string> peerGatewayIp_ {};
    // The client-side IPv6 address of the VBR instance.
    // 
    // - This property can be specified or modified only by the VBR owner.
    // 
    // - This parameter is required when the Express Connect circuit owner creates a VBR instance. It is not required when creating a VBR instance for another account.
    shared_ptr<string> peerIpv6GatewayIp_ {};
    // The subnet mask for the Alibaba Cloud-side and client-side IPv6 addresses of the VBR instance.
    // 
    // The two IPv6 addresses must be in the same subnet.
    shared_ptr<string> peeringIpv6SubnetMask_ {};
    // The subnet mask for the Alibaba Cloud-side and client-side IP addresses of the VBR instance. This property can be specified or modified only by the VBR owner.
    // 
    // The two IP addresses must be in the same subnet.
    shared_ptr<string> peeringSubnetMask_ {};
    // The region ID of the VBR.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to allow inter-IDC service access. Valid values:
    // 
    // - true: Allowed.
    // 
    // - false (default): Not allowed.
    shared_ptr<bool> sitelinkEnable_ {};
    // The VBR instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> vbrId_ {};
    // The VLAN ID of the VBR. Valid values: **0 to 2999**. 
    // 
    // > Only the owner of the Express Connect circuit can specify this parameter. The VLAN IDs of two VBRs on the same Express Connect circuit must be different.
    shared_ptr<int32_t> vlanId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
