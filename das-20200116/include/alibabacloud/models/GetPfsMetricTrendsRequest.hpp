// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPFSMETRICTRENDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPFSMETRICTRENDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetPfsMetricTrendsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPfsMetricTrendsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPfsMetricTrendsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetPfsMetricTrendsRequest() = default ;
    GetPfsMetricTrendsRequest(const GetPfsMetricTrendsRequest &) = default ;
    GetPfsMetricTrendsRequest(GetPfsMetricTrendsRequest &&) = default ;
    GetPfsMetricTrendsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPfsMetricTrendsRequest() = default ;
    GetPfsMetricTrendsRequest& operator=(const GetPfsMetricTrendsRequest &) = default ;
    GetPfsMetricTrendsRequest& operator=(GetPfsMetricTrendsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->metric_ == nullptr && this->nodeId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetPfsMetricTrendsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetPfsMetricTrendsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline GetPfsMetricTrendsRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetPfsMetricTrendsRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetPfsMetricTrendsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time. You can view the data of up to seven days in the previous 30 days.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The metric whose trend you want to query. Valid values:
    // 
    // *   **count**: the number of executions.
    // *   **avgRt**: the average execution duration.
    // *   **rtRate**: the execution duration percentage.
    // *   **rowsExamined**: the total number of scanned rows.
    shared_ptr<string> metric_ {};
    // The node ID.
    // 
    // >  This parameter is required if the database instance is an ApsaraDB RDS for MySQL Cluster Edition instance or a PolarDB for MySQL clusters.
    shared_ptr<string> nodeId_ {};
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
