// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkSQLDiagnosisListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkSQLDiagnosisListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(MaxStartTime, maxStartTime_);
      DARABONBA_PTR_TO_JSON(MinStartTime, minStartTime_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkSQLDiagnosisListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(MaxStartTime, maxStartTime_);
      DARABONBA_PTR_FROM_JSON(MinStartTime, minStartTime_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
    };
    DescribeSparkSQLDiagnosisListRequest() = default ;
    DescribeSparkSQLDiagnosisListRequest(const DescribeSparkSQLDiagnosisListRequest &) = default ;
    DescribeSparkSQLDiagnosisListRequest(DescribeSparkSQLDiagnosisListRequest &&) = default ;
    DescribeSparkSQLDiagnosisListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkSQLDiagnosisListRequest() = default ;
    DescribeSparkSQLDiagnosisListRequest& operator=(const DescribeSparkSQLDiagnosisListRequest &) = default ;
    DescribeSparkSQLDiagnosisListRequest& operator=(DescribeSparkSQLDiagnosisListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->maxStartTime_ != nullptr && this->minStartTime_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->statementId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSparkSQLDiagnosisListRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // maxStartTime Field Functions 
    bool hasMaxStartTime() const { return this->maxStartTime_ != nullptr;};
    void deleteMaxStartTime() { this->maxStartTime_ = nullptr;};
    inline string maxStartTime() const { DARABONBA_PTR_GET_DEFAULT(maxStartTime_, "") };
    inline DescribeSparkSQLDiagnosisListRequest& setMaxStartTime(string maxStartTime) { DARABONBA_PTR_SET_VALUE(maxStartTime_, maxStartTime) };


    // minStartTime Field Functions 
    bool hasMinStartTime() const { return this->minStartTime_ != nullptr;};
    void deleteMinStartTime() { this->minStartTime_ = nullptr;};
    inline string minStartTime() const { DARABONBA_PTR_GET_DEFAULT(minStartTime_, "") };
    inline DescribeSparkSQLDiagnosisListRequest& setMinStartTime(string minStartTime) { DARABONBA_PTR_SET_VALUE(minStartTime_, minStartTime) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeSparkSQLDiagnosisListRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSparkSQLDiagnosisListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSparkSQLDiagnosisListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSparkSQLDiagnosisListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline int64_t statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, 0L) };
    inline DescribeSparkSQLDiagnosisListRequest& setStatementId(int64_t statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the information about all AnalyticDB for MySQL Data Lakehouse Edition clusters within a region, including cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The latest start time.
    std::shared_ptr<string> maxStartTime_ = nullptr;
    // The earliest start time.
    std::shared_ptr<string> minStartTime_ = nullptr;
    // The order by which to sort query results. Specify the parameter value in the JSON format. Example: `[{"Field":"MaxExclusiveTime","Type":"Asc"}]`.
    // 
    // *   `Field` specifies the field by which to sort the query results. Valid values:
    // 
    //     *   `MaxExclusiveTime`: the maximum execution duration.
    //     *   `PeakMemory`: the peak memory.
    //     *   `QueryStartTime`: the start time of the query.
    //     *   `QueryWallclockTime`: the execution duration of the query.
    // 
    // *   `Type` specifies the sorting order. Valid values:
    // 
    //     *   `Asc`: ascending order.
    //     *   `Desc`: descending order.
    // 
    // > 
    // 
    // *   If you do not specify this parameter, query results are sorted by `MaxExclusiveTime` in ascending order.
    std::shared_ptr<string> order_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The unique ID of the code block in the Spark job.
    std::shared_ptr<int64_t> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
