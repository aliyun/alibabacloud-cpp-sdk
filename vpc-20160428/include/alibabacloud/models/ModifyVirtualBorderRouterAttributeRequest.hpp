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
    virtual bool empty() const override { this->associatedPhysicalConnections_ != nullptr
        && this->bandwidth_ != nullptr && this->circuitCode_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr && this->detectMultiplier_ != nullptr
        && this->enableIpv6_ != nullptr && this->localGatewayIp_ != nullptr && this->localIpv6GatewayIp_ != nullptr && this->minRxInterval_ != nullptr && this->minTxInterval_ != nullptr
        && this->mtu_ != nullptr && this->name_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->peerGatewayIp_ != nullptr
        && this->peerIpv6GatewayIp_ != nullptr && this->peeringIpv6SubnetMask_ != nullptr && this->peeringSubnetMask_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->sitelinkEnable_ != nullptr && this->vbrId_ != nullptr && this->vlanId_ != nullptr; };
    // associatedPhysicalConnections Field Functions 
    bool hasAssociatedPhysicalConnections() const { return this->associatedPhysicalConnections_ != nullptr;};
    void deleteAssociatedPhysicalConnections() { this->associatedPhysicalConnections_ = nullptr;};
    inline string associatedPhysicalConnections() const { DARABONBA_PTR_GET_DEFAULT(associatedPhysicalConnections_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setAssociatedPhysicalConnections(string associatedPhysicalConnections) { DARABONBA_PTR_SET_VALUE(associatedPhysicalConnections_, associatedPhysicalConnections) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ModifyVirtualBorderRouterAttributeRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string circuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detectMultiplier Field Functions 
    bool hasDetectMultiplier() const { return this->detectMultiplier_ != nullptr;};
    void deleteDetectMultiplier() { this->detectMultiplier_ = nullptr;};
    inline int64_t detectMultiplier() const { DARABONBA_PTR_GET_DEFAULT(detectMultiplier_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setDetectMultiplier(int64_t detectMultiplier) { DARABONBA_PTR_SET_VALUE(detectMultiplier_, detectMultiplier) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool enableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline ModifyVirtualBorderRouterAttributeRequest& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string localGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // localIpv6GatewayIp Field Functions 
    bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
    void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
    inline string localIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


    // minRxInterval Field Functions 
    bool hasMinRxInterval() const { return this->minRxInterval_ != nullptr;};
    void deleteMinRxInterval() { this->minRxInterval_ = nullptr;};
    inline int64_t minRxInterval() const { DARABONBA_PTR_GET_DEFAULT(minRxInterval_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setMinRxInterval(int64_t minRxInterval) { DARABONBA_PTR_SET_VALUE(minRxInterval_, minRxInterval) };


    // minTxInterval Field Functions 
    bool hasMinTxInterval() const { return this->minTxInterval_ != nullptr;};
    void deleteMinTxInterval() { this->minTxInterval_ = nullptr;};
    inline int64_t minTxInterval() const { DARABONBA_PTR_GET_DEFAULT(minTxInterval_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setMinTxInterval(int64_t minTxInterval) { DARABONBA_PTR_SET_VALUE(minTxInterval_, minTxInterval) };


    // mtu Field Functions 
    bool hasMtu() const { return this->mtu_ != nullptr;};
    void deleteMtu() { this->mtu_ = nullptr;};
    inline int32_t mtu() const { DARABONBA_PTR_GET_DEFAULT(mtu_, 0) };
    inline ModifyVirtualBorderRouterAttributeRequest& setMtu(int32_t mtu) { DARABONBA_PTR_SET_VALUE(mtu_, mtu) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string peerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // peerIpv6GatewayIp Field Functions 
    bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
    void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
    inline string peerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


    // peeringIpv6SubnetMask Field Functions 
    bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
    void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
    inline string peeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


    // peeringSubnetMask Field Functions 
    bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
    void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
    inline string peeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVirtualBorderRouterAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sitelinkEnable Field Functions 
    bool hasSitelinkEnable() const { return this->sitelinkEnable_ != nullptr;};
    void deleteSitelinkEnable() { this->sitelinkEnable_ = nullptr;};
    inline bool sitelinkEnable() const { DARABONBA_PTR_GET_DEFAULT(sitelinkEnable_, false) };
    inline ModifyVirtualBorderRouterAttributeRequest& setSitelinkEnable(bool sitelinkEnable) { DARABONBA_PTR_SET_VALUE(sitelinkEnable_, sitelinkEnable) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline ModifyVirtualBorderRouterAttributeRequest& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline int32_t vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0) };
    inline ModifyVirtualBorderRouterAttributeRequest& setVlanId(int32_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // The information about the Express Connect circuit associated with the VBR, including the following parameters:
    // 
    // *   **CircuitCode**: the circuit code provided by the connectivity provider for the Express Connect circuit.
    // *   **LocalGatewayIp**: the IP address of the gateway device on the Alibaba Cloud side.
    // *   **PeerGatewayIp**: the IP address of the gateway device on the customer side.
    // *   **PeeringSubnetMask**: the subnet mask for the IP addresses of gateway devices on the Alibaba Cloud side and the customer side.
    // *   **PhysicalConnectionId**: the ID of the Express Connect circuit.
    std::shared_ptr<string> associatedPhysicalConnections_ = nullptr;
    // The bandwidth value. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The circuit code of the Express Connect circuit. The circuit code is provided by the connectivity provider.
    // 
    // >  Only the owner of the Express Connect circuit can set this property.
    std::shared_ptr<string> circuitCode_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the VBR.
    // 
    // It must be 2 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The maximum number of dropped packets that is allowed by the receiver when the initiator transmits packets. This value can be used to check whether a connection works as expected.
    // 
    // Valid values: **3 to 10**.
    std::shared_ptr<int64_t> detectMultiplier_ = nullptr;
    // Specifies whether to enable IPv6. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enableIpv6_ = nullptr;
    // The IP address of the VBR.
    // 
    // Only the owner of the VBR can set or modify this parameter.
    std::shared_ptr<string> localGatewayIp_ = nullptr;
    // The IPv6 address of the VBR.
    std::shared_ptr<string> localIpv6GatewayIp_ = nullptr;
    // The time interval to receive BFD packets. Valid values: **200 to 1000**. Unit: milliseconds.
    std::shared_ptr<int64_t> minRxInterval_ = nullptr;
    // The time interval to send BFD packets. Valid values: **200 to 1000**. Unit: milliseconds.
    std::shared_ptr<int64_t> minTxInterval_ = nullptr;
    std::shared_ptr<int32_t> mtu_ = nullptr;
    // The name of the VBR.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter. It cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The IP address of the gateway device in the data center.
    // 
    // Only the owner of the VBR can set or modify this parameter.
    std::shared_ptr<string> peerGatewayIp_ = nullptr;
    // The IPv6 address of the gateway device in the data center.
    // 
    // *   Only the owner of the VBR can set or modify this property.
    // *   This property is required when you create a VBR for the owner of the Express Connect circuit. You can ignore this property when you create a VBR for another Alibaba Cloud account.
    std::shared_ptr<string> peerIpv6GatewayIp_ = nullptr;
    // The subnet mask of the IPv6 addresses of the VBR and the gateway device in the data center.
    // 
    // The two IPv6 addresses must fall within the same subnet.
    std::shared_ptr<string> peeringIpv6SubnetMask_ = nullptr;
    // The subnet mask for the IP addresses of the gateway devices on the Alibaba Cloud side and on the customer side. Only the owner of the VBR can set or modify this parameter.
    // 
    // The two IP addresses must fall within the same subnet.
    std::shared_ptr<string> peeringSubnetMask_ = nullptr;
    // The region ID of the VBR.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Indicates whether to allow service access between data centers. Valid values:
    // 
    // - **true**
    // - **false**
    std::shared_ptr<bool> sitelinkEnable_ = nullptr;
    // The VBR ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrId_ = nullptr;
    // The VLAN ID of the VBR. Valid values: **0 to 2999**.
    // 
    // >  This parameter is available only to Express Connect owners. The VLAN IDs of VBRs on the same Express Connect circuit must be unique.
    std::shared_ptr<int32_t> vlanId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
