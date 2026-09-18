// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNCOMPAREREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNCOMPAREREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSqlPatternCompareReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlPatternCompareReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlPatternCompareReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeSqlPatternCompareReportsRequest() = default ;
    DescribeSqlPatternCompareReportsRequest(const DescribeSqlPatternCompareReportsRequest &) = default ;
    DescribeSqlPatternCompareReportsRequest(DescribeSqlPatternCompareReportsRequest &&) = default ;
    DescribeSqlPatternCompareReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlPatternCompareReportsRequest() = default ;
    DescribeSqlPatternCompareReportsRequest& operator=(const DescribeSqlPatternCompareReportsRequest &) = default ;
    DescribeSqlPatternCompareReportsRequest& operator=(DescribeSqlPatternCompareReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSqlPatternCompareReportsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSqlPatternCompareReportsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSqlPatternCompareReportsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeSqlPatternCompareReportsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSqlPatternCompareReportsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSqlPatternCompareReportsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSqlPatternCompareReportsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the AnalyticDB for MySQL instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The number of rows per page for token-based pagination. Valid values: 1 to 100.
    // 
    // Default value: 50.
    // 
    // > - When you use `NextToken` for pagination, keep this parameter unchanged.
    // > - This parameter does not take effect when you use `PageNumber` and `PageSize` for pagination.
    // > - We recommend that you use `PageNumber` and `PageSize` for pagination.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page.
    // 
    // > - Do not specify this parameter for the first query. For subsequent queries, pass in the `NextToken` value returned by the previous query.
    // > - Do not use this parameter together with `PageNumber` or `PageSize`.
    // > - Use `PageNumber` and `PageSize` for pagination.
    shared_ptr<string> nextToken_ {};
    // Sorts the query results by a specified field. The value is a JSON array string, for example, `[{"Field":"CreatedAt","Type":"Desc"}]`. The array can contain only one object. Fields:
    // 
    // - `Field`: the field by which to sort. Valid values:
    //     - `CreatedAt`: the time when the report was created.
    //     - `StartTime`: the start time of time range 1.
    //     - `CompareStartTime`: the start time of time range 2.
    // - `Type`: the sort order. This value is case-insensitive. Valid values:
    //     - `Asc`: ascending order.
    //     - `Desc`: descending order.
    // 
    // > If you do not specify this parameter, the results are sorted by `CreatedAt` in descending order by default.
    shared_ptr<string> order_ {};
    // The page number. Pages start from 1.
    // 
    // Default value: 1.
    // 
    // > Use this parameter together with `PageSize`. If you specify this parameter, `NextToken` must be empty.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of rows per page. Valid values: 1 to 100.
    // 
    // Default value: 50.
    // 
    // > Use this parameter together with `PageNumber`. If you specify this parameter, `NextToken` must be empty.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
