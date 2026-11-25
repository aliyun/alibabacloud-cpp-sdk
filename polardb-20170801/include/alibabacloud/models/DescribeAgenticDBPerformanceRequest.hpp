// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAgenticDBPerformanceRequest() = default ;
    DescribeAgenticDBPerformanceRequest(const DescribeAgenticDBPerformanceRequest &) = default ;
    DescribeAgenticDBPerformanceRequest(DescribeAgenticDBPerformanceRequest &&) = default ;
    DescribeAgenticDBPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBPerformanceRequest() = default ;
    DescribeAgenticDBPerformanceRequest& operator=(const DescribeAgenticDBPerformanceRequest &) = default ;
    DescribeAgenticDBPerformanceRequest& operator=(DescribeAgenticDBPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregate_ == nullptr
        && this->branchId_ == nullptr && this->DBClusterId_ == nullptr && this->endTime_ == nullptr && this->endpointId_ == nullptr && this->interval_ == nullptr
        && this->key_ == nullptr && this->startTime_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline bool getAggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, false) };
    inline DescribeAgenticDBPerformanceRequest& setAggregate(bool aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline DescribeAgenticDBPerformanceRequest& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAgenticDBPerformanceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAgenticDBPerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DescribeAgenticDBPerformanceRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeAgenticDBPerformanceRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeAgenticDBPerformanceRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAgenticDBPerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The alert aggregation method. Valid values vary by metric:
    // - Value: The value of the HTTP status code.
    // - Average: The average HTTP wait time.
    // - Value: The value of the Telnet status code.
    // - TelnetLatency: The average Telnet wait time.
    // - Average: The average ping packet loss rate.
    shared_ptr<bool> aggregate_ {};
    // The anchor branch ID. If you do not specify this parameter, the main branch of the project is used by default.
    shared_ptr<string> branchId_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The end time of the query. Specify the time in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The endpoint ID.
    shared_ptr<string> endpointId_ {};
    // The granularity of performance data. Valid values:
    // 
    // - 5
    // - 30
    // - 60
    // - 600
    // - 1800
    // - 3600
    // - 86400
    shared_ptr<string> interval_ {};
    // The performance metrics to query. Separate multiple values with commas (,).
    // Note
    // You can specify up to 5 performance metrics.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The start time of the query. Specify the time in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
