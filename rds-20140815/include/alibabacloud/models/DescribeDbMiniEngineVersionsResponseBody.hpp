// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBMiniEngineVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_TO_JSON(MinorVersionItems, minorVersionItems_);
      DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_FROM_JSON(MinorVersionItems, minorVersionItems_);
      DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBMiniEngineVersionsResponseBody() = default ;
    DescribeDBMiniEngineVersionsResponseBody(const DescribeDBMiniEngineVersionsResponseBody &) = default ;
    DescribeDBMiniEngineVersionsResponseBody(DescribeDBMiniEngineVersionsResponseBody &&) = default ;
    DescribeDBMiniEngineVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBMiniEngineVersionsResponseBody() = default ;
    DescribeDBMiniEngineVersionsResponseBody& operator=(const DescribeDBMiniEngineVersionsResponseBody &) = default ;
    DescribeDBMiniEngineVersionsResponseBody& operator=(DescribeDBMiniEngineVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->maxRecordsPerPage_ == nullptr && return this->minorVersionItems_ == nullptr && return this->pageNumbers_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBMiniEngineVersionsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // maxRecordsPerPage Field Functions 
    bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
    void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
    inline int32_t maxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
    inline DescribeDBMiniEngineVersionsResponseBody& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


    // minorVersionItems Field Functions 
    bool hasMinorVersionItems() const { return this->minorVersionItems_ != nullptr;};
    void deleteMinorVersionItems() { this->minorVersionItems_ = nullptr;};
    inline const vector<DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems> & minorVersionItems() const { DARABONBA_PTR_GET_CONST(minorVersionItems_, vector<DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems>) };
    inline vector<DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems> minorVersionItems() { DARABONBA_PTR_GET(minorVersionItems_, vector<DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems>) };
    inline DescribeDBMiniEngineVersionsResponseBody& setMinorVersionItems(const vector<DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems> & minorVersionItems) { DARABONBA_PTR_SET_VALUE(minorVersionItems_, minorVersionItems) };
    inline DescribeDBMiniEngineVersionsResponseBody& setMinorVersionItems(vector<DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems> && minorVersionItems) { DARABONBA_PTR_SET_RVALUE(minorVersionItems_, minorVersionItems) };


    // pageNumbers Field Functions 
    bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
    void deletePageNumbers() { this->pageNumbers_ = nullptr;};
    inline int32_t pageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0) };
    inline DescribeDBMiniEngineVersionsResponseBody& setPageNumbers(int32_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBMiniEngineVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBMiniEngineVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxRecordsPerPage_ = nullptr;
    // The details of the minor engine version.
    std::shared_ptr<vector<DescribeDBMiniEngineVersionsResponseBodyMinorVersionItems>> minorVersionItems_ = nullptr;
    // The page number returned.
    std::shared_ptr<int32_t> pageNumbers_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
