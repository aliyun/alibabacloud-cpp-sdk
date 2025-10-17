// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSnapshotPackageResponseBodySnapshotPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotPackages, snapshotPackages_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotPackages, snapshotPackages_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSnapshotPackageResponseBody() = default ;
    DescribeSnapshotPackageResponseBody(const DescribeSnapshotPackageResponseBody &) = default ;
    DescribeSnapshotPackageResponseBody(DescribeSnapshotPackageResponseBody &&) = default ;
    DescribeSnapshotPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotPackageResponseBody() = default ;
    DescribeSnapshotPackageResponseBody& operator=(const DescribeSnapshotPackageResponseBody &) = default ;
    DescribeSnapshotPackageResponseBody& operator=(DescribeSnapshotPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->snapshotPackages_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnapshotPackageResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnapshotPackageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotPackages Field Functions 
    bool hasSnapshotPackages() const { return this->snapshotPackages_ != nullptr;};
    void deleteSnapshotPackages() { this->snapshotPackages_ = nullptr;};
    inline const DescribeSnapshotPackageResponseBodySnapshotPackages & snapshotPackages() const { DARABONBA_PTR_GET_CONST(snapshotPackages_, DescribeSnapshotPackageResponseBodySnapshotPackages) };
    inline DescribeSnapshotPackageResponseBodySnapshotPackages snapshotPackages() { DARABONBA_PTR_GET(snapshotPackages_, DescribeSnapshotPackageResponseBodySnapshotPackages) };
    inline DescribeSnapshotPackageResponseBody& setSnapshotPackages(const DescribeSnapshotPackageResponseBodySnapshotPackages & snapshotPackages) { DARABONBA_PTR_SET_VALUE(snapshotPackages_, snapshotPackages) };
    inline DescribeSnapshotPackageResponseBody& setSnapshotPackages(DescribeSnapshotPackageResponseBodySnapshotPackages && snapshotPackages) { DARABONBA_PTR_SET_RVALUE(snapshotPackages_, snapshotPackages) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnapshotPackageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details about the OSS storage plans.
    std::shared_ptr<DescribeSnapshotPackageResponseBodySnapshotPackages> snapshotPackages_ = nullptr;
    // The total number of OSS storage plans.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
