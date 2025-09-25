// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKAUDITLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKAUDITLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSparkAuditLogRecordsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkAuditLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkAuditLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkAuditLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSparkAuditLogRecordsResponseBody() = default ;
    DescribeSparkAuditLogRecordsResponseBody(const DescribeSparkAuditLogRecordsResponseBody &) = default ;
    DescribeSparkAuditLogRecordsResponseBody(DescribeSparkAuditLogRecordsResponseBody &&) = default ;
    DescribeSparkAuditLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkAuditLogRecordsResponseBody() = default ;
    DescribeSparkAuditLogRecordsResponseBody& operator=(const DescribeSparkAuditLogRecordsResponseBody &) = default ;
    DescribeSparkAuditLogRecordsResponseBody& operator=(DescribeSparkAuditLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->DBClusterId_ != nullptr && this->items_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSparkAuditLogRecordsResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSparkAuditLogRecordsResponseBodyItems>) };
    inline vector<DescribeSparkAuditLogRecordsResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeSparkAuditLogRecordsResponseBodyItems>) };
    inline DescribeSparkAuditLogRecordsResponseBody& setItems(const vector<DescribeSparkAuditLogRecordsResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSparkAuditLogRecordsResponseBody& setItems(vector<DescribeSparkAuditLogRecordsResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSparkAuditLogRecordsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<vector<DescribeSparkAuditLogRecordsResponseBodyItems>> items_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
