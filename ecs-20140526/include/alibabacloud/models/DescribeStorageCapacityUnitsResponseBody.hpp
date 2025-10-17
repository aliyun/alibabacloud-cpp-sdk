// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeStorageCapacityUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageCapacityUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageCapacityUnits, storageCapacityUnits_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageCapacityUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageCapacityUnits, storageCapacityUnits_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStorageCapacityUnitsResponseBody() = default ;
    DescribeStorageCapacityUnitsResponseBody(const DescribeStorageCapacityUnitsResponseBody &) = default ;
    DescribeStorageCapacityUnitsResponseBody(DescribeStorageCapacityUnitsResponseBody &&) = default ;
    DescribeStorageCapacityUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageCapacityUnitsResponseBody() = default ;
    DescribeStorageCapacityUnitsResponseBody& operator=(const DescribeStorageCapacityUnitsResponseBody &) = default ;
    DescribeStorageCapacityUnitsResponseBody& operator=(DescribeStorageCapacityUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->storageCapacityUnits_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStorageCapacityUnitsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStorageCapacityUnitsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStorageCapacityUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageCapacityUnits Field Functions 
    bool hasStorageCapacityUnits() const { return this->storageCapacityUnits_ != nullptr;};
    void deleteStorageCapacityUnits() { this->storageCapacityUnits_ = nullptr;};
    inline const DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits & storageCapacityUnits() const { DARABONBA_PTR_GET_CONST(storageCapacityUnits_, DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits) };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits storageCapacityUnits() { DARABONBA_PTR_GET(storageCapacityUnits_, DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits) };
    inline DescribeStorageCapacityUnitsResponseBody& setStorageCapacityUnits(const DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits & storageCapacityUnits) { DARABONBA_PTR_SET_VALUE(storageCapacityUnits_, storageCapacityUnits) };
    inline DescribeStorageCapacityUnitsResponseBody& setStorageCapacityUnits(DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits && storageCapacityUnits) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnits_, storageCapacityUnits) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeStorageCapacityUnitsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details about the SCUs.
    std::shared_ptr<DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits> storageCapacityUnits_ = nullptr;
    // The total number of SCUs.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
