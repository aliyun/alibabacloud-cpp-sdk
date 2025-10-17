// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSEORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSEORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLicenseOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PurchaseChannel, purchaseChannel_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VirtualOrder, virtualOrder_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PurchaseChannel, purchaseChannel_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VirtualOrder, virtualOrder_);
    };
    DescribeLicenseOrdersRequest() = default ;
    DescribeLicenseOrdersRequest(const DescribeLicenseOrdersRequest &) = default ;
    DescribeLicenseOrdersRequest(DescribeLicenseOrdersRequest &&) = default ;
    DescribeLicenseOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseOrdersRequest() = default ;
    DescribeLicenseOrdersRequest& operator=(const DescribeLicenseOrdersRequest &) = default ;
    DescribeLicenseOrdersRequest& operator=(DescribeLicenseOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunOrderId_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->packageType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->purchaseChannel_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->virtualOrder_ == nullptr; };
    // aliyunOrderId Field Functions 
    bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
    void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
    inline string aliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, "") };
    inline DescribeLicenseOrdersRequest& setAliyunOrderId(string aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeLicenseOrdersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLicenseOrdersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeLicenseOrdersRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLicenseOrdersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLicenseOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // purchaseChannel Field Functions 
    bool hasPurchaseChannel() const { return this->purchaseChannel_ != nullptr;};
    void deletePurchaseChannel() { this->purchaseChannel_ = nullptr;};
    inline string purchaseChannel() const { DARABONBA_PTR_GET_DEFAULT(purchaseChannel_, "") };
    inline DescribeLicenseOrdersRequest& setPurchaseChannel(string purchaseChannel) { DARABONBA_PTR_SET_VALUE(purchaseChannel_, purchaseChannel) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeLicenseOrdersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeLicenseOrdersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // virtualOrder Field Functions 
    bool hasVirtualOrder() const { return this->virtualOrder_ != nullptr;};
    void deleteVirtualOrder() { this->virtualOrder_ = nullptr;};
    inline bool virtualOrder() const { DARABONBA_PTR_GET_DEFAULT(virtualOrder_, false) };
    inline DescribeLicenseOrdersRequest& setVirtualOrder(bool virtualOrder) { DARABONBA_PTR_SET_VALUE(virtualOrder_, virtualOrder) };


  protected:
    // The ID of the Alibaba Cloud order. The value can be the ID of a virtual order.
    std::shared_ptr<string> aliyunOrderId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The plan type. Valid values:
    // 
    // *   single_node_subscribe: Single-node Edition (Subscription).
    // *   single_node_long_term: Single-node Edition (Long-term).
    // *   primary_backup_subscribe: HA Edition (Subscription).
    // *   primary_backup_long_term: HA Edition (Long-term).
    // *   pre_generation_long_term: Pre-generated (Long-term).
    std::shared_ptr<string> packageType_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The purchase channel. Valid values: aliyun_market and aliyun_public. aliyun_market specifies Alibaba Cloud Marketplace. aliyun_public specifies the PolarDB buy page.
    std::shared_ptr<string> purchaseChannel_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to query only virtual orders.
    std::shared_ptr<bool> virtualOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
