// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterVpcAttachmentAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterVpcAttachmentAttributeRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(TransitRouterVPCAttachmentOptions, transitRouterVPCAttachmentOptions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterVpcAttachmentAttributeRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(TransitRouterVPCAttachmentOptions, transitRouterVPCAttachmentOptions_);
    };
    UpdateTransitRouterVpcAttachmentAttributeRequest() = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest(const UpdateTransitRouterVpcAttachmentAttributeRequest &) = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest(UpdateTransitRouterVpcAttachmentAttributeRequest &&) = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterVpcAttachmentAttributeRequest() = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest& operator=(const UpdateTransitRouterVpcAttachmentAttributeRequest &) = default ;
    UpdateTransitRouterVpcAttachmentAttributeRequest& operator=(UpdateTransitRouterVpcAttachmentAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPublishRouteEnabled_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->transitRouterAttachmentDescription_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterAttachmentName_ != nullptr && this->transitRouterVPCAttachmentOptions_ != nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool autoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string transitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string transitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterVPCAttachmentOptions Field Functions 
    bool hasTransitRouterVPCAttachmentOptions() const { return this->transitRouterVPCAttachmentOptions_ != nullptr;};
    void deleteTransitRouterVPCAttachmentOptions() { this->transitRouterVPCAttachmentOptions_ = nullptr;};
    inline const map<string, string> & transitRouterVPCAttachmentOptions() const { DARABONBA_PTR_GET_CONST(transitRouterVPCAttachmentOptions_, map<string, string>) };
    inline map<string, string> transitRouterVPCAttachmentOptions() { DARABONBA_PTR_GET(transitRouterVPCAttachmentOptions_, map<string, string>) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterVPCAttachmentOptions(const map<string, string> & transitRouterVPCAttachmentOptions) { DARABONBA_PTR_SET_VALUE(transitRouterVPCAttachmentOptions_, transitRouterVPCAttachmentOptions) };
    inline UpdateTransitRouterVpcAttachmentAttributeRequest& setTransitRouterVPCAttachmentOptions(map<string, string> && transitRouterVPCAttachmentOptions) { DARABONBA_PTR_SET_RVALUE(transitRouterVPCAttachmentOptions_, transitRouterVPCAttachmentOptions) };


  protected:
    // Specifies whether to allow the Enterprise Edition transit router to advertise routes to the VPC. Valid values:
    // 
    // *   **false:** (default)
    // *   **true**
    std::shared_ptr<bool> autoPublishRouteEnabled_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among all requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request may be different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Default values:
    // 
    // *   **false** (default): performs a dry run and sends the request.
    // *   **true**: performs a dry run. The system checks the required parameters and request syntax. If the request fails the dry run, an error message is returned. If the request passes the dry run, the system returns the ID of the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The description of the VPC connection.
    // 
    // The description must be 2 to 256 characters in length. The description must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> transitRouterAttachmentDescription_ = nullptr;
    // The ID of the VPC connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The name of the VPC connection.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter.
    std::shared_ptr<string> transitRouterAttachmentName_ = nullptr;
    // The features of the VPC connection.
    std::shared_ptr<map<string, string>> transitRouterVPCAttachmentOptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
