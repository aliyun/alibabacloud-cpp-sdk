// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSqlPatternRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlPatternRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SqlPattern, sqlPattern_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlPatternRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SqlPattern, sqlPattern_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSqlPatternRequest() = default ;
    DescribeSqlPatternRequest(const DescribeSqlPatternRequest &) = default ;
    DescribeSqlPatternRequest(DescribeSqlPatternRequest &&) = default ;
    DescribeSqlPatternRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlPatternRequest() = default ;
    DescribeSqlPatternRequest& operator=(const DescribeSqlPatternRequest &) = default ;
    DescribeSqlPatternRequest& operator=(DescribeSqlPatternRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->sqlPattern_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSqlPatternRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeSqlPatternRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSqlPatternRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSqlPatternRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSqlPatternRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sqlPattern Field Functions 
    bool hasSqlPattern() const { return this->sqlPattern_ != nullptr;};
    void deleteSqlPattern() { this->sqlPattern_ = nullptr;};
    inline string getSqlPattern() const { DARABONBA_PTR_GET_DEFAULT(sqlPattern_, "") };
    inline DescribeSqlPatternRequest& setSqlPattern(string sqlPattern) { DARABONBA_PTR_SET_VALUE(sqlPattern_, sqlPattern) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSqlPatternRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSqlPatternRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cluster ID.
    // > You can call the DescribeDBClusters operation to query the IDs of all clusters in a specified region.
    // [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html)
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies the sorting of query results by a specified field. The format is a JSON character string, such as `[{"Field":"Pattern","Type":"Asc"}]`. Parameters:
    // - Field: the sorting field. Valid values:
    //     - Pattern: SQL pattern.
    //     - AccessIP: client IP address.
    //     - User: username.
    //     - QueryCount: total number of queries.
    //     - AvgPeakMemory: average peak memory. Unit: KB.
    //     - MaxPeakMemory: Peak Volume memory. Unit: KB.
    //     - AvgCpuTime: average computing duration. Unit: milliseconds.
    //     - MaxCpuTime: maximum computing duration. Unit: milliseconds.
    //     - AvgStageCount: average number of stages.
    //     - MaxStageCount: maximum number of stages.
    //     - AvgTaskCount: average number of tasks.
    //     - MaxTaskCount: maximum number of tasks.
    //     - AvgScanSize: average scan size. Unit: KB.
    //     - MaxScanSize: maximum scan size. Unit: KB.
    // 
    // - Type: the sorting method. Valid values:
    //     - Asc: ascending sorting.
    //     - Desc: descending sorting.
    // 
    // > - If no Settings are specified for this parameter, the results are sorted in ascending order by the Pattern field by default.
    // - To perform sorting by the AccessIP field, you must set the Type parameter to accessip. To perform sorting by the User field, you must leave the Type parameter empty or set it to user.
    shared_ptr<string> order_ {};
    // The page number. Valid values: integers greater than 0 and no greater than the maximum value of the Integer type.
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // - **10** (default)
    // - **30**
    // - **50**
    // - **100**
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The keyword that the SQL pattern must contain.
    // > If this parameter is not specified, the details of all SQL patterns for the cluster on the date specified by the StartTime parameter are returned by default.
    shared_ptr<string> sqlPattern_ {};
    // The start date of the query. The time is in UTC and formatted as yyyy-MM-dd.
    // > You can only query data within the last 30 days.
    shared_ptr<string> startTime_ {};
    // Aggregates SQL patterns by a specified dimension. Valid values:
    //  - user: aggregates by user.
    //  - accessip: aggregates by access IP address.
    // 
    // > If this parameter is not specified, SQL patterns are aggregated by user by default.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
