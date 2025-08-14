// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERPREFIXLISTASSOCIATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERPREFIXLISTASSOCIATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterPrefixListAssociationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterPrefixListAssociationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterTableId, transitRouterTableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterPrefixListAssociationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterTableId, transitRouterTableId_);
    };
    ListTransitRouterPrefixListAssociationRequest() = default ;
    ListTransitRouterPrefixListAssociationRequest(const ListTransitRouterPrefixListAssociationRequest &) = default ;
    ListTransitRouterPrefixListAssociationRequest(ListTransitRouterPrefixListAssociationRequest &&) = default ;
    ListTransitRouterPrefixListAssociationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterPrefixListAssociationRequest() = default ;
    ListTransitRouterPrefixListAssociationRequest& operator=(const ListTransitRouterPrefixListAssociationRequest &) = default ;
    ListTransitRouterPrefixListAssociationRequest& operator=(ListTransitRouterPrefixListAssociationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextHop_ != nullptr
        && this->nextHopInstanceId_ != nullptr && this->nextHopType_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->ownerUid_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->prefixListId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->status_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterTableId_ != nullptr; };
    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // nextHopInstanceId Field Functions 
    bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
    void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
    inline string nextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRouterPrefixListAssociationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline int64_t ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
    inline ListTransitRouterPrefixListAssociationRequest& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTransitRouterPrefixListAssociationRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTransitRouterPrefixListAssociationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterPrefixListAssociationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterTableId Field Functions 
    bool hasTransitRouterTableId() const { return this->transitRouterTableId_ != nullptr;};
    void deleteTransitRouterTableId() { this->transitRouterTableId_ = nullptr;};
    inline string transitRouterTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterTableId_, "") };
    inline ListTransitRouterPrefixListAssociationRequest& setTransitRouterTableId(string transitRouterTableId) { DARABONBA_PTR_SET_VALUE(transitRouterTableId_, transitRouterTableId) };


  protected:
    // The ID of the next hop.
    // 
    // > Set the value to **BlackHole** if you want to query the prefix list that generates blackhole routes.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The ID of the network instance associated with the next hop connection.
    std::shared_ptr<string> nextHopInstanceId_ = nullptr;
    // The type of the next hop. Valid values:
    // 
    // *   **BlackHole**: The prefix list that generates blackhole routes.
    // *   **VPC**: The prefix list whose next hop is a virtual private cloud (VPC) connection.
    // *   **VBR**: The prefix list whose next hop is a virtual border router (VBR) connection.
    // *   **TR**: The prefix list whose next hop is an inter-region connection on the transit router.
    std::shared_ptr<string> nextHopType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the prefix list belongs.
    std::shared_ptr<int64_t> ownerUid_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: **100**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the prefix list.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The ID of the region where the transit router is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The status of the prefix list. Valid values:
    // 
    // *   **Active**
    // *   **Updating**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The ID of the route table of the transit router.
    std::shared_ptr<string> transitRouterTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
