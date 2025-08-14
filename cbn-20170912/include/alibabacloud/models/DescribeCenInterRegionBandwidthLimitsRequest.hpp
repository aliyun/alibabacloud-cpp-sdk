// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenInterRegionBandwidthLimitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenInterRegionBandwidthLimitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrRegionId, trRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenInterRegionBandwidthLimitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrRegionId, trRegionId_);
    };
    DescribeCenInterRegionBandwidthLimitsRequest() = default ;
    DescribeCenInterRegionBandwidthLimitsRequest(const DescribeCenInterRegionBandwidthLimitsRequest &) = default ;
    DescribeCenInterRegionBandwidthLimitsRequest(DescribeCenInterRegionBandwidthLimitsRequest &&) = default ;
    DescribeCenInterRegionBandwidthLimitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenInterRegionBandwidthLimitsRequest() = default ;
    DescribeCenInterRegionBandwidthLimitsRequest& operator=(const DescribeCenInterRegionBandwidthLimitsRequest &) = default ;
    DescribeCenInterRegionBandwidthLimitsRequest& operator=(DescribeCenInterRegionBandwidthLimitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->trRegionId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeCenInterRegionBandwidthLimitsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCenInterRegionBandwidthLimitsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenInterRegionBandwidthLimitsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenInterRegionBandwidthLimitsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeCenInterRegionBandwidthLimitsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCenInterRegionBandwidthLimitsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trRegionId Field Functions 
    bool hasTrRegionId() const { return this->trRegionId_ != nullptr;};
    void deleteTrRegionId() { this->trRegionId_ = nullptr;};
    inline string trRegionId() const { DARABONBA_PTR_GET_DEFAULT(trRegionId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsRequest& setTrRegionId(string trRegionId) { DARABONBA_PTR_SET_VALUE(trRegionId_, trRegionId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **10**. Valid values: **1** to **50**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The region ID of the transit router.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> trRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
