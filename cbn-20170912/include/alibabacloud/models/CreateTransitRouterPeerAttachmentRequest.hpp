// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERPEERATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERPEERATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTransitRouterPeerAttachmentRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterPeerAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterPeerAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DefaultLinkType, defaultLinkType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerTransitRouterId, peerTransitRouterId_);
      DARABONBA_PTR_TO_JSON(PeerTransitRouterRegionId, peerTransitRouterRegionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterPeerAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DefaultLinkType, defaultLinkType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerTransitRouterId, peerTransitRouterId_);
      DARABONBA_PTR_FROM_JSON(PeerTransitRouterRegionId, peerTransitRouterRegionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    CreateTransitRouterPeerAttachmentRequest() = default ;
    CreateTransitRouterPeerAttachmentRequest(const CreateTransitRouterPeerAttachmentRequest &) = default ;
    CreateTransitRouterPeerAttachmentRequest(CreateTransitRouterPeerAttachmentRequest &&) = default ;
    CreateTransitRouterPeerAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterPeerAttachmentRequest() = default ;
    CreateTransitRouterPeerAttachmentRequest& operator=(const CreateTransitRouterPeerAttachmentRequest &) = default ;
    CreateTransitRouterPeerAttachmentRequest& operator=(CreateTransitRouterPeerAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->bandwidth_ != nullptr && this->bandwidthType_ != nullptr && this->cenBandwidthPackageId_ != nullptr && this->cenId_ != nullptr && this->clientToken_ != nullptr
        && this->defaultLinkType_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->peerTransitRouterId_ != nullptr
        && this->peerTransitRouterRegionId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr
        && this->transitRouterAttachmentDescription_ != nullptr && this->transitRouterAttachmentName_ != nullptr && this->transitRouterId_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline CreateTransitRouterPeerAttachmentRequest& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateTransitRouterPeerAttachmentRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline string bandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


    // cenBandwidthPackageId Field Functions 
    bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
    void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
    inline string cenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // defaultLinkType Field Functions 
    bool hasDefaultLinkType() const { return this->defaultLinkType_ != nullptr;};
    void deleteDefaultLinkType() { this->defaultLinkType_ = nullptr;};
    inline string defaultLinkType() const { DARABONBA_PTR_GET_DEFAULT(defaultLinkType_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setDefaultLinkType(string defaultLinkType) { DARABONBA_PTR_SET_VALUE(defaultLinkType_, defaultLinkType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterPeerAttachmentRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterPeerAttachmentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerTransitRouterId Field Functions 
    bool hasPeerTransitRouterId() const { return this->peerTransitRouterId_ != nullptr;};
    void deletePeerTransitRouterId() { this->peerTransitRouterId_ = nullptr;};
    inline string peerTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterId_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setPeerTransitRouterId(string peerTransitRouterId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterId_, peerTransitRouterId) };


    // peerTransitRouterRegionId Field Functions 
    bool hasPeerTransitRouterRegionId() const { return this->peerTransitRouterRegionId_ != nullptr;};
    void deletePeerTransitRouterRegionId() { this->peerTransitRouterRegionId_ = nullptr;};
    inline string peerTransitRouterRegionId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterRegionId_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setPeerTransitRouterRegionId(string peerTransitRouterRegionId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterRegionId_, peerTransitRouterRegionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterPeerAttachmentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterPeerAttachmentRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterPeerAttachmentRequestTag>) };
    inline vector<CreateTransitRouterPeerAttachmentRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterPeerAttachmentRequestTag>) };
    inline CreateTransitRouterPeerAttachmentRequest& setTag(const vector<CreateTransitRouterPeerAttachmentRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterPeerAttachmentRequest& setTag(vector<CreateTransitRouterPeerAttachmentRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTransitRouterPeerAttachmentRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // Specifies whether to enable the local Enterprise Edition transit router to automatically advertise the routes of the inter-region connection to the peer transit router. Valid values:
    // 
    // *   **false** (default): no
    // *   **true**: yes
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The bandwidth value of the inter-region connection. Unit: Mbit/s.
    // 
    // *   This parameter specifies the maximum bandwidth value for the inter-region connection if you set **BandwidthType** to **BandwidthPackage**.
    // *   This parameter specifies the bandwidth throttling threshold for the inter-region connection if you set **BandwidthType** to **DataTransfer**.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The method that is used to allocate bandwidth to the inter-region connection. Valid values:
    // 
    // *   **BandwidthPackage**: allocates bandwidth from a bandwidth plan.
    // *   **DataTransfer**: bandwidth is billed based on the pay-by-data-transfer metering method.
    std::shared_ptr<string> bandwidthType_ = nullptr;
    // The ID of the bandwidth plan that you want to associate with the inter-region connection.
    // 
    // >  If you set **BandwidthType** to **DataTransfer**, you can skip this parameter.
    std::shared_ptr<string> cenBandwidthPackageId_ = nullptr;
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The default line type.
    // 
    // Valid values: Platinum and Gold.
    // 
    // Platinum is supported only when BandwidthType is set to DataTransfer.
    std::shared_ptr<string> defaultLinkType_ = nullptr;
    // Specifies whether to perform a dry run. Default values:
    // 
    // *   **false** (default): performs a dry run and sends the request.
    // *   **true**: performs a dry run. The system checks the required parameters and request syntax. If the request fails the dry run, an error message is returned. If the request passes the dry run, the system returns the ID of the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the peer transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> peerTransitRouterId_ = nullptr;
    // The ID of the region where the peer transit router is deployed.
    std::shared_ptr<string> peerTransitRouterRegionId_ = nullptr;
    // The ID of the region where the local Enterprise Edition transit router is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<CreateTransitRouterPeerAttachmentRequestTag>> tag_ = nullptr;
    // The description of the inter-region connection.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The name of the inter-region connection.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The ID of the local Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
