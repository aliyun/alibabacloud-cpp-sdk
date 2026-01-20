// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSlowLogRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingGroupId, computingGroupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSlowLogRecordsRequest() = default ;
    DescribeSlowLogRecordsRequest(const DescribeSlowLogRecordsRequest &) = default ;
    DescribeSlowLogRecordsRequest(DescribeSlowLogRecordsRequest &&) = default ;
    DescribeSlowLogRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsRequest() = default ;
    DescribeSlowLogRecordsRequest& operator=(const DescribeSlowLogRecordsRequest &) = default ;
    DescribeSlowLogRecordsRequest& operator=(DescribeSlowLogRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingGroupId_ == nullptr
        && this->DBInstanceId_ == nullptr && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryDurationMs_ == nullptr
        && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // computingGroupId Field Functions 
    bool hasComputingGroupId() const { return this->computingGroupId_ != nullptr;};
    void deleteComputingGroupId() { this->computingGroupId_ = nullptr;};
    inline string getComputingGroupId() const { DARABONBA_PTR_GET_DEFAULT(computingGroupId_, "") };
    inline DescribeSlowLogRecordsRequest& setComputingGroupId(string computingGroupId) { DARABONBA_PTR_SET_VALUE(computingGroupId_, computingGroupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSlowLogRecordsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSlowLogRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSlowLogRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSlowLogRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryDurationMs Field Functions 
    bool hasQueryDurationMs() const { return this->queryDurationMs_ != nullptr;};
    void deleteQueryDurationMs() { this->queryDurationMs_ = nullptr;};
    inline string getQueryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(queryDurationMs_, "") };
    inline DescribeSlowLogRecordsRequest& setQueryDurationMs(string queryDurationMs) { DARABONBA_PTR_SET_VALUE(queryDurationMs_, queryDurationMs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSlowLogRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSlowLogRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> computingGroupId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The end of the time range to query. Specify the time in the yyyy-MM-dd hh:mm:ss format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // *   30 (default)
    // *   50
    // *   100
    shared_ptr<int32_t> pageSize_ {};
    // The execution duration of slow SQL queries. Minimum value: **1000**. Unit: milliseconds.
    shared_ptr<string> queryDurationMs_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The beginning of the time range to query. Specify the time in the yyyy-MM-dd hh:mm:ss format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
