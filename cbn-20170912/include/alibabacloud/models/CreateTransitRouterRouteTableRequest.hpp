// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTransitRouterRouteTableRequestRouteTableOptions.hpp>
#include <vector>
#include <alibabacloud/models/CreateTransitRouterRouteTableRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterRouteTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterRouteTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterRouteTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteTableOptions, routeTableOptions_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
    };
    CreateTransitRouterRouteTableRequest() = default ;
    CreateTransitRouterRouteTableRequest(const CreateTransitRouterRouteTableRequest &) = default ;
    CreateTransitRouterRouteTableRequest(CreateTransitRouterRouteTableRequest &&) = default ;
    CreateTransitRouterRouteTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterRouteTableRequest() = default ;
    CreateTransitRouterRouteTableRequest& operator=(const CreateTransitRouterRouteTableRequest &) = default ;
    CreateTransitRouterRouteTableRequest& operator=(CreateTransitRouterRouteTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->routeTableOptions_ != nullptr && this->tag_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterRouteTableDescription_ != nullptr && this->transitRouterRouteTableName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterRouteTableRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterRouteTableRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterRouteTableRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterRouteTableRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterRouteTableRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterRouteTableRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTableOptions Field Functions 
    bool hasRouteTableOptions() const { return this->routeTableOptions_ != nullptr;};
    void deleteRouteTableOptions() { this->routeTableOptions_ = nullptr;};
    inline const CreateTransitRouterRouteTableRequestRouteTableOptions & routeTableOptions() const { DARABONBA_PTR_GET_CONST(routeTableOptions_, CreateTransitRouterRouteTableRequestRouteTableOptions) };
    inline CreateTransitRouterRouteTableRequestRouteTableOptions routeTableOptions() { DARABONBA_PTR_GET(routeTableOptions_, CreateTransitRouterRouteTableRequestRouteTableOptions) };
    inline CreateTransitRouterRouteTableRequest& setRouteTableOptions(const CreateTransitRouterRouteTableRequestRouteTableOptions & routeTableOptions) { DARABONBA_PTR_SET_VALUE(routeTableOptions_, routeTableOptions) };
    inline CreateTransitRouterRouteTableRequest& setRouteTableOptions(CreateTransitRouterRouteTableRequestRouteTableOptions && routeTableOptions) { DARABONBA_PTR_SET_RVALUE(routeTableOptions_, routeTableOptions) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterRouteTableRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterRouteTableRequestTag>) };
    inline vector<CreateTransitRouterRouteTableRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterRouteTableRequestTag>) };
    inline CreateTransitRouterRouteTableRequest& setTag(const vector<CreateTransitRouterRouteTableRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterRouteTableRequest& setTag(vector<CreateTransitRouterRouteTableRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTransitRouterRouteTableRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterRouteTableDescription Field Functions 
    bool hasTransitRouterRouteTableDescription() const { return this->transitRouterRouteTableDescription_ != nullptr;};
    void deleteTransitRouterRouteTableDescription() { this->transitRouterRouteTableDescription_ = nullptr;};
    inline string transitRouterRouteTableDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableDescription_, "") };
    inline CreateTransitRouterRouteTableRequest& setTransitRouterRouteTableDescription(string transitRouterRouteTableDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableDescription_, transitRouterRouteTableDescription) };


    // transitRouterRouteTableName Field Functions 
    bool hasTransitRouterRouteTableName() const { return this->transitRouterRouteTableName_ != nullptr;};
    void deleteTransitRouterRouteTableName() { this->transitRouterRouteTableName_ = nullptr;};
    inline string transitRouterRouteTableName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableName_, "") };
    inline CreateTransitRouterRouteTableRequest& setTransitRouterRouteTableName(string transitRouterRouteTableName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableName_, transitRouterRouteTableName) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to precheck the request. Check items include permissions and the status of the specified cloud resources. Valid values:
    // 
    // *   **false** (default): sends the request. If the request passes the precheck, the custom route table is created.
    // *   **true**: prechecks the request but does not create the custom route table. If you use this value, the system checks the required parameters and the request syntax. If the request fails to pass the precheck, an error message is returned. If the request passes the check, the system returns the ID of the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The features of the route table.
    std::shared_ptr<CreateTransitRouterRouteTableRequestRouteTableOptions> routeTableOptions_ = nullptr;
    // The tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<CreateTransitRouterRouteTableRequestTag>> tag_ = nullptr;
    // The ID of the Enterprise Edition transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The description of the custom route table.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterRouteTableDescription_ = nullptr;
    // The name of the custom route table.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterRouteTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
