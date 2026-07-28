// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWQUERYSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWQUERYSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeSlowQueryStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowQueryStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(ThresholdMs, thresholdMs_);
      DARABONBA_PTR_TO_JSON(TopN, topN_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowQueryStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(ThresholdMs, thresholdMs_);
      DARABONBA_PTR_FROM_JSON(TopN, topN_);
    };
    DescribeSlowQueryStatsRequest() = default ;
    DescribeSlowQueryStatsRequest(const DescribeSlowQueryStatsRequest &) = default ;
    DescribeSlowQueryStatsRequest(DescribeSlowQueryStatsRequest &&) = default ;
    DescribeSlowQueryStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowQueryStatsRequest() = default ;
    DescribeSlowQueryStatsRequest& operator=(const DescribeSlowQueryStatsRequest &) = default ;
    DescribeSlowQueryStatsRequest& operator=(DescribeSlowQueryStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr && this->thresholdMs_ == nullptr && this->topN_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSlowQueryStatsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSlowQueryStatsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSlowQueryStatsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSlowQueryStatsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // thresholdMs Field Functions 
    bool hasThresholdMs() const { return this->thresholdMs_ != nullptr;};
    void deleteThresholdMs() { this->thresholdMs_ = nullptr;};
    inline int64_t getThresholdMs() const { DARABONBA_PTR_GET_DEFAULT(thresholdMs_, 0L) };
    inline DescribeSlowQueryStatsRequest& setThresholdMs(int64_t thresholdMs) { DARABONBA_PTR_SET_VALUE(thresholdMs_, thresholdMs) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline DescribeSlowQueryStatsRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The end time. Must be later than the start time. Defaults to the current time.
    shared_ptr<string> endTime_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The start time. Defaults to 24 hours before the current time.
    shared_ptr<string> startTime_ {};
    // The slow query threshold, in milliseconds. The default value is 5000.
    shared_ptr<int64_t> thresholdMs_ {};
    // The number of top slow queries to return. The default value is 10.
    shared_ptr<int32_t> topN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
