// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRANSITROUTERPREFIXLISTASSOCIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRANSITROUTERPREFIXLISTASSOCIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteTransitRouterPrefixListAssociationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTransitRouterPrefixListAssociationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterTableId, transitRouterTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTransitRouterPrefixListAssociationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterTableId, transitRouterTableId_);
    };
    DeleteTransitRouterPrefixListAssociationRequest() = default ;
    DeleteTransitRouterPrefixListAssociationRequest(const DeleteTransitRouterPrefixListAssociationRequest &) = default ;
    DeleteTransitRouterPrefixListAssociationRequest(DeleteTransitRouterPrefixListAssociationRequest &&) = default ;
    DeleteTransitRouterPrefixListAssociationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTransitRouterPrefixListAssociationRequest() = default ;
    DeleteTransitRouterPrefixListAssociationRequest& operator=(const DeleteTransitRouterPrefixListAssociationRequest &) = default ;
    DeleteTransitRouterPrefixListAssociationRequest& operator=(DeleteTransitRouterPrefixListAssociationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->nextHop_ != nullptr && this->nextHopType_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->prefixListId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->transitRouterId_ != nullptr
        && this->transitRouterTableId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteTransitRouterPrefixListAssociationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteTransitRouterPrefixListAssociationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteTransitRouterPrefixListAssociationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterTableId Field Functions 
    bool hasTransitRouterTableId() const { return this->transitRouterTableId_ != nullptr;};
    void deleteTransitRouterTableId() { this->transitRouterTableId_ = nullptr;};
    inline string transitRouterTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterTableId_, "") };
    inline DeleteTransitRouterPrefixListAssociationRequest& setTransitRouterTableId(string transitRouterTableId) { DARABONBA_PTR_SET_VALUE(transitRouterTableId_, transitRouterTableId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among all requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request may be different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the task.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the next hop.
    // 
    // > If **NextHopType** is set to **BlackHole**, you must set this parameter to **BlackHole**.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The type of the next hop. Valid values:
    // 
    // *   **BlackHole**: All the CIDR blocks in the prefix list are blackhole routes. Packets destined for the CIDR blocks are dropped.
    // *   **VPC**: The next hop of the CIDR blocks in the prefix list is a VPC connection.
    // *   **VBR**: The next hop of the CIDR blocks in the prefix list is a VBR connection.
    // *   **TR**: The next hop of the CIDR blocks in the prefix list is an inter-region connection.
    std::shared_ptr<string> nextHopType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the prefix list.
    // 
    // This parameter is required.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The ID of the region where the transit router is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The ID of the route table of the transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
