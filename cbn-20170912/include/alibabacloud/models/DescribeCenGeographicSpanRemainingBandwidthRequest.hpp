// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANREMAININGBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENGEOGRAPHICSPANREMAININGBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenGeographicSpanRemainingBandwidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenGeographicSpanRemainingBandwidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(GeographicRegionAId, geographicRegionAId_);
      DARABONBA_PTR_TO_JSON(GeographicRegionBId, geographicRegionBId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenGeographicSpanRemainingBandwidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(GeographicRegionAId, geographicRegionAId_);
      DARABONBA_PTR_FROM_JSON(GeographicRegionBId, geographicRegionBId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeCenGeographicSpanRemainingBandwidthRequest() = default ;
    DescribeCenGeographicSpanRemainingBandwidthRequest(const DescribeCenGeographicSpanRemainingBandwidthRequest &) = default ;
    DescribeCenGeographicSpanRemainingBandwidthRequest(DescribeCenGeographicSpanRemainingBandwidthRequest &&) = default ;
    DescribeCenGeographicSpanRemainingBandwidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenGeographicSpanRemainingBandwidthRequest() = default ;
    DescribeCenGeographicSpanRemainingBandwidthRequest& operator=(const DescribeCenGeographicSpanRemainingBandwidthRequest &) = default ;
    DescribeCenGeographicSpanRemainingBandwidthRequest& operator=(DescribeCenGeographicSpanRemainingBandwidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->geographicRegionAId_ != nullptr && this->geographicRegionBId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // geographicRegionAId Field Functions 
    bool hasGeographicRegionAId() const { return this->geographicRegionAId_ != nullptr;};
    void deleteGeographicRegionAId() { this->geographicRegionAId_ = nullptr;};
    inline string geographicRegionAId() const { DARABONBA_PTR_GET_DEFAULT(geographicRegionAId_, "") };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setGeographicRegionAId(string geographicRegionAId) { DARABONBA_PTR_SET_VALUE(geographicRegionAId_, geographicRegionAId) };


    // geographicRegionBId Field Functions 
    bool hasGeographicRegionBId() const { return this->geographicRegionBId_ != nullptr;};
    void deleteGeographicRegionBId() { this->geographicRegionBId_ = nullptr;};
    inline string geographicRegionBId() const { DARABONBA_PTR_GET_DEFAULT(geographicRegionBId_, "") };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setGeographicRegionBId(string geographicRegionBId) { DARABONBA_PTR_SET_VALUE(geographicRegionBId_, geographicRegionBId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCenGeographicSpanRemainingBandwidthRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance to which the bandwidth plan is associated.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of one of the connected areas of the bandwidth plan. Valid values:
    // 
    // *   **China**: Chinese mainland
    // *   **North-America**: North America
    // *   **Asia-Pacific**: Asia Pacific
    // *   **Europe**: Europe
    // 
    // This parameter is required.
    std::shared_ptr<string> geographicRegionAId_ = nullptr;
    // The ID of the other area connected by the bandwidth plan. Valid values:
    // 
    // *   **China**: Chinese mainland
    // *   **North-America**: North America
    // *   **Asia-Pacific**: Asia Pacific
    // *   **Europe**: Europe
    // 
    // This parameter is required.
    std::shared_ptr<string> geographicRegionBId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **10**. Valid values: **1** to **50**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
