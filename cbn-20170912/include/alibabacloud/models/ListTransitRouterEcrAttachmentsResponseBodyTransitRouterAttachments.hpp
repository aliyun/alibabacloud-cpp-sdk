// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERECRATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERECRATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachmentsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRegionId, transitRouterRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRegionId, transitRouterRegionId_);
    };
    ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments(const ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments(ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& operator=(const ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& operator=(ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->cenId_ != nullptr && this->creationTime_ != nullptr && this->ecrId_ != nullptr && this->ecrOwnerId_ != nullptr && this->orderType_ != nullptr
        && this->resourceType_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->transitRouterAttachmentDescription_ != nullptr && this->transitRouterAttachmentId_ != nullptr
        && this->transitRouterAttachmentName_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterRegionId_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // ecrOwnerId Field Functions 
    bool hasEcrOwnerId() const { return this->ecrOwnerId_ != nullptr;};
    void deleteEcrOwnerId() { this->ecrOwnerId_ = nullptr;};
    inline int64_t ecrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerId_, 0L) };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setEcrOwnerId(int64_t ecrOwnerId) { DARABONBA_PTR_SET_VALUE(ecrOwnerId_, ecrOwnerId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline vector<Models::ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachmentsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setTags(const vector<Models::ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setTags(vector<Models::ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachmentsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterRegionId Field Functions 
    bool hasTransitRouterRegionId() const { return this->transitRouterRegionId_ != nullptr;};
    void deleteTransitRouterRegionId() { this->transitRouterRegionId_ = nullptr;};
    inline string transitRouterRegionId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRegionId_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterRegionId(string transitRouterRegionId) { DARABONBA_PTR_SET_VALUE(transitRouterRegionId_, transitRouterRegionId) };


  protected:
    // Indicates whether the Enterprise Edition transit router can automatically advertise routes to ECRs.
    // 
    // The value is **true**, which indicates that the Enterprise Edition transit router can automatically advertise routes to ECRs.
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The time when the ECR connection was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the ECR with which the ECR connection is associated.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the ECR connection belongs.
    std::shared_ptr<int64_t> ecrOwnerId_ = nullptr;
    // The entity that pays the fees of the network instance. Valid values: Valid values:
    // 
    // *   **PayByCenOwner**: The Alibaba Cloud account to which the transit router belongs pays the connection and data forwarding fees of the ECR.
    // *   **PayByResourceOwner**: The Alibaba Cloud account to which the ECR belongs pays the connection and data forwarding fees of the ECR.
    std::shared_ptr<string> orderType_ = nullptr;
    // The type of resource to which the transit router is connected. Valid values:
    // 
    // The value is **ECR**, which indicates ECR connections.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The status of the ECR connection. Valid values:
    // 
    // *   **Attached**
    // *   **Attaching**
    // *   **Detaching**
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachmentsTags>> tags_ = nullptr;
    // The description of the ECR connection.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The ID of the ECR connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The name of the ECR connection.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The ID of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The region ID of the transit router.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> transitRouterRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
