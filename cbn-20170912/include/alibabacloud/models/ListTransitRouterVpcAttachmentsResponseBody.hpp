// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPCATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPCATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterVpcAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterVpcAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterVpcAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    ListTransitRouterVpcAttachmentsResponseBody() = default ;
    ListTransitRouterVpcAttachmentsResponseBody(const ListTransitRouterVpcAttachmentsResponseBody &) = default ;
    ListTransitRouterVpcAttachmentsResponseBody(ListTransitRouterVpcAttachmentsResponseBody &&) = default ;
    ListTransitRouterVpcAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterVpcAttachmentsResponseBody() = default ;
    ListTransitRouterVpcAttachmentsResponseBody& operator=(const ListTransitRouterVpcAttachmentsResponseBody &) = default ;
    ListTransitRouterVpcAttachmentsResponseBody& operator=(ListTransitRouterVpcAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterAttachments& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(ManagedService, managedService_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(TransitRouterVPCAttachmentOptions, transitRouterVPCAttachmentOptions_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
        DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
        DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterAttachments& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(ManagedService, managedService_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterVPCAttachmentOptions, transitRouterVPCAttachmentOptions_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
        DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
        DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
      };
      TransitRouterAttachments() = default ;
      TransitRouterAttachments(const TransitRouterAttachments &) = default ;
      TransitRouterAttachments(TransitRouterAttachments &&) = default ;
      TransitRouterAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterAttachments() = default ;
      TransitRouterAttachments& operator=(const TransitRouterAttachments &) = default ;
      TransitRouterAttachments& operator=(TransitRouterAttachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ZoneMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        ZoneMappings() = default ;
        ZoneMappings(const ZoneMappings &) = default ;
        ZoneMappings(ZoneMappings &&) = default ;
        ZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZoneMappings() = default ;
        ZoneMappings& operator=(const ZoneMappings &) = default ;
        ZoneMappings& operator=(ZoneMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->networkInterfaceId_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline ZoneMappings& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline ZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The ID of the ENI created by the Enterprise Edition transit router in the vSwitch.
        shared_ptr<string> networkInterfaceId_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->autoPublishRouteEnabled_ == nullptr
        && this->cenId_ == nullptr && this->chargeType_ == nullptr && this->creationTime_ == nullptr && this->managedService_ == nullptr && this->orderType_ == nullptr
        && this->resourceType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->transitRouterAttachmentDescription_ == nullptr && this->transitRouterAttachmentId_ == nullptr
        && this->transitRouterAttachmentName_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterVPCAttachmentOptions_ == nullptr && this->vpcId_ == nullptr && this->vpcOwnerId_ == nullptr
        && this->vpcRegionId_ == nullptr && this->zoneMappings_ == nullptr; };
      // autoPublishRouteEnabled Field Functions 
      bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
      void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
      inline bool getAutoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
      inline TransitRouterAttachments& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline TransitRouterAttachments& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline TransitRouterAttachments& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TransitRouterAttachments& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // managedService Field Functions 
      bool hasManagedService() const { return this->managedService_ != nullptr;};
      void deleteManagedService() { this->managedService_ = nullptr;};
      inline string getManagedService() const { DARABONBA_PTR_GET_DEFAULT(managedService_, "") };
      inline TransitRouterAttachments& setManagedService(string managedService) { DARABONBA_PTR_SET_VALUE(managedService_, managedService) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline TransitRouterAttachments& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline TransitRouterAttachments& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TransitRouterAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TransitRouterAttachments::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TransitRouterAttachments::Tags>) };
      inline vector<TransitRouterAttachments::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TransitRouterAttachments::Tags>) };
      inline TransitRouterAttachments& setTags(const vector<TransitRouterAttachments::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TransitRouterAttachments& setTags(vector<TransitRouterAttachments::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transitRouterAttachmentDescription Field Functions 
      bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
      void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
      inline string getTransitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
      inline TransitRouterAttachments& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline TransitRouterAttachments& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


      // transitRouterAttachmentName Field Functions 
      bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
      void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
      inline string getTransitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
      inline TransitRouterAttachments& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline TransitRouterAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterVPCAttachmentOptions Field Functions 
      bool hasTransitRouterVPCAttachmentOptions() const { return this->transitRouterVPCAttachmentOptions_ != nullptr;};
      void deleteTransitRouterVPCAttachmentOptions() { this->transitRouterVPCAttachmentOptions_ = nullptr;};
      inline const map<string, string> & getTransitRouterVPCAttachmentOptions() const { DARABONBA_PTR_GET_CONST(transitRouterVPCAttachmentOptions_, map<string, string>) };
      inline map<string, string> getTransitRouterVPCAttachmentOptions() { DARABONBA_PTR_GET(transitRouterVPCAttachmentOptions_, map<string, string>) };
      inline TransitRouterAttachments& setTransitRouterVPCAttachmentOptions(const map<string, string> & transitRouterVPCAttachmentOptions) { DARABONBA_PTR_SET_VALUE(transitRouterVPCAttachmentOptions_, transitRouterVPCAttachmentOptions) };
      inline TransitRouterAttachments& setTransitRouterVPCAttachmentOptions(map<string, string> && transitRouterVPCAttachmentOptions) { DARABONBA_PTR_SET_RVALUE(transitRouterVPCAttachmentOptions_, transitRouterVPCAttachmentOptions) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline TransitRouterAttachments& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcOwnerId Field Functions 
      bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
      void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
      inline int64_t getVpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
      inline TransitRouterAttachments& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


      // vpcRegionId Field Functions 
      bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
      void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
      inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
      inline TransitRouterAttachments& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


      // zoneMappings Field Functions 
      bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
      void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
      inline const vector<TransitRouterAttachments::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<TransitRouterAttachments::ZoneMappings>) };
      inline vector<TransitRouterAttachments::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<TransitRouterAttachments::ZoneMappings>) };
      inline TransitRouterAttachments& setZoneMappings(const vector<TransitRouterAttachments::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
      inline TransitRouterAttachments& setZoneMappings(vector<TransitRouterAttachments::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


    protected:
      // Indicates whether the Enterprise Edition transit router can automatically advertise routes to the VPC. Valid values:
      // 
      // *   **false**
      // *   **true**
      shared_ptr<bool> autoPublishRouteEnabled_ {};
      // The ID of the CEN instance.
      shared_ptr<string> cenId_ {};
      // The billing method of the VPC connection.
      // 
      // Only **POSTPAY** may be returned, which indicates the default pay-as-you-go billing method.
      shared_ptr<string> chargeType_ {};
      // The time when the VPC connection was created.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> managedService_ {};
      // The entity that pays the fees of the network instance. Valid values:
      // 
      // *   **PayByCenOwner**: the Alibaba Cloud account that owns the CEN instance.
      // *   **PayByResourceOwner**: the Alibaba Cloud account that owns the network instance.
      shared_ptr<string> orderType_ {};
      // The type of resource to which the transit router is connected.
      // 
      // Only **VPC** may be returned, which indicates VPCs.
      shared_ptr<string> resourceType_ {};
      // The status of the VPC connection. Valid values:
      // 
      // *   **Attached**
      // *   **Attaching**
      // *   **Detaching**
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<TransitRouterAttachments::Tags>> tags_ {};
      // The description of the VPC connection.
      shared_ptr<string> transitRouterAttachmentDescription_ {};
      // The VPC connection ID.
      shared_ptr<string> transitRouterAttachmentId_ {};
      // The name of the VPC connection.
      shared_ptr<string> transitRouterAttachmentName_ {};
      // The description of the Enterprise Edition transit router.
      shared_ptr<string> transitRouterId_ {};
      // The features of the VPC connection.
      shared_ptr<map<string, string>> transitRouterVPCAttachmentOptions_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The ID of the Alibaba Cloud account to which the VPC belongs.
      shared_ptr<int64_t> vpcOwnerId_ {};
      // The region ID of the VPC.
      shared_ptr<string> vpcRegionId_ {};
      // The primary and secondary zones, vSwitches, and ENIs of the VPC.
      shared_ptr<vector<TransitRouterAttachments::ZoneMappings>> zoneMappings_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterAttachments_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterVpcAttachmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterVpcAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterAttachments Field Functions 
    bool hasTransitRouterAttachments() const { return this->transitRouterAttachments_ != nullptr;};
    void deleteTransitRouterAttachments() { this->transitRouterAttachments_ = nullptr;};
    inline const vector<ListTransitRouterVpcAttachmentsResponseBody::TransitRouterAttachments> & getTransitRouterAttachments() const { DARABONBA_PTR_GET_CONST(transitRouterAttachments_, vector<ListTransitRouterVpcAttachmentsResponseBody::TransitRouterAttachments>) };
    inline vector<ListTransitRouterVpcAttachmentsResponseBody::TransitRouterAttachments> getTransitRouterAttachments() { DARABONBA_PTR_GET(transitRouterAttachments_, vector<ListTransitRouterVpcAttachmentsResponseBody::TransitRouterAttachments>) };
    inline ListTransitRouterVpcAttachmentsResponseBody& setTransitRouterAttachments(const vector<ListTransitRouterVpcAttachmentsResponseBody::TransitRouterAttachments> & transitRouterAttachments) { DARABONBA_PTR_SET_VALUE(transitRouterAttachments_, transitRouterAttachments) };
    inline ListTransitRouterVpcAttachmentsResponseBody& setTransitRouterAttachments(vector<ListTransitRouterVpcAttachmentsResponseBody::TransitRouterAttachments> && transitRouterAttachments) { DARABONBA_PTR_SET_RVALUE(transitRouterAttachments_, transitRouterAttachments) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If **NextToken** is returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the region.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the VPC connection.
    shared_ptr<vector<ListTransitRouterVpcAttachmentsResponseBody::TransitRouterAttachments>> transitRouterAttachments_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
