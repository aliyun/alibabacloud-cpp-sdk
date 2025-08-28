// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NewNextHopId, newNextHopId_);
      DARABONBA_PTR_TO_JSON(NewNextHopType, newNextHopType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NewNextHopId, newNextHopId_);
      DARABONBA_PTR_FROM_JSON(NewNextHopType, newNextHopType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    ModifyRouteEntryRequest() = default ;
    ModifyRouteEntryRequest(const ModifyRouteEntryRequest &) = default ;
    ModifyRouteEntryRequest(ModifyRouteEntryRequest &&) = default ;
    ModifyRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRouteEntryRequest() = default ;
    ModifyRouteEntryRequest& operator=(const ModifyRouteEntryRequest &) = default ;
    ModifyRouteEntryRequest& operator=(ModifyRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->destinationCidrBlock_ != nullptr && this->dryRun_ != nullptr && this->newNextHopId_ != nullptr && this->newNextHopType_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->routeEntryId_ != nullptr
        && this->routeEntryName_ != nullptr && this->routeTableId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyRouteEntryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline ModifyRouteEntryRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyRouteEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // newNextHopId Field Functions 
    bool hasNewNextHopId() const { return this->newNextHopId_ != nullptr;};
    void deleteNewNextHopId() { this->newNextHopId_ = nullptr;};
    inline string newNextHopId() const { DARABONBA_PTR_GET_DEFAULT(newNextHopId_, "") };
    inline ModifyRouteEntryRequest& setNewNextHopId(string newNextHopId) { DARABONBA_PTR_SET_VALUE(newNextHopId_, newNextHopId) };


    // newNextHopType Field Functions 
    bool hasNewNextHopType() const { return this->newNextHopType_ != nullptr;};
    void deleteNewNextHopType() { this->newNextHopType_ = nullptr;};
    inline string newNextHopType() const { DARABONBA_PTR_GET_DEFAULT(newNextHopType_, "") };
    inline ModifyRouteEntryRequest& setNewNextHopType(string newNextHopType) { DARABONBA_PTR_SET_VALUE(newNextHopType_, newNextHopType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyRouteEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyRouteEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyRouteEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyRouteEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string routeEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline ModifyRouteEntryRequest& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routeEntryName Field Functions 
    bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
    void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
    inline string routeEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
    inline ModifyRouteEntryRequest& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline ModifyRouteEntryRequest& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The description of the route entry.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The destination CIDR block of the route entry. Only IPv4 CIDR blocks, IPv6 CIDR blocks, and prefix lists are supported.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the request for potential issues, including the AccessKey pair, the permissions of the RAM user, and the required parameters. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the new next hop instance.
    std::shared_ptr<string> newNextHopId_ = nullptr;
    // The new next hop type of the route.
    std::shared_ptr<string> newNextHopType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region to which the route belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the custom route entry.
    std::shared_ptr<string> routeEntryId_ = nullptr;
    // The name of the route entry.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> routeEntryName_ = nullptr;
    // The ID of the route table to which the route entry belongs.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
