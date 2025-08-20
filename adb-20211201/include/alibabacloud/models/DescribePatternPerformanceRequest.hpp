// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePatternPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PatternId, patternId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PatternId, patternId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribePatternPerformanceRequest() = default ;
    DescribePatternPerformanceRequest(const DescribePatternPerformanceRequest &) = default ;
    DescribePatternPerformanceRequest(DescribePatternPerformanceRequest &&) = default ;
    DescribePatternPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternPerformanceRequest() = default ;
    DescribePatternPerformanceRequest& operator=(const DescribePatternPerformanceRequest &) = default ;
    DescribePatternPerformanceRequest& operator=(DescribePatternPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->endTime_ != nullptr && this->patternId_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribePatternPerformanceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePatternPerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // patternId Field Functions 
    bool hasPatternId() const { return this->patternId_ != nullptr;};
    void deletePatternId() { this->patternId_ = nullptr;};
    inline string patternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
    inline DescribePatternPerformanceRequest& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePatternPerformanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePatternPerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the information about all AnalyticDB for MySQL clusters within a region, including cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The end of the time range to query. Specify the time in the *yyyy-MM-ddTHH:mmZ* format. The time must be in UTC.
    // 
    // > The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The SQL pattern ID.
    // 
    // >  You can call the [DescribeSQLPatterns](https://help.aliyun.com/document_detail/321868.html) operation to query the information about all SQL patterns in an AnalyticDB for MySQL cluster within a period of time, including SQL pattern IDs.
    std::shared_ptr<string> patternId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time must be in UTC.
    // 
    // > 
    // 
    // *   If the current date is August 22, 2022 (UTC+8), you can query the data of August 9, 2022 (2022-08-08T16:00:00Z) to the earliest extent. If you want to query the data that is earlier than August 9, 2022 (2022-08-08T16:00:00Z), null is returned.
    // 
    // *   The maximum time range that can be specified is 24 hours.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
