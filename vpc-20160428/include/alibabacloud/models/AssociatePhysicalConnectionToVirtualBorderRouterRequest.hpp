// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEPHYSICALCONNECTIONTOVIRTUALBORDERROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEPHYSICALCONNECTIONTOVIRTUALBORDERROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AssociatePhysicalConnectionToVirtualBorderRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociatePhysicalConnectionToVirtualBorderRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_TO_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociatePhysicalConnectionToVirtualBorderRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
    };
    AssociatePhysicalConnectionToVirtualBorderRouterRequest() = default ;
    AssociatePhysicalConnectionToVirtualBorderRouterRequest(const AssociatePhysicalConnectionToVirtualBorderRouterRequest &) = default ;
    AssociatePhysicalConnectionToVirtualBorderRouterRequest(AssociatePhysicalConnectionToVirtualBorderRouterRequest &&) = default ;
    AssociatePhysicalConnectionToVirtualBorderRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociatePhysicalConnectionToVirtualBorderRouterRequest() = default ;
    AssociatePhysicalConnectionToVirtualBorderRouterRequest& operator=(const AssociatePhysicalConnectionToVirtualBorderRouterRequest &) = default ;
    AssociatePhysicalConnectionToVirtualBorderRouterRequest& operator=(AssociatePhysicalConnectionToVirtualBorderRouterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->circuitCode_ == nullptr
        && this->clientToken_ == nullptr && this->enableIpv6_ == nullptr && this->localGatewayIp_ == nullptr && this->localIpv6GatewayIp_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->peerGatewayIp_ == nullptr && this->peerIpv6GatewayIp_ == nullptr && this->peeringIpv6SubnetMask_ == nullptr && this->peeringSubnetMask_ == nullptr
        && this->physicalConnectionId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->vbrId_ == nullptr
        && this->vlanId_ == nullptr; };
    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline string getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setEnableIpv6(string enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // localIpv6GatewayIp Field Functions 
    bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
    void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
    inline string getLocalIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string getPeerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // peerIpv6GatewayIp Field Functions 
    bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
    void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
    inline string getPeerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


    // peeringIpv6SubnetMask Field Functions 
    bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
    void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
    inline string getPeeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


    // peeringSubnetMask Field Functions 
    bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
    void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
    inline string getPeeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline AssociatePhysicalConnectionToVirtualBorderRouterRequest& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // The circuit code provided by the carrier for the Express Connect circuit. 
    // 
    // > Only the owner of the Express Connect circuit can specify this parameter.
    shared_ptr<string> circuitCode_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // The client generates the value of this parameter. The value must be unique among different requests and cannot exceed 64 ASCII characters in length.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable IPv6. Valid values:
    // 
    // - **true**: Enabled.
    // 
    // - **false** (default): Disabled.
    shared_ptr<string> enableIpv6_ {};
    // The Alibaba Cloud-side IP address of the VBR instance.
    shared_ptr<string> localGatewayIp_ {};
    // The Alibaba Cloud-side IPv6 address of the VBR instance.
    shared_ptr<string> localIpv6GatewayIp_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The client-side IP address of the VBR instance.
    // 
    // - Only the VBR owner can specify or modify this property.
    // 
    // - This parameter is required when you create a VBR instance for the Express Connect circuit owner.
    shared_ptr<string> peerGatewayIp_ {};
    // The client-side IPv6 address of the VBR instance.
    // 
    // - Only the VBR owner can specify or modify this property.
    // 
    // - This parameter is required when you create a VBR instance for the Express Connect circuit owner.
    shared_ptr<string> peerIpv6GatewayIp_ {};
    // The subnet mask for the Alibaba Cloud-side and client-side IPv6 addresses of the VBR instance.
    // 
    // The two IPv6 addresses must be in the same subnet.
    shared_ptr<string> peeringIpv6SubnetMask_ {};
    // The subnet mask for the Alibaba Cloud-side and client-side IP addresses of the VBR instance.
    // 
    // The two IP addresses must be in the same subnet.
    shared_ptr<string> peeringSubnetMask_ {};
    // The Express Connect circuit instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> physicalConnectionId_ {};
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/448570.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The VBR instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> vbrId_ {};
    // The VLAN ID of the VBR. Valid values: **0 to 2999**. 
    // 
    // > Only the owner of the Express Connect circuit can specify this parameter. The VLAN IDs of two VBRs on the same Express Connect circuit must be different.
    // 
    // This parameter is required.
    shared_ptr<string> vlanId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
