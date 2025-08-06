// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODYVIRTUALBORDERROUTERSETVIRTUALBORDERROUTERTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODYVIRTUALBORDERROUTERSETVIRTUALBORDERROUTERTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(ActivationTime, activationTime_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
      DARABONBA_PTR_TO_JSON(RecoveryTime, recoveryTime_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TerminationTime, terminationTime_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VlanInterfaceId, vlanInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(ActivationTime, activationTime_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(RecoveryTime, recoveryTime_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TerminationTime, terminationTime_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VlanInterfaceId, vlanInterfaceId_);
    };
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType() = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType(const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType &) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType(DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType &&) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType() = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& operator=(const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType &) = default ;
    DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& operator=(DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPointId_ != nullptr
        && this->activationTime_ != nullptr && this->circuitCode_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->localGatewayIp_ != nullptr
        && this->name_ != nullptr && this->peerGatewayIp_ != nullptr && this->peeringSubnetMask_ != nullptr && this->physicalConnectionBusinessStatus_ != nullptr && this->physicalConnectionId_ != nullptr
        && this->physicalConnectionOwnerUid_ != nullptr && this->physicalConnectionStatus_ != nullptr && this->recoveryTime_ != nullptr && this->routeTableId_ != nullptr && this->status_ != nullptr
        && this->terminationTime_ != nullptr && this->vbrId_ != nullptr && this->vlanId_ != nullptr && this->vlanInterfaceId_ != nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // activationTime Field Functions 
    bool hasActivationTime() const { return this->activationTime_ != nullptr;};
    void deleteActivationTime() { this->activationTime_ = nullptr;};
    inline string activationTime() const { DARABONBA_PTR_GET_DEFAULT(activationTime_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setActivationTime(string activationTime) { DARABONBA_PTR_SET_VALUE(activationTime_, activationTime) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string circuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string localGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string peerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // peeringSubnetMask Field Functions 
    bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
    void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
    inline string peeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


    // physicalConnectionBusinessStatus Field Functions 
    bool hasPhysicalConnectionBusinessStatus() const { return this->physicalConnectionBusinessStatus_ != nullptr;};
    void deletePhysicalConnectionBusinessStatus() { this->physicalConnectionBusinessStatus_ = nullptr;};
    inline string physicalConnectionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionBusinessStatus_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPhysicalConnectionBusinessStatus(string physicalConnectionBusinessStatus) { DARABONBA_PTR_SET_VALUE(physicalConnectionBusinessStatus_, physicalConnectionBusinessStatus) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string physicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // physicalConnectionOwnerUid Field Functions 
    bool hasPhysicalConnectionOwnerUid() const { return this->physicalConnectionOwnerUid_ != nullptr;};
    void deletePhysicalConnectionOwnerUid() { this->physicalConnectionOwnerUid_ = nullptr;};
    inline string physicalConnectionOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionOwnerUid_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPhysicalConnectionOwnerUid(string physicalConnectionOwnerUid) { DARABONBA_PTR_SET_VALUE(physicalConnectionOwnerUid_, physicalConnectionOwnerUid) };


    // physicalConnectionStatus Field Functions 
    bool hasPhysicalConnectionStatus() const { return this->physicalConnectionStatus_ != nullptr;};
    void deletePhysicalConnectionStatus() { this->physicalConnectionStatus_ = nullptr;};
    inline string physicalConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionStatus_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPhysicalConnectionStatus(string physicalConnectionStatus) { DARABONBA_PTR_SET_VALUE(physicalConnectionStatus_, physicalConnectionStatus) };


    // recoveryTime Field Functions 
    bool hasRecoveryTime() const { return this->recoveryTime_ != nullptr;};
    void deleteRecoveryTime() { this->recoveryTime_ = nullptr;};
    inline string recoveryTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryTime_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setRecoveryTime(string recoveryTime) { DARABONBA_PTR_SET_VALUE(recoveryTime_, recoveryTime) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // terminationTime Field Functions 
    bool hasTerminationTime() const { return this->terminationTime_ != nullptr;};
    void deleteTerminationTime() { this->terminationTime_ = nullptr;};
    inline string terminationTime() const { DARABONBA_PTR_GET_DEFAULT(terminationTime_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setTerminationTime(string terminationTime) { DARABONBA_PTR_SET_VALUE(terminationTime_, terminationTime) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline int32_t vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setVlanId(int32_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vlanInterfaceId Field Functions 
    bool hasVlanInterfaceId() const { return this->vlanInterfaceId_ != nullptr;};
    void deleteVlanInterfaceId() { this->vlanInterfaceId_ = nullptr;};
    inline string vlanInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(vlanInterfaceId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setVlanInterfaceId(string vlanInterfaceId) { DARABONBA_PTR_SET_VALUE(vlanInterfaceId_, vlanInterfaceId) };


  protected:
    std::shared_ptr<string> accessPointId_ = nullptr;
    std::shared_ptr<string> activationTime_ = nullptr;
    std::shared_ptr<string> circuitCode_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> localGatewayIp_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> peerGatewayIp_ = nullptr;
    std::shared_ptr<string> peeringSubnetMask_ = nullptr;
    std::shared_ptr<string> physicalConnectionBusinessStatus_ = nullptr;
    std::shared_ptr<string> physicalConnectionId_ = nullptr;
    std::shared_ptr<string> physicalConnectionOwnerUid_ = nullptr;
    std::shared_ptr<string> physicalConnectionStatus_ = nullptr;
    std::shared_ptr<string> recoveryTime_ = nullptr;
    std::shared_ptr<string> routeTableId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> terminationTime_ = nullptr;
    std::shared_ptr<string> vbrId_ = nullptr;
    std::shared_ptr<int32_t> vlanId_ = nullptr;
    std::shared_ptr<string> vlanInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
