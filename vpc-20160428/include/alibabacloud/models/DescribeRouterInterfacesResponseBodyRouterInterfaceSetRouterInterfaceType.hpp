// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODYROUTERINTERFACESETROUTERINTERFACETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODYROUTERINTERFACESETROUTERINTERFACETYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ConnectedTime, connectedTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CrossBorder, crossBorder_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FastLinkMode, fastLinkMode_);
      DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_TO_JSON(HcRate, hcRate_);
      DARABONBA_PTR_TO_JSON(HcThreshold, hcThreshold_);
      DARABONBA_PTR_TO_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_TO_JSON(Ipv6Status, ipv6Status_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OppositeAccessPointId, oppositeAccessPointId_);
      DARABONBA_PTR_TO_JSON(OppositeBandwidth, oppositeBandwidth_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceBusinessStatus, oppositeInterfaceBusinessStatus_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceId, oppositeInterfaceId_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceOwnerId, oppositeInterfaceOwnerId_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceSpec, oppositeInterfaceSpec_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceStatus, oppositeInterfaceStatus_);
      DARABONBA_PTR_TO_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_TO_JSON(OppositeRouterId, oppositeRouterId_);
      DARABONBA_PTR_TO_JSON(OppositeRouterType, oppositeRouterType_);
      DARABONBA_PTR_TO_JSON(OppositeVpcInstanceId, oppositeVpcInstanceId_);
      DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(RouterInterfaceId, routerInterfaceId_);
      DARABONBA_PTR_TO_JSON(RouterType, routerType_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ConnectedTime, connectedTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CrossBorder, crossBorder_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FastLinkMode, fastLinkMode_);
      DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_FROM_JSON(HcRate, hcRate_);
      DARABONBA_PTR_FROM_JSON(HcThreshold, hcThreshold_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_FROM_JSON(Ipv6Status, ipv6Status_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OppositeAccessPointId, oppositeAccessPointId_);
      DARABONBA_PTR_FROM_JSON(OppositeBandwidth, oppositeBandwidth_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceBusinessStatus, oppositeInterfaceBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceId, oppositeInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceOwnerId, oppositeInterfaceOwnerId_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceSpec, oppositeInterfaceSpec_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceStatus, oppositeInterfaceStatus_);
      DARABONBA_PTR_FROM_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_FROM_JSON(OppositeRouterId, oppositeRouterId_);
      DARABONBA_PTR_FROM_JSON(OppositeRouterType, oppositeRouterType_);
      DARABONBA_PTR_FROM_JSON(OppositeVpcInstanceId, oppositeVpcInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(RouterInterfaceId, routerInterfaceId_);
      DARABONBA_PTR_FROM_JSON(RouterType, routerType_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType() = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType(const DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType &) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType(DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType &&) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType() = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& operator=(const DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType &) = default ;
    DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& operator=(DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPointId_ != nullptr
        && this->bandwidth_ != nullptr && this->businessStatus_ != nullptr && this->chargeType_ != nullptr && this->connectedTime_ != nullptr && this->creationTime_ != nullptr
        && this->crossBorder_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->fastLinkMode_ != nullptr && this->hasReservationData_ != nullptr
        && this->hcRate_ != nullptr && this->hcThreshold_ != nullptr && this->healthCheckSourceIp_ != nullptr && this->healthCheckTargetIp_ != nullptr && this->ipv6Status_ != nullptr
        && this->name_ != nullptr && this->oppositeAccessPointId_ != nullptr && this->oppositeBandwidth_ != nullptr && this->oppositeInterfaceBusinessStatus_ != nullptr && this->oppositeInterfaceId_ != nullptr
        && this->oppositeInterfaceOwnerId_ != nullptr && this->oppositeInterfaceSpec_ != nullptr && this->oppositeInterfaceStatus_ != nullptr && this->oppositeRegionId_ != nullptr && this->oppositeRouterId_ != nullptr
        && this->oppositeRouterType_ != nullptr && this->oppositeVpcInstanceId_ != nullptr && this->reservationActiveTime_ != nullptr && this->reservationBandwidth_ != nullptr && this->reservationInternetChargeType_ != nullptr
        && this->reservationOrderType_ != nullptr && this->resourceGroupId_ != nullptr && this->role_ != nullptr && this->routerId_ != nullptr && this->routerInterfaceId_ != nullptr
        && this->routerType_ != nullptr && this->spec_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->vpcInstanceId_ != nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // connectedTime Field Functions 
    bool hasConnectedTime() const { return this->connectedTime_ != nullptr;};
    void deleteConnectedTime() { this->connectedTime_ = nullptr;};
    inline string connectedTime() const { DARABONBA_PTR_GET_DEFAULT(connectedTime_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setConnectedTime(string connectedTime) { DARABONBA_PTR_SET_VALUE(connectedTime_, connectedTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // crossBorder Field Functions 
    bool hasCrossBorder() const { return this->crossBorder_ != nullptr;};
    void deleteCrossBorder() { this->crossBorder_ = nullptr;};
    inline bool crossBorder() const { DARABONBA_PTR_GET_DEFAULT(crossBorder_, false) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setCrossBorder(bool crossBorder) { DARABONBA_PTR_SET_VALUE(crossBorder_, crossBorder) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fastLinkMode Field Functions 
    bool hasFastLinkMode() const { return this->fastLinkMode_ != nullptr;};
    void deleteFastLinkMode() { this->fastLinkMode_ = nullptr;};
    inline bool fastLinkMode() const { DARABONBA_PTR_GET_DEFAULT(fastLinkMode_, false) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setFastLinkMode(bool fastLinkMode) { DARABONBA_PTR_SET_VALUE(fastLinkMode_, fastLinkMode) };


    // hasReservationData Field Functions 
    bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
    void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
    inline string hasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


    // hcRate Field Functions 
    bool hasHcRate() const { return this->hcRate_ != nullptr;};
    void deleteHcRate() { this->hcRate_ = nullptr;};
    inline int32_t hcRate() const { DARABONBA_PTR_GET_DEFAULT(hcRate_, 0) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setHcRate(int32_t hcRate) { DARABONBA_PTR_SET_VALUE(hcRate_, hcRate) };


    // hcThreshold Field Functions 
    bool hasHcThreshold() const { return this->hcThreshold_ != nullptr;};
    void deleteHcThreshold() { this->hcThreshold_ = nullptr;};
    inline int32_t hcThreshold() const { DARABONBA_PTR_GET_DEFAULT(hcThreshold_, 0) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setHcThreshold(int32_t hcThreshold) { DARABONBA_PTR_SET_VALUE(hcThreshold_, hcThreshold) };


    // healthCheckSourceIp Field Functions 
    bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
    void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
    inline string healthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


    // healthCheckTargetIp Field Functions 
    bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
    void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
    inline string healthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


    // ipv6Status Field Functions 
    bool hasIpv6Status() const { return this->ipv6Status_ != nullptr;};
    void deleteIpv6Status() { this->ipv6Status_ = nullptr;};
    inline string ipv6Status() const { DARABONBA_PTR_GET_DEFAULT(ipv6Status_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setIpv6Status(string ipv6Status) { DARABONBA_PTR_SET_VALUE(ipv6Status_, ipv6Status) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oppositeAccessPointId Field Functions 
    bool hasOppositeAccessPointId() const { return this->oppositeAccessPointId_ != nullptr;};
    void deleteOppositeAccessPointId() { this->oppositeAccessPointId_ = nullptr;};
    inline string oppositeAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(oppositeAccessPointId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeAccessPointId(string oppositeAccessPointId) { DARABONBA_PTR_SET_VALUE(oppositeAccessPointId_, oppositeAccessPointId) };


    // oppositeBandwidth Field Functions 
    bool hasOppositeBandwidth() const { return this->oppositeBandwidth_ != nullptr;};
    void deleteOppositeBandwidth() { this->oppositeBandwidth_ = nullptr;};
    inline int32_t oppositeBandwidth() const { DARABONBA_PTR_GET_DEFAULT(oppositeBandwidth_, 0) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeBandwidth(int32_t oppositeBandwidth) { DARABONBA_PTR_SET_VALUE(oppositeBandwidth_, oppositeBandwidth) };


    // oppositeInterfaceBusinessStatus Field Functions 
    bool hasOppositeInterfaceBusinessStatus() const { return this->oppositeInterfaceBusinessStatus_ != nullptr;};
    void deleteOppositeInterfaceBusinessStatus() { this->oppositeInterfaceBusinessStatus_ = nullptr;};
    inline string oppositeInterfaceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceBusinessStatus_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeInterfaceBusinessStatus(string oppositeInterfaceBusinessStatus) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceBusinessStatus_, oppositeInterfaceBusinessStatus) };


    // oppositeInterfaceId Field Functions 
    bool hasOppositeInterfaceId() const { return this->oppositeInterfaceId_ != nullptr;};
    void deleteOppositeInterfaceId() { this->oppositeInterfaceId_ = nullptr;};
    inline string oppositeInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeInterfaceId(string oppositeInterfaceId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceId_, oppositeInterfaceId) };


    // oppositeInterfaceOwnerId Field Functions 
    bool hasOppositeInterfaceOwnerId() const { return this->oppositeInterfaceOwnerId_ != nullptr;};
    void deleteOppositeInterfaceOwnerId() { this->oppositeInterfaceOwnerId_ = nullptr;};
    inline string oppositeInterfaceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceOwnerId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeInterfaceOwnerId(string oppositeInterfaceOwnerId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceOwnerId_, oppositeInterfaceOwnerId) };


    // oppositeInterfaceSpec Field Functions 
    bool hasOppositeInterfaceSpec() const { return this->oppositeInterfaceSpec_ != nullptr;};
    void deleteOppositeInterfaceSpec() { this->oppositeInterfaceSpec_ = nullptr;};
    inline string oppositeInterfaceSpec() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceSpec_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeInterfaceSpec(string oppositeInterfaceSpec) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceSpec_, oppositeInterfaceSpec) };


    // oppositeInterfaceStatus Field Functions 
    bool hasOppositeInterfaceStatus() const { return this->oppositeInterfaceStatus_ != nullptr;};
    void deleteOppositeInterfaceStatus() { this->oppositeInterfaceStatus_ = nullptr;};
    inline string oppositeInterfaceStatus() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceStatus_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeInterfaceStatus(string oppositeInterfaceStatus) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceStatus_, oppositeInterfaceStatus) };


    // oppositeRegionId Field Functions 
    bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
    void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
    inline string oppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


    // oppositeRouterId Field Functions 
    bool hasOppositeRouterId() const { return this->oppositeRouterId_ != nullptr;};
    void deleteOppositeRouterId() { this->oppositeRouterId_ = nullptr;};
    inline string oppositeRouterId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeRouterId(string oppositeRouterId) { DARABONBA_PTR_SET_VALUE(oppositeRouterId_, oppositeRouterId) };


    // oppositeRouterType Field Functions 
    bool hasOppositeRouterType() const { return this->oppositeRouterType_ != nullptr;};
    void deleteOppositeRouterType() { this->oppositeRouterType_ = nullptr;};
    inline string oppositeRouterType() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterType_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeRouterType(string oppositeRouterType) { DARABONBA_PTR_SET_VALUE(oppositeRouterType_, oppositeRouterType) };


    // oppositeVpcInstanceId Field Functions 
    bool hasOppositeVpcInstanceId() const { return this->oppositeVpcInstanceId_ != nullptr;};
    void deleteOppositeVpcInstanceId() { this->oppositeVpcInstanceId_ = nullptr;};
    inline string oppositeVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeVpcInstanceId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setOppositeVpcInstanceId(string oppositeVpcInstanceId) { DARABONBA_PTR_SET_VALUE(oppositeVpcInstanceId_, oppositeVpcInstanceId) };


    // reservationActiveTime Field Functions 
    bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
    void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
    inline string reservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


    // reservationBandwidth Field Functions 
    bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
    void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
    inline string reservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


    // reservationInternetChargeType Field Functions 
    bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
    void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
    inline string reservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


    // reservationOrderType Field Functions 
    bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
    void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
    inline string reservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string routerId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // routerInterfaceId Field Functions 
    bool hasRouterInterfaceId() const { return this->routerInterfaceId_ != nullptr;};
    void deleteRouterInterfaceId() { this->routerInterfaceId_ = nullptr;};
    inline string routerInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(routerInterfaceId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setRouterInterfaceId(string routerInterfaceId) { DARABONBA_PTR_SET_VALUE(routerInterfaceId_, routerInterfaceId) };


    // routerType Field Functions 
    bool hasRouterType() const { return this->routerType_ != nullptr;};
    void deleteRouterType() { this->routerType_ = nullptr;};
    inline string routerType() const { DARABONBA_PTR_GET_DEFAULT(routerType_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setRouterType(string routerType) { DARABONBA_PTR_SET_VALUE(routerType_, routerType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags) };
    inline Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setTags(const Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setTags(Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The ID of the access point.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The bandwidth of the router interface. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The service status of the router interface. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the connection was established.
    // 
    // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> connectedTime_ = nullptr;
    // The time when the route table was created.
    // 
    // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the connection is a cross-border connection.
    std::shared_ptr<bool> crossBorder_ = nullptr;
    // The description of the router interface.
    std::shared_ptr<string> description_ = nullptr;
    // The end of the time range during which data was queried.
    // 
    // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // Indicates whether the VBR that is created in the Fast Link mode is uplinked to the router interface. The Fast Link mode helps automatically connect router interfaces that are created for the VBR and its peer VPC. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> fastLinkMode_ = nullptr;
    // Indicates whether renewal data is included.
    std::shared_ptr<string> hasReservationData_ = nullptr;
    // The rate of heath checks.
    std::shared_ptr<int32_t> hcRate_ = nullptr;
    // The health check threshold.
    std::shared_ptr<int32_t> hcThreshold_ = nullptr;
    // The source IP address that is used for the health check.
    std::shared_ptr<string> healthCheckSourceIp_ = nullptr;
    // The destination IP address that is used for the health check.
    std::shared_ptr<string> healthCheckTargetIp_ = nullptr;
    // Indicates whether protection against malicious IPv6 traffic is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    // *   **unsupport**
    std::shared_ptr<string> ipv6Status_ = nullptr;
    // The custom name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the peer access point.
    std::shared_ptr<string> oppositeAccessPointId_ = nullptr;
    // The maximum bandwidth of the peer router interface. Unit: Mbit/s.
    std::shared_ptr<int32_t> oppositeBandwidth_ = nullptr;
    // The service status of the peer router interface.
    std::shared_ptr<string> oppositeInterfaceBusinessStatus_ = nullptr;
    // The ID of the peer router interface.
    std::shared_ptr<string> oppositeInterfaceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the peer router interface belongs.
    std::shared_ptr<string> oppositeInterfaceOwnerId_ = nullptr;
    // The specification of the peer router interface.
    std::shared_ptr<string> oppositeInterfaceSpec_ = nullptr;
    // The status of the peer router interface.
    std::shared_ptr<string> oppositeInterfaceStatus_ = nullptr;
    // The region ID of the peer router interface.
    std::shared_ptr<string> oppositeRegionId_ = nullptr;
    // The ID of the router to which the peer router interface belongs.
    std::shared_ptr<string> oppositeRouterId_ = nullptr;
    // The type of the router to which the peer router interface belongs.
    std::shared_ptr<string> oppositeRouterType_ = nullptr;
    // The ID of the peer VPC.
    std::shared_ptr<string> oppositeVpcInstanceId_ = nullptr;
    // The time when the renewal takes effect.
    // 
    // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> reservationActiveTime_ = nullptr;
    // The maximum bandwidth after the renewal takes effect. Unit: Mbit/s.
    std::shared_ptr<string> reservationBandwidth_ = nullptr;
    // The metering method that is used after the renewal takes effect. Valid values:
    std::shared_ptr<string> reservationInternetChargeType_ = nullptr;
    // The type of the renewal order. Valid values:
    std::shared_ptr<string> reservationOrderType_ = nullptr;
    // Resource Group ID.
    // 
    // For more information about resource groups, please refer to [What is a Resource Group?](https://help.aliyun.com/document_detail/94475.html)
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the router interface is the initiator or acceptor of the peering connection.
    std::shared_ptr<string> role_ = nullptr;
    // The ID of the router to which the route entry belongs.
    std::shared_ptr<string> routerId_ = nullptr;
    // The ID of the router interface.
    std::shared_ptr<string> routerInterfaceId_ = nullptr;
    // The type of the router to which the route table belongs. Valid values:
    // 
    // *   **VRouter**
    // *   **VBR**
    std::shared_ptr<string> routerType_ = nullptr;
    // The specification of the router interface.
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the router interface.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<Models::DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceTypeTags> tags_ = nullptr;
    // The ID of the local virtual private cloud (VPC) in the peering connection.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
