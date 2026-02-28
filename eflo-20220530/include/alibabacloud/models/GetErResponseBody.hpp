// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetErResponseBody() = default ;
    GetErResponseBody(const GetErResponseBody &) = default ;
    GetErResponseBody(GetErResponseBody &&) = default ;
    GetErResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErResponseBody() = default ;
    GetErResponseBody& operator=(const GetErResponseBody &) = default ;
    GetErResponseBody& operator=(GetErResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ErAttachments, erAttachments_);
        DARABONBA_PTR_TO_JSON(ErId, erId_);
        DARABONBA_PTR_TO_JSON(ErName, erName_);
        DARABONBA_PTR_TO_JSON(ErRouteEntrys, erRouteEntrys_);
        DARABONBA_PTR_TO_JSON(ErRouteMaps, erRouteMaps_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ErAttachments, erAttachments_);
        DARABONBA_PTR_FROM_JSON(ErId, erId_);
        DARABONBA_PTR_FROM_JSON(ErName, erName_);
        DARABONBA_PTR_FROM_JSON(ErRouteEntrys, erRouteEntrys_);
        DARABONBA_PTR_FROM_JSON(ErRouteMaps, erRouteMaps_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class ErRouteMaps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErRouteMaps& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(ErId, erId_);
          DARABONBA_PTR_TO_JSON(ErRouteMapId, erRouteMapId_);
          DARABONBA_PTR_TO_JSON(ErRouteMapName, erRouteMapName_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(ReceptionInstanceId, receptionInstanceId_);
          DARABONBA_PTR_TO_JSON(ReceptionInstanceName, receptionInstanceName_);
          DARABONBA_PTR_TO_JSON(ReceptionInstanceOwner, receptionInstanceOwner_);
          DARABONBA_PTR_TO_JSON(ReceptionInstanceType, receptionInstanceType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RouteMapNum, routeMapNum_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(TransmissionInstanceId, transmissionInstanceId_);
          DARABONBA_PTR_TO_JSON(TransmissionInstanceName, transmissionInstanceName_);
          DARABONBA_PTR_TO_JSON(TransmissionInstanceOwner, transmissionInstanceOwner_);
          DARABONBA_PTR_TO_JSON(TransmissionInstanceType, transmissionInstanceType_);
        };
        friend void from_json(const Darabonba::Json& j, ErRouteMaps& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(ErId, erId_);
          DARABONBA_PTR_FROM_JSON(ErRouteMapId, erRouteMapId_);
          DARABONBA_PTR_FROM_JSON(ErRouteMapName, erRouteMapName_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(ReceptionInstanceId, receptionInstanceId_);
          DARABONBA_PTR_FROM_JSON(ReceptionInstanceName, receptionInstanceName_);
          DARABONBA_PTR_FROM_JSON(ReceptionInstanceOwner, receptionInstanceOwner_);
          DARABONBA_PTR_FROM_JSON(ReceptionInstanceType, receptionInstanceType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RouteMapNum, routeMapNum_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(TransmissionInstanceId, transmissionInstanceId_);
          DARABONBA_PTR_FROM_JSON(TransmissionInstanceName, transmissionInstanceName_);
          DARABONBA_PTR_FROM_JSON(TransmissionInstanceOwner, transmissionInstanceOwner_);
          DARABONBA_PTR_FROM_JSON(TransmissionInstanceType, transmissionInstanceType_);
        };
        ErRouteMaps() = default ;
        ErRouteMaps(const ErRouteMaps &) = default ;
        ErRouteMaps(ErRouteMaps &&) = default ;
        ErRouteMaps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErRouteMaps() = default ;
        ErRouteMaps& operator=(const ErRouteMaps &) = default ;
        ErRouteMaps& operator=(ErRouteMaps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->destinationCidrBlock_ == nullptr && this->erId_ == nullptr && this->erRouteMapId_ == nullptr
        && this->erRouteMapName_ == nullptr && this->gmtModified_ == nullptr && this->message_ == nullptr && this->receptionInstanceId_ == nullptr && this->receptionInstanceName_ == nullptr
        && this->receptionInstanceOwner_ == nullptr && this->receptionInstanceType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->routeMapNum_ == nullptr
        && this->status_ == nullptr && this->tenantId_ == nullptr && this->transmissionInstanceId_ == nullptr && this->transmissionInstanceName_ == nullptr && this->transmissionInstanceOwner_ == nullptr
        && this->transmissionInstanceType_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ErRouteMaps& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ErRouteMaps& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ErRouteMaps& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline ErRouteMaps& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // erId Field Functions 
        bool hasErId() const { return this->erId_ != nullptr;};
        void deleteErId() { this->erId_ = nullptr;};
        inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
        inline ErRouteMaps& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


        // erRouteMapId Field Functions 
        bool hasErRouteMapId() const { return this->erRouteMapId_ != nullptr;};
        void deleteErRouteMapId() { this->erRouteMapId_ = nullptr;};
        inline string getErRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapId_, "") };
        inline ErRouteMaps& setErRouteMapId(string erRouteMapId) { DARABONBA_PTR_SET_VALUE(erRouteMapId_, erRouteMapId) };


        // erRouteMapName Field Functions 
        bool hasErRouteMapName() const { return this->erRouteMapName_ != nullptr;};
        void deleteErRouteMapName() { this->erRouteMapName_ = nullptr;};
        inline string getErRouteMapName() const { DARABONBA_PTR_GET_DEFAULT(erRouteMapName_, "") };
        inline ErRouteMaps& setErRouteMapName(string erRouteMapName) { DARABONBA_PTR_SET_VALUE(erRouteMapName_, erRouteMapName) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ErRouteMaps& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ErRouteMaps& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // receptionInstanceId Field Functions 
        bool hasReceptionInstanceId() const { return this->receptionInstanceId_ != nullptr;};
        void deleteReceptionInstanceId() { this->receptionInstanceId_ = nullptr;};
        inline string getReceptionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceId_, "") };
        inline ErRouteMaps& setReceptionInstanceId(string receptionInstanceId) { DARABONBA_PTR_SET_VALUE(receptionInstanceId_, receptionInstanceId) };


        // receptionInstanceName Field Functions 
        bool hasReceptionInstanceName() const { return this->receptionInstanceName_ != nullptr;};
        void deleteReceptionInstanceName() { this->receptionInstanceName_ = nullptr;};
        inline string getReceptionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceName_, "") };
        inline ErRouteMaps& setReceptionInstanceName(string receptionInstanceName) { DARABONBA_PTR_SET_VALUE(receptionInstanceName_, receptionInstanceName) };


        // receptionInstanceOwner Field Functions 
        bool hasReceptionInstanceOwner() const { return this->receptionInstanceOwner_ != nullptr;};
        void deleteReceptionInstanceOwner() { this->receptionInstanceOwner_ = nullptr;};
        inline string getReceptionInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceOwner_, "") };
        inline ErRouteMaps& setReceptionInstanceOwner(string receptionInstanceOwner) { DARABONBA_PTR_SET_VALUE(receptionInstanceOwner_, receptionInstanceOwner) };


        // receptionInstanceType Field Functions 
        bool hasReceptionInstanceType() const { return this->receptionInstanceType_ != nullptr;};
        void deleteReceptionInstanceType() { this->receptionInstanceType_ = nullptr;};
        inline string getReceptionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(receptionInstanceType_, "") };
        inline ErRouteMaps& setReceptionInstanceType(string receptionInstanceType) { DARABONBA_PTR_SET_VALUE(receptionInstanceType_, receptionInstanceType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ErRouteMaps& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ErRouteMaps& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // routeMapNum Field Functions 
        bool hasRouteMapNum() const { return this->routeMapNum_ != nullptr;};
        void deleteRouteMapNum() { this->routeMapNum_ = nullptr;};
        inline int32_t getRouteMapNum() const { DARABONBA_PTR_GET_DEFAULT(routeMapNum_, 0) };
        inline ErRouteMaps& setRouteMapNum(int32_t routeMapNum) { DARABONBA_PTR_SET_VALUE(routeMapNum_, routeMapNum) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ErRouteMaps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline ErRouteMaps& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // transmissionInstanceId Field Functions 
        bool hasTransmissionInstanceId() const { return this->transmissionInstanceId_ != nullptr;};
        void deleteTransmissionInstanceId() { this->transmissionInstanceId_ = nullptr;};
        inline string getTransmissionInstanceId() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceId_, "") };
        inline ErRouteMaps& setTransmissionInstanceId(string transmissionInstanceId) { DARABONBA_PTR_SET_VALUE(transmissionInstanceId_, transmissionInstanceId) };


        // transmissionInstanceName Field Functions 
        bool hasTransmissionInstanceName() const { return this->transmissionInstanceName_ != nullptr;};
        void deleteTransmissionInstanceName() { this->transmissionInstanceName_ = nullptr;};
        inline string getTransmissionInstanceName() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceName_, "") };
        inline ErRouteMaps& setTransmissionInstanceName(string transmissionInstanceName) { DARABONBA_PTR_SET_VALUE(transmissionInstanceName_, transmissionInstanceName) };


        // transmissionInstanceOwner Field Functions 
        bool hasTransmissionInstanceOwner() const { return this->transmissionInstanceOwner_ != nullptr;};
        void deleteTransmissionInstanceOwner() { this->transmissionInstanceOwner_ = nullptr;};
        inline string getTransmissionInstanceOwner() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceOwner_, "") };
        inline ErRouteMaps& setTransmissionInstanceOwner(string transmissionInstanceOwner) { DARABONBA_PTR_SET_VALUE(transmissionInstanceOwner_, transmissionInstanceOwner) };


        // transmissionInstanceType Field Functions 
        bool hasTransmissionInstanceType() const { return this->transmissionInstanceType_ != nullptr;};
        void deleteTransmissionInstanceType() { this->transmissionInstanceType_ = nullptr;};
        inline string getTransmissionInstanceType() const { DARABONBA_PTR_GET_DEFAULT(transmissionInstanceType_, "") };
        inline ErRouteMaps& setTransmissionInstanceType(string transmissionInstanceType) { DARABONBA_PTR_SET_VALUE(transmissionInstanceType_, transmissionInstanceType) };


      protected:
        // Policy behavior
        // 
        // Valid value:
        // 
        // *   deny: rejects the.
        // *   permit: The allows.
        shared_ptr<string> action_ {};
        // The time when the data address was created.
        shared_ptr<string> createTime_ {};
        // Policy description
        shared_ptr<string> description_ {};
        // Destination CIDR Block
        shared_ptr<string> destinationCidrBlock_ {};
        // Lingjun HUB ID
        shared_ptr<string> erId_ {};
        // routing policy ID
        shared_ptr<string> erRouteMapId_ {};
        // The name of the routing policy.
        shared_ptr<string> erRouteMapName_ {};
        // The time when the agent was last modified.
        shared_ptr<string> gmtModified_ {};
        // The message that is returned.
        shared_ptr<string> message_ {};
        // The ID of the destination instance.
        shared_ptr<string> receptionInstanceId_ {};
        // The name of the destination instance.
        shared_ptr<string> receptionInstanceName_ {};
        // The tenant to which the destination instance belongs.
        shared_ptr<string> receptionInstanceOwner_ {};
        // The type of the destination instance.
        shared_ptr<string> receptionInstanceType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // Resource group instance ID
        shared_ptr<string> resourceGroupId_ {};
        // Policy sequence number (1001-2000)
        shared_ptr<int32_t> routeMapNum_ {};
        // The status of the intervention entry. Valid value:
        shared_ptr<string> status_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // The ID of the source instance.
        shared_ptr<string> transmissionInstanceId_ {};
        // Source instance name
        shared_ptr<string> transmissionInstanceName_ {};
        // The tenant to which the source instance belongs.
        shared_ptr<string> transmissionInstanceOwner_ {};
        // The type of the source instance.
        shared_ptr<string> transmissionInstanceType_ {};
      };

      class ErRouteEntrys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErRouteEntrys& obj) { 
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(ErId, erId_);
          DARABONBA_PTR_TO_JSON(ErRouteEntryId, erRouteEntryId_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceTenantId, resourceTenantId_);
          DARABONBA_PTR_TO_JSON(RouteType, routeType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, ErRouteEntrys& obj) { 
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(ErId, erId_);
          DARABONBA_PTR_FROM_JSON(ErRouteEntryId, erRouteEntryId_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceTenantId, resourceTenantId_);
          DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        ErRouteEntrys() = default ;
        ErRouteEntrys(const ErRouteEntrys &) = default ;
        ErRouteEntrys(ErRouteEntrys &&) = default ;
        ErRouteEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErRouteEntrys() = default ;
        ErRouteEntrys& operator=(const ErRouteEntrys &) = default ;
        ErRouteEntrys& operator=(ErRouteEntrys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->erId_ == nullptr && this->erRouteEntryId_ == nullptr && this->gmtModified_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceTenantId_ == nullptr && this->routeType_ == nullptr && this->status_ == nullptr
        && this->tenantId_ == nullptr; };
        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline ErRouteEntrys& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // erId Field Functions 
        bool hasErId() const { return this->erId_ != nullptr;};
        void deleteErId() { this->erId_ = nullptr;};
        inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
        inline ErRouteEntrys& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


        // erRouteEntryId Field Functions 
        bool hasErRouteEntryId() const { return this->erRouteEntryId_ != nullptr;};
        void deleteErRouteEntryId() { this->erRouteEntryId_ = nullptr;};
        inline string getErRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(erRouteEntryId_, "") };
        inline ErRouteEntrys& setErRouteEntryId(string erRouteEntryId) { DARABONBA_PTR_SET_VALUE(erRouteEntryId_, erRouteEntryId) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ErRouteEntrys& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // nextHopId Field Functions 
        bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
        void deleteNextHopId() { this->nextHopId_ = nullptr;};
        inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
        inline ErRouteEntrys& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


        // nextHopType Field Functions 
        bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
        void deleteNextHopType() { this->nextHopType_ = nullptr;};
        inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
        inline ErRouteEntrys& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ErRouteEntrys& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ErRouteEntrys& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceTenantId Field Functions 
        bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
        void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
        inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
        inline ErRouteEntrys& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


        // routeType Field Functions 
        bool hasRouteType() const { return this->routeType_ != nullptr;};
        void deleteRouteType() { this->routeType_ = nullptr;};
        inline string getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
        inline ErRouteEntrys& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ErRouteEntrys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline ErRouteEntrys& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // Destination CIDR Block
        shared_ptr<string> destinationCidrBlock_ {};
        // Lingjun HUB Instance ID
        shared_ptr<string> erId_ {};
        // The ID of the route entry.
        shared_ptr<string> erRouteEntryId_ {};
        // The time when the cluster was updated.
        shared_ptr<string> gmtModified_ {};
        // Next Hop Instance
        shared_ptr<string> nextHopId_ {};
        // Next Hop Instance Type
        shared_ptr<string> nextHopType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // Resource group instance ID
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the tenant to which the resource belongs.
        shared_ptr<string> resourceTenantId_ {};
        // Route type
        shared_ptr<string> routeType_ {};
        // The status of the intervention entry. Valid value:
        shared_ptr<string> status_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
      };

      class ErAttachments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErAttachments& obj) { 
          DARABONBA_PTR_TO_JSON(Across, across_);
          DARABONBA_PTR_TO_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ErAttachmentId, erAttachmentId_);
          DARABONBA_PTR_TO_JSON(ErAttachmentName, erAttachmentName_);
          DARABONBA_PTR_TO_JSON(ErId, erId_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceTenantId, resourceTenantId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        };
        friend void from_json(const Darabonba::Json& j, ErAttachments& obj) { 
          DARABONBA_PTR_FROM_JSON(Across, across_);
          DARABONBA_PTR_FROM_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ErAttachmentId, erAttachmentId_);
          DARABONBA_PTR_FROM_JSON(ErAttachmentName, erAttachmentName_);
          DARABONBA_PTR_FROM_JSON(ErId, erId_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceTenantId, resourceTenantId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        };
        ErAttachments() = default ;
        ErAttachments(const ErAttachments &) = default ;
        ErAttachments(ErAttachments &&) = default ;
        ErAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErAttachments() = default ;
        ErAttachments& operator=(const ErAttachments &) = default ;
        ErAttachments& operator=(ErAttachments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->across_ == nullptr
        && this->autoReceiveAllRoute_ == nullptr && this->createTime_ == nullptr && this->erAttachmentId_ == nullptr && this->erAttachmentName_ == nullptr && this->erId_ == nullptr
        && this->gmtModified_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->message_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceTenantId_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr; };
        // across Field Functions 
        bool hasAcross() const { return this->across_ != nullptr;};
        void deleteAcross() { this->across_ = nullptr;};
        inline bool getAcross() const { DARABONBA_PTR_GET_DEFAULT(across_, false) };
        inline ErAttachments& setAcross(bool across) { DARABONBA_PTR_SET_VALUE(across_, across) };


        // autoReceiveAllRoute Field Functions 
        bool hasAutoReceiveAllRoute() const { return this->autoReceiveAllRoute_ != nullptr;};
        void deleteAutoReceiveAllRoute() { this->autoReceiveAllRoute_ = nullptr;};
        inline bool getAutoReceiveAllRoute() const { DARABONBA_PTR_GET_DEFAULT(autoReceiveAllRoute_, false) };
        inline ErAttachments& setAutoReceiveAllRoute(bool autoReceiveAllRoute) { DARABONBA_PTR_SET_VALUE(autoReceiveAllRoute_, autoReceiveAllRoute) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ErAttachments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // erAttachmentId Field Functions 
        bool hasErAttachmentId() const { return this->erAttachmentId_ != nullptr;};
        void deleteErAttachmentId() { this->erAttachmentId_ = nullptr;};
        inline string getErAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentId_, "") };
        inline ErAttachments& setErAttachmentId(string erAttachmentId) { DARABONBA_PTR_SET_VALUE(erAttachmentId_, erAttachmentId) };


        // erAttachmentName Field Functions 
        bool hasErAttachmentName() const { return this->erAttachmentName_ != nullptr;};
        void deleteErAttachmentName() { this->erAttachmentName_ = nullptr;};
        inline string getErAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentName_, "") };
        inline ErAttachments& setErAttachmentName(string erAttachmentName) { DARABONBA_PTR_SET_VALUE(erAttachmentName_, erAttachmentName) };


        // erId Field Functions 
        bool hasErId() const { return this->erId_ != nullptr;};
        void deleteErId() { this->erId_ = nullptr;};
        inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
        inline ErAttachments& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ErAttachments& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ErAttachments& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline ErAttachments& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline ErAttachments& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ErAttachments& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ErAttachments& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ErAttachments& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceTenantId Field Functions 
        bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
        void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
        inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
        inline ErAttachments& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ErAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline ErAttachments& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // Cross-account
        shared_ptr<bool> across_ {};
        // Receive all routes automatically
        shared_ptr<bool> autoReceiveAllRoute_ {};
        // The time when the data address was created.
        shared_ptr<string> createTime_ {};
        // The connection ID of the Lingjun HUB network instance.
        shared_ptr<string> erAttachmentId_ {};
        // Network Instance Name
        shared_ptr<string> erAttachmentName_ {};
        // Lingjun HUB Instance ID
        shared_ptr<string> erId_ {};
        // The time when the agent was last modified.
        shared_ptr<string> gmtModified_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The name of the ECU.
        shared_ptr<string> instanceName_ {};
        // Instance type: VPD and VCC
        // 
        // Valid value:
        // 
        // *   VCC: Lingjun Connection.
        // *   VPD: Lingjun network segment.
        shared_ptr<string> instanceType_ {};
        // The returned message.
        shared_ptr<string> message_ {};
        // The synchronized region where the ECS instances are deployed.
        shared_ptr<string> regionId_ {};
        // Resource group instance ID
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the tenant to which the resource belongs.
        shared_ptr<string> resourceTenantId_ {};
        // The status of the intervention entry. Valid value:
        shared_ptr<string> status_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->erAttachments_ == nullptr && this->erId_ == nullptr && this->erName_ == nullptr && this->erRouteEntrys_ == nullptr
        && this->erRouteMaps_ == nullptr && this->gmtModified_ == nullptr && this->masterZoneId_ == nullptr && this->message_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->tenantId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Content& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // erAttachments Field Functions 
      bool hasErAttachments() const { return this->erAttachments_ != nullptr;};
      void deleteErAttachments() { this->erAttachments_ = nullptr;};
      inline const vector<Content::ErAttachments> & getErAttachments() const { DARABONBA_PTR_GET_CONST(erAttachments_, vector<Content::ErAttachments>) };
      inline vector<Content::ErAttachments> getErAttachments() { DARABONBA_PTR_GET(erAttachments_, vector<Content::ErAttachments>) };
      inline Content& setErAttachments(const vector<Content::ErAttachments> & erAttachments) { DARABONBA_PTR_SET_VALUE(erAttachments_, erAttachments) };
      inline Content& setErAttachments(vector<Content::ErAttachments> && erAttachments) { DARABONBA_PTR_SET_RVALUE(erAttachments_, erAttachments) };


      // erId Field Functions 
      bool hasErId() const { return this->erId_ != nullptr;};
      void deleteErId() { this->erId_ = nullptr;};
      inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
      inline Content& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


      // erName Field Functions 
      bool hasErName() const { return this->erName_ != nullptr;};
      void deleteErName() { this->erName_ = nullptr;};
      inline string getErName() const { DARABONBA_PTR_GET_DEFAULT(erName_, "") };
      inline Content& setErName(string erName) { DARABONBA_PTR_SET_VALUE(erName_, erName) };


      // erRouteEntrys Field Functions 
      bool hasErRouteEntrys() const { return this->erRouteEntrys_ != nullptr;};
      void deleteErRouteEntrys() { this->erRouteEntrys_ = nullptr;};
      inline const vector<Content::ErRouteEntrys> & getErRouteEntrys() const { DARABONBA_PTR_GET_CONST(erRouteEntrys_, vector<Content::ErRouteEntrys>) };
      inline vector<Content::ErRouteEntrys> getErRouteEntrys() { DARABONBA_PTR_GET(erRouteEntrys_, vector<Content::ErRouteEntrys>) };
      inline Content& setErRouteEntrys(const vector<Content::ErRouteEntrys> & erRouteEntrys) { DARABONBA_PTR_SET_VALUE(erRouteEntrys_, erRouteEntrys) };
      inline Content& setErRouteEntrys(vector<Content::ErRouteEntrys> && erRouteEntrys) { DARABONBA_PTR_SET_RVALUE(erRouteEntrys_, erRouteEntrys) };


      // erRouteMaps Field Functions 
      bool hasErRouteMaps() const { return this->erRouteMaps_ != nullptr;};
      void deleteErRouteMaps() { this->erRouteMaps_ = nullptr;};
      inline const vector<Content::ErRouteMaps> & getErRouteMaps() const { DARABONBA_PTR_GET_CONST(erRouteMaps_, vector<Content::ErRouteMaps>) };
      inline vector<Content::ErRouteMaps> getErRouteMaps() { DARABONBA_PTR_GET(erRouteMaps_, vector<Content::ErRouteMaps>) };
      inline Content& setErRouteMaps(const vector<Content::ErRouteMaps> & erRouteMaps) { DARABONBA_PTR_SET_VALUE(erRouteMaps_, erRouteMaps) };
      inline Content& setErRouteMaps(vector<Content::ErRouteMaps> && erRouteMaps) { DARABONBA_PTR_SET_RVALUE(erRouteMaps_, erRouteMaps) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // masterZoneId Field Functions 
      bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
      void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
      inline string getMasterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
      inline Content& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Content& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Content& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Content::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Content::Tags>) };
      inline vector<Content::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Content::Tags>) };
      inline Content& setTags(const vector<Content::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Content& setTags(vector<Content::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Content& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // The time when the data address was created.
      shared_ptr<string> createTime_ {};
      // Description
      shared_ptr<string> description_ {};
      // Network instance information list
      shared_ptr<vector<Content::ErAttachments>> erAttachments_ {};
      // Lingjun HUB Instance ID
      shared_ptr<string> erId_ {};
      // Lingjun HUB Instance Name
      shared_ptr<string> erName_ {};
      // The list of route entry information.
      shared_ptr<vector<Content::ErRouteEntrys>> erRouteEntrys_ {};
      // routing policy information list
      shared_ptr<vector<Content::ErRouteMaps>> erRouteMaps_ {};
      // The time when the agent was last modified.
      shared_ptr<string> gmtModified_ {};
      // Primary Zone
      shared_ptr<string> masterZoneId_ {};
      // The message that is returned.
      shared_ptr<string> message_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // Resource group instance ID
      shared_ptr<string> resourceGroupId_ {};
      // The status of the intervention entry. Valid value:
      shared_ptr<string> status_ {};
      // List of Tags
      shared_ptr<vector<Content::Tags>> tags_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetErResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetErResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetErResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetErResponseBody::Content) };
    inline GetErResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetErResponseBody::Content) };
    inline GetErResponseBody& setContent(const GetErResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetErResponseBody& setContent(GetErResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetErResponseBody::Content> content_ {};
    // Information returned when the call fails
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
