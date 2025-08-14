// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings.hpp>
#include <alibabacloud/models/UpdateTransitRouterVpcAttachmentZonesRequestRemoveZoneMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterVpcAttachmentZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterVpcAttachmentZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddZoneMappings, addZoneMappings_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RemoveZoneMappings, removeZoneMappings_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterVpcAttachmentZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddZoneMappings, addZoneMappings_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RemoveZoneMappings, removeZoneMappings_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    UpdateTransitRouterVpcAttachmentZonesRequest() = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest(const UpdateTransitRouterVpcAttachmentZonesRequest &) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest(UpdateTransitRouterVpcAttachmentZonesRequest &&) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterVpcAttachmentZonesRequest() = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest& operator=(const UpdateTransitRouterVpcAttachmentZonesRequest &) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest& operator=(UpdateTransitRouterVpcAttachmentZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addZoneMappings_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->removeZoneMappings_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->transitRouterAttachmentId_ != nullptr; };
    // addZoneMappings Field Functions 
    bool hasAddZoneMappings() const { return this->addZoneMappings_ != nullptr;};
    void deleteAddZoneMappings() { this->addZoneMappings_ = nullptr;};
    inline const vector<UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings> & addZoneMappings() const { DARABONBA_PTR_GET_CONST(addZoneMappings_, vector<UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings>) };
    inline vector<UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings> addZoneMappings() { DARABONBA_PTR_GET(addZoneMappings_, vector<UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings>) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setAddZoneMappings(const vector<UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings> & addZoneMappings) { DARABONBA_PTR_SET_VALUE(addZoneMappings_, addZoneMappings) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setAddZoneMappings(vector<UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings> && addZoneMappings) { DARABONBA_PTR_SET_RVALUE(addZoneMappings_, addZoneMappings) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // removeZoneMappings Field Functions 
    bool hasRemoveZoneMappings() const { return this->removeZoneMappings_ != nullptr;};
    void deleteRemoveZoneMappings() { this->removeZoneMappings_ = nullptr;};
    inline const vector<UpdateTransitRouterVpcAttachmentZonesRequestRemoveZoneMappings> & removeZoneMappings() const { DARABONBA_PTR_GET_CONST(removeZoneMappings_, vector<UpdateTransitRouterVpcAttachmentZonesRequestRemoveZoneMappings>) };
    inline vector<UpdateTransitRouterVpcAttachmentZonesRequestRemoveZoneMappings> removeZoneMappings() { DARABONBA_PTR_GET(removeZoneMappings_, vector<UpdateTransitRouterVpcAttachmentZonesRequestRemoveZoneMappings>) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setRemoveZoneMappings(const vector<UpdateTransitRouterVpcAttachmentZonesRequestRemoveZoneMappings> & removeZoneMappings) { DARABONBA_PTR_SET_VALUE(removeZoneMappings_, removeZoneMappings) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setRemoveZoneMappings(vector<UpdateTransitRouterVpcAttachmentZonesRequestRemoveZoneMappings> && removeZoneMappings) { DARABONBA_PTR_SET_RVALUE(removeZoneMappings_, removeZoneMappings) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


  protected:
    // The zones and vSwitches that you want to add to the VPC connection.
    std::shared_ptr<vector<UpdateTransitRouterVpcAttachmentZonesRequestAddZoneMappings>> addZoneMappings_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, ClientToken is set to the value of RequestId. The value of RequestId for each API request may be different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The zones and vSwitches that you want to remove from the VPC connection.
    std::shared_ptr<vector<UpdateTransitRouterVpcAttachmentZonesRequestRemoveZoneMappings>> removeZoneMappings_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the VPC connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
