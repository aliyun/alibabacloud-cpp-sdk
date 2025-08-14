// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCensRequestFilter.hpp>
#include <alibabacloud/models/DescribeCensRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCensRequest() = default ;
    DescribeCensRequest(const DescribeCensRequest &) = default ;
    DescribeCensRequest(DescribeCensRequest &&) = default ;
    DescribeCensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensRequest() = default ;
    DescribeCensRequest& operator=(const DescribeCensRequest &) = default ;
    DescribeCensRequest& operator=(DescribeCensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeCensRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeCensRequestFilter>) };
    inline vector<DescribeCensRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<DescribeCensRequestFilter>) };
    inline DescribeCensRequest& setFilter(const vector<DescribeCensRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeCensRequest& setFilter(vector<DescribeCensRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeCensRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCensRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCensRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCensRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCensRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeCensRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCensRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeCensRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeCensRequestTag>) };
    inline vector<DescribeCensRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeCensRequestTag>) };
    inline DescribeCensRequest& setTag(const vector<DescribeCensRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCensRequest& setTag(vector<DescribeCensRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The filter conditions.
    // 
    // You can specify at most five filter conditions in each call.
    std::shared_ptr<vector<DescribeCensRequestFilter>> filter_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group to which the CEN instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<DescribeCensRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
