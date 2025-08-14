// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERVBRATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERVBRATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachmentsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VbrOwnerId, vbrOwnerId_);
      DARABONBA_PTR_TO_JSON(VbrRegionId, vbrRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VbrOwnerId, vbrOwnerId_);
      DARABONBA_PTR_FROM_JSON(VbrRegionId, vbrRegionId_);
    };
    ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments(const ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments(ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& operator=(const ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& operator=(ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->cenId_ != nullptr && this->creationTime_ != nullptr && this->orderType_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->transitRouterAttachmentDescription_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterAttachmentName_ != nullptr && this->transitRouterId_ != nullptr
        && this->vbrId_ != nullptr && this->vbrOwnerId_ != nullptr && this->vbrRegionId_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline vector<Models::ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachmentsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setTags(const vector<Models::ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setTags(vector<Models::ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachmentsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vbrOwnerId Field Functions 
    bool hasVbrOwnerId() const { return this->vbrOwnerId_ != nullptr;};
    void deleteVbrOwnerId() { this->vbrOwnerId_ = nullptr;};
    inline int64_t vbrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerId_, 0L) };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setVbrOwnerId(int64_t vbrOwnerId) { DARABONBA_PTR_SET_VALUE(vbrOwnerId_, vbrOwnerId) };


    // vbrRegionId Field Functions 
    bool hasVbrRegionId() const { return this->vbrRegionId_ != nullptr;};
    void deleteVbrRegionId() { this->vbrRegionId_ = nullptr;};
    inline string vbrRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionId_, "") };
    inline ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachments& setVbrRegionId(string vbrRegionId) { DARABONBA_PTR_SET_VALUE(vbrRegionId_, vbrRegionId) };


  protected:
    // Indicates whether the Enterprise Edition transit router is allowed to automatically advertise routes to the VBR. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the VBR connection was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The entity that pays the fees of the network instance. Valid values:
    // 
    // *   **PayByCenOwner**: the Alibaba Cloud account that owns the CEN instance.
    // *   **PayByResourceOwner**: the Alibaba Cloud account that owns the network instance.
    std::shared_ptr<string> orderType_ = nullptr;
    // The type of resource to which the transit router is connected. Valid values:
    // 
    // *   **VPC**
    // *   **CCN**
    // *   **VBR**
    // *   **TR**
    std::shared_ptr<string> resourceType_ = nullptr;
    // The status of the VBR connection. Valid values:
    // 
    // *   **Attached**
    // *   **Attaching**
    // *   **Detaching**
    // *   **Detached**
    std::shared_ptr<string> status_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::ListTransitRouterVbrAttachmentsResponseBodyTransitRouterAttachmentsTags>> tags_ = nullptr;
    // The description of the VBR connection.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The ID of the VBR connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The name of the VBR connection.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The description of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The VBR ID.
    std::shared_ptr<string> vbrId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VBR belongs.
    std::shared_ptr<int64_t> vbrOwnerId_ = nullptr;
    // The region ID of the VBR.
    std::shared_ptr<string> vbrRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
