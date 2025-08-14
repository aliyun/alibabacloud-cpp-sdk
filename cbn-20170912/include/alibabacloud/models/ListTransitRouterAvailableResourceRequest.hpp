// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERAVAILABLERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERAVAILABLERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterAvailableResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterAvailableResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SupportMulticast, supportMulticast_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterAvailableResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SupportMulticast, supportMulticast_);
    };
    ListTransitRouterAvailableResourceRequest() = default ;
    ListTransitRouterAvailableResourceRequest(const ListTransitRouterAvailableResourceRequest &) = default ;
    ListTransitRouterAvailableResourceRequest(ListTransitRouterAvailableResourceRequest &&) = default ;
    ListTransitRouterAvailableResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterAvailableResourceRequest() = default ;
    ListTransitRouterAvailableResourceRequest& operator=(const ListTransitRouterAvailableResourceRequest &) = default ;
    ListTransitRouterAvailableResourceRequest& operator=(ListTransitRouterAvailableResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->supportMulticast_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRouterAvailableResourceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRouterAvailableResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTransitRouterAvailableResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRouterAvailableResourceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterAvailableResourceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // supportMulticast Field Functions 
    bool hasSupportMulticast() const { return this->supportMulticast_ != nullptr;};
    void deleteSupportMulticast() { this->supportMulticast_ = nullptr;};
    inline bool supportMulticast() const { DARABONBA_PTR_GET_DEFAULT(supportMulticast_, false) };
    inline ListTransitRouterAvailableResourceRequest& setSupportMulticast(bool supportMulticast) { DARABONBA_PTR_SET_VALUE(supportMulticast_, supportMulticast) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the Enterprise Edition transit router.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to query only the zones in which the multicast feature is supported. Valid values:
    // 
    // *   **true**
    // 
    //     After you call **ListTransitRouterAvailableResource**, if no zone is returned, it indicates that the Enterprise Edition transit router does not support the multicast feature.
    // 
    // *   **false** (default)
    std::shared_ptr<bool> supportMulticast_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
