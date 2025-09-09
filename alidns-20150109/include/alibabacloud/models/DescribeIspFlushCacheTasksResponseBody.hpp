// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIspFlushCacheTasksResponseBodyIspFlushCacheTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IspFlushCacheTasks, ispFlushCacheTasks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IspFlushCacheTasks, ispFlushCacheTasks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeIspFlushCacheTasksResponseBody() = default ;
    DescribeIspFlushCacheTasksResponseBody(const DescribeIspFlushCacheTasksResponseBody &) = default ;
    DescribeIspFlushCacheTasksResponseBody(DescribeIspFlushCacheTasksResponseBody &&) = default ;
    DescribeIspFlushCacheTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheTasksResponseBody() = default ;
    DescribeIspFlushCacheTasksResponseBody& operator=(const DescribeIspFlushCacheTasksResponseBody &) = default ;
    DescribeIspFlushCacheTasksResponseBody& operator=(DescribeIspFlushCacheTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ispFlushCacheTasks_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalItems_ != nullptr && this->totalPages_ != nullptr; };
    // ispFlushCacheTasks Field Functions 
    bool hasIspFlushCacheTasks() const { return this->ispFlushCacheTasks_ != nullptr;};
    void deleteIspFlushCacheTasks() { this->ispFlushCacheTasks_ = nullptr;};
    inline const vector<DescribeIspFlushCacheTasksResponseBodyIspFlushCacheTasks> & ispFlushCacheTasks() const { DARABONBA_PTR_GET_CONST(ispFlushCacheTasks_, vector<DescribeIspFlushCacheTasksResponseBodyIspFlushCacheTasks>) };
    inline vector<DescribeIspFlushCacheTasksResponseBodyIspFlushCacheTasks> ispFlushCacheTasks() { DARABONBA_PTR_GET(ispFlushCacheTasks_, vector<DescribeIspFlushCacheTasksResponseBodyIspFlushCacheTasks>) };
    inline DescribeIspFlushCacheTasksResponseBody& setIspFlushCacheTasks(const vector<DescribeIspFlushCacheTasksResponseBodyIspFlushCacheTasks> & ispFlushCacheTasks) { DARABONBA_PTR_SET_VALUE(ispFlushCacheTasks_, ispFlushCacheTasks) };
    inline DescribeIspFlushCacheTasksResponseBody& setIspFlushCacheTasks(vector<DescribeIspFlushCacheTasksResponseBodyIspFlushCacheTasks> && ispFlushCacheTasks) { DARABONBA_PTR_SET_RVALUE(ispFlushCacheTasks_, ispFlushCacheTasks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIspFlushCacheTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIspFlushCacheTasksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIspFlushCacheTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeIspFlushCacheTasksResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeIspFlushCacheTasksResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    std::shared_ptr<vector<DescribeIspFlushCacheTasksResponseBodyIspFlushCacheTasks>> ispFlushCacheTasks_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalItems_ = nullptr;
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
