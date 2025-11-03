// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODYVIRTUALBORDERROUTERSETVIRTUALBORDERROUTERTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODYVIRTUALBORDERROUTERSETVIRTUALBORDERROUTERTYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCens.hpp>
#include <alibabacloud/models/DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnections.hpp>
#include <alibabacloud/models/DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(ActivationTime, activationTime_);
      DARABONBA_PTR_TO_JSON(AssociatedCens, associatedCens_);
      DARABONBA_PTR_TO_JSON(AssociatedPhysicalConnections, associatedPhysicalConnections_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(CloudBoxInstanceId, cloudBoxInstanceId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetectMultiplier, detectMultiplier_);
      DARABONBA_PTR_TO_JSON(EccId, eccId_);
      DARABONBA_PTR_TO_JSON(EcrAttatchStatus, ecrAttatchStatus_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(MinRxInterval, minRxInterval_);
      DARABONBA_PTR_TO_JSON(MinTxInterval, minTxInterval_);
      DARABONBA_PTR_TO_JSON(Mtu, mtu_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PConnVbrChargeType, PConnVbrChargeType_);
      DARABONBA_PTR_TO_JSON(PConnVbrExpireTime, PConnVbrExpireTime_);
      DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_TO_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
      DARABONBA_PTR_TO_JSON(RecoveryTime, recoveryTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(SitelinkEnable, sitelinkEnable_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationTime, terminationTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VlanInterfaceId, vlanInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(ActivationTime, activationTime_);
      DARABONBA_PTR_FROM_JSON(AssociatedCens, associatedCens_);
      DARABONBA_PTR_FROM_JSON(AssociatedPhysicalConnections, associatedPhysicalConnections_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(CloudBoxInstanceId, cloudBoxInstanceId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetectMultiplier, detectMultiplier_);
      DARABONBA_PTR_FROM_JSON(EccId, eccId_);
      DARABONBA_PTR_FROM_JSON(EcrAttatchStatus, ecrAttatchStatus_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(MinRxInterval, minRxInterval_);
      DARABONBA_PTR_FROM_JSON(MinTxInterval, minTxInterval_);
      DARABONBA_PTR_FROM_JSON(Mtu, mtu_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PConnVbrChargeType, PConnVbrChargeType_);
      DARABONBA_PTR_FROM_JSON(PConnVbrExpireTime, PConnVbrExpireTime_);
      DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionBusinessStatus, physicalConnectionBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionOwnerUid, physicalConnectionOwnerUid_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionStatus, physicalConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(RecoveryTime, recoveryTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(SitelinkEnable, sitelinkEnable_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationTime, terminationTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
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
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && return this->activationTime_ == nullptr && return this->associatedCens_ == nullptr && return this->associatedPhysicalConnections_ == nullptr && return this->bandwidth_ == nullptr && return this->circuitCode_ == nullptr
        && return this->cloudBoxInstanceId_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->detectMultiplier_ == nullptr && return this->eccId_ == nullptr
        && return this->ecrAttatchStatus_ == nullptr && return this->ecrId_ == nullptr && return this->ecrOwnerId_ == nullptr && return this->enableIpv6_ == nullptr && return this->localGatewayIp_ == nullptr
        && return this->localIpv6GatewayIp_ == nullptr && return this->minRxInterval_ == nullptr && return this->minTxInterval_ == nullptr && return this->mtu_ == nullptr && return this->name_ == nullptr
        && return this->PConnVbrChargeType_ == nullptr && return this->PConnVbrExpireTime_ == nullptr && return this->peerGatewayIp_ == nullptr && return this->peerIpv6GatewayIp_ == nullptr && return this->peeringIpv6SubnetMask_ == nullptr
        && return this->peeringSubnetMask_ == nullptr && return this->physicalConnectionBusinessStatus_ == nullptr && return this->physicalConnectionId_ == nullptr && return this->physicalConnectionOwnerUid_ == nullptr && return this->physicalConnectionStatus_ == nullptr
        && return this->recoveryTime_ == nullptr && return this->resourceGroupId_ == nullptr && return this->routeTableId_ == nullptr && return this->sitelinkEnable_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->terminationTime_ == nullptr && return this->type_ == nullptr && return this->vbrId_ == nullptr && return this->vlanId_ == nullptr
        && return this->vlanInterfaceId_ == nullptr; };
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


    // associatedCens Field Functions 
    bool hasAssociatedCens() const { return this->associatedCens_ != nullptr;};
    void deleteAssociatedCens() { this->associatedCens_ = nullptr;};
    inline const Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCens & associatedCens() const { DARABONBA_PTR_GET_CONST(associatedCens_, Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCens) };
    inline Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCens associatedCens() { DARABONBA_PTR_GET(associatedCens_, Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCens) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setAssociatedCens(const Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCens & associatedCens) { DARABONBA_PTR_SET_VALUE(associatedCens_, associatedCens) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setAssociatedCens(Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCens && associatedCens) { DARABONBA_PTR_SET_RVALUE(associatedCens_, associatedCens) };


    // associatedPhysicalConnections Field Functions 
    bool hasAssociatedPhysicalConnections() const { return this->associatedPhysicalConnections_ != nullptr;};
    void deleteAssociatedPhysicalConnections() { this->associatedPhysicalConnections_ = nullptr;};
    inline const Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnections & associatedPhysicalConnections() const { DARABONBA_PTR_GET_CONST(associatedPhysicalConnections_, Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnections) };
    inline Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnections associatedPhysicalConnections() { DARABONBA_PTR_GET(associatedPhysicalConnections_, Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnections) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setAssociatedPhysicalConnections(const Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnections & associatedPhysicalConnections) { DARABONBA_PTR_SET_VALUE(associatedPhysicalConnections_, associatedPhysicalConnections) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setAssociatedPhysicalConnections(Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnections && associatedPhysicalConnections) { DARABONBA_PTR_SET_RVALUE(associatedPhysicalConnections_, associatedPhysicalConnections) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string circuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // cloudBoxInstanceId Field Functions 
    bool hasCloudBoxInstanceId() const { return this->cloudBoxInstanceId_ != nullptr;};
    void deleteCloudBoxInstanceId() { this->cloudBoxInstanceId_ = nullptr;};
    inline string cloudBoxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cloudBoxInstanceId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setCloudBoxInstanceId(string cloudBoxInstanceId) { DARABONBA_PTR_SET_VALUE(cloudBoxInstanceId_, cloudBoxInstanceId) };


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


    // detectMultiplier Field Functions 
    bool hasDetectMultiplier() const { return this->detectMultiplier_ != nullptr;};
    void deleteDetectMultiplier() { this->detectMultiplier_ = nullptr;};
    inline int64_t detectMultiplier() const { DARABONBA_PTR_GET_DEFAULT(detectMultiplier_, 0L) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setDetectMultiplier(int64_t detectMultiplier) { DARABONBA_PTR_SET_VALUE(detectMultiplier_, detectMultiplier) };


    // eccId Field Functions 
    bool hasEccId() const { return this->eccId_ != nullptr;};
    void deleteEccId() { this->eccId_ = nullptr;};
    inline string eccId() const { DARABONBA_PTR_GET_DEFAULT(eccId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setEccId(string eccId) { DARABONBA_PTR_SET_VALUE(eccId_, eccId) };


    // ecrAttatchStatus Field Functions 
    bool hasEcrAttatchStatus() const { return this->ecrAttatchStatus_ != nullptr;};
    void deleteEcrAttatchStatus() { this->ecrAttatchStatus_ = nullptr;};
    inline string ecrAttatchStatus() const { DARABONBA_PTR_GET_DEFAULT(ecrAttatchStatus_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setEcrAttatchStatus(string ecrAttatchStatus) { DARABONBA_PTR_SET_VALUE(ecrAttatchStatus_, ecrAttatchStatus) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // ecrOwnerId Field Functions 
    bool hasEcrOwnerId() const { return this->ecrOwnerId_ != nullptr;};
    void deleteEcrOwnerId() { this->ecrOwnerId_ = nullptr;};
    inline string ecrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setEcrOwnerId(string ecrOwnerId) { DARABONBA_PTR_SET_VALUE(ecrOwnerId_, ecrOwnerId) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool enableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string localGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // localIpv6GatewayIp Field Functions 
    bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
    void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
    inline string localIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


    // minRxInterval Field Functions 
    bool hasMinRxInterval() const { return this->minRxInterval_ != nullptr;};
    void deleteMinRxInterval() { this->minRxInterval_ = nullptr;};
    inline int64_t minRxInterval() const { DARABONBA_PTR_GET_DEFAULT(minRxInterval_, 0L) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setMinRxInterval(int64_t minRxInterval) { DARABONBA_PTR_SET_VALUE(minRxInterval_, minRxInterval) };


    // minTxInterval Field Functions 
    bool hasMinTxInterval() const { return this->minTxInterval_ != nullptr;};
    void deleteMinTxInterval() { this->minTxInterval_ = nullptr;};
    inline int64_t minTxInterval() const { DARABONBA_PTR_GET_DEFAULT(minTxInterval_, 0L) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setMinTxInterval(int64_t minTxInterval) { DARABONBA_PTR_SET_VALUE(minTxInterval_, minTxInterval) };


    // mtu Field Functions 
    bool hasMtu() const { return this->mtu_ != nullptr;};
    void deleteMtu() { this->mtu_ = nullptr;};
    inline int32_t mtu() const { DARABONBA_PTR_GET_DEFAULT(mtu_, 0) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setMtu(int32_t mtu) { DARABONBA_PTR_SET_VALUE(mtu_, mtu) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // PConnVbrChargeType Field Functions 
    bool hasPConnVbrChargeType() const { return this->PConnVbrChargeType_ != nullptr;};
    void deletePConnVbrChargeType() { this->PConnVbrChargeType_ = nullptr;};
    inline string PConnVbrChargeType() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrChargeType_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPConnVbrChargeType(string PConnVbrChargeType) { DARABONBA_PTR_SET_VALUE(PConnVbrChargeType_, PConnVbrChargeType) };


    // PConnVbrExpireTime Field Functions 
    bool hasPConnVbrExpireTime() const { return this->PConnVbrExpireTime_ != nullptr;};
    void deletePConnVbrExpireTime() { this->PConnVbrExpireTime_ = nullptr;};
    inline string PConnVbrExpireTime() const { DARABONBA_PTR_GET_DEFAULT(PConnVbrExpireTime_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPConnVbrExpireTime(string PConnVbrExpireTime) { DARABONBA_PTR_SET_VALUE(PConnVbrExpireTime_, PConnVbrExpireTime) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string peerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // peerIpv6GatewayIp Field Functions 
    bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
    void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
    inline string peerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


    // peeringIpv6SubnetMask Field Functions 
    bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
    void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
    inline string peeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


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


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // sitelinkEnable Field Functions 
    bool hasSitelinkEnable() const { return this->sitelinkEnable_ != nullptr;};
    void deleteSitelinkEnable() { this->sitelinkEnable_ = nullptr;};
    inline bool sitelinkEnable() const { DARABONBA_PTR_GET_DEFAULT(sitelinkEnable_, false) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setSitelinkEnable(bool sitelinkEnable) { DARABONBA_PTR_SET_VALUE(sitelinkEnable_, sitelinkEnable) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeTags) };
    inline Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeTags) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setTags(const Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setTags(Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationTime Field Functions 
    bool hasTerminationTime() const { return this->terminationTime_ != nullptr;};
    void deleteTerminationTime() { this->terminationTime_ = nullptr;};
    inline string terminationTime() const { DARABONBA_PTR_GET_DEFAULT(terminationTime_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setTerminationTime(string terminationTime) { DARABONBA_PTR_SET_VALUE(terminationTime_, terminationTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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
    // The ID of the access point.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The time when the VBR was activated for the first time.
    std::shared_ptr<string> activationTime_ = nullptr;
    // The information about the Cloud Enterprise Network (CEN) instance to which the VBR is attached.
    std::shared_ptr<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedCens> associatedCens_ = nullptr;
    // The information about the Express Connect circuit that is associated with the VBR.
    std::shared_ptr<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeAssociatedPhysicalConnections> associatedPhysicalConnections_ = nullptr;
    // The bandwidth value of the VBR. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The circuit code of the Express Connect circuit, which is provided by the connectivity provider.
    std::shared_ptr<string> circuitCode_ = nullptr;
    // The ID of the cloud box.
    std::shared_ptr<string> cloudBoxInstanceId_ = nullptr;
    // The time when the VBR was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the VBR.
    std::shared_ptr<string> description_ = nullptr;
    // The multiple of the detection time.
    // 
    // This value indicates the maximum number of dropped packets that is allowed by the receiver when the initiator transmits packets. This value can be used to check whether the connection works as expected.
    // 
    // Valid values: **3 to 10**.
    std::shared_ptr<int64_t> detectMultiplier_ = nullptr;
    // The ID of the Express Cloud Connect (ECC) instance.
    std::shared_ptr<string> eccId_ = nullptr;
    // The status of the ECR. Valid values:
    // 
    // *   **Attached**
    // *   **Attaching**
    // *   **Detached**
    // *   **Detaching**
    // *   If no value is returned, the VBR is not attached to a CEN instance.
    std::shared_ptr<string> ecrAttatchStatus_ = nullptr;
    // The ID of the Express Connect Router (ECR).
    std::shared_ptr<string> ecrId_ = nullptr;
    // The ID of the Alibaba Cloud account (primary account)  to which the ECR belongs.
    std::shared_ptr<string> ecrOwnerId_ = nullptr;
    // Indicates whether IPv6 is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableIpv6_ = nullptr;
    // The IPv4 address of the VBR on the Alibaba Cloud side.
    std::shared_ptr<string> localGatewayIp_ = nullptr;
    // The IPv6 address of the VBR on the Alibaba Cloud side.
    std::shared_ptr<string> localIpv6GatewayIp_ = nullptr;
    // The time interval to receive BFD packets. Valid values: **200 to 1000**. Unit: milliseconds.
    std::shared_ptr<int64_t> minRxInterval_ = nullptr;
    // The time interval to send Bidirectional Forwarding Detection (BFD) packets. Valid values: **200 to 1000**. Unit: milliseconds.
    std::shared_ptr<int64_t> minTxInterval_ = nullptr;
    std::shared_ptr<int32_t> mtu_ = nullptr;
    // The VBR name.
    std::shared_ptr<string> name_ = nullptr;
    // The billing method of the VBR. Valid values:
    // 
    // *   **PrePaid:** subscription. If you choose this billing method, make sure that your account supports balance payments or credit payments.
    // *   **PostPaid:** pay-as-you-go.
    std::shared_ptr<string> PConnVbrChargeType_ = nullptr;
    // The time when the VBR expires.
    std::shared_ptr<string> PConnVbrExpireTime_ = nullptr;
    // The IPv4 address of the VBR on the user side.
    std::shared_ptr<string> peerGatewayIp_ = nullptr;
    // The IPv6 address of the VBR on the user side.
    std::shared_ptr<string> peerIpv6GatewayIp_ = nullptr;
    // The subnet mask for the IPv6 addresses on the user side and on the Alibaba Cloud side.
    std::shared_ptr<string> peeringIpv6SubnetMask_ = nullptr;
    // The subnet mask for the IPv4 addresses on the Alibaba Cloud side and on the user side.
    std::shared_ptr<string> peeringSubnetMask_ = nullptr;
    // The business status of the Express Connect circuit. Valid values:
    // 
    // *   **Normal:** The Express Connect circuit is running as normal.
    // *   **FinancialLocked:** The Express Connect circuit is locked due to overdue payments.
    std::shared_ptr<string> physicalConnectionBusinessStatus_ = nullptr;
    // The ID of the Express Connect circuit to which the VBR belongs.
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
    // The last time when the status of the VBR changed from **terminated** to **active**.
    std::shared_ptr<string> recoveryTime_ = nullptr;
    // The resource group ID.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the route table of the VBR.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // Indicates whether to allow service access between data centers. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  If no value is returned, service access between data centers is not allowed.
    std::shared_ptr<bool> sitelinkEnable_ = nullptr;
    // The status of the VBR. Valid values:
    // 
    // *   **unconfirmed**
    // *   **active**
    // *   **terminating**
    // *   **terminated**
    // *   **recovering**
    // *   **deleting:**
    std::shared_ptr<string> status_ = nullptr;
    // The tag of the resource.
    std::shared_ptr<Models::DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSetVirtualBorderRouterTypeTags> tags_ = nullptr;
    // The last time when the VBR was terminated.
    std::shared_ptr<string> terminationTime_ = nullptr;
    // The VBR type.
    std::shared_ptr<string> type_ = nullptr;
    // The VBR ID.
    std::shared_ptr<string> vbrId_ = nullptr;
    // The VLAN ID of the VBR.
    std::shared_ptr<int32_t> vlanId_ = nullptr;
    // The ID of the VBR interface.
    std::shared_ptr<string> vlanInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
