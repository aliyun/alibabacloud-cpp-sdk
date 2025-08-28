// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouterInterfaceAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouterInterfaceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConnectedTime, connectedTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CrossBorder, crossBorder_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FastLinkMode, fastLinkMode_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_TO_JSON(HcRate, hcRate_);
      DARABONBA_PTR_TO_JSON(HcThreshold, hcThreshold_);
      DARABONBA_PTR_TO_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_TO_JSON(HealthCheckStatus, healthCheckStatus_);
      DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_TO_JSON(Message, message_);
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
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
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConnectedTime, connectedTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CrossBorder, crossBorder_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FastLinkMode, fastLinkMode_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_FROM_JSON(HcRate, hcRate_);
      DARABONBA_PTR_FROM_JSON(HcThreshold, hcThreshold_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckStatus, healthCheckStatus_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    DescribeRouterInterfaceAttributeResponseBody() = default ;
    DescribeRouterInterfaceAttributeResponseBody(const DescribeRouterInterfaceAttributeResponseBody &) = default ;
    DescribeRouterInterfaceAttributeResponseBody(DescribeRouterInterfaceAttributeResponseBody &&) = default ;
    DescribeRouterInterfaceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfaceAttributeResponseBody() = default ;
    DescribeRouterInterfaceAttributeResponseBody& operator=(const DescribeRouterInterfaceAttributeResponseBody &) = default ;
    DescribeRouterInterfaceAttributeResponseBody& operator=(DescribeRouterInterfaceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPointId_ != nullptr
        && this->bandwidth_ != nullptr && this->businessStatus_ != nullptr && this->chargeType_ != nullptr && this->code_ != nullptr && this->connectedTime_ != nullptr
        && this->creationTime_ != nullptr && this->crossBorder_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->fastLinkMode_ != nullptr
        && this->gmtModified_ != nullptr && this->hasReservationData_ != nullptr && this->hcRate_ != nullptr && this->hcThreshold_ != nullptr && this->healthCheckSourceIp_ != nullptr
        && this->healthCheckStatus_ != nullptr && this->healthCheckTargetIp_ != nullptr && this->message_ != nullptr && this->name_ != nullptr && this->oppositeAccessPointId_ != nullptr
        && this->oppositeBandwidth_ != nullptr && this->oppositeInterfaceBusinessStatus_ != nullptr && this->oppositeInterfaceId_ != nullptr && this->oppositeInterfaceOwnerId_ != nullptr && this->oppositeInterfaceSpec_ != nullptr
        && this->oppositeInterfaceStatus_ != nullptr && this->oppositeRegionId_ != nullptr && this->oppositeRouterId_ != nullptr && this->oppositeRouterType_ != nullptr && this->oppositeVpcInstanceId_ != nullptr
        && this->requestId_ != nullptr && this->reservationActiveTime_ != nullptr && this->reservationBandwidth_ != nullptr && this->reservationInternetChargeType_ != nullptr && this->reservationOrderType_ != nullptr
        && this->resourceGroupId_ != nullptr && this->role_ != nullptr && this->routerId_ != nullptr && this->routerInterfaceId_ != nullptr && this->routerType_ != nullptr
        && this->spec_ != nullptr && this->status_ != nullptr && this->success_ != nullptr && this->tags_ != nullptr && this->vpcInstanceId_ != nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeRouterInterfaceAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // connectedTime Field Functions 
    bool hasConnectedTime() const { return this->connectedTime_ != nullptr;};
    void deleteConnectedTime() { this->connectedTime_ = nullptr;};
    inline string connectedTime() const { DARABONBA_PTR_GET_DEFAULT(connectedTime_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setConnectedTime(string connectedTime) { DARABONBA_PTR_SET_VALUE(connectedTime_, connectedTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // crossBorder Field Functions 
    bool hasCrossBorder() const { return this->crossBorder_ != nullptr;};
    void deleteCrossBorder() { this->crossBorder_ = nullptr;};
    inline bool crossBorder() const { DARABONBA_PTR_GET_DEFAULT(crossBorder_, false) };
    inline DescribeRouterInterfaceAttributeResponseBody& setCrossBorder(bool crossBorder) { DARABONBA_PTR_SET_VALUE(crossBorder_, crossBorder) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fastLinkMode Field Functions 
    bool hasFastLinkMode() const { return this->fastLinkMode_ != nullptr;};
    void deleteFastLinkMode() { this->fastLinkMode_ = nullptr;};
    inline string fastLinkMode() const { DARABONBA_PTR_GET_DEFAULT(fastLinkMode_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setFastLinkMode(string fastLinkMode) { DARABONBA_PTR_SET_VALUE(fastLinkMode_, fastLinkMode) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasReservationData Field Functions 
    bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
    void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
    inline string hasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


    // hcRate Field Functions 
    bool hasHcRate() const { return this->hcRate_ != nullptr;};
    void deleteHcRate() { this->hcRate_ = nullptr;};
    inline int32_t hcRate() const { DARABONBA_PTR_GET_DEFAULT(hcRate_, 0) };
    inline DescribeRouterInterfaceAttributeResponseBody& setHcRate(int32_t hcRate) { DARABONBA_PTR_SET_VALUE(hcRate_, hcRate) };


    // hcThreshold Field Functions 
    bool hasHcThreshold() const { return this->hcThreshold_ != nullptr;};
    void deleteHcThreshold() { this->hcThreshold_ = nullptr;};
    inline int32_t hcThreshold() const { DARABONBA_PTR_GET_DEFAULT(hcThreshold_, 0) };
    inline DescribeRouterInterfaceAttributeResponseBody& setHcThreshold(int32_t hcThreshold) { DARABONBA_PTR_SET_VALUE(hcThreshold_, hcThreshold) };


    // healthCheckSourceIp Field Functions 
    bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
    void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
    inline string healthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


    // healthCheckStatus Field Functions 
    bool hasHealthCheckStatus() const { return this->healthCheckStatus_ != nullptr;};
    void deleteHealthCheckStatus() { this->healthCheckStatus_ = nullptr;};
    inline string healthCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(healthCheckStatus_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setHealthCheckStatus(string healthCheckStatus) { DARABONBA_PTR_SET_VALUE(healthCheckStatus_, healthCheckStatus) };


    // healthCheckTargetIp Field Functions 
    bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
    void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
    inline string healthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oppositeAccessPointId Field Functions 
    bool hasOppositeAccessPointId() const { return this->oppositeAccessPointId_ != nullptr;};
    void deleteOppositeAccessPointId() { this->oppositeAccessPointId_ = nullptr;};
    inline string oppositeAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(oppositeAccessPointId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeAccessPointId(string oppositeAccessPointId) { DARABONBA_PTR_SET_VALUE(oppositeAccessPointId_, oppositeAccessPointId) };


    // oppositeBandwidth Field Functions 
    bool hasOppositeBandwidth() const { return this->oppositeBandwidth_ != nullptr;};
    void deleteOppositeBandwidth() { this->oppositeBandwidth_ = nullptr;};
    inline int32_t oppositeBandwidth() const { DARABONBA_PTR_GET_DEFAULT(oppositeBandwidth_, 0) };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeBandwidth(int32_t oppositeBandwidth) { DARABONBA_PTR_SET_VALUE(oppositeBandwidth_, oppositeBandwidth) };


    // oppositeInterfaceBusinessStatus Field Functions 
    bool hasOppositeInterfaceBusinessStatus() const { return this->oppositeInterfaceBusinessStatus_ != nullptr;};
    void deleteOppositeInterfaceBusinessStatus() { this->oppositeInterfaceBusinessStatus_ = nullptr;};
    inline string oppositeInterfaceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceBusinessStatus_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceBusinessStatus(string oppositeInterfaceBusinessStatus) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceBusinessStatus_, oppositeInterfaceBusinessStatus) };


    // oppositeInterfaceId Field Functions 
    bool hasOppositeInterfaceId() const { return this->oppositeInterfaceId_ != nullptr;};
    void deleteOppositeInterfaceId() { this->oppositeInterfaceId_ = nullptr;};
    inline string oppositeInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceId(string oppositeInterfaceId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceId_, oppositeInterfaceId) };


    // oppositeInterfaceOwnerId Field Functions 
    bool hasOppositeInterfaceOwnerId() const { return this->oppositeInterfaceOwnerId_ != nullptr;};
    void deleteOppositeInterfaceOwnerId() { this->oppositeInterfaceOwnerId_ = nullptr;};
    inline string oppositeInterfaceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceOwnerId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceOwnerId(string oppositeInterfaceOwnerId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceOwnerId_, oppositeInterfaceOwnerId) };


    // oppositeInterfaceSpec Field Functions 
    bool hasOppositeInterfaceSpec() const { return this->oppositeInterfaceSpec_ != nullptr;};
    void deleteOppositeInterfaceSpec() { this->oppositeInterfaceSpec_ = nullptr;};
    inline string oppositeInterfaceSpec() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceSpec_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceSpec(string oppositeInterfaceSpec) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceSpec_, oppositeInterfaceSpec) };


    // oppositeInterfaceStatus Field Functions 
    bool hasOppositeInterfaceStatus() const { return this->oppositeInterfaceStatus_ != nullptr;};
    void deleteOppositeInterfaceStatus() { this->oppositeInterfaceStatus_ = nullptr;};
    inline string oppositeInterfaceStatus() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceStatus_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceStatus(string oppositeInterfaceStatus) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceStatus_, oppositeInterfaceStatus) };


    // oppositeRegionId Field Functions 
    bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
    void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
    inline string oppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


    // oppositeRouterId Field Functions 
    bool hasOppositeRouterId() const { return this->oppositeRouterId_ != nullptr;};
    void deleteOppositeRouterId() { this->oppositeRouterId_ = nullptr;};
    inline string oppositeRouterId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeRouterId(string oppositeRouterId) { DARABONBA_PTR_SET_VALUE(oppositeRouterId_, oppositeRouterId) };


    // oppositeRouterType Field Functions 
    bool hasOppositeRouterType() const { return this->oppositeRouterType_ != nullptr;};
    void deleteOppositeRouterType() { this->oppositeRouterType_ = nullptr;};
    inline string oppositeRouterType() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeRouterType(string oppositeRouterType) { DARABONBA_PTR_SET_VALUE(oppositeRouterType_, oppositeRouterType) };


    // oppositeVpcInstanceId Field Functions 
    bool hasOppositeVpcInstanceId() const { return this->oppositeVpcInstanceId_ != nullptr;};
    void deleteOppositeVpcInstanceId() { this->oppositeVpcInstanceId_ = nullptr;};
    inline string oppositeVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeVpcInstanceId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeVpcInstanceId(string oppositeVpcInstanceId) { DARABONBA_PTR_SET_VALUE(oppositeVpcInstanceId_, oppositeVpcInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservationActiveTime Field Functions 
    bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
    void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
    inline string reservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


    // reservationBandwidth Field Functions 
    bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
    void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
    inline string reservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


    // reservationInternetChargeType Field Functions 
    bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
    void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
    inline string reservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


    // reservationOrderType Field Functions 
    bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
    void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
    inline string reservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string routerId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // routerInterfaceId Field Functions 
    bool hasRouterInterfaceId() const { return this->routerInterfaceId_ != nullptr;};
    void deleteRouterInterfaceId() { this->routerInterfaceId_ = nullptr;};
    inline string routerInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(routerInterfaceId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRouterInterfaceId(string routerInterfaceId) { DARABONBA_PTR_SET_VALUE(routerInterfaceId_, routerInterfaceId) };


    // routerType Field Functions 
    bool hasRouterType() const { return this->routerType_ != nullptr;};
    void deleteRouterType() { this->routerType_ = nullptr;};
    inline string routerType() const { DARABONBA_PTR_GET_DEFAULT(routerType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRouterType(string routerType) { DARABONBA_PTR_SET_VALUE(routerType_, routerType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRouterInterfaceAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeRouterInterfaceAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeRouterInterfaceAttributeResponseBodyTags) };
    inline DescribeRouterInterfaceAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeRouterInterfaceAttributeResponseBodyTags) };
    inline DescribeRouterInterfaceAttributeResponseBody& setTags(const DescribeRouterInterfaceAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRouterInterfaceAttributeResponseBody& setTags(DescribeRouterInterfaceAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The ID of the access point.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The bandwidth of the router interface. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The status of the router interface. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   **AfterPay**: pay-as-you-go
    // *   **PrePaid**: subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the connection was established.
    std::shared_ptr<string> connectedTime_ = nullptr;
    // The time when the router interface was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the connection is a cross-border connection. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> crossBorder_ = nullptr;
    // The description of the router interface.
    std::shared_ptr<string> description_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // Indicates whether the VBR that is created in the Fast Link mode is uplinked to the router interface. The Fast Link mode helps automatically connect router interfaces that are created for the VBR and its peer VPC. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > 
    // 
    // *   This parameter takes effect only when **RouterType** is set to **VBR** and **OppositeRouterType** is set to **VRouter**.
    // 
    // *   When **FastLinkMode** is set to **true**, **Role** must be set to **InitiatingSide**. **AccessPointId**, **OppositeRouterType**, **OpppsiteRouterId**, and **OppositeInterfaceOwnerId** are required.
    std::shared_ptr<string> fastLinkMode_ = nullptr;
    // The time when the router interface was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether renewal data is included. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<string> hasReservationData_ = nullptr;
    // The rate of health checks. Unit: seconds. The value indicates the interval at which probe packets are sent during a health check.
    std::shared_ptr<int32_t> hcRate_ = nullptr;
    // The healthy threshold. This value indicates the number of probe packets that are sent during a health check. Unit: packets.
    std::shared_ptr<int32_t> hcThreshold_ = nullptr;
    // The source IP address that is used for the health check.
    std::shared_ptr<string> healthCheckSourceIp_ = nullptr;
    // The status of the health check. Valid values:
    // 
    // *   **Abnormal**
    // *   **Normal**
    // *   **NoRedundantRoute**
    // *   **NoHealthCheckConfig**
    std::shared_ptr<string> healthCheckStatus_ = nullptr;
    // The destination IP address that is used for the health check.
    std::shared_ptr<string> healthCheckTargetIp_ = nullptr;
    // The response parameters.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the router interface.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the peer access point.
    std::shared_ptr<string> oppositeAccessPointId_ = nullptr;
    // The maximum bandwidth of the peer router interface. Unit: Mbit/s.
    std::shared_ptr<int32_t> oppositeBandwidth_ = nullptr;
    // The service status of the peer router interface. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    std::shared_ptr<string> oppositeInterfaceBusinessStatus_ = nullptr;
    // The ID of the peer router interface.
    std::shared_ptr<string> oppositeInterfaceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the peer router interface belongs.
    std::shared_ptr<string> oppositeInterfaceOwnerId_ = nullptr;
    // The specification of the peer router interface. Valid values:
    // 
    // *   **Mini.2**: 2 Mbit/s
    // *   **Mini.5**: 5 Mbit/s
    // *   **Small.1**: 10 Mbit/s
    // *   **Small.2**: 20 Mbit/s
    // *   **Small.5**: 50 Mbit/s
    // *   **Middle.1**: 100 Mbit/s
    // *   **Middle.2**: 200 Mbit/s
    // *   **Middle.5**: 500 Mbit/s
    // *   **Large.1**: 1,000 Mbit/s
    // *   **Large.2**: 2,000 Mbit/s
    // *   **Large.5**: 5,000 Mbit/s
    // *   **Xlarge.1**: 10,000 Mbit/s
    // *   **Negative**: not applicable
    std::shared_ptr<string> oppositeInterfaceSpec_ = nullptr;
    // The status of the peer router interface. Valid values:
    // 
    // *   **Idle**
    // *   **AcceptingConnecting**
    // *   **Connecting**
    // *   **Activating**
    // *   **Active**
    // *   **Modifying**
    // *   **Deactivating**
    // *   **Inactive**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> oppositeInterfaceStatus_ = nullptr;
    // The region ID of the peer router interface.
    std::shared_ptr<string> oppositeRegionId_ = nullptr;
    // The ID of the router to which the peer router interface belongs.
    std::shared_ptr<string> oppositeRouterId_ = nullptr;
    // The type of the router to which the peer router interface belongs. Valid values:
    // 
    // *   **VRouter**
    // *   **VBR**
    std::shared_ptr<string> oppositeRouterType_ = nullptr;
    // The ID of the peer VPC.
    std::shared_ptr<string> oppositeVpcInstanceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the renewal takes effect.
    std::shared_ptr<string> reservationActiveTime_ = nullptr;
    // The maximum bandwidth after the renewal takes effect. Unit: Mbit/s.
    std::shared_ptr<string> reservationBandwidth_ = nullptr;
    // The metering method that is used after the renewal takes effect. Valid values: If **PayByBandwidth** is returned, it indicates that the Express Connect circuit is billed on a pay-by-bandwidth basis.
    std::shared_ptr<string> reservationInternetChargeType_ = nullptr;
    // The type of the renewal order. Only **RENEW** may be returned, which indicates that the order is placed for service renewal.
    std::shared_ptr<string> reservationOrderType_ = nullptr;
    // The resource group ID.
    // 
    // For more information about resource groups, see [What is a resource group?](https://help.aliyun.com/document_detail/94475.html)
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The role of the router interface in the peering connection.
    std::shared_ptr<string> role_ = nullptr;
    // The ID of the router to which the router interface belongs.
    std::shared_ptr<string> routerId_ = nullptr;
    // The ID of the router interface.
    std::shared_ptr<string> routerInterfaceId_ = nullptr;
    // The type of the router to which the route table belongs. Valid values:
    // 
    // *   **VRouter**
    // *   **VBR**
    std::shared_ptr<string> routerType_ = nullptr;
    // The specification of the router interface. Valid values:
    // 
    // *   **Mini.2**: 2 Mbit/s
    // *   **Mini.5**: 5 Mbit/s
    // *   **Small.1**: 10 Mbit/s
    // *   **Small.2**: 20 Mbit/s
    // *   **Small.5**: 50 Mbit/s
    // *   **Middle.1**: 100 Mbit/s
    // *   **Middle.2**: 200 Mbit/s
    // *   **Middle.5**: 500 Mbit/s
    // *   **Large.1**: 1,000 Mbit/s
    // *   **Large.2**: 2,000 Mbit/s
    // *   **Large.5**: 5,000 Mbit/s
    // *   **Xlarge.1**: 10,000 Mbit/s
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the router interface. Valid values:
    // 
    // *   **Idle**
    // *   **AcceptingConnecting**
    // *   **Connecting**
    // *   **Activating**
    // *   **Active**
    // *   **Modifying**
    // *   **Deactivating**
    // *   **Inactive**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the request is successful. Valid values: true and false.
    std::shared_ptr<bool> success_ = nullptr;
    // The tag of the resource.
    std::shared_ptr<DescribeRouterInterfaceAttributeResponseBodyTags> tags_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the router interface belongs.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
