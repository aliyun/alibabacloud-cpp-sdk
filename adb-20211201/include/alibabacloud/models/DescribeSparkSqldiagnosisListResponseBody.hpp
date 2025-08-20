// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkSQLDiagnosisListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkSQLDiagnosisListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLDiagnosisList, SQLDiagnosisList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkSQLDiagnosisListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLDiagnosisList, SQLDiagnosisList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSparkSQLDiagnosisListResponseBody() = default ;
    DescribeSparkSQLDiagnosisListResponseBody(const DescribeSparkSQLDiagnosisListResponseBody &) = default ;
    DescribeSparkSQLDiagnosisListResponseBody(DescribeSparkSQLDiagnosisListResponseBody &&) = default ;
    DescribeSparkSQLDiagnosisListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkSQLDiagnosisListResponseBody() = default ;
    DescribeSparkSQLDiagnosisListResponseBody& operator=(const DescribeSparkSQLDiagnosisListResponseBody &) = default ;
    DescribeSparkSQLDiagnosisListResponseBody& operator=(DescribeSparkSQLDiagnosisListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->SQLDiagnosisList_ != nullptr && this->totalCount_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSparkSQLDiagnosisListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkSQLDiagnosisListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLDiagnosisList Field Functions 
    bool hasSQLDiagnosisList() const { return this->SQLDiagnosisList_ != nullptr;};
    void deleteSQLDiagnosisList() { this->SQLDiagnosisList_ = nullptr;};
    inline const vector<DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList> & SQLDiagnosisList() const { DARABONBA_PTR_GET_CONST(SQLDiagnosisList_, vector<DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList>) };
    inline vector<DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList> SQLDiagnosisList() { DARABONBA_PTR_GET(SQLDiagnosisList_, vector<DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList>) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setSQLDiagnosisList(const vector<DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList> & SQLDiagnosisList) { DARABONBA_PTR_SET_VALUE(SQLDiagnosisList_, SQLDiagnosisList) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setSQLDiagnosisList(vector<DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList> && SQLDiagnosisList) { DARABONBA_PTR_SET_RVALUE(SQLDiagnosisList_, SQLDiagnosisList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the request denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried diagnostic information.
    std::shared_ptr<vector<DescribeSparkSQLDiagnosisListResponseBodySQLDiagnosisList>> SQLDiagnosisList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
