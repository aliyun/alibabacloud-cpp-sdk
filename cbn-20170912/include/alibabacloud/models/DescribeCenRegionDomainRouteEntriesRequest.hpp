// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRegionDomainRouteEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRegionDomainRouteEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenRegionId, cenRegionId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRegionDomainRouteEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenRegionId, cenRegionId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCenRegionDomainRouteEntriesRequest() = default ;
    DescribeCenRegionDomainRouteEntriesRequest(const DescribeCenRegionDomainRouteEntriesRequest &) = default ;
    DescribeCenRegionDomainRouteEntriesRequest(DescribeCenRegionDomainRouteEntriesRequest &&) = default ;
    DescribeCenRegionDomainRouteEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRegionDomainRouteEntriesRequest() = default ;
    DescribeCenRegionDomainRouteEntriesRequest& operator=(const DescribeCenRegionDomainRouteEntriesRequest &) = default ;
    DescribeCenRegionDomainRouteEntriesRequest& operator=(DescribeCenRegionDomainRouteEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->cenRegionId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->status_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenRegionDomainRouteEntriesRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenRegionId Field Functions 
    bool hasCenRegionId() const { return this->cenRegionId_ != nullptr;};
    void deleteCenRegionId() { this->cenRegionId_ = nullptr;};
    inline string cenRegionId() const { DARABONBA_PTR_GET_DEFAULT(cenRegionId_, "") };
    inline DescribeCenRegionDomainRouteEntriesRequest& setCenRegionId(string cenRegionId) { DARABONBA_PTR_SET_VALUE(cenRegionId_, cenRegionId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeCenRegionDomainRouteEntriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCenRegionDomainRouteEntriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenRegionDomainRouteEntriesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenRegionDomainRouteEntriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeCenRegionDomainRouteEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCenRegionDomainRouteEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenRegionDomainRouteEntriesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The CEN instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The region ID.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenRegionId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1** to **500**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The route status. Valid values:
    // 
    // *   **Active** (default): available
    // *   **Candidate**: standby
    // *   **Rejected**: rejected
    // *   **Prohibited**: prohibited
    // *   **All** (default value): all routes
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
