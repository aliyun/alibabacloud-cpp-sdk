// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAIDBClusterPerformanceRequest() = default ;
    DescribeAIDBClusterPerformanceRequest(const DescribeAIDBClusterPerformanceRequest &) = default ;
    DescribeAIDBClusterPerformanceRequest(DescribeAIDBClusterPerformanceRequest &&) = default ;
    DescribeAIDBClusterPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterPerformanceRequest() = default ;
    DescribeAIDBClusterPerformanceRequest& operator=(const DescribeAIDBClusterPerformanceRequest &) = default ;
    DescribeAIDBClusterPerformanceRequest& operator=(DescribeAIDBClusterPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->key_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClusterPerformanceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAIDBClusterPerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeAIDBClusterPerformanceRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeAIDBClusterPerformanceRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAIDBClusterPerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cluster ID.
    // 
    // > Call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of all clusters under your account, including the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the `YYYY-MM-DDThh:mmZ` format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The time granularity of the data to retrieve. Valid values: **60** (minutes) and **3600** (hours).
    // 
    // - If you set **Interval** to **60**, you can query data from the last month. The maximum time range for a single query is 7 days.
    // - If you set **Interval** to **3600**, you can query data from the last month. The maximum time range for a single query is 7 days.
    shared_ptr<string> interval_ {};
    // The name of the metric.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The beginning of the time range to query. Specify the time in the `YYYY-MM-DDThh:mmZ` format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
