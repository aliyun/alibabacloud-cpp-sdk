// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
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
        friend void from_json(const Darabonba::Json& j, RouterInterfaceType& obj) { 
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
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tags, tags_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TagsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagsItem() = default ;
            TagsItem(const TagsItem &) = default ;
            TagsItem(TagsItem &&) = default ;
            TagsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagsItem() = default ;
            TagsItem& operator=(const TagsItem &) = default ;
            TagsItem& operator=(TagsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline TagsItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of the resource tag. At least one tag key must be entered, and a maximum of 20 tag keys are supported. If this value needs to be passed in, it cannot be an empty string.
            // 
            // A tag key can support up to 128 characters, cannot start with \\"aliyun\\" or \\"acs:\\", and cannot contain \\"http://\\" or \\"https://\\".
            shared_ptr<string> key_ {};
            // The value of the resource tag. A maximum of 20 tag values can be entered. If this value needs to be passed in, an empty string can be entered.
            // 
            // A maximum of 128 characters are supported, it cannot start with \\"aliyun\\" or \\"acs:\\", and it cannot contain \\"http://\\" or \\"https://\\".
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tags_ == nullptr; };
          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const vector<Tags::TagsItem> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tags::TagsItem>) };
          inline vector<Tags::TagsItem> getTags() { DARABONBA_PTR_GET(tags_, vector<Tags::TagsItem>) };
          inline Tags& setTags(const vector<Tags::TagsItem> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline Tags& setTags(vector<Tags::TagsItem> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        protected:
          shared_ptr<vector<Tags::TagsItem>> tags_ {};
        };

        virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->bandwidth_ == nullptr && this->businessStatus_ == nullptr && this->chargeType_ == nullptr && this->connectedTime_ == nullptr && this->creationTime_ == nullptr
        && this->crossBorder_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->fastLinkMode_ == nullptr && this->hasReservationData_ == nullptr
        && this->hcRate_ == nullptr && this->hcThreshold_ == nullptr && this->healthCheckSourceIp_ == nullptr && this->healthCheckTargetIp_ == nullptr && this->ipv6Status_ == nullptr
        && this->name_ == nullptr && this->oppositeAccessPointId_ == nullptr && this->oppositeBandwidth_ == nullptr && this->oppositeInterfaceBusinessStatus_ == nullptr && this->oppositeInterfaceId_ == nullptr
        && this->oppositeInterfaceOwnerId_ == nullptr && this->oppositeInterfaceSpec_ == nullptr && this->oppositeInterfaceStatus_ == nullptr && this->oppositeRegionId_ == nullptr && this->oppositeRouterId_ == nullptr
        && this->oppositeRouterType_ == nullptr && this->oppositeVpcInstanceId_ == nullptr && this->reservationActiveTime_ == nullptr && this->reservationBandwidth_ == nullptr && this->reservationInternetChargeType_ == nullptr
        && this->reservationOrderType_ == nullptr && this->resourceGroupId_ == nullptr && this->role_ == nullptr && this->routerId_ == nullptr && this->routerInterfaceId_ == nullptr
        && this->routerType_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpcInstanceId_ == nullptr; };
        // accessPointId Field Functions 
        bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
        void deleteAccessPointId() { this->accessPointId_ = nullptr;};
        inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
        inline RouterInterfaceType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline RouterInterfaceType& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


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


        // crossBorder Field Functions 
        bool hasCrossBorder() const { return this->crossBorder_ != nullptr;};
        void deleteCrossBorder() { this->crossBorder_ = nullptr;};
        inline bool getCrossBorder() const { DARABONBA_PTR_GET_DEFAULT(crossBorder_, false) };
        inline RouterInterfaceType& setCrossBorder(bool crossBorder) { DARABONBA_PTR_SET_VALUE(crossBorder_, crossBorder) };


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


        // fastLinkMode Field Functions 
        bool hasFastLinkMode() const { return this->fastLinkMode_ != nullptr;};
        void deleteFastLinkMode() { this->fastLinkMode_ = nullptr;};
        inline bool getFastLinkMode() const { DARABONBA_PTR_GET_DEFAULT(fastLinkMode_, false) };
        inline RouterInterfaceType& setFastLinkMode(bool fastLinkMode) { DARABONBA_PTR_SET_VALUE(fastLinkMode_, fastLinkMode) };


        // hasReservationData Field Functions 
        bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
        void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
        inline string getHasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
        inline RouterInterfaceType& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


        // hcRate Field Functions 
        bool hasHcRate() const { return this->hcRate_ != nullptr;};
        void deleteHcRate() { this->hcRate_ = nullptr;};
        inline int32_t getHcRate() const { DARABONBA_PTR_GET_DEFAULT(hcRate_, 0) };
        inline RouterInterfaceType& setHcRate(int32_t hcRate) { DARABONBA_PTR_SET_VALUE(hcRate_, hcRate) };


        // hcThreshold Field Functions 
        bool hasHcThreshold() const { return this->hcThreshold_ != nullptr;};
        void deleteHcThreshold() { this->hcThreshold_ = nullptr;};
        inline int32_t getHcThreshold() const { DARABONBA_PTR_GET_DEFAULT(hcThreshold_, 0) };
        inline RouterInterfaceType& setHcThreshold(int32_t hcThreshold) { DARABONBA_PTR_SET_VALUE(hcThreshold_, hcThreshold) };


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


        // ipv6Status Field Functions 
        bool hasIpv6Status() const { return this->ipv6Status_ != nullptr;};
        void deleteIpv6Status() { this->ipv6Status_ = nullptr;};
        inline string getIpv6Status() const { DARABONBA_PTR_GET_DEFAULT(ipv6Status_, "") };
        inline RouterInterfaceType& setIpv6Status(string ipv6Status) { DARABONBA_PTR_SET_VALUE(ipv6Status_, ipv6Status) };


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


        // oppositeBandwidth Field Functions 
        bool hasOppositeBandwidth() const { return this->oppositeBandwidth_ != nullptr;};
        void deleteOppositeBandwidth() { this->oppositeBandwidth_ = nullptr;};
        inline int32_t getOppositeBandwidth() const { DARABONBA_PTR_GET_DEFAULT(oppositeBandwidth_, 0) };
        inline RouterInterfaceType& setOppositeBandwidth(int32_t oppositeBandwidth) { DARABONBA_PTR_SET_VALUE(oppositeBandwidth_, oppositeBandwidth) };


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


        // oppositeVpcInstanceId Field Functions 
        bool hasOppositeVpcInstanceId() const { return this->oppositeVpcInstanceId_ != nullptr;};
        void deleteOppositeVpcInstanceId() { this->oppositeVpcInstanceId_ = nullptr;};
        inline string getOppositeVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeVpcInstanceId_, "") };
        inline RouterInterfaceType& setOppositeVpcInstanceId(string oppositeVpcInstanceId) { DARABONBA_PTR_SET_VALUE(oppositeVpcInstanceId_, oppositeVpcInstanceId) };


        // reservationActiveTime Field Functions 
        bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
        void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
        inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
        inline RouterInterfaceType& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


        // reservationBandwidth Field Functions 
        bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
        void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
        inline string getReservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
        inline RouterInterfaceType& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


        // reservationInternetChargeType Field Functions 
        bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
        void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
        inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
        inline RouterInterfaceType& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


        // reservationOrderType Field Functions 
        bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
        void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
        inline string getReservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
        inline RouterInterfaceType& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline RouterInterfaceType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const RouterInterfaceType::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, RouterInterfaceType::Tags) };
        inline RouterInterfaceType::Tags getTags() { DARABONBA_PTR_GET(tags_, RouterInterfaceType::Tags) };
        inline RouterInterfaceType& setTags(const RouterInterfaceType::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline RouterInterfaceType& setTags(RouterInterfaceType::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline RouterInterfaceType& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      protected:
        // The ID of the access point.
        shared_ptr<string> accessPointId_ {};
        // The bandwidth of the router interface. Unit: Mbit/s.
        shared_ptr<int32_t> bandwidth_ {};
        // The service status of the router interface. Valid values:
        // 
        // *   **Normal**
        // *   **FinancialLocked**
        // *   **SecurityLocked**
        shared_ptr<string> businessStatus_ {};
        // The billing method.
        shared_ptr<string> chargeType_ {};
        // The time when the connection was established.
        // 
        // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
        shared_ptr<string> connectedTime_ {};
        // The time when the route table was created.
        // 
        // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // Indicates whether the connection is a cross-border connection.
        shared_ptr<bool> crossBorder_ {};
        // The description of the router interface.
        shared_ptr<string> description_ {};
        // The end of the time range during which data was queried.
        // 
        // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
        shared_ptr<string> endTime_ {};
        // Indicates whether the VBR that is created in the Fast Link mode is uplinked to the router interface. The Fast Link mode helps automatically connect router interfaces that are created for the VBR and its peer VPC. Valid values:
        // 
        // *   **true**
        // *   **false** (default)
        shared_ptr<bool> fastLinkMode_ {};
        // Indicates whether renewal data is included.
        shared_ptr<string> hasReservationData_ {};
        // The rate of heath checks.
        shared_ptr<int32_t> hcRate_ {};
        // The health check threshold.
        shared_ptr<int32_t> hcThreshold_ {};
        // The source IP address that is used for the health check.
        shared_ptr<string> healthCheckSourceIp_ {};
        // The destination IP address that is used for the health check.
        shared_ptr<string> healthCheckTargetIp_ {};
        // Indicates whether protection against malicious IPv6 traffic is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        // *   **unsupport**
        shared_ptr<string> ipv6Status_ {};
        // The custom name.
        shared_ptr<string> name_ {};
        // The ID of the peer access point.
        shared_ptr<string> oppositeAccessPointId_ {};
        // The maximum bandwidth of the peer router interface. Unit: Mbit/s.
        shared_ptr<int32_t> oppositeBandwidth_ {};
        // The service status of the peer router interface.
        shared_ptr<string> oppositeInterfaceBusinessStatus_ {};
        // The ID of the peer router interface.
        shared_ptr<string> oppositeInterfaceId_ {};
        // The ID of the Alibaba Cloud account to which the peer router interface belongs.
        shared_ptr<string> oppositeInterfaceOwnerId_ {};
        // The specification of the peer router interface.
        shared_ptr<string> oppositeInterfaceSpec_ {};
        // The status of the peer router interface.
        shared_ptr<string> oppositeInterfaceStatus_ {};
        // The region ID of the peer router interface.
        shared_ptr<string> oppositeRegionId_ {};
        // The ID of the router to which the peer router interface belongs.
        shared_ptr<string> oppositeRouterId_ {};
        // The type of the router to which the peer router interface belongs.
        shared_ptr<string> oppositeRouterType_ {};
        // The ID of the peer VPC.
        shared_ptr<string> oppositeVpcInstanceId_ {};
        // The time when the renewal takes effect.
        // 
        // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
        shared_ptr<string> reservationActiveTime_ {};
        // The maximum bandwidth after the renewal takes effect. Unit: Mbit/s.
        shared_ptr<string> reservationBandwidth_ {};
        // The metering method that is used after the renewal takes effect. Valid values:
        shared_ptr<string> reservationInternetChargeType_ {};
        // The type of the renewal order. Valid values:
        shared_ptr<string> reservationOrderType_ {};
        // Resource Group ID.
        // 
        // For more information about resource groups, please refer to [What is a Resource Group?](https://help.aliyun.com/document_detail/94475.html)
        shared_ptr<string> resourceGroupId_ {};
        // Indicates whether the router interface is the initiator or acceptor of the peering connection.
        shared_ptr<string> role_ {};
        // The ID of the router to which the route entry belongs.
        shared_ptr<string> routerId_ {};
        // The ID of the router interface.
        shared_ptr<string> routerInterfaceId_ {};
        // The type of the router to which the route table belongs. Valid values:
        // 
        // *   **VRouter**
        // *   **VBR**
        shared_ptr<string> routerType_ {};
        // The specification of the router interface.
        shared_ptr<string> spec_ {};
        // The status of the router interface.
        shared_ptr<string> status_ {};
        // The tags of the resource.
        shared_ptr<RouterInterfaceType::Tags> tags_ {};
        // The ID of the local virtual private cloud (VPC) in the peering connection.
        shared_ptr<string> vpcInstanceId_ {};
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
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the router interface.
    shared_ptr<DescribeRouterInterfacesResponseBody::RouterInterfaceSet> routerInterfaceSet_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
