// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPCATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERVPCATTACHMENTSRESPONSEBODYTRANSITROUTERATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsTags.hpp>
#include <map>
#include <alibabacloud/models/ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& obj) { 
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
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments(const ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments(ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments() = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& operator=(const ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments &) = default ;
    ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& operator=(ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->cenId_ != nullptr && this->chargeType_ != nullptr && this->creationTime_ != nullptr && this->managedService_ != nullptr && this->orderType_ != nullptr
        && this->resourceType_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->transitRouterAttachmentDescription_ != nullptr && this->transitRouterAttachmentId_ != nullptr
        && this->transitRouterAttachmentName_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterVPCAttachmentOptions_ != nullptr && this->vpcId_ != nullptr && this->vpcOwnerId_ != nullptr
        && this->vpcRegionId_ != nullptr && this->zoneMappings_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // managedService Field Functions 
    bool hasManagedService() const { return this->managedService_ != nullptr;};
    void deleteManagedService() { this->managedService_ = nullptr;};
    inline string managedService() const { DARABONBA_PTR_GET_DEFAULT(managedService_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setManagedService(string managedService) { DARABONBA_PTR_SET_VALUE(managedService_, managedService) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsTags>) };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setTags(const vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setTags(vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterVPCAttachmentOptions Field Functions 
    bool hasTransitRouterVPCAttachmentOptions() const { return this->transitRouterVPCAttachmentOptions_ != nullptr;};
    void deleteTransitRouterVPCAttachmentOptions() { this->transitRouterVPCAttachmentOptions_ = nullptr;};
    inline const map<string, string> & transitRouterVPCAttachmentOptions() const { DARABONBA_PTR_GET_CONST(transitRouterVPCAttachmentOptions_, map<string, string>) };
    inline map<string, string> transitRouterVPCAttachmentOptions() { DARABONBA_PTR_GET(transitRouterVPCAttachmentOptions_, map<string, string>) };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterVPCAttachmentOptions(const map<string, string> & transitRouterVPCAttachmentOptions) { DARABONBA_PTR_SET_VALUE(transitRouterVPCAttachmentOptions_, transitRouterVPCAttachmentOptions) };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setTransitRouterVPCAttachmentOptions(map<string, string> && transitRouterVPCAttachmentOptions) { DARABONBA_PTR_SET_RVALUE(transitRouterVPCAttachmentOptions_, transitRouterVPCAttachmentOptions) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline int64_t vpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string vpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings> & zoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings>) };
    inline vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings> zoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings>) };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setZoneMappings(const vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachments& setZoneMappings(vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // Indicates whether the Enterprise Edition transit router can automatically advertise routes to the VPC. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The billing method of the VPC connection.
    // 
    // Only **POSTPAY** may be returned, which indicates the default pay-as-you-go billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the VPC connection was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> managedService_ = nullptr;
    // The entity that pays the fees of the network instance. Valid values:
    // 
    // *   **PayByCenOwner**: the Alibaba Cloud account that owns the CEN instance.
    // *   **PayByResourceOwner**: the Alibaba Cloud account that owns the network instance.
    std::shared_ptr<string> orderType_ = nullptr;
    // The type of resource to which the transit router is connected.
    // 
    // Only **VPC** may be returned, which indicates VPCs.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The status of the VPC connection. Valid values:
    // 
    // *   **Attached**
    // *   **Attaching**
    // *   **Detaching**
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsTags>> tags_ = nullptr;
    // The description of the VPC connection.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The VPC connection ID.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The name of the VPC connection.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The description of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The features of the VPC connection.
    std::shared_ptr<map<string, string>> transitRouterVPCAttachmentOptions_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<int64_t> vpcOwnerId_ = nullptr;
    // The region ID of the VPC.
    std::shared_ptr<string> vpcRegionId_ = nullptr;
    // The primary and secondary zones, vSwitches, and ENIs of the VPC.
    std::shared_ptr<vector<Models::ListTransitRouterVpcAttachmentsResponseBodyTransitRouterAttachmentsZoneMappings>> zoneMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
