// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryDescription, transitRouterRouteEntryDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryId, transitRouterRouteEntryId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryName, transitRouterRouteEntryName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryDescription, transitRouterRouteEntryDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryId, transitRouterRouteEntryId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryName, transitRouterRouteEntryName_);
    };
    UpdateTransitRouterRouteEntryRequest() = default ;
    UpdateTransitRouterRouteEntryRequest(const UpdateTransitRouterRouteEntryRequest &) = default ;
    UpdateTransitRouterRouteEntryRequest(UpdateTransitRouterRouteEntryRequest &&) = default ;
    UpdateTransitRouterRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterRouteEntryRequest() = default ;
    UpdateTransitRouterRouteEntryRequest& operator=(const UpdateTransitRouterRouteEntryRequest &) = default ;
    UpdateTransitRouterRouteEntryRequest& operator=(UpdateTransitRouterRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->transitRouterRouteEntryDescription_ != nullptr && this->transitRouterRouteEntryId_ != nullptr && this->transitRouterRouteEntryName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterRouteEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterRouteEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTransitRouterRouteEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTransitRouterRouteEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTransitRouterRouteEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTransitRouterRouteEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterRouteEntryDescription Field Functions 
    bool hasTransitRouterRouteEntryDescription() const { return this->transitRouterRouteEntryDescription_ != nullptr;};
    void deleteTransitRouterRouteEntryDescription() { this->transitRouterRouteEntryDescription_ = nullptr;};
    inline string transitRouterRouteEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDescription_, "") };
    inline UpdateTransitRouterRouteEntryRequest& setTransitRouterRouteEntryDescription(string transitRouterRouteEntryDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDescription_, transitRouterRouteEntryDescription) };


    // transitRouterRouteEntryId Field Functions 
    bool hasTransitRouterRouteEntryId() const { return this->transitRouterRouteEntryId_ != nullptr;};
    void deleteTransitRouterRouteEntryId() { this->transitRouterRouteEntryId_ = nullptr;};
    inline string transitRouterRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryId_, "") };
    inline UpdateTransitRouterRouteEntryRequest& setTransitRouterRouteEntryId(string transitRouterRouteEntryId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryId_, transitRouterRouteEntryId) };


    // transitRouterRouteEntryName Field Functions 
    bool hasTransitRouterRouteEntryName() const { return this->transitRouterRouteEntryName_ != nullptr;};
    void deleteTransitRouterRouteEntryName() { this->transitRouterRouteEntryName_ = nullptr;};
    inline string transitRouterRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryName_, "") };
    inline UpdateTransitRouterRouteEntryRequest& setTransitRouterRouteEntryName(string transitRouterRouteEntryName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryName_, transitRouterRouteEntryName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** is different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Default values:
    // 
    // *   **false** (default): performs a dry run and sends the request.
    // *   **true**: performs a dry run. The system checks the required parameters and request syntax. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The new description of the route.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterRouteEntryDescription_ = nullptr;
    // The ID of the route.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterRouteEntryId_ = nullptr;
    // The new name of the route.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterRouteEntryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
