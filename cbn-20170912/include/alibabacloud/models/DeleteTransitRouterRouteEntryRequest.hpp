// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSITROUTERROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSITROUTERROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteTransitRouterRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTransitRouterRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryDestinationCidrBlock, transitRouterRouteEntryDestinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryId, transitRouterRouteEntryId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopId, transitRouterRouteEntryNextHopId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntryNextHopType, transitRouterRouteEntryNextHopType_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTransitRouterRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryDestinationCidrBlock, transitRouterRouteEntryDestinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryId, transitRouterRouteEntryId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopId, transitRouterRouteEntryNextHopId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntryNextHopType, transitRouterRouteEntryNextHopType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    DeleteTransitRouterRouteEntryRequest() = default ;
    DeleteTransitRouterRouteEntryRequest(const DeleteTransitRouterRouteEntryRequest &) = default ;
    DeleteTransitRouterRouteEntryRequest(DeleteTransitRouterRouteEntryRequest &&) = default ;
    DeleteTransitRouterRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTransitRouterRouteEntryRequest() = default ;
    DeleteTransitRouterRouteEntryRequest& operator=(const DeleteTransitRouterRouteEntryRequest &) = default ;
    DeleteTransitRouterRouteEntryRequest& operator=(DeleteTransitRouterRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->transitRouterRouteEntryDestinationCidrBlock_ == nullptr && this->transitRouterRouteEntryId_ == nullptr && this->transitRouterRouteEntryNextHopId_ == nullptr && this->transitRouterRouteEntryNextHopType_ == nullptr && this->transitRouterRouteTableId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteTransitRouterRouteEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteTransitRouterRouteEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteTransitRouterRouteEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteTransitRouterRouteEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteTransitRouterRouteEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteTransitRouterRouteEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterRouteEntryDestinationCidrBlock Field Functions 
    bool hasTransitRouterRouteEntryDestinationCidrBlock() const { return this->transitRouterRouteEntryDestinationCidrBlock_ != nullptr;};
    void deleteTransitRouterRouteEntryDestinationCidrBlock() { this->transitRouterRouteEntryDestinationCidrBlock_ = nullptr;};
    inline string getTransitRouterRouteEntryDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryDestinationCidrBlock_, "") };
    inline DeleteTransitRouterRouteEntryRequest& setTransitRouterRouteEntryDestinationCidrBlock(string transitRouterRouteEntryDestinationCidrBlock) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryDestinationCidrBlock_, transitRouterRouteEntryDestinationCidrBlock) };


    // transitRouterRouteEntryId Field Functions 
    bool hasTransitRouterRouteEntryId() const { return this->transitRouterRouteEntryId_ != nullptr;};
    void deleteTransitRouterRouteEntryId() { this->transitRouterRouteEntryId_ = nullptr;};
    inline string getTransitRouterRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryId_, "") };
    inline DeleteTransitRouterRouteEntryRequest& setTransitRouterRouteEntryId(string transitRouterRouteEntryId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryId_, transitRouterRouteEntryId) };


    // transitRouterRouteEntryNextHopId Field Functions 
    bool hasTransitRouterRouteEntryNextHopId() const { return this->transitRouterRouteEntryNextHopId_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopId() { this->transitRouterRouteEntryNextHopId_ = nullptr;};
    inline string getTransitRouterRouteEntryNextHopId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopId_, "") };
    inline DeleteTransitRouterRouteEntryRequest& setTransitRouterRouteEntryNextHopId(string transitRouterRouteEntryNextHopId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopId_, transitRouterRouteEntryNextHopId) };


    // transitRouterRouteEntryNextHopType Field Functions 
    bool hasTransitRouterRouteEntryNextHopType() const { return this->transitRouterRouteEntryNextHopType_ != nullptr;};
    void deleteTransitRouterRouteEntryNextHopType() { this->transitRouterRouteEntryNextHopType_ = nullptr;};
    inline string getTransitRouterRouteEntryNextHopType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteEntryNextHopType_, "") };
    inline DeleteTransitRouterRouteEntryRequest& setTransitRouterRouteEntryNextHopType(string transitRouterRouteEntryNextHopType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntryNextHopType_, transitRouterRouteEntryNextHopType) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string getTransitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline DeleteTransitRouterRouteEntryRequest& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


  protected:
    // A client token that is used to ensure the idempotence of the request.
    // 
    // The token must be unique for each request and can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the request as the **ClientToken**. The **RequestId** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. A dry run checks for potential issues, such as missing parameter values, incorrect request syntax, and service limits. Valid values:
    // 
    // - **false** (default): Sends the request. If the request passes the check, the route entry is deleted.
    // 
    // - **true**: Performs only a dry run. The system checks the request for potential issues. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The destination CIDR block of the route.
    shared_ptr<string> transitRouterRouteEntryDestinationCidrBlock_ {};
    // The ID of the route entry.
    shared_ptr<string> transitRouterRouteEntryId_ {};
    // The ID of the network instance connection that serves as the next hop.
    shared_ptr<string> transitRouterRouteEntryNextHopId_ {};
    // The type of the next hop. Valid values:
    // 
    // - **BlackHole**: The route is a blackhole route. You do not need to specify a next hop.
    // 
    // - **Attachment**: The next hop is a network instance connection. You must specify the ID of the network instance connection.
    shared_ptr<string> transitRouterRouteEntryNextHopType_ {};
    // The ID of the route table of the Enterprise Edition transit router.
    shared_ptr<string> transitRouterRouteTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
