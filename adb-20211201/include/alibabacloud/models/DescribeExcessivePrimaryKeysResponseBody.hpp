// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXCESSIVEPRIMARYKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXCESSIVEPRIMARYKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExcessivePrimaryKeysResponseBodyDetectionItems.hpp>
#include <alibabacloud/models/DescribeExcessivePrimaryKeysResponseBodyTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeExcessivePrimaryKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExcessivePrimaryKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExcessivePrimaryKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeExcessivePrimaryKeysResponseBody() = default ;
    DescribeExcessivePrimaryKeysResponseBody(const DescribeExcessivePrimaryKeysResponseBody &) = default ;
    DescribeExcessivePrimaryKeysResponseBody(DescribeExcessivePrimaryKeysResponseBody &&) = default ;
    DescribeExcessivePrimaryKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExcessivePrimaryKeysResponseBody() = default ;
    DescribeExcessivePrimaryKeysResponseBody& operator=(const DescribeExcessivePrimaryKeysResponseBody &) = default ;
    DescribeExcessivePrimaryKeysResponseBody& operator=(DescribeExcessivePrimaryKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->DBClusterId_ != nullptr && this->detectionItems_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->tables_ != nullptr && this->totalCount_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeExcessivePrimaryKeysResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeExcessivePrimaryKeysResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeExcessivePrimaryKeysResponseBodyDetectionItems> & detectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeExcessivePrimaryKeysResponseBodyDetectionItems>) };
    inline vector<DescribeExcessivePrimaryKeysResponseBodyDetectionItems> detectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeExcessivePrimaryKeysResponseBodyDetectionItems>) };
    inline DescribeExcessivePrimaryKeysResponseBody& setDetectionItems(const vector<DescribeExcessivePrimaryKeysResponseBodyDetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeExcessivePrimaryKeysResponseBody& setDetectionItems(vector<DescribeExcessivePrimaryKeysResponseBodyDetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeExcessivePrimaryKeysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeExcessivePrimaryKeysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExcessivePrimaryKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<DescribeExcessivePrimaryKeysResponseBodyTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<DescribeExcessivePrimaryKeysResponseBodyTables>) };
    inline vector<DescribeExcessivePrimaryKeysResponseBodyTables> tables() { DARABONBA_PTR_GET(tables_, vector<DescribeExcessivePrimaryKeysResponseBodyTables>) };
    inline DescribeExcessivePrimaryKeysResponseBody& setTables(const vector<DescribeExcessivePrimaryKeysResponseBodyTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeExcessivePrimaryKeysResponseBody& setTables(vector<DescribeExcessivePrimaryKeysResponseBodyTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeExcessivePrimaryKeysResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried information about the request denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The queried detection items and detection results.
    std::shared_ptr<vector<DescribeExcessivePrimaryKeysResponseBodyDetectionItems>> detectionItems_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried tables that have excessive primary key fields.
    std::shared_ptr<vector<DescribeExcessivePrimaryKeysResponseBodyTables>> tables_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
