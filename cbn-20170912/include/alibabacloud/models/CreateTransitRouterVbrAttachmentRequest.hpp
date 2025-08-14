// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERVBRATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERVBRATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTransitRouterVbrAttachmentRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterVbrAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterVbrAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VbrOwnerId, vbrOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterVbrAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VbrOwnerId, vbrOwnerId_);
    };
    CreateTransitRouterVbrAttachmentRequest() = default ;
    CreateTransitRouterVbrAttachmentRequest(const CreateTransitRouterVbrAttachmentRequest &) = default ;
    CreateTransitRouterVbrAttachmentRequest(CreateTransitRouterVbrAttachmentRequest &&) = default ;
    CreateTransitRouterVbrAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterVbrAttachmentRequest() = default ;
    CreateTransitRouterVbrAttachmentRequest& operator=(const CreateTransitRouterVbrAttachmentRequest &) = default ;
    CreateTransitRouterVbrAttachmentRequest& operator=(CreateTransitRouterVbrAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->cenId_ != nullptr && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr && this->transitRouterAttachmentDescription_ != nullptr
        && this->transitRouterAttachmentName_ != nullptr && this->transitRouterId_ != nullptr && this->vbrId_ != nullptr && this->vbrOwnerId_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline CreateTransitRouterVbrAttachmentRequest& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterVbrAttachmentRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterVbrAttachmentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterVbrAttachmentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterVbrAttachmentRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterVbrAttachmentRequestTag>) };
    inline vector<CreateTransitRouterVbrAttachmentRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterVbrAttachmentRequestTag>) };
    inline CreateTransitRouterVbrAttachmentRequest& setTag(const vector<CreateTransitRouterVbrAttachmentRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterVbrAttachmentRequest& setTag(vector<CreateTransitRouterVbrAttachmentRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline CreateTransitRouterVbrAttachmentRequest& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vbrOwnerId Field Functions 
    bool hasVbrOwnerId() const { return this->vbrOwnerId_ != nullptr;};
    void deleteVbrOwnerId() { this->vbrOwnerId_ = nullptr;};
    inline int64_t vbrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerId_, 0L) };
    inline CreateTransitRouterVbrAttachmentRequest& setVbrOwnerId(int64_t vbrOwnerId) { DARABONBA_PTR_SET_VALUE(vbrOwnerId_, vbrOwnerId) };


  protected:
    // Specifies whether to enable the Enterprise Edition transit router to automatically advertise routes to the VBR. Valid values:
    // 
    // *   **false** (default): no
    // *   **true**: yes
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Default values:
    // 
    // *   **false** (default): performs a dry run and sends the request.
    // *   **true**: performs a dry run. The system checks the required parameters and request syntax. If the request fails the dry run, an error message is returned. If the request passes the dry run, the system returns the ID of the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the VBR.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<CreateTransitRouterVbrAttachmentRequestTag>> tag_ = nullptr;
    // The description of the VBR connection.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The name of the VBR connection.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The ID of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The ID of the VBR.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VBR belongs. The default value is the ID of the current Alibaba Cloud account.
    // 
    // > If the network instance and CEN instance belong to different Alibaba Cloud accounts, this parameter is required.
    std::shared_ptr<int64_t> vbrOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
