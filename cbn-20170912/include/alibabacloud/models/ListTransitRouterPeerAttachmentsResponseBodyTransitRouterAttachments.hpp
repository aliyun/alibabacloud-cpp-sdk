// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERPEERATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERPEERATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachmentsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& obj) { 
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
    ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments(const ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments(ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& operator=(const ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& operator=(ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->bandwidth_ != nullptr && this->bandwidthType_ != nullptr && this->cenBandwidthPackageId_ != nullptr && this->cenId_ != nullptr && this->creationTime_ != nullptr
        && this->defaultLinkType_ != nullptr && this->geographicSpanId_ != nullptr && this->peerTransitRouterId_ != nullptr && this->peerTransitRouterOwnerId_ != nullptr && this->peerTransitRouterRegionId_ != nullptr
        && this->regionId_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->transitRouterAttachmentDescription_ != nullptr
        && this->transitRouterAttachmentId_ != nullptr && this->transitRouterAttachmentName_ != nullptr && this->transitRouterId_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline string bandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


    // cenBandwidthPackageId Field Functions 
    bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
    void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
    inline string cenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // defaultLinkType Field Functions 
    bool hasDefaultLinkType() const { return this->defaultLinkType_ != nullptr;};
    void deleteDefaultLinkType() { this->defaultLinkType_ = nullptr;};
    inline string defaultLinkType() const { DARABONBA_PTR_GET_DEFAULT(defaultLinkType_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setDefaultLinkType(string defaultLinkType) { DARABONBA_PTR_SET_VALUE(defaultLinkType_, defaultLinkType) };


    // geographicSpanId Field Functions 
    bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
    void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
    inline string geographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


    // peerTransitRouterId Field Functions 
    bool hasPeerTransitRouterId() const { return this->peerTransitRouterId_ != nullptr;};
    void deletePeerTransitRouterId() { this->peerTransitRouterId_ = nullptr;};
    inline string peerTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setPeerTransitRouterId(string peerTransitRouterId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterId_, peerTransitRouterId) };


    // peerTransitRouterOwnerId Field Functions 
    bool hasPeerTransitRouterOwnerId() const { return this->peerTransitRouterOwnerId_ != nullptr;};
    void deletePeerTransitRouterOwnerId() { this->peerTransitRouterOwnerId_ = nullptr;};
    inline int64_t peerTransitRouterOwnerId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterOwnerId_, 0L) };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setPeerTransitRouterOwnerId(int64_t peerTransitRouterOwnerId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterOwnerId_, peerTransitRouterOwnerId) };


    // peerTransitRouterRegionId Field Functions 
    bool hasPeerTransitRouterRegionId() const { return this->peerTransitRouterRegionId_ != nullptr;};
    void deletePeerTransitRouterRegionId() { this->peerTransitRouterRegionId_ = nullptr;};
    inline string peerTransitRouterRegionId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterRegionId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setPeerTransitRouterRegionId(string peerTransitRouterRegionId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterRegionId_, peerTransitRouterRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline vector<Models::ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachmentsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setTags(const vector<Models::ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setTags(vector<Models::ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachmentsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // Indicates whether the local Enterprise Edition transit router automatically advertises routes of the cross-region connection to the peer transit router. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The bandwidth value of the inter-region connection. Unit: Mbit/s.
    // 
    // *   This parameter specifies the maximum bandwidth value for the inter-region connection if you set **BandwidthType** to **BandwidthPackage**.
    // *   This parameter specifies the bandwidth throttling threshold for the inter-region connection if you set **BandwidthType** to **DataTransfer**.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The bandwidth allocation method. Valid values:
    // 
    // *   **BandwidthPackage**: allocates bandwidth from a bandwidth plan.
    // *   **DataTransfer**: bandwidth is billed based on the pay-by-data-transfer metering method.
    std::shared_ptr<string> bandwidthType_ = nullptr;
    // The ID of the bandwidth plan that is used to allocate bandwidth to the inter-region connection.
    std::shared_ptr<string> cenBandwidthPackageId_ = nullptr;
    // The CEN instance ID.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the inter-region connection was created.
    // 
    // The time follows the ISO8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The default line type.
    // 
    // *   **Gold** (default)
    // *   **Platinum**
    std::shared_ptr<string> defaultLinkType_ = nullptr;
    // The areas that are connected by the bandwidth plan.
    std::shared_ptr<string> geographicSpanId_ = nullptr;
    // The ID of the peer transit router.
    std::shared_ptr<string> peerTransitRouterId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the peer transit router belongs.
    std::shared_ptr<int64_t> peerTransitRouterOwnerId_ = nullptr;
    // The region ID of the peer transit router.
    std::shared_ptr<string> peerTransitRouterRegionId_ = nullptr;
    // The region ID of the Enterprise Edition transit router.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the resource to which the transit router is connected. Valid values:
    // 
    // *   **VPC**: virtual private cloud (VPC)
    // *   **CCN**: Cloud Connect Network (CCN) instance
    // *   **VBR**: virtual border router (VBR)
    // *   **TR**: transit router
    std::shared_ptr<string> resourceType_ = nullptr;
    // The status of the inter-region connection. Valid values:
    // 
    // *   **Attached**
    // *   **Attaching**
    // *   **Detaching**
    // *   **Detached**
    std::shared_ptr<string> status_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachmentsTags>> tags_ = nullptr;
    // The description of the inter-region connection.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The ID of the inter-region connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The name of the inter-region connection.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The ID of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
