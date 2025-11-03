// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODYPHYSICALCONNECTIONSETPHYSICALCONNECTIONTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSRESPONSEBODYPHYSICALCONNECTIONSETPHYSICALCONNECTIONTYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AccessPointType, accessPointType_);
      DARABONBA_PTR_TO_JSON(AdDetailLocation, adDetailLocation_);
      DARABONBA_PTR_TO_JSON(AdLocation, adLocation_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExpectSpec, expectSpec_);
      DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_TO_JSON(LoaStatus, loaStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderMode, orderMode_);
      DARABONBA_PTR_TO_JSON(ParentPhysicalConnectionAliUid, parentPhysicalConnectionAliUid_);
      DARABONBA_PTR_TO_JSON(ParentPhysicalConnectionId, parentPhysicalConnectionId_);
      DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(PortNumber, portNumber_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionCount, virtualPhysicalConnectionCount_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
      DARABONBA_PTR_TO_JSON(VpconnStatus, vpconnStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AccessPointType, accessPointType_);
      DARABONBA_PTR_FROM_JSON(AdDetailLocation, adDetailLocation_);
      DARABONBA_PTR_FROM_JSON(AdLocation, adLocation_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExpectSpec, expectSpec_);
      DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_FROM_JSON(LoaStatus, loaStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderMode, orderMode_);
      DARABONBA_PTR_FROM_JSON(ParentPhysicalConnectionAliUid, parentPhysicalConnectionAliUid_);
      DARABONBA_PTR_FROM_JSON(ParentPhysicalConnectionId, parentPhysicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(PortNumber, portNumber_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionCount, virtualPhysicalConnectionCount_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
      DARABONBA_PTR_FROM_JSON(VpconnStatus, vpconnStatus_);
    };
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType() = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType &) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType &&) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType() = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& operator=(const DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType &) = default ;
    DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& operator=(DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && return this->accessPointType_ == nullptr && return this->adDetailLocation_ == nullptr && return this->adLocation_ == nullptr && return this->bandwidth_ == nullptr && return this->businessStatus_ == nullptr
        && return this->chargeType_ == nullptr && return this->circuitCode_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->enabledTime_ == nullptr
        && return this->endTime_ == nullptr && return this->expectSpec_ == nullptr && return this->hasReservationData_ == nullptr && return this->lineOperator_ == nullptr && return this->loaStatus_ == nullptr
        && return this->name_ == nullptr && return this->orderMode_ == nullptr && return this->parentPhysicalConnectionAliUid_ == nullptr && return this->parentPhysicalConnectionId_ == nullptr && return this->peerLocation_ == nullptr
        && return this->physicalConnectionId_ == nullptr && return this->portNumber_ == nullptr && return this->portType_ == nullptr && return this->productType_ == nullptr && return this->qosId_ == nullptr
        && return this->redundantPhysicalConnectionId_ == nullptr && return this->reservationActiveTime_ == nullptr && return this->reservationInternetChargeType_ == nullptr && return this->reservationOrderType_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->spec_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->type_ == nullptr && return this->virtualPhysicalConnectionCount_ == nullptr
        && return this->vlanId_ == nullptr && return this->vpconnStatus_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // accessPointType Field Functions 
    bool hasAccessPointType() const { return this->accessPointType_ != nullptr;};
    void deleteAccessPointType() { this->accessPointType_ = nullptr;};
    inline string accessPointType() const { DARABONBA_PTR_GET_DEFAULT(accessPointType_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setAccessPointType(string accessPointType) { DARABONBA_PTR_SET_VALUE(accessPointType_, accessPointType) };


    // adDetailLocation Field Functions 
    bool hasAdDetailLocation() const { return this->adDetailLocation_ != nullptr;};
    void deleteAdDetailLocation() { this->adDetailLocation_ = nullptr;};
    inline string adDetailLocation() const { DARABONBA_PTR_GET_DEFAULT(adDetailLocation_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setAdDetailLocation(string adDetailLocation) { DARABONBA_PTR_SET_VALUE(adDetailLocation_, adDetailLocation) };


    // adLocation Field Functions 
    bool hasAdLocation() const { return this->adLocation_ != nullptr;};
    void deleteAdLocation() { this->adLocation_ = nullptr;};
    inline string adLocation() const { DARABONBA_PTR_GET_DEFAULT(adLocation_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setAdLocation(string adLocation) { DARABONBA_PTR_SET_VALUE(adLocation_, adLocation) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string circuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabledTime Field Functions 
    bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
    void deleteEnabledTime() { this->enabledTime_ = nullptr;};
    inline string enabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // expectSpec Field Functions 
    bool hasExpectSpec() const { return this->expectSpec_ != nullptr;};
    void deleteExpectSpec() { this->expectSpec_ = nullptr;};
    inline string expectSpec() const { DARABONBA_PTR_GET_DEFAULT(expectSpec_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setExpectSpec(string expectSpec) { DARABONBA_PTR_SET_VALUE(expectSpec_, expectSpec) };


    // hasReservationData Field Functions 
    bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
    void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
    inline string hasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


    // lineOperator Field Functions 
    bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
    void deleteLineOperator() { this->lineOperator_ = nullptr;};
    inline string lineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


    // loaStatus Field Functions 
    bool hasLoaStatus() const { return this->loaStatus_ != nullptr;};
    void deleteLoaStatus() { this->loaStatus_ = nullptr;};
    inline string loaStatus() const { DARABONBA_PTR_GET_DEFAULT(loaStatus_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setLoaStatus(string loaStatus) { DARABONBA_PTR_SET_VALUE(loaStatus_, loaStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderMode Field Functions 
    bool hasOrderMode() const { return this->orderMode_ != nullptr;};
    void deleteOrderMode() { this->orderMode_ = nullptr;};
    inline string orderMode() const { DARABONBA_PTR_GET_DEFAULT(orderMode_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setOrderMode(string orderMode) { DARABONBA_PTR_SET_VALUE(orderMode_, orderMode) };


    // parentPhysicalConnectionAliUid Field Functions 
    bool hasParentPhysicalConnectionAliUid() const { return this->parentPhysicalConnectionAliUid_ != nullptr;};
    void deleteParentPhysicalConnectionAliUid() { this->parentPhysicalConnectionAliUid_ = nullptr;};
    inline int64_t parentPhysicalConnectionAliUid() const { DARABONBA_PTR_GET_DEFAULT(parentPhysicalConnectionAliUid_, 0L) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setParentPhysicalConnectionAliUid(int64_t parentPhysicalConnectionAliUid) { DARABONBA_PTR_SET_VALUE(parentPhysicalConnectionAliUid_, parentPhysicalConnectionAliUid) };


    // parentPhysicalConnectionId Field Functions 
    bool hasParentPhysicalConnectionId() const { return this->parentPhysicalConnectionId_ != nullptr;};
    void deleteParentPhysicalConnectionId() { this->parentPhysicalConnectionId_ = nullptr;};
    inline string parentPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(parentPhysicalConnectionId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setParentPhysicalConnectionId(string parentPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(parentPhysicalConnectionId_, parentPhysicalConnectionId) };


    // peerLocation Field Functions 
    bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
    void deletePeerLocation() { this->peerLocation_ = nullptr;};
    inline string peerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string physicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // portNumber Field Functions 
    bool hasPortNumber() const { return this->portNumber_ != nullptr;};
    void deletePortNumber() { this->portNumber_ = nullptr;};
    inline string portNumber() const { DARABONBA_PTR_GET_DEFAULT(portNumber_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setPortNumber(string portNumber) { DARABONBA_PTR_SET_VALUE(portNumber_, portNumber) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string portType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string qosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // redundantPhysicalConnectionId Field Functions 
    bool hasRedundantPhysicalConnectionId() const { return this->redundantPhysicalConnectionId_ != nullptr;};
    void deleteRedundantPhysicalConnectionId() { this->redundantPhysicalConnectionId_ = nullptr;};
    inline string redundantPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(redundantPhysicalConnectionId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setRedundantPhysicalConnectionId(string redundantPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(redundantPhysicalConnectionId_, redundantPhysicalConnectionId) };


    // reservationActiveTime Field Functions 
    bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
    void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
    inline string reservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


    // reservationInternetChargeType Field Functions 
    bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
    void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
    inline string reservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


    // reservationOrderType Field Functions 
    bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
    void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
    inline string reservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags) };
    inline Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setTags(const Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setTags(Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // virtualPhysicalConnectionCount Field Functions 
    bool hasVirtualPhysicalConnectionCount() const { return this->virtualPhysicalConnectionCount_ != nullptr;};
    void deleteVirtualPhysicalConnectionCount() { this->virtualPhysicalConnectionCount_ = nullptr;};
    inline int32_t virtualPhysicalConnectionCount() const { DARABONBA_PTR_GET_DEFAULT(virtualPhysicalConnectionCount_, 0) };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setVirtualPhysicalConnectionCount(int32_t virtualPhysicalConnectionCount) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionCount_, virtualPhysicalConnectionCount) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline string vlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


    // vpconnStatus Field Functions 
    bool hasVpconnStatus() const { return this->vpconnStatus_ != nullptr;};
    void deleteVpconnStatus() { this->vpconnStatus_ = nullptr;};
    inline string vpconnStatus() const { DARABONBA_PTR_GET_DEFAULT(vpconnStatus_, "") };
    inline DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionType& setVpconnStatus(string vpconnStatus) { DARABONBA_PTR_SET_VALUE(vpconnStatus_, vpconnStatus) };


  protected:
    // The ID of the Express Connect circuit.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The type of the access point.
    std::shared_ptr<string> accessPointType_ = nullptr;
    // The information about the data center and rack.
    std::shared_ptr<string> adDetailLocation_ = nullptr;
    // The location of the access point.
    std::shared_ptr<string> adLocation_ = nullptr;
    // The maximum bandwidth of the Express Connect circuit.
    // 
    // Unit: Mbit/s.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The status of the Express Connect circuit. Valid values:
    // 
    // *   **Normal**: enabled
    // *   **FinancialLocked**: locked due to overdue payments
    // *   **SecurityLocked**: locked for security reasons
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The billing method of the Express Connect circuit.
    // 
    // If **Prepaid** is returned, it indicates that the Express Connect circuit is billed on a subscription basis.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The circuit code of the Express Connect circuit. The circuit code is provided by the connectivity provider.
    std::shared_ptr<string> circuitCode_ = nullptr;
    // The time when the Express Connect circuit was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the Express Connect circuit.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the Express Connect circuit was enabled.
    std::shared_ptr<string> enabledTime_ = nullptr;
    // The time when the Express Connect circuit expires.
    std::shared_ptr<string> endTime_ = nullptr;
    // The estimated maximum bandwidth of the shared Express Connect circuit. The estimated bandwidth takes effect after you complete the payment.
    // 
    // Unit: **M** (Mbit/s) and **G** (Gbit/s).
    std::shared_ptr<string> expectSpec_ = nullptr;
    // Indicates whether the data about pending orders is returned. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> hasReservationData_ = nullptr;
    // The connectivity provider of the Express Connect circuit. Valid values:
    // 
    // *   **CT**: China Telecom.
    // *   **CU**: China Unicom.
    // *   **CM**: China Mobile.
    // *   **CO**: other connectivity providers in the Chinese mainland.
    // *   **Equinix**: Equinix.
    // *   **Other**: other connectivity providers outside the Chinese mainland.
    std::shared_ptr<string> lineOperator_ = nullptr;
    // The status of the letter of authorization (LOA). Valid values:
    // 
    // *   **Applying**: The LOA is pending for approval.
    // *   **Accept**: The LOA is approved.
    // *   **Available**: The LOA is available.
    // *   **Rejected**: The LOA is rejected.
    // *   **Completing**: The Express Connect circuit is under construction.
    // *   **Complete**: The Express Connect circuit is installed.
    // *   **Deleted**: The LOA is deleted.
    std::shared_ptr<string> loaStatus_ = nullptr;
    // The name of the Express Connect circuit.
    std::shared_ptr<string> name_ = nullptr;
    // The payer for the hosted connection. Valid values:
    // 
    // *   **PayByPhysicalConnectionOwner**: The partner pays for the shared Express Connect circuit.
    // *   **PayByVirtualPhysicalConnectionOwner**: The tenant pays for the shared Express Connect circuit.
    std::shared_ptr<string> orderMode_ = nullptr;
    // The ID of the Alibaba Cloud account to which the parent Express Connect circuit belongs.
    std::shared_ptr<int64_t> parentPhysicalConnectionAliUid_ = nullptr;
    // The ID of the parent Express Connect circuit.
    std::shared_ptr<string> parentPhysicalConnectionId_ = nullptr;
    // The geographical location of the data center.
    std::shared_ptr<string> peerLocation_ = nullptr;
    // The ID of the Express Connect circuit.
    std::shared_ptr<string> physicalConnectionId_ = nullptr;
    // The ID of the port on the access device.
    std::shared_ptr<string> portNumber_ = nullptr;
    // The port type of the Express Connect circuit. Valid values:
    // 
    // *   **100Base-T**: 100 Mbit/s copper Ethernet port
    // *   **1000Base-T**: 1,000 Mbit/s copper Ethernet port
    // *   **1000Base-LX**: 1,000 Mbit/s single-mode optical port (10 km)
    // *   **10GBase-T**: 10,000 Mbit/s copper Ethernet port
    // *   **10GBase-LR**: 10,000 Mbit/s single-mode optical port (10 km)
    // *   **40GBase-LR**: 40,000 Mbit/s single-mode optical port
    // *   **100GBase-LR**: 100,000 Mbit/s single-mode optical port
    // 
    // > Whether 40GBase-LR and 100GBase-LR ports can be created depends on resource supplies. For more information, contact your account manager.
    std::shared_ptr<string> portType_ = nullptr;
    // The type of the Express Connect circuit. Valid values:
    // 
    // *   **VirtualPhysicalConnection**: shared Express Connect circuit
    // *   **PhysicalConnection**: dedicated Express Connect circuit
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the QoS policy.
    std::shared_ptr<string> qosId_ = nullptr;
    // The ID of the standby Express Connect circuit.
    std::shared_ptr<string> redundantPhysicalConnectionId_ = nullptr;
    // The time when the pending order takes effect.
    std::shared_ptr<string> reservationActiveTime_ = nullptr;
    // The billing method of the pending order.
    // 
    // If **PayByBandwidth** is returned, it indicates that the Express Connect circuit is billed on a pay-by-bandwidth basis.
    std::shared_ptr<string> reservationInternetChargeType_ = nullptr;
    // The type of the pending order.
    // 
    // If the value is **RENEW**, it indicates that the order is placed for service renewal.
    std::shared_ptr<string> reservationOrderType_ = nullptr;
    // The resource group ID to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The specification of the Express Connect circuit.
    // 
    // Unit: **G** (Gbit/s).
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the Express Connect circuit. Valid values:
    // 
    // *   **Initial**
    // *   **Approved**
    // *   **Allocating**
    // *   **Allocated**
    // *   **Confirmed**
    // *   **Enabled**
    // *   **Rejected**
    // *   **Canceled**
    // *   **Allocation Failed**
    // *   **Terminating**
    // *   **Terminated**
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are added to the cluster.
    std::shared_ptr<Models::DescribePhysicalConnectionsResponseBodyPhysicalConnectionSetPhysicalConnectionTypeTags> tags_ = nullptr;
    // The type of resource to which the Express Connect circuit is connected. Only **VPC** may be returned.
    std::shared_ptr<string> type_ = nullptr;
    // The number of Express Connect circuits that are established.
    std::shared_ptr<int32_t> virtualPhysicalConnectionCount_ = nullptr;
    // The VLAN ID of the shared Express Connect circuit.
    std::shared_ptr<string> vlanId_ = nullptr;
    // The status of the shared Express Connect circuit. Valid values:
    // 
    // *   **Confirmed**
    // *   **UnConfirmed**
    // *   **Deleted**
    std::shared_ptr<string> vpconnStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
