// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IspFlushCacheInstances, ispFlushCacheInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IspFlushCacheInstances, ispFlushCacheInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeIspFlushCacheInstancesResponseBody() = default ;
    DescribeIspFlushCacheInstancesResponseBody(const DescribeIspFlushCacheInstancesResponseBody &) = default ;
    DescribeIspFlushCacheInstancesResponseBody(DescribeIspFlushCacheInstancesResponseBody &&) = default ;
    DescribeIspFlushCacheInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheInstancesResponseBody() = default ;
    DescribeIspFlushCacheInstancesResponseBody& operator=(const DescribeIspFlushCacheInstancesResponseBody &) = default ;
    DescribeIspFlushCacheInstancesResponseBody& operator=(DescribeIspFlushCacheInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ispFlushCacheInstances_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalItems_ == nullptr && return this->totalPages_ == nullptr; };
    // ispFlushCacheInstances Field Functions 
    bool hasIspFlushCacheInstances() const { return this->ispFlushCacheInstances_ != nullptr;};
    void deleteIspFlushCacheInstances() { this->ispFlushCacheInstances_ = nullptr;};
    inline const vector<DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances> & ispFlushCacheInstances() const { DARABONBA_PTR_GET_CONST(ispFlushCacheInstances_, vector<DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances>) };
    inline vector<DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances> ispFlushCacheInstances() { DARABONBA_PTR_GET(ispFlushCacheInstances_, vector<DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances>) };
    inline DescribeIspFlushCacheInstancesResponseBody& setIspFlushCacheInstances(const vector<DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances> & ispFlushCacheInstances) { DARABONBA_PTR_SET_VALUE(ispFlushCacheInstances_, ispFlushCacheInstances) };
    inline DescribeIspFlushCacheInstancesResponseBody& setIspFlushCacheInstances(vector<DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances> && ispFlushCacheInstances) { DARABONBA_PTR_SET_RVALUE(ispFlushCacheInstances_, ispFlushCacheInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIspFlushCacheInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    std::shared_ptr<vector<DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances>> ispFlushCacheInstances_ = nullptr;
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
