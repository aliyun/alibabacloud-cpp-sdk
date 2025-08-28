// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODYVIRTUALBORDERROUTERSETVIRTUALBORDERROUTERTYPEASSOCIATEDPHYSICALCONNECTIONSASSOCIATEDPHYSICALCONNECTION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODYVIRTUALBORDERROUTERSETVIRTUALBORDERROUTERTYPEASSOCIATEDPHYSICALCONNECTIONSASSOCIATEDPHYSICALCONNECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& obj) { 
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_TO_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VlanInterfaceId, vlanInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& obj) { 
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VlanInterfaceId, vlanInterfaceId_);
    };
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection() = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection(const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection &) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection(DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection &&) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection() = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& operator=(const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection &) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& operator=(DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->circuitCode_ != nullptr
        && this->enableIpv6_ != nullptr && this->localGatewayIp_ != nullptr && this->localIpv6GatewayIp_ != nullptr && this->peerGatewayIp_ != nullptr && this->peerIpv6GatewayIp_ != nullptr
        && this->peeringIpv6SubnetMask_ != nullptr && this->peeringSubnetMask_ != nullptr && this->physicalConnectionBusinessStatus_ != nullptr && this->physicalConnectionId_ != nullptr && this->physicalConnectionOwnerUid_ != nullptr
        && this->physicalConnectionStatus_ != nullptr && this->status_ != nullptr && this->vlanId_ != nullptr && this->vlanInterfaceId_ != nullptr; };
    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string circuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool enableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string localGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // localIpv6GatewayIp Field Functions 
    bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
    void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
    inline string localIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string peerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // peerIpv6GatewayIp Field Functions 
    bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
    void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
    inline string peerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


    // peeringIpv6SubnetMask Field Functions 
    bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
    void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
    inline string peeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


    // peeringSubnetMask Field Functions 
    bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
    void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
    inline string peeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


    // physicalConnectionBusinessStatus Field Functions 
    bool hasPhysicalConnectionBusinessStatus() const { return this->physicalConnectionBusinessStatus_ != nullptr;};
    void deletePhysicalConnectionBusinessStatus() { this->physicalConnectionBusinessStatus_ = nullptr;};
    inline string physicalConnectionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionBusinessStatus_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setPhysicalConnectionBusinessStatus(string physicalConnectionBusinessStatus) { DARABONBA_PTR_SET_VALUE(physicalConnectionBusinessStatus_, physicalConnectionBusinessStatus) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string physicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // physicalConnectionOwnerUid Field Functions 
    bool hasPhysicalConnectionOwnerUid() const { return this->physicalConnectionOwnerUid_ != nullptr;};
    void deletePhysicalConnectionOwnerUid() { this->physicalConnectionOwnerUid_ = nullptr;};
    inline string physicalConnectionOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionOwnerUid_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setPhysicalConnectionOwnerUid(string physicalConnectionOwnerUid) { DARABONBA_PTR_SET_VALUE(physicalConnectionOwnerUid_, physicalConnectionOwnerUid) };


    // physicalConnectionStatus Field Functions 
    bool hasPhysicalConnectionStatus() const { return this->physicalConnectionStatus_ != nullptr;};
    void deletePhysicalConnectionStatus() { this->physicalConnectionStatus_ = nullptr;};
    inline string physicalConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionStatus_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setPhysicalConnectionStatus(string physicalConnectionStatus) { DARABONBA_PTR_SET_VALUE(physicalConnectionStatus_, physicalConnectionStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vlanInterfaceId Field Functions 
    bool hasVlanInterfaceId() const { return this->vlanInterfaceId_ != nullptr;};
    void deleteVlanInterfaceId() { this->vlanInterfaceId_ = nullptr;};
    inline string vlanInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(vlanInterfaceId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnectionsAssociatedPhysicalConnection& setVlanInterfaceId(string vlanInterfaceId) { DARABONBA_PTR_SET_VALUE(vlanInterfaceId_, vlanInterfaceId) };


  protected:
    // The circuit code of the Express Connect circuit, which is provided by the connectivity provider.
    std::shared_ptr<string> circuitCode_ = nullptr;
    // Indicates whether IPv6 is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableIpv6_ = nullptr;
    // The IPv4 address of the VBR on the Alibaba Cloud side.
    std::shared_ptr<string> localGatewayIp_ = nullptr;
    // The IPv6 address of the VBR on the Alibaba Cloud side.
    std::shared_ptr<string> localIpv6GatewayIp_ = nullptr;
    // The IPv4 address of the VBR on the user side.
    std::shared_ptr<string> peerGatewayIp_ = nullptr;
    // The IPv6 address of the VBR on the user side.
    std::shared_ptr<string> peerIpv6GatewayIp_ = nullptr;
    // The subnet mask for the IPv6 addresses on the user side and on the Alibaba Cloud side.
    // 
    // Both IPv6 addresses must belong to the same subnet.
    std::shared_ptr<string> peeringIpv6SubnetMask_ = nullptr;
    // The subnet mask for the IPv4 addresses of the VBR on the user side and on the Alibaba Cloud side.
    // 
    // Both IPv4 addresses must belong to the same subnet.
    std::shared_ptr<string> peeringSubnetMask_ = nullptr;
    // The business status of the Express Connect circuit. Valid values:
    // 
    // *   **Normal:** The Express Connect circuit is running as normal.
    // *   **FinancialLocked:** The Express Connect circuit is locked due to overdue payments.
    std::shared_ptr<string> physicalConnectionBusinessStatus_ = nullptr;
    // The ID of the Express Connect circuit.
    std::shared_ptr<string> physicalConnectionId_ = nullptr;
    // The ID of the account to which the Express Connect circuit belongs.
    std::shared_ptr<string> physicalConnectionOwnerUid_ = nullptr;
    // The status of the Express Connect circuit. Valid values:
    // 
    // *   **Initial:** The application is under review.
    // *   **Approved**: The application is approved.
    // *   **Allocating**: The system is allocating resources.
    // *   **Allocated**: The Express Connect circuit is under construction.
    // *   **Confirmed**: The Express Connect circuit is to be confirmed.
    // *   **Enabled**: The Express Connect circuit is enabled.
    // *   **Rejected**: The application is rejected.
    // *   **Canceled**: The application is canceled.
    // *   **Allocation Failed:** The system failed to allocate resources.
    // *   **Terminated:** The Express Connect circuit is disabled.
    std::shared_ptr<string> physicalConnectionStatus_ = nullptr;
    // The status of the VBR. Valid values:
    // 
    // *   **unconfirmed**
    // *   **active:**
    // *   **terminating**
    // *   **terminated**
    // *   **recovering**
    // *   **deleting:**
    std::shared_ptr<string> status_ = nullptr;
    // The VLAN ID of the VBR.
    std::shared_ptr<string> vlanId_ = nullptr;
    // The ID of the VBR interface, which can be used as a next hop of a VBR route.
    std::shared_ptr<string> vlanInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
