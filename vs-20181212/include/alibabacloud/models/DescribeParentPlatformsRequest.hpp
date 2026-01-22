// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeParentPlatformsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParentPlatformsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortDirection, sortDirection_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParentPlatformsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortDirection, sortDirection_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeParentPlatformsRequest() = default ;
    DescribeParentPlatformsRequest(const DescribeParentPlatformsRequest &) = default ;
    DescribeParentPlatformsRequest(DescribeParentPlatformsRequest &&) = default ;
    DescribeParentPlatformsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParentPlatformsRequest() = default ;
    DescribeParentPlatformsRequest& operator=(const DescribeParentPlatformsRequest &) = default ;
    DescribeParentPlatformsRequest& operator=(DescribeParentPlatformsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gbId_ == nullptr
        && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->sortDirection_ == nullptr
        && this->status_ == nullptr; };
    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline DescribeParentPlatformsRequest& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeParentPlatformsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeParentPlatformsRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeParentPlatformsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline DescribeParentPlatformsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortDirection Field Functions 
    bool hasSortDirection() const { return this->sortDirection_ != nullptr;};
    void deleteSortDirection() { this->sortDirection_ = nullptr;};
    inline string getSortDirection() const { DARABONBA_PTR_GET_DEFAULT(sortDirection_, "") };
    inline DescribeParentPlatformsRequest& setSortDirection(string sortDirection) { DARABONBA_PTR_SET_VALUE(sortDirection_, sortDirection) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeParentPlatformsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> gbId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> sortDirection_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
