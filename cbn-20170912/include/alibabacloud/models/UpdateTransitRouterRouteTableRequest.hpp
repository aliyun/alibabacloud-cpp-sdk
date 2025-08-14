// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERROUTETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERROUTETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTransitRouterRouteTableRequestRouteTableOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTransitRouterRouteTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterRouteTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterRouteTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
    };
    UpdateTransitRouterRouteTableRequest() = default ;
    UpdateTransitRouterRouteTableRequest(const UpdateTransitRouterRouteTableRequest &) = default ;
    UpdateTransitRouterRouteTableRequest(UpdateTransitRouterRouteTableRequest &&) = default ;
    UpdateTransitRouterRouteTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterRouteTableRequest() = default ;
    UpdateTransitRouterRouteTableRequest& operator=(const UpdateTransitRouterRouteTableRequest &) = default ;
    UpdateTransitRouterRouteTableRequest& operator=(UpdateTransitRouterRouteTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->routeTableOptions_ != nullptr && this->transitRouterRouteTableDescription_ != nullptr && this->transitRouterRouteTableId_ != nullptr && this->transitRouterRouteTableName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterRouteTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterRouteTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTransitRouterRouteTableRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTransitRouterRouteTableRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTransitRouterRouteTableRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTransitRouterRouteTableRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTableOptions Field Functions 
    bool hasRouteTableOptions() const { return this->routeTableOptions_ != nullptr;};
    void deleteRouteTableOptions() { this->routeTableOptions_ = nullptr;};
    inline const UpdateTransitRouterRouteTableRequestRouteTableOptions & routeTableOptions() const { DARABONBA_PTR_GET_CONST(routeTableOptions_, UpdateTransitRouterRouteTableRequestRouteTableOptions) };
    inline UpdateTransitRouterRouteTableRequestRouteTableOptions routeTableOptions() { DARABONBA_PTR_GET(routeTableOptions_, UpdateTransitRouterRouteTableRequestRouteTableOptions) };
    inline UpdateTransitRouterRouteTableRequest& setRouteTableOptions(const UpdateTransitRouterRouteTableRequestRouteTableOptions & routeTableOptions) { DARABONBA_PTR_SET_VALUE(routeTableOptions_, routeTableOptions) };
    inline UpdateTransitRouterRouteTableRequest& setRouteTableOptions(UpdateTransitRouterRouteTableRequestRouteTableOptions && routeTableOptions) { DARABONBA_PTR_SET_RVALUE(routeTableOptions_, routeTableOptions) };


    // transitRouterRouteTableDescription Field Functions 
    bool hasTransitRouterRouteTableDescription() const { return this->transitRouterRouteTableDescription_ != nullptr;};
    void deleteTransitRouterRouteTableDescription() { this->transitRouterRouteTableDescription_ = nullptr;};
    inline string transitRouterRouteTableDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableDescription_, "") };
    inline UpdateTransitRouterRouteTableRequest& setTransitRouterRouteTableDescription(string transitRouterRouteTableDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableDescription_, transitRouterRouteTableDescription) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline UpdateTransitRouterRouteTableRequest& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


    // transitRouterRouteTableName Field Functions 
    bool hasTransitRouterRouteTableName() const { return this->transitRouterRouteTableName_ != nullptr;};
    void deleteTransitRouterRouteTableName() { this->transitRouterRouteTableName_ = nullptr;};
    inline string transitRouterRouteTableName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableName_, "") };
    inline UpdateTransitRouterRouteTableRequest& setTransitRouterRouteTableName(string transitRouterRouteTableName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableName_, transitRouterRouteTableName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Default values:
    // 
    // *   **false** (default): performs a dry run and sends the request.
    // *   **true**: performs a dry run. The system checks the required parameters and the request syntax. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The features of the route table.
    std::shared_ptr<UpdateTransitRouterRouteTableRequestRouteTableOptions> routeTableOptions_ = nullptr;
    // The description of the route table.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterRouteTableDescription_ = nullptr;
    // The ID of the route table of the Enterprise Edition transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
    // The name of the route table.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterRouteTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
