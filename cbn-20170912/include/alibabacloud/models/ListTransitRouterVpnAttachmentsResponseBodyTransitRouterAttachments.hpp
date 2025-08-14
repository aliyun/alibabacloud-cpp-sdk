// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPNATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPNATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsTags.hpp>
#include <alibabacloud/models/ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(VpnId, vpnId_);
      DARABONBA_PTR_TO_JSON(VpnOwnerId, vpnOwnerId_);
      DARABONBA_PTR_TO_JSON(VpnRegionId, vpnRegionId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(VpnId, vpnId_);
      DARABONBA_PTR_FROM_JSON(VpnOwnerId, vpnOwnerId_);
      DARABONBA_PTR_FROM_JSON(VpnRegionId, vpnRegionId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments(const ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments(ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& operator=(const ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& operator=(ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->cenId_ != nullptr && this->chargeType_ != nullptr && this->creationTime_ != nullptr && this->orderType_ != nullptr && this->resourceType_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->transitRouterAttachmentDescription_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterAttachmentName_ != nullptr
        && this->transitRouterId_ != nullptr && this->vpnId_ != nullptr && this->vpnOwnerId_ != nullptr && this->vpnRegionId_ != nullptr && this->zones_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setTags(const vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setTags(vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // vpnId Field Functions 
    bool hasVpnId() const { return this->vpnId_ != nullptr;};
    void deleteVpnId() { this->vpnId_ = nullptr;};
    inline string vpnId() const { DARABONBA_PTR_GET_DEFAULT(vpnId_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setVpnId(string vpnId) { DARABONBA_PTR_SET_VALUE(vpnId_, vpnId) };


    // vpnOwnerId Field Functions 
    bool hasVpnOwnerId() const { return this->vpnOwnerId_ != nullptr;};
    void deleteVpnOwnerId() { this->vpnOwnerId_ = nullptr;};
    inline int64_t vpnOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpnOwnerId_, 0L) };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setVpnOwnerId(int64_t vpnOwnerId) { DARABONBA_PTR_SET_VALUE(vpnOwnerId_, vpnOwnerId) };


    // vpnRegionId Field Functions 
    bool hasVpnRegionId() const { return this->vpnRegionId_ != nullptr;};
    void deleteVpnRegionId() { this->vpnRegionId_ = nullptr;};
    inline string vpnRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpnRegionId_, "") };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setVpnRegionId(string vpnRegionId) { DARABONBA_PTR_SET_VALUE(vpnRegionId_, vpnRegionId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones>) };
    inline vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones> zones() { DARABONBA_PTR_GET(zones_, vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones>) };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setZones(const vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachments& setZones(vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // Indicates the transit router can automatically advertise routes to the IPsec connection. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The billing method of the VPN attachment.
    // 
    // Only POSTPAY may be returned, which is the default pay-as-you-go billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the VPN connection was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The entity that pays the fees of the network instance. Valid values:
    // 
    // *   **PayByCenOwner**: the Alibaba Cloud account that owns the CEN instance.
    // *   **PayByResourceOwner**: the Alibaba Cloud account that owns the network instance.
    std::shared_ptr<string> orderType_ = nullptr;
    // The type of resource attached to the transit router.
    // 
    // Only **VPN** may be returned, which indicates that an IPsec-VPN connection is attached to the transit router.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The status of the VPN connection. Valid values:
    // 
    // *   **Attached**
    // *   **Attaching**
    // *   **Detaching**
    std::shared_ptr<string> status_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsTags>> tags_ = nullptr;
    // The description of the IPsec-VPN connection.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The ID of the VPN attachment.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The name of the VPN attachment.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the IPsec-VPN connection belongs.
    std::shared_ptr<int64_t> vpnOwnerId_ = nullptr;
    // The ID of the region to which the IPsec-VPN connection belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    std::shared_ptr<string> vpnRegionId_ = nullptr;
    // The zones in which the VPN attachment is deployed.
    std::shared_ptr<vector<Models::ListTransitRouterVpnAttachmentsResponseBodyTransitRouterAttachmentsZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
