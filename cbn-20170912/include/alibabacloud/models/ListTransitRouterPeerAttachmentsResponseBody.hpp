// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERPEERATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERPEERATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterPeerAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterPeerAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterPeerAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    ListTransitRouterPeerAttachmentsResponseBody() = default ;
    ListTransitRouterPeerAttachmentsResponseBody(const ListTransitRouterPeerAttachmentsResponseBody &) = default ;
    ListTransitRouterPeerAttachmentsResponseBody(ListTransitRouterPeerAttachmentsResponseBody &&) = default ;
    ListTransitRouterPeerAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterPeerAttachmentsResponseBody() = default ;
    ListTransitRouterPeerAttachmentsResponseBody& operator=(const ListTransitRouterPeerAttachmentsResponseBody &) = default ;
    ListTransitRouterPeerAttachmentsResponseBody& operator=(ListTransitRouterPeerAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterAttachments& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
        DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DefaultLinkType, defaultLinkType_);
        DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
        DARABONBA_PTR_TO_JSON(PeerTransitRouterId, peerTransitRouterId_);
        DARABONBA_PTR_TO_JSON(PeerTransitRouterOwnerId, peerTransitRouterOwnerId_);
        DARABONBA_PTR_TO_JSON(PeerTransitRouterRegionId, peerTransitRouterRegionId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterAttachments& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
        DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DefaultLinkType, defaultLinkType_);
        DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
        DARABONBA_PTR_FROM_JSON(PeerTransitRouterId, peerTransitRouterId_);
        DARABONBA_PTR_FROM_JSON(PeerTransitRouterOwnerId, peerTransitRouterOwnerId_);
        DARABONBA_PTR_FROM_JSON(PeerTransitRouterRegionId, peerTransitRouterRegionId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
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
        && this->bandwidth_ == nullptr && this->bandwidthType_ == nullptr && this->cenBandwidthPackageId_ == nullptr && this->cenId_ == nullptr && this->creationTime_ == nullptr
        && this->defaultLinkType_ == nullptr && this->geographicSpanId_ == nullptr && this->peerTransitRouterId_ == nullptr && this->peerTransitRouterOwnerId_ == nullptr && this->peerTransitRouterRegionId_ == nullptr
        && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->transitRouterAttachmentDescription_ == nullptr
        && this->transitRouterAttachmentId_ == nullptr && this->transitRouterAttachmentName_ == nullptr && this->transitRouterId_ == nullptr; };
      // autoPublishRouteEnabled Field Functions 
      bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
      void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
      inline bool getAutoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
      inline TransitRouterAttachments& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline TransitRouterAttachments& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // bandwidthType Field Functions 
      bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
      void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
      inline string getBandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
      inline TransitRouterAttachments& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


      // cenBandwidthPackageId Field Functions 
      bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
      void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
      inline string getCenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
      inline TransitRouterAttachments& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline TransitRouterAttachments& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TransitRouterAttachments& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // defaultLinkType Field Functions 
      bool hasDefaultLinkType() const { return this->defaultLinkType_ != nullptr;};
      void deleteDefaultLinkType() { this->defaultLinkType_ = nullptr;};
      inline string getDefaultLinkType() const { DARABONBA_PTR_GET_DEFAULT(defaultLinkType_, "") };
      inline TransitRouterAttachments& setDefaultLinkType(string defaultLinkType) { DARABONBA_PTR_SET_VALUE(defaultLinkType_, defaultLinkType) };


      // geographicSpanId Field Functions 
      bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
      void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
      inline string getGeographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
      inline TransitRouterAttachments& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


      // peerTransitRouterId Field Functions 
      bool hasPeerTransitRouterId() const { return this->peerTransitRouterId_ != nullptr;};
      void deletePeerTransitRouterId() { this->peerTransitRouterId_ = nullptr;};
      inline string getPeerTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterId_, "") };
      inline TransitRouterAttachments& setPeerTransitRouterId(string peerTransitRouterId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterId_, peerTransitRouterId) };


      // peerTransitRouterOwnerId Field Functions 
      bool hasPeerTransitRouterOwnerId() const { return this->peerTransitRouterOwnerId_ != nullptr;};
      void deletePeerTransitRouterOwnerId() { this->peerTransitRouterOwnerId_ = nullptr;};
      inline int64_t getPeerTransitRouterOwnerId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterOwnerId_, 0L) };
      inline TransitRouterAttachments& setPeerTransitRouterOwnerId(int64_t peerTransitRouterOwnerId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterOwnerId_, peerTransitRouterOwnerId) };


      // peerTransitRouterRegionId Field Functions 
      bool hasPeerTransitRouterRegionId() const { return this->peerTransitRouterRegionId_ != nullptr;};
      void deletePeerTransitRouterRegionId() { this->peerTransitRouterRegionId_ = nullptr;};
      inline string getPeerTransitRouterRegionId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterRegionId_, "") };
      inline TransitRouterAttachments& setPeerTransitRouterRegionId(string peerTransitRouterRegionId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterRegionId_, peerTransitRouterRegionId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TransitRouterAttachments& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


    protected:
      // Indicates whether the local Enterprise Edition transit router automatically advertises routes of the cross-region connection to the peer transit router. Valid values:
      // 
      // *   **false** (default)
      // *   **true**
      shared_ptr<bool> autoPublishRouteEnabled_ {};
      // The bandwidth value of the inter-region connection. Unit: Mbit/s.
      // 
      // *   This parameter specifies the maximum bandwidth value for the inter-region connection if you set **BandwidthType** to **BandwidthPackage**.
      // *   This parameter specifies the bandwidth throttling threshold for the inter-region connection if you set **BandwidthType** to **DataTransfer**.
      shared_ptr<int32_t> bandwidth_ {};
      // The bandwidth allocation method. Valid values:
      // 
      // *   **BandwidthPackage**: allocates bandwidth from a bandwidth plan.
      // *   **DataTransfer**: bandwidth is billed based on the pay-by-data-transfer metering method.
      shared_ptr<string> bandwidthType_ {};
      // The ID of the bandwidth plan that is used to allocate bandwidth to the inter-region connection.
      shared_ptr<string> cenBandwidthPackageId_ {};
      // The CEN instance ID.
      shared_ptr<string> cenId_ {};
      // The time when the inter-region connection was created.
      // 
      // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The default line type.
      // 
      // *   **Gold** (default)
      // *   **Platinum**
      shared_ptr<string> defaultLinkType_ {};
      // The areas that are connected by the bandwidth plan.
      shared_ptr<string> geographicSpanId_ {};
      // The ID of the peer transit router.
      shared_ptr<string> peerTransitRouterId_ {};
      // The ID of the Alibaba Cloud account to which the peer transit router belongs.
      shared_ptr<int64_t> peerTransitRouterOwnerId_ {};
      // The region ID of the peer transit router.
      shared_ptr<string> peerTransitRouterRegionId_ {};
      // The region ID of the Enterprise Edition transit router.
      shared_ptr<string> regionId_ {};
      // The type of the resource to which the transit router is connected. Valid values:
      // 
      // *   **VPC**: virtual private cloud (VPC)
      // *   **CCN**: Cloud Connect Network (CCN) instance
      // *   **VBR**: virtual border router (VBR)
      // *   **TR**: transit router
      shared_ptr<string> resourceType_ {};
      // The status of the inter-region connection. Valid values:
      // 
      // *   **Attached**
      // *   **Attaching**
      // *   **Detaching**
      // *   **Detached**
      shared_ptr<string> status_ {};
      // A list of tags.
      shared_ptr<vector<TransitRouterAttachments::Tags>> tags_ {};
      // The description of the inter-region connection.
      shared_ptr<string> transitRouterAttachmentDescription_ {};
      // The ID of the inter-region connection.
      shared_ptr<string> transitRouterAttachmentId_ {};
      // The name of the inter-region connection.
      shared_ptr<string> transitRouterAttachmentName_ {};
      // The ID of the Enterprise Edition transit router.
      shared_ptr<string> transitRouterId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterAttachments_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterPeerAttachmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterPeerAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterAttachments Field Functions 
    bool hasTransitRouterAttachments() const { return this->transitRouterAttachments_ != nullptr;};
    void deleteTransitRouterAttachments() { this->transitRouterAttachments_ = nullptr;};
    inline const vector<ListTransitRouterPeerAttachmentsResponseBody::TransitRouterAttachments> & getTransitRouterAttachments() const { DARABONBA_PTR_GET_CONST(transitRouterAttachments_, vector<ListTransitRouterPeerAttachmentsResponseBody::TransitRouterAttachments>) };
    inline vector<ListTransitRouterPeerAttachmentsResponseBody::TransitRouterAttachments> getTransitRouterAttachments() { DARABONBA_PTR_GET(transitRouterAttachments_, vector<ListTransitRouterPeerAttachmentsResponseBody::TransitRouterAttachments>) };
    inline ListTransitRouterPeerAttachmentsResponseBody& setTransitRouterAttachments(const vector<ListTransitRouterPeerAttachmentsResponseBody::TransitRouterAttachments> & transitRouterAttachments) { DARABONBA_PTR_SET_VALUE(transitRouterAttachments_, transitRouterAttachments) };
    inline ListTransitRouterPeerAttachmentsResponseBody& setTransitRouterAttachments(vector<ListTransitRouterPeerAttachmentsResponseBody::TransitRouterAttachments> && transitRouterAttachments) { DARABONBA_PTR_SET_RVALUE(transitRouterAttachments_, transitRouterAttachments) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If the **NextToken** parameter is empty, no next page exists.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // A list of inter-region connections.
    shared_ptr<vector<ListTransitRouterPeerAttachmentsResponseBody::TransitRouterAttachments>> transitRouterAttachments_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
