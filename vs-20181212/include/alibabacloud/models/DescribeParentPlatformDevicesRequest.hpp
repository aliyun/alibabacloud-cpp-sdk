// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARENTPLATFORMDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeParentPlatformDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParentPlatformDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortDirection, sortDirection_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParentPlatformDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortDirection, sortDirection_);
    };
    DescribeParentPlatformDevicesRequest() = default ;
    DescribeParentPlatformDevicesRequest(const DescribeParentPlatformDevicesRequest &) = default ;
    DescribeParentPlatformDevicesRequest(DescribeParentPlatformDevicesRequest &&) = default ;
    DescribeParentPlatformDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParentPlatformDevicesRequest() = default ;
    DescribeParentPlatformDevicesRequest& operator=(const DescribeParentPlatformDevicesRequest &) = default ;
    DescribeParentPlatformDevicesRequest& operator=(DescribeParentPlatformDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->sortDirection_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeParentPlatformDevicesRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeParentPlatformDevicesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeParentPlatformDevicesRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeParentPlatformDevicesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline DescribeParentPlatformDevicesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortDirection Field Functions 
    bool hasSortDirection() const { return this->sortDirection_ != nullptr;};
    void deleteSortDirection() { this->sortDirection_ = nullptr;};
    inline string getSortDirection() const { DARABONBA_PTR_GET_DEFAULT(sortDirection_, "") };
    inline DescribeParentPlatformDevicesRequest& setSortDirection(string sortDirection) { DARABONBA_PTR_SET_VALUE(sortDirection_, sortDirection) };


  protected:
    // This parameter is required.
    shared_ptr<string> id_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> sortDirection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
