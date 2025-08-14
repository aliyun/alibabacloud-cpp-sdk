// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenBandwidthPackagesRequestFilter.hpp>
#include <alibabacloud/models/DescribeCenBandwidthPackagesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(IncludeReservationData, includeReservationData_);
      DARABONBA_PTR_TO_JSON(IsOrKey, isOrKey_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(IncludeReservationData, includeReservationData_);
      DARABONBA_PTR_FROM_JSON(IsOrKey, isOrKey_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCenBandwidthPackagesRequest() = default ;
    DescribeCenBandwidthPackagesRequest(const DescribeCenBandwidthPackagesRequest &) = default ;
    DescribeCenBandwidthPackagesRequest(DescribeCenBandwidthPackagesRequest &&) = default ;
    DescribeCenBandwidthPackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesRequest() = default ;
    DescribeCenBandwidthPackagesRequest& operator=(const DescribeCenBandwidthPackagesRequest &) = default ;
    DescribeCenBandwidthPackagesRequest& operator=(DescribeCenBandwidthPackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->includeReservationData_ != nullptr && this->isOrKey_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeCenBandwidthPackagesRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeCenBandwidthPackagesRequestFilter>) };
    inline vector<DescribeCenBandwidthPackagesRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<DescribeCenBandwidthPackagesRequestFilter>) };
    inline DescribeCenBandwidthPackagesRequest& setFilter(const vector<DescribeCenBandwidthPackagesRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeCenBandwidthPackagesRequest& setFilter(vector<DescribeCenBandwidthPackagesRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // includeReservationData Field Functions 
    bool hasIncludeReservationData() const { return this->includeReservationData_ != nullptr;};
    void deleteIncludeReservationData() { this->includeReservationData_ = nullptr;};
    inline bool includeReservationData() const { DARABONBA_PTR_GET_DEFAULT(includeReservationData_, false) };
    inline DescribeCenBandwidthPackagesRequest& setIncludeReservationData(bool includeReservationData) { DARABONBA_PTR_SET_VALUE(includeReservationData_, includeReservationData) };


    // isOrKey Field Functions 
    bool hasIsOrKey() const { return this->isOrKey_ != nullptr;};
    void deleteIsOrKey() { this->isOrKey_ = nullptr;};
    inline bool isOrKey() const { DARABONBA_PTR_GET_DEFAULT(isOrKey_, false) };
    inline DescribeCenBandwidthPackagesRequest& setIsOrKey(bool isOrKey) { DARABONBA_PTR_SET_VALUE(isOrKey_, isOrKey) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeCenBandwidthPackagesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCenBandwidthPackagesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenBandwidthPackagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenBandwidthPackagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCenBandwidthPackagesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeCenBandwidthPackagesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCenBandwidthPackagesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeCenBandwidthPackagesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeCenBandwidthPackagesRequestTag>) };
    inline vector<DescribeCenBandwidthPackagesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeCenBandwidthPackagesRequestTag>) };
    inline DescribeCenBandwidthPackagesRequest& setTag(const vector<DescribeCenBandwidthPackagesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCenBandwidthPackagesRequest& setTag(vector<DescribeCenBandwidthPackagesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The filter configurations.
    std::shared_ptr<vector<DescribeCenBandwidthPackagesRequestFilter>> filter_ = nullptr;
    // Specifies whether to include renewal data. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> includeReservationData_ = nullptr;
    // The logical operator between the filter conditions. Valid values:
    // 
    // *   **false** (default): **AND** Bandwidth plans that meet all filter conditions are returned.
    // *   **true**: **OR** Bandwidth plans that meet one of the filter conditions are returned.
    std::shared_ptr<bool> isOrKey_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<DescribeCenBandwidthPackagesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
