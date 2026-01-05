// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRouterInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouterInterfaceSet, routerInterfaceSet_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouterInterfaceSet, routerInterfaceSet_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouterInterfacesResponseBody() = default ;
    DescribeRouterInterfacesResponseBody(const DescribeRouterInterfacesResponseBody &) = default ;
    DescribeRouterInterfacesResponseBody(DescribeRouterInterfacesResponseBody &&) = default ;
    DescribeRouterInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfacesResponseBody() = default ;
    DescribeRouterInterfacesResponseBody& operator=(const DescribeRouterInterfacesResponseBody &) = default ;
    DescribeRouterInterfacesResponseBody& operator=(DescribeRouterInterfacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouterInterfaceSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouterInterfaceSet& obj) { 
        DARABONBA_PTR_TO_JSON(RouterInterfaceType, routerInterfaceType_);
      };
      friend void from_json(const Darabonba::Json& j, RouterInterfaceSet& obj) { 
        DARABONBA_PTR_FROM_JSON(RouterInterfaceType, routerInterfaceType_);
      };
      RouterInterfaceSet() = default ;
      RouterInterfaceSet(const RouterInterfaceSet &) = default ;
      RouterInterfaceSet(RouterInterfaceSet &&) = default ;
      RouterInterfaceSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouterInterfaceSet() = default ;
      RouterInterfaceSet& operator=(const RouterInterfaceSet &) = default ;
      RouterInterfaceSet& operator=(RouterInterfaceSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RouterInterfaceType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouterInterfaceType& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RouterInterfaceType& obj) { 
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
        RouterInterfaceType() = default ;
        RouterInterfaceType(const RouterInterfaceType &) = default ;
        RouterInterfaceType(RouterInterfaceType &&) = default ;
        RouterInterfaceType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouterInterfaceType() = default ;
        RouterInterfaceType& operator=(const RouterInterfaceType &) = default ;
        RouterInterfaceType& operator=(RouterInterfaceType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->businessStatus_ == nullptr && this->chargeType_ == nullptr && this->connectedTime_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr
        && this->endTime_ == nullptr && this->healthCheckSourceIp_ == nullptr && this->healthCheckTargetIp_ == nullptr && this->name_ == nullptr && this->oppositeAccessPointId_ == nullptr
        && this->oppositeInterfaceBusinessStatus_ == nullptr && this->oppositeInterfaceId_ == nullptr && this->oppositeInterfaceOwnerId_ == nullptr && this->oppositeInterfaceSpec_ == nullptr && this->oppositeInterfaceStatus_ == nullptr
        && this->oppositeRegionId_ == nullptr && this->oppositeRouterId_ == nullptr && this->oppositeRouterType_ == nullptr && this->role_ == nullptr && this->routerId_ == nullptr
        && this->routerInterfaceId_ == nullptr && this->routerType_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr; };
        // accessPointId Field Functions 
        bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
        void deleteAccessPointId() { this->accessPointId_ = nullptr;};
        inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
        inline RouterInterfaceType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline RouterInterfaceType& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline RouterInterfaceType& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // connectedTime Field Functions 
        bool hasConnectedTime() const { return this->connectedTime_ != nullptr;};
        void deleteConnectedTime() { this->connectedTime_ = nullptr;};
        inline string getConnectedTime() const { DARABONBA_PTR_GET_DEFAULT(connectedTime_, "") };
        inline RouterInterfaceType& setConnectedTime(string connectedTime) { DARABONBA_PTR_SET_VALUE(connectedTime_, connectedTime) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline RouterInterfaceType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RouterInterfaceType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline RouterInterfaceType& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // healthCheckSourceIp Field Functions 
        bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
        void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
        inline string getHealthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
        inline RouterInterfaceType& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


        // healthCheckTargetIp Field Functions 
        bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
        void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
        inline string getHealthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
        inline RouterInterfaceType& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RouterInterfaceType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // oppositeAccessPointId Field Functions 
        bool hasOppositeAccessPointId() const { return this->oppositeAccessPointId_ != nullptr;};
        void deleteOppositeAccessPointId() { this->oppositeAccessPointId_ = nullptr;};
        inline string getOppositeAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(oppositeAccessPointId_, "") };
        inline RouterInterfaceType& setOppositeAccessPointId(string oppositeAccessPointId) { DARABONBA_PTR_SET_VALUE(oppositeAccessPointId_, oppositeAccessPointId) };


        // oppositeInterfaceBusinessStatus Field Functions 
        bool hasOppositeInterfaceBusinessStatus() const { return this->oppositeInterfaceBusinessStatus_ != nullptr;};
        void deleteOppositeInterfaceBusinessStatus() { this->oppositeInterfaceBusinessStatus_ = nullptr;};
        inline string getOppositeInterfaceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceBusinessStatus_, "") };
        inline RouterInterfaceType& setOppositeInterfaceBusinessStatus(string oppositeInterfaceBusinessStatus) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceBusinessStatus_, oppositeInterfaceBusinessStatus) };


        // oppositeInterfaceId Field Functions 
        bool hasOppositeInterfaceId() const { return this->oppositeInterfaceId_ != nullptr;};
        void deleteOppositeInterfaceId() { this->oppositeInterfaceId_ = nullptr;};
        inline string getOppositeInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceId_, "") };
        inline RouterInterfaceType& setOppositeInterfaceId(string oppositeInterfaceId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceId_, oppositeInterfaceId) };


        // oppositeInterfaceOwnerId Field Functions 
        bool hasOppositeInterfaceOwnerId() const { return this->oppositeInterfaceOwnerId_ != nullptr;};
        void deleteOppositeInterfaceOwnerId() { this->oppositeInterfaceOwnerId_ = nullptr;};
        inline string getOppositeInterfaceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceOwnerId_, "") };
        inline RouterInterfaceType& setOppositeInterfaceOwnerId(string oppositeInterfaceOwnerId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceOwnerId_, oppositeInterfaceOwnerId) };


        // oppositeInterfaceSpec Field Functions 
        bool hasOppositeInterfaceSpec() const { return this->oppositeInterfaceSpec_ != nullptr;};
        void deleteOppositeInterfaceSpec() { this->oppositeInterfaceSpec_ = nullptr;};
        inline string getOppositeInterfaceSpec() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceSpec_, "") };
        inline RouterInterfaceType& setOppositeInterfaceSpec(string oppositeInterfaceSpec) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceSpec_, oppositeInterfaceSpec) };


        // oppositeInterfaceStatus Field Functions 
        bool hasOppositeInterfaceStatus() const { return this->oppositeInterfaceStatus_ != nullptr;};
        void deleteOppositeInterfaceStatus() { this->oppositeInterfaceStatus_ = nullptr;};
        inline string getOppositeInterfaceStatus() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceStatus_, "") };
        inline RouterInterfaceType& setOppositeInterfaceStatus(string oppositeInterfaceStatus) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceStatus_, oppositeInterfaceStatus) };


        // oppositeRegionId Field Functions 
        bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
        void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
        inline string getOppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
        inline RouterInterfaceType& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


        // oppositeRouterId Field Functions 
        bool hasOppositeRouterId() const { return this->oppositeRouterId_ != nullptr;};
        void deleteOppositeRouterId() { this->oppositeRouterId_ = nullptr;};
        inline string getOppositeRouterId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterId_, "") };
        inline RouterInterfaceType& setOppositeRouterId(string oppositeRouterId) { DARABONBA_PTR_SET_VALUE(oppositeRouterId_, oppositeRouterId) };


        // oppositeRouterType Field Functions 
        bool hasOppositeRouterType() const { return this->oppositeRouterType_ != nullptr;};
        void deleteOppositeRouterType() { this->oppositeRouterType_ = nullptr;};
        inline string getOppositeRouterType() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterType_, "") };
        inline RouterInterfaceType& setOppositeRouterType(string oppositeRouterType) { DARABONBA_PTR_SET_VALUE(oppositeRouterType_, oppositeRouterType) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline RouterInterfaceType& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // routerId Field Functions 
        bool hasRouterId() const { return this->routerId_ != nullptr;};
        void deleteRouterId() { this->routerId_ = nullptr;};
        inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
        inline RouterInterfaceType& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


        // routerInterfaceId Field Functions 
        bool hasRouterInterfaceId() const { return this->routerInterfaceId_ != nullptr;};
        void deleteRouterInterfaceId() { this->routerInterfaceId_ = nullptr;};
        inline string getRouterInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(routerInterfaceId_, "") };
        inline RouterInterfaceType& setRouterInterfaceId(string routerInterfaceId) { DARABONBA_PTR_SET_VALUE(routerInterfaceId_, routerInterfaceId) };


        // routerType Field Functions 
        bool hasRouterType() const { return this->routerType_ != nullptr;};
        void deleteRouterType() { this->routerType_ = nullptr;};
        inline string getRouterType() const { DARABONBA_PTR_GET_DEFAULT(routerType_, "") };
        inline RouterInterfaceType& setRouterType(string routerType) { DARABONBA_PTR_SET_VALUE(routerType_, routerType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline RouterInterfaceType& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RouterInterfaceType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> accessPointId_ {};
        shared_ptr<string> businessStatus_ {};
        shared_ptr<string> chargeType_ {};
        shared_ptr<string> connectedTime_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> healthCheckSourceIp_ {};
        shared_ptr<string> healthCheckTargetIp_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> oppositeAccessPointId_ {};
        shared_ptr<string> oppositeInterfaceBusinessStatus_ {};
        shared_ptr<string> oppositeInterfaceId_ {};
        shared_ptr<string> oppositeInterfaceOwnerId_ {};
        shared_ptr<string> oppositeInterfaceSpec_ {};
        shared_ptr<string> oppositeInterfaceStatus_ {};
        shared_ptr<string> oppositeRegionId_ {};
        shared_ptr<string> oppositeRouterId_ {};
        shared_ptr<string> oppositeRouterType_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> routerId_ {};
        shared_ptr<string> routerInterfaceId_ {};
        shared_ptr<string> routerType_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->routerInterfaceType_ == nullptr; };
      // routerInterfaceType Field Functions 
      bool hasRouterInterfaceType() const { return this->routerInterfaceType_ != nullptr;};
      void deleteRouterInterfaceType() { this->routerInterfaceType_ = nullptr;};
      inline const vector<RouterInterfaceSet::RouterInterfaceType> & getRouterInterfaceType() const { DARABONBA_PTR_GET_CONST(routerInterfaceType_, vector<RouterInterfaceSet::RouterInterfaceType>) };
      inline vector<RouterInterfaceSet::RouterInterfaceType> getRouterInterfaceType() { DARABONBA_PTR_GET(routerInterfaceType_, vector<RouterInterfaceSet::RouterInterfaceType>) };
      inline RouterInterfaceSet& setRouterInterfaceType(const vector<RouterInterfaceSet::RouterInterfaceType> & routerInterfaceType) { DARABONBA_PTR_SET_VALUE(routerInterfaceType_, routerInterfaceType) };
      inline RouterInterfaceSet& setRouterInterfaceType(vector<RouterInterfaceSet::RouterInterfaceType> && routerInterfaceType) { DARABONBA_PTR_SET_RVALUE(routerInterfaceType_, routerInterfaceType) };


    protected:
      shared_ptr<vector<RouterInterfaceSet::RouterInterfaceType>> routerInterfaceType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->routerInterfaceSet_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouterInterfacesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouterInterfacesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouterInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routerInterfaceSet Field Functions 
    bool hasRouterInterfaceSet() const { return this->routerInterfaceSet_ != nullptr;};
    void deleteRouterInterfaceSet() { this->routerInterfaceSet_ = nullptr;};
    inline const DescribeRouterInterfacesResponseBody::RouterInterfaceSet & getRouterInterfaceSet() const { DARABONBA_PTR_GET_CONST(routerInterfaceSet_, DescribeRouterInterfacesResponseBody::RouterInterfaceSet) };
    inline DescribeRouterInterfacesResponseBody::RouterInterfaceSet getRouterInterfaceSet() { DARABONBA_PTR_GET(routerInterfaceSet_, DescribeRouterInterfacesResponseBody::RouterInterfaceSet) };
    inline DescribeRouterInterfacesResponseBody& setRouterInterfaceSet(const DescribeRouterInterfacesResponseBody::RouterInterfaceSet & routerInterfaceSet) { DARABONBA_PTR_SET_VALUE(routerInterfaceSet_, routerInterfaceSet) };
    inline DescribeRouterInterfacesResponseBody& setRouterInterfaceSet(DescribeRouterInterfacesResponseBody::RouterInterfaceSet && routerInterfaceSet) { DARABONBA_PTR_SET_RVALUE(routerInterfaceSet_, routerInterfaceSet) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouterInterfacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRouterInterfacesResponseBody::RouterInterfaceSet> routerInterfaceSet_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
