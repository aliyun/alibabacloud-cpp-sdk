// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryDescription, transitRouterRouteEntryDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryDestinationCidrBlock, transitRouterRouteEntryDestinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryName, transitRouterRouteEntryName_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopId, transitRouterRouteEntryNextHopId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopType, transitRouterRouteEntryNextHopType_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryDescription, transitRouterRouteEntryDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryDestinationCidrBlock, transitRouterRouteEntryDestinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryName, transitRouterRouteEntryName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopId, transitRouterRouteEntryNextHopId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopType, transitRouterRouteEntryNextHopType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    CreateTransitRouterRouteEntryRequest() = default ;
    CreateTransitRouterRouteEntryRequest(const CreateTransitRouterRouteEntryRequest &) = default ;
    CreateTransitRouterRouteEntryRequest(CreateTransitRouterRouteEntryRequest &&) = default ;
    CreateTransitRouterRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterRouteEntryRequest() = default ;
    CreateTransitRouterRouteEntryRequest& operator=(const CreateTransitRouterRouteEntryRequest &) = default ;
    CreateTransitRouterRouteEntryRequest& operator=(CreateTransitRouterRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->transitRouterRouteEntryDescription_ != nullptr && this->transitRouterRouteEntryDestinationCidrBlock_ != nullptr && this->transitRouterRouteEntryName_ != nullptr && this->transitRouterRouteEntryNextHopId_ != nullptr && this->transitRouterRouteEntryNextHopType_ != nullptr
        && this->transitRouterRouteTableId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterRouteEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterRouteEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterRouteEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterRouteEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterRouteEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterRouteEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterRouteEntryDescription Field Functions 
    bool hasTransitRouterRouteEntryDescription() const { return this->transitRouterRouteEntryDescription_ != nullptr;};
    void deleteTransitRouterRouteEntryDescription() { this->transitRouterRouteEntryDescription_ = nullptr;};
    inline string transitRouterRouteEntryDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDescription_, "") };
    inline CreateTransitRouterRouteEntryRequest& setTransitRouterRouteEntryDescription(string transitRouterRouteEntryDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDescription_, transitRouterRouteEntryDescription) };


    // transitRouterRouteEntryDestinationCidrBlock Field Functions 
    bool hasTransitRouterRouteEntryDestinationCidrBlock() const { return this->transitRouterRouteEntryDestinationCidrBlock_ != nullptr;};
    void deleteTransitRouterRouteEntryDestinationCidrBlock() { this->transitRouterRouteEntryDestinationCidrBlock_ = nullptr;};
    inline string transitRouterRouteEntryDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDestinationCidrBlock_, "") };
    inline CreateTransitRouterRouteEntryRequest& setTransitRouterRouteEntryDestinationCidrBlock(string transitRouterRouteEntryDestinationCidrBlock) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDestinationCidrBlock_, transitRouterRouteEntryDestinationCidrBlock) };


    // transitRouterRouteEntryName Field Functions 
    bool hasTransitRouterRouteEntryName() const { return this->transitRouterRouteEntryName_ != nullptr;};
    void deleteTransitRouterRouteEntryName() { this->transitRouterRouteEntryName_ = nullptr;};
    inline string transitRouterRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryName_, "") };
    inline CreateTransitRouterRouteEntryRequest& setTransitRouterRouteEntryName(string transitRouterRouteEntryName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryName_, transitRouterRouteEntryName) };


    // transitRouterRouteEntryNextHopId Field Functions 
    bool hasTransitRouterRouteEntryNextHopId() const { return this->transitRouterRouteEntryNextHopId_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopId() { this->transitRouterRouteEntryNextHopId_ = nullptr;};
    inline string transitRouterRouteEntryNextHopId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopId_, "") };
    inline CreateTransitRouterRouteEntryRequest& setTransitRouterRouteEntryNextHopId(string transitRouterRouteEntryNextHopId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopId_, transitRouterRouteEntryNextHopId) };


    // transitRouterRouteEntryNextHopType Field Functions 
    bool hasTransitRouterRouteEntryNextHopType() const { return this->transitRouterRouteEntryNextHopType_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopType() { this->transitRouterRouteEntryNextHopType_ = nullptr;};
    inline string transitRouterRouteEntryNextHopType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopType_, "") };
    inline CreateTransitRouterRouteEntryRequest& setTransitRouterRouteEntryNextHopType(string transitRouterRouteEntryNextHopType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopType_, transitRouterRouteEntryNextHopType) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline CreateTransitRouterRouteEntryRequest& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** is different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **false** (default): performs a dry run and performs the actual request.
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The description of the route.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterRouteEntryDescription_ = nullptr;
    // The destination CIDR block of the route entry. IPv4 and IPv6 addresses are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock_ = nullptr;
    // The name of the route.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> transitRouterRouteEntryName_ = nullptr;
    // The ID of the network instance connection that you want to specify as the next hop.
    std::shared_ptr<string> transitRouterRouteEntryNextHopId_ = nullptr;
    // The type of the next hop. Valid values:
    // 
    // *   **BlackHole**: routes network traffic to a black hole. All packets that match this route are dropped. If you select this option, you do not need to specify the next hop information.
    // *   **Attachment**: routes network traffic to a network instance connection. If you select this option, you must specify the ID of the network instance connection. All packets that match this route are routed to the specified network instance connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterRouteEntryNextHopType_ = nullptr;
    // The ID of the route table of the Enterprise Edition transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
