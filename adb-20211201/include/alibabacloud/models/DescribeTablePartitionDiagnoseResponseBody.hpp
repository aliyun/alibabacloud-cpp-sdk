// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTablePartitionDiagnoseResponseBodyDetectionItems.hpp>
#include <alibabacloud/models/DescribeTablePartitionDiagnoseResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTablePartitionDiagnoseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablePartitionDiagnoseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuggestMaxRecordsPerPartition, suggestMaxRecordsPerPartition_);
      DARABONBA_PTR_TO_JSON(SuggestMinRecordsPerPartition, suggestMinRecordsPerPartition_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablePartitionDiagnoseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuggestMaxRecordsPerPartition, suggestMaxRecordsPerPartition_);
      DARABONBA_PTR_FROM_JSON(SuggestMinRecordsPerPartition, suggestMinRecordsPerPartition_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTablePartitionDiagnoseResponseBody() = default ;
    DescribeTablePartitionDiagnoseResponseBody(const DescribeTablePartitionDiagnoseResponseBody &) = default ;
    DescribeTablePartitionDiagnoseResponseBody(DescribeTablePartitionDiagnoseResponseBody &&) = default ;
    DescribeTablePartitionDiagnoseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablePartitionDiagnoseResponseBody() = default ;
    DescribeTablePartitionDiagnoseResponseBody& operator=(const DescribeTablePartitionDiagnoseResponseBody &) = default ;
    DescribeTablePartitionDiagnoseResponseBody& operator=(DescribeTablePartitionDiagnoseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->DBClusterId_ != nullptr && this->detectionItems_ != nullptr && this->items_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->requestId_ != nullptr && this->suggestMaxRecordsPerPartition_ != nullptr && this->suggestMinRecordsPerPartition_ != nullptr && this->totalCount_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeTablePartitionDiagnoseResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeTablePartitionDiagnoseResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeTablePartitionDiagnoseResponseBodyDetectionItems> & detectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeTablePartitionDiagnoseResponseBodyDetectionItems>) };
    inline vector<DescribeTablePartitionDiagnoseResponseBodyDetectionItems> detectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeTablePartitionDiagnoseResponseBodyDetectionItems>) };
    inline DescribeTablePartitionDiagnoseResponseBody& setDetectionItems(const vector<DescribeTablePartitionDiagnoseResponseBodyDetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeTablePartitionDiagnoseResponseBody& setDetectionItems(vector<DescribeTablePartitionDiagnoseResponseBodyDetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeTablePartitionDiagnoseResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeTablePartitionDiagnoseResponseBodyItems>) };
    inline vector<DescribeTablePartitionDiagnoseResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeTablePartitionDiagnoseResponseBodyItems>) };
    inline DescribeTablePartitionDiagnoseResponseBody& setItems(const vector<DescribeTablePartitionDiagnoseResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTablePartitionDiagnoseResponseBody& setItems(vector<DescribeTablePartitionDiagnoseResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTablePartitionDiagnoseResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTablePartitionDiagnoseResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTablePartitionDiagnoseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suggestMaxRecordsPerPartition Field Functions 
    bool hasSuggestMaxRecordsPerPartition() const { return this->suggestMaxRecordsPerPartition_ != nullptr;};
    void deleteSuggestMaxRecordsPerPartition() { this->suggestMaxRecordsPerPartition_ = nullptr;};
    inline int64_t suggestMaxRecordsPerPartition() const { DARABONBA_PTR_GET_DEFAULT(suggestMaxRecordsPerPartition_, 0L) };
    inline DescribeTablePartitionDiagnoseResponseBody& setSuggestMaxRecordsPerPartition(int64_t suggestMaxRecordsPerPartition) { DARABONBA_PTR_SET_VALUE(suggestMaxRecordsPerPartition_, suggestMaxRecordsPerPartition) };


    // suggestMinRecordsPerPartition Field Functions 
    bool hasSuggestMinRecordsPerPartition() const { return this->suggestMinRecordsPerPartition_ != nullptr;};
    void deleteSuggestMinRecordsPerPartition() { this->suggestMinRecordsPerPartition_ = nullptr;};
    inline int64_t suggestMinRecordsPerPartition() const { DARABONBA_PTR_GET_DEFAULT(suggestMinRecordsPerPartition_, 0L) };
    inline DescribeTablePartitionDiagnoseResponseBody& setSuggestMinRecordsPerPartition(int64_t suggestMinRecordsPerPartition) { DARABONBA_PTR_SET_VALUE(suggestMinRecordsPerPartition_, suggestMinRecordsPerPartition) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTablePartitionDiagnoseResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the request denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The queried detection items and detection results.
    std::shared_ptr<vector<DescribeTablePartitionDiagnoseResponseBodyDetectionItems>> detectionItems_ = nullptr;
    // The queried partition diagnostic information.
    std::shared_ptr<vector<DescribeTablePartitionDiagnoseResponseBodyItems>> items_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The recommended maximum number of rows in each partition.
    std::shared_ptr<int64_t> suggestMaxRecordsPerPartition_ = nullptr;
    // The recommended minimum number of rows in each partition.
    std::shared_ptr<int64_t> suggestMinRecordsPerPartition_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
