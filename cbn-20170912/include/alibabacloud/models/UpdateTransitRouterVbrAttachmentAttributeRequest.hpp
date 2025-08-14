// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVBRATTACHMENTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVBRATTACHMENTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterVbrAttachmentAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterVbrAttachmentAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterVbrAttachmentAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
    };
    UpdateTransitRouterVbrAttachmentAttributeRequest() = default ;
    UpdateTransitRouterVbrAttachmentAttributeRequest(const UpdateTransitRouterVbrAttachmentAttributeRequest &) = default ;
    UpdateTransitRouterVbrAttachmentAttributeRequest(UpdateTransitRouterVbrAttachmentAttributeRequest &&) = default ;
    UpdateTransitRouterVbrAttachmentAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterVbrAttachmentAttributeRequest() = default ;
    UpdateTransitRouterVbrAttachmentAttributeRequest& operator=(const UpdateTransitRouterVbrAttachmentAttributeRequest &) = default ;
    UpdateTransitRouterVbrAttachmentAttributeRequest& operator=(UpdateTransitRouterVbrAttachmentAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->transitRouterAttachmentDescription_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterAttachmentName_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline UpdateTransitRouterVbrAttachmentAttributeRequest& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


  protected:
    // Specifies whether to allow the Enterprise Edition transit router to automatically advertise routes to the VBR. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Default values:
    // 
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The new description of the VBR connection.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The ID of the VBR connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The new name of the VBR connection.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
