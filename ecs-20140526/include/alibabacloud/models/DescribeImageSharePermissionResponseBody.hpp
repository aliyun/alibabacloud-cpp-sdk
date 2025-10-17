// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImageSharePermissionResponseBodyAccounts.hpp>
#include <alibabacloud/models/DescribeImageSharePermissionResponseBodyShareGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageSharePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSharePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShareGroups, shareGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSharePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShareGroups, shareGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImageSharePermissionResponseBody() = default ;
    DescribeImageSharePermissionResponseBody(const DescribeImageSharePermissionResponseBody &) = default ;
    DescribeImageSharePermissionResponseBody(DescribeImageSharePermissionResponseBody &&) = default ;
    DescribeImageSharePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSharePermissionResponseBody() = default ;
    DescribeImageSharePermissionResponseBody& operator=(const DescribeImageSharePermissionResponseBody &) = default ;
    DescribeImageSharePermissionResponseBody& operator=(DescribeImageSharePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accounts_ == nullptr
        && return this->imageId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->shareGroups_ == nullptr && return this->totalCount_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const DescribeImageSharePermissionResponseBodyAccounts & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, DescribeImageSharePermissionResponseBodyAccounts) };
    inline DescribeImageSharePermissionResponseBodyAccounts accounts() { DARABONBA_PTR_GET(accounts_, DescribeImageSharePermissionResponseBodyAccounts) };
    inline DescribeImageSharePermissionResponseBody& setAccounts(const DescribeImageSharePermissionResponseBodyAccounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeImageSharePermissionResponseBody& setAccounts(DescribeImageSharePermissionResponseBodyAccounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageSharePermissionResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeImageSharePermissionResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageSharePermissionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageSharePermissionResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageSharePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shareGroups Field Functions 
    bool hasShareGroups() const { return this->shareGroups_ != nullptr;};
    void deleteShareGroups() { this->shareGroups_ = nullptr;};
    inline const DescribeImageSharePermissionResponseBodyShareGroups & shareGroups() const { DARABONBA_PTR_GET_CONST(shareGroups_, DescribeImageSharePermissionResponseBodyShareGroups) };
    inline DescribeImageSharePermissionResponseBodyShareGroups shareGroups() { DARABONBA_PTR_GET(shareGroups_, DescribeImageSharePermissionResponseBodyShareGroups) };
    inline DescribeImageSharePermissionResponseBody& setShareGroups(const DescribeImageSharePermissionResponseBodyShareGroups & shareGroups) { DARABONBA_PTR_SET_VALUE(shareGroups_, shareGroups) };
    inline DescribeImageSharePermissionResponseBody& setShareGroups(DescribeImageSharePermissionResponseBodyShareGroups && shareGroups) { DARABONBA_PTR_SET_RVALUE(shareGroups_, shareGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImageSharePermissionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The Alibaba Cloud accounts.
    std::shared_ptr<DescribeImageSharePermissionResponseBodyAccounts> accounts_ = nullptr;
    // The ID of the custom image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the custom image.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The shared groups.
    std::shared_ptr<DescribeImageSharePermissionResponseBodyShareGroups> shareGroups_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
