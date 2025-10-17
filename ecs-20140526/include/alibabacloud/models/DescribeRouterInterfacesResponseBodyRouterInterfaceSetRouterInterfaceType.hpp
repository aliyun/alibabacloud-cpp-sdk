// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODYROUTERINTERFACESETROUTERINTERFACETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODYROUTERINTERFACESETROUTERINTERFACETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ConnectedTime, connectedTime_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OppositeAccessPointId, oppositeAccessPointId_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceBusinessStatus, oppositeInterfaceBusinessStatus_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceId, oppositeInterfaceId_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceOwnerId, oppositeInterfaceOwnerId_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceSpec, oppositeInterfaceSpec_);
      DARABONBA_PTR_TO_JSON(OppositeInterfaceStatus, oppositeInterfaceStatus_);
      DARABONBA_PTR_TO_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_TO_JSON(OppositeRouterId, oppositeRouterId_);
      DARABONBA_PTR_TO_JSON(OppositeRouterType, oppositeRouterType_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(RouterInterfaceId, routerInterfaceId_);
      DARABONBA_PTR_TO_JSON(RouterType, routerType_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ConnectedTime, connectedTime_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OppositeAccessPointId, oppositeAccessPointId_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceBusinessStatus, oppositeInterfaceBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceId, oppositeInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceOwnerId, oppositeInterfaceOwnerId_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceSpec, oppositeInterfaceSpec_);
      DARABONBA_PTR_FROM_JSON(OppositeInterfaceStatus, oppositeInterfaceStatus_);
      DARABONBA_PTR_FROM_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_FROM_JSON(OppositeRouterId, oppositeRouterId_);
      DARABONBA_PTR_FROM_JSON(OppositeRouterType, oppositeRouterType_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(RouterInterfaceId, routerInterfaceId_);
      DARABONBA_PTR_FROM_JSON(RouterType, routerType_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
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
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && return this->businessStatus_ == nullptr && return this->chargeType_ == nullptr && return this->connectedTime_ == nullptr && return this->creationTime_ == nullptr && return this->description_ == nullptr
        && return this->endTime_ == nullptr && return this->healthCheckSourceIp_ == nullptr && return this->healthCheckTargetIp_ == nullptr && return this->name_ == nullptr && return this->oppositeAccessPointId_ == nullptr
        && return this->oppositeInterfaceBusinessStatus_ == nullptr && return this->oppositeInterfaceId_ == nullptr && return this->oppositeInterfaceOwnerId_ == nullptr && return this->oppositeInterfaceSpec_ == nullptr && return this->oppositeInterfaceStatus_ == nullptr
        && return this->oppositeRegionId_ == nullptr && return this->oppositeRouterId_ == nullptr && return this->oppositeRouterType_ == nullptr && return this->role_ == nullptr && return this->routerId_ == nullptr
        && return this->routerInterfaceId_ == nullptr && return this->routerType_ == nullptr && return this->spec_ == nullptr && return this->status_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSetRouterInterfaceType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


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


  protected:
    std::shared_ptr<string> accessPointId_ = nullptr;
    std::shared_ptr<string> businessStatus_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> connectedTime_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> healthCheckSourceIp_ = nullptr;
    std::shared_ptr<string> healthCheckTargetIp_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> oppositeAccessPointId_ = nullptr;
    std::shared_ptr<string> oppositeInterfaceBusinessStatus_ = nullptr;
    std::shared_ptr<string> oppositeInterfaceId_ = nullptr;
    std::shared_ptr<string> oppositeInterfaceOwnerId_ = nullptr;
    std::shared_ptr<string> oppositeInterfaceSpec_ = nullptr;
    std::shared_ptr<string> oppositeInterfaceStatus_ = nullptr;
    std::shared_ptr<string> oppositeRegionId_ = nullptr;
    std::shared_ptr<string> oppositeRouterId_ = nullptr;
    std::shared_ptr<string> oppositeRouterType_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> routerId_ = nullptr;
    std::shared_ptr<string> routerInterfaceId_ = nullptr;
    std::shared_ptr<string> routerType_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
