// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACEATTRIBUTERESPONSEBODY_HPP_
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
        // The key of tag N added to the resource. You must enter at least one tag key and at most 20 tag keys. The tag key cannot be an empty string.
        // 
        // The tag key can be up to 64 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
        shared_ptr<string> key_ {};
        // The value of tag N added to the resource. You can specify at most 20 tag values. The tag value can be an empty string.
        // 
        // It can be up to 128 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
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
        && this->bandwidth_ == nullptr && this->businessStatus_ == nullptr && this->chargeType_ == nullptr && this->code_ == nullptr && this->connectedTime_ == nullptr
        && this->creationTime_ == nullptr && this->crossBorder_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->fastLinkMode_ == nullptr
        && this->gmtModified_ == nullptr && this->hasReservationData_ == nullptr && this->hcRate_ == nullptr && this->hcThreshold_ == nullptr && this->healthCheckSourceIp_ == nullptr
        && this->healthCheckStatus_ == nullptr && this->healthCheckTargetIp_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->oppositeAccessPointId_ == nullptr
        && this->oppositeBandwidth_ == nullptr && this->oppositeInterfaceBusinessStatus_ == nullptr && this->oppositeInterfaceId_ == nullptr && this->oppositeInterfaceOwnerId_ == nullptr && this->oppositeInterfaceSpec_ == nullptr
        && this->oppositeInterfaceStatus_ == nullptr && this->oppositeRegionId_ == nullptr && this->oppositeRouterId_ == nullptr && this->oppositeRouterType_ == nullptr && this->oppositeVpcInstanceId_ == nullptr
        && this->requestId_ == nullptr && this->reservationActiveTime_ == nullptr && this->reservationBandwidth_ == nullptr && this->reservationInternetChargeType_ == nullptr && this->reservationOrderType_ == nullptr
        && this->resourceGroupId_ == nullptr && this->role_ == nullptr && this->routerId_ == nullptr && this->routerInterfaceId_ == nullptr && this->routerType_ == nullptr
        && this->spec_ == nullptr && this->status_ == nullptr && this->success_ == nullptr && this->tags_ == nullptr && this->vpcInstanceId_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeRouterInterfaceAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // connectedTime Field Functions 
    bool hasConnectedTime() const { return this->connectedTime_ != nullptr;};
    void deleteConnectedTime() { this->connectedTime_ = nullptr;};
    inline string getConnectedTime() const { DARABONBA_PTR_GET_DEFAULT(connectedTime_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setConnectedTime(string connectedTime) { DARABONBA_PTR_SET_VALUE(connectedTime_, connectedTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // crossBorder Field Functions 
    bool hasCrossBorder() const { return this->crossBorder_ != nullptr;};
    void deleteCrossBorder() { this->crossBorder_ = nullptr;};
    inline bool getCrossBorder() const { DARABONBA_PTR_GET_DEFAULT(crossBorder_, false) };
    inline DescribeRouterInterfaceAttributeResponseBody& setCrossBorder(bool crossBorder) { DARABONBA_PTR_SET_VALUE(crossBorder_, crossBorder) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fastLinkMode Field Functions 
    bool hasFastLinkMode() const { return this->fastLinkMode_ != nullptr;};
    void deleteFastLinkMode() { this->fastLinkMode_ = nullptr;};
    inline string getFastLinkMode() const { DARABONBA_PTR_GET_DEFAULT(fastLinkMode_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setFastLinkMode(string fastLinkMode) { DARABONBA_PTR_SET_VALUE(fastLinkMode_, fastLinkMode) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hasReservationData Field Functions 
    bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
    void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
    inline string getHasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


    // hcRate Field Functions 
    bool hasHcRate() const { return this->hcRate_ != nullptr;};
    void deleteHcRate() { this->hcRate_ = nullptr;};
    inline int32_t getHcRate() const { DARABONBA_PTR_GET_DEFAULT(hcRate_, 0) };
    inline DescribeRouterInterfaceAttributeResponseBody& setHcRate(int32_t hcRate) { DARABONBA_PTR_SET_VALUE(hcRate_, hcRate) };


    // hcThreshold Field Functions 
    bool hasHcThreshold() const { return this->hcThreshold_ != nullptr;};
    void deleteHcThreshold() { this->hcThreshold_ = nullptr;};
    inline int32_t getHcThreshold() const { DARABONBA_PTR_GET_DEFAULT(hcThreshold_, 0) };
    inline DescribeRouterInterfaceAttributeResponseBody& setHcThreshold(int32_t hcThreshold) { DARABONBA_PTR_SET_VALUE(hcThreshold_, hcThreshold) };


    // healthCheckSourceIp Field Functions 
    bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
    void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
    inline string getHealthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


    // healthCheckStatus Field Functions 
    bool hasHealthCheckStatus() const { return this->healthCheckStatus_ != nullptr;};
    void deleteHealthCheckStatus() { this->healthCheckStatus_ = nullptr;};
    inline string getHealthCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(healthCheckStatus_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setHealthCheckStatus(string healthCheckStatus) { DARABONBA_PTR_SET_VALUE(healthCheckStatus_, healthCheckStatus) };


    // healthCheckTargetIp Field Functions 
    bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
    void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
    inline string getHealthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oppositeAccessPointId Field Functions 
    bool hasOppositeAccessPointId() const { return this->oppositeAccessPointId_ != nullptr;};
    void deleteOppositeAccessPointId() { this->oppositeAccessPointId_ = nullptr;};
    inline string getOppositeAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(oppositeAccessPointId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeAccessPointId(string oppositeAccessPointId) { DARABONBA_PTR_SET_VALUE(oppositeAccessPointId_, oppositeAccessPointId) };


    // oppositeBandwidth Field Functions 
    bool hasOppositeBandwidth() const { return this->oppositeBandwidth_ != nullptr;};
    void deleteOppositeBandwidth() { this->oppositeBandwidth_ = nullptr;};
    inline int32_t getOppositeBandwidth() const { DARABONBA_PTR_GET_DEFAULT(oppositeBandwidth_, 0) };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeBandwidth(int32_t oppositeBandwidth) { DARABONBA_PTR_SET_VALUE(oppositeBandwidth_, oppositeBandwidth) };


    // oppositeInterfaceBusinessStatus Field Functions 
    bool hasOppositeInterfaceBusinessStatus() const { return this->oppositeInterfaceBusinessStatus_ != nullptr;};
    void deleteOppositeInterfaceBusinessStatus() { this->oppositeInterfaceBusinessStatus_ = nullptr;};
    inline string getOppositeInterfaceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceBusinessStatus_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceBusinessStatus(string oppositeInterfaceBusinessStatus) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceBusinessStatus_, oppositeInterfaceBusinessStatus) };


    // oppositeInterfaceId Field Functions 
    bool hasOppositeInterfaceId() const { return this->oppositeInterfaceId_ != nullptr;};
    void deleteOppositeInterfaceId() { this->oppositeInterfaceId_ = nullptr;};
    inline string getOppositeInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceId(string oppositeInterfaceId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceId_, oppositeInterfaceId) };


    // oppositeInterfaceOwnerId Field Functions 
    bool hasOppositeInterfaceOwnerId() const { return this->oppositeInterfaceOwnerId_ != nullptr;};
    void deleteOppositeInterfaceOwnerId() { this->oppositeInterfaceOwnerId_ = nullptr;};
    inline string getOppositeInterfaceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceOwnerId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceOwnerId(string oppositeInterfaceOwnerId) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceOwnerId_, oppositeInterfaceOwnerId) };


    // oppositeInterfaceSpec Field Functions 
    bool hasOppositeInterfaceSpec() const { return this->oppositeInterfaceSpec_ != nullptr;};
    void deleteOppositeInterfaceSpec() { this->oppositeInterfaceSpec_ = nullptr;};
    inline string getOppositeInterfaceSpec() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceSpec_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceSpec(string oppositeInterfaceSpec) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceSpec_, oppositeInterfaceSpec) };


    // oppositeInterfaceStatus Field Functions 
    bool hasOppositeInterfaceStatus() const { return this->oppositeInterfaceStatus_ != nullptr;};
    void deleteOppositeInterfaceStatus() { this->oppositeInterfaceStatus_ = nullptr;};
    inline string getOppositeInterfaceStatus() const { DARABONBA_PTR_GET_DEFAULT(oppositeInterfaceStatus_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeInterfaceStatus(string oppositeInterfaceStatus) { DARABONBA_PTR_SET_VALUE(oppositeInterfaceStatus_, oppositeInterfaceStatus) };


    // oppositeRegionId Field Functions 
    bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
    void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
    inline string getOppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


    // oppositeRouterId Field Functions 
    bool hasOppositeRouterId() const { return this->oppositeRouterId_ != nullptr;};
    void deleteOppositeRouterId() { this->oppositeRouterId_ = nullptr;};
    inline string getOppositeRouterId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeRouterId(string oppositeRouterId) { DARABONBA_PTR_SET_VALUE(oppositeRouterId_, oppositeRouterId) };


    // oppositeRouterType Field Functions 
    bool hasOppositeRouterType() const { return this->oppositeRouterType_ != nullptr;};
    void deleteOppositeRouterType() { this->oppositeRouterType_ = nullptr;};
    inline string getOppositeRouterType() const { DARABONBA_PTR_GET_DEFAULT(oppositeRouterType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeRouterType(string oppositeRouterType) { DARABONBA_PTR_SET_VALUE(oppositeRouterType_, oppositeRouterType) };


    // oppositeVpcInstanceId Field Functions 
    bool hasOppositeVpcInstanceId() const { return this->oppositeVpcInstanceId_ != nullptr;};
    void deleteOppositeVpcInstanceId() { this->oppositeVpcInstanceId_ = nullptr;};
    inline string getOppositeVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(oppositeVpcInstanceId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setOppositeVpcInstanceId(string oppositeVpcInstanceId) { DARABONBA_PTR_SET_VALUE(oppositeVpcInstanceId_, oppositeVpcInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservationActiveTime Field Functions 
    bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
    void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
    inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


    // reservationBandwidth Field Functions 
    bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
    void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
    inline string getReservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


    // reservationInternetChargeType Field Functions 
    bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
    void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
    inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


    // reservationOrderType Field Functions 
    bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
    void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
    inline string getReservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // routerInterfaceId Field Functions 
    bool hasRouterInterfaceId() const { return this->routerInterfaceId_ != nullptr;};
    void deleteRouterInterfaceId() { this->routerInterfaceId_ = nullptr;};
    inline string getRouterInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(routerInterfaceId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRouterInterfaceId(string routerInterfaceId) { DARABONBA_PTR_SET_VALUE(routerInterfaceId_, routerInterfaceId) };


    // routerType Field Functions 
    bool hasRouterType() const { return this->routerType_ != nullptr;};
    void deleteRouterType() { this->routerType_ = nullptr;};
    inline string getRouterType() const { DARABONBA_PTR_GET_DEFAULT(routerType_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setRouterType(string routerType) { DARABONBA_PTR_SET_VALUE(routerType_, routerType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRouterInterfaceAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeRouterInterfaceAttributeResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeRouterInterfaceAttributeResponseBody::Tags) };
    inline DescribeRouterInterfaceAttributeResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeRouterInterfaceAttributeResponseBody::Tags) };
    inline DescribeRouterInterfaceAttributeResponseBody& setTags(const DescribeRouterInterfaceAttributeResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRouterInterfaceAttributeResponseBody& setTags(DescribeRouterInterfaceAttributeResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeRouterInterfaceAttributeResponseBody& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The ID of the access point.
    shared_ptr<string> accessPointId_ {};
    // The bandwidth of the router interface. Unit: Mbit/s.
    shared_ptr<int32_t> bandwidth_ {};
    // The status of the router interface. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    shared_ptr<string> businessStatus_ {};
    // The billing method. Valid values:
    // 
    // *   **AfterPay**: pay-as-you-go
    // *   **PrePaid**: subscription
    shared_ptr<string> chargeType_ {};
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The time when the connection was established.
    shared_ptr<string> connectedTime_ {};
    // The time when the router interface was created.
    shared_ptr<string> creationTime_ {};
    // Indicates whether the connection is a cross-border connection. Valid values:
    // 
    // *   **false**
    // *   **true**
    shared_ptr<bool> crossBorder_ {};
    // The description of the router interface.
    shared_ptr<string> description_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
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
    shared_ptr<string> fastLinkMode_ {};
    // The time when the router interface was modified.
    shared_ptr<string> gmtModified_ {};
    // Indicates whether renewal data is included. Valid values:
    // 
    // *   **false**
    // *   **true**
    shared_ptr<string> hasReservationData_ {};
    // The rate of health checks. Unit: seconds. The value indicates the interval at which probe packets are sent during a health check.
    shared_ptr<int32_t> hcRate_ {};
    // The healthy threshold. This value indicates the number of probe packets that are sent during a health check. Unit: packets.
    shared_ptr<int32_t> hcThreshold_ {};
    // The source IP address that is used for the health check.
    shared_ptr<string> healthCheckSourceIp_ {};
    // The status of the health check. Valid values:
    // 
    // *   **Abnormal**
    // *   **Normal**
    // *   **NoRedundantRoute**
    // *   **NoHealthCheckConfig**
    shared_ptr<string> healthCheckStatus_ {};
    // The destination IP address that is used for the health check.
    shared_ptr<string> healthCheckTargetIp_ {};
    // The response parameters.
    shared_ptr<string> message_ {};
    // The name of the router interface.
    shared_ptr<string> name_ {};
    // The ID of the peer access point.
    shared_ptr<string> oppositeAccessPointId_ {};
    // The maximum bandwidth of the peer router interface. Unit: Mbit/s.
    shared_ptr<int32_t> oppositeBandwidth_ {};
    // The service status of the peer router interface. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    shared_ptr<string> oppositeInterfaceBusinessStatus_ {};
    // The ID of the peer router interface.
    shared_ptr<string> oppositeInterfaceId_ {};
    // The ID of the Alibaba Cloud account to which the peer router interface belongs.
    shared_ptr<string> oppositeInterfaceOwnerId_ {};
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
    shared_ptr<string> oppositeInterfaceSpec_ {};
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
    shared_ptr<string> oppositeInterfaceStatus_ {};
    // The region ID of the peer router interface.
    shared_ptr<string> oppositeRegionId_ {};
    // The ID of the router to which the peer router interface belongs.
    shared_ptr<string> oppositeRouterId_ {};
    // The type of the router to which the peer router interface belongs. Valid values:
    // 
    // *   **VRouter**
    // *   **VBR**
    shared_ptr<string> oppositeRouterType_ {};
    // The ID of the peer VPC.
    shared_ptr<string> oppositeVpcInstanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The time when the renewal takes effect.
    shared_ptr<string> reservationActiveTime_ {};
    // The maximum bandwidth after the renewal takes effect. Unit: Mbit/s.
    shared_ptr<string> reservationBandwidth_ {};
    // The metering method that is used after the renewal takes effect. Valid values: If **PayByBandwidth** is returned, it indicates that the Express Connect circuit is billed on a pay-by-bandwidth basis.
    shared_ptr<string> reservationInternetChargeType_ {};
    // The type of the renewal order. Only **RENEW** may be returned, which indicates that the order is placed for service renewal.
    shared_ptr<string> reservationOrderType_ {};
    // The resource group ID.
    // 
    // For more information about resource groups, see [What is a resource group?](https://help.aliyun.com/document_detail/94475.html)
    shared_ptr<string> resourceGroupId_ {};
    // The role of the router interface in the peering connection.
    shared_ptr<string> role_ {};
    // The ID of the router to which the router interface belongs.
    shared_ptr<string> routerId_ {};
    // The ID of the router interface.
    shared_ptr<string> routerInterfaceId_ {};
    // The type of the router to which the route table belongs. Valid values:
    // 
    // *   **VRouter**
    // *   **VBR**
    shared_ptr<string> routerType_ {};
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
    shared_ptr<string> spec_ {};
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
    shared_ptr<string> status_ {};
    // Indicates whether the request is successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
    // The tag of the resource.
    shared_ptr<DescribeRouterInterfaceAttributeResponseBody::Tags> tags_ {};
    // The ID of the virtual private cloud (VPC) to which the router interface belongs.
    shared_ptr<string> vpcInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
