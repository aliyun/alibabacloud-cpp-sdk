// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobInstanceMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobInstanceMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeStep, timeStep_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobInstanceMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeStep, timeStep_);
    };
    ListTrainingJobInstanceMetricsRequest() = default ;
    ListTrainingJobInstanceMetricsRequest(const ListTrainingJobInstanceMetricsRequest &) = default ;
    ListTrainingJobInstanceMetricsRequest(ListTrainingJobInstanceMetricsRequest &&) = default ;
    ListTrainingJobInstanceMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobInstanceMetricsRequest() = default ;
    ListTrainingJobInstanceMetricsRequest& operator=(const ListTrainingJobInstanceMetricsRequest &) = default ;
    ListTrainingJobInstanceMetricsRequest& operator=(ListTrainingJobInstanceMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->metricType_ == nullptr && this->startTime_ == nullptr && this->timeStep_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTrainingJobInstanceMetricsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTrainingJobInstanceMetricsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ListTrainingJobInstanceMetricsRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTrainingJobInstanceMetricsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeStep Field Functions 
    bool hasTimeStep() const { return this->timeStep_ != nullptr;};
    void deleteTimeStep() { this->timeStep_ = nullptr;};
    inline string getTimeStep() const { DARABONBA_PTR_GET_DEFAULT(timeStep_, "") };
    inline ListTrainingJobInstanceMetricsRequest& setTimeStep(string timeStep) { DARABONBA_PTR_SET_VALUE(timeStep_, timeStep) };


  protected:
    // The end UTC time in ISO 8601 format. If left empty, the current time is used.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> endTime_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The metric type. Valid values:
    // - GpuCoreUsage: POD GPU utilization.
    // - GpuMemoryUsage: POD GPU memory utilization.
    // - CpuCoreUsage: POD CPU utilization.
    // - MemoryUsage: POD memory utilization.
    // - NetworkInputRate: POD network write rate (TCP/IP) (MB/s).
    // - NetworkOutputRate: POD network read rate (TCP/IP) (MB/s).
    // - DiskReadRate: POD disk read rate (MB/s).
    // - DiskWriteRate: POD disk write rate (MB/s).
    // 
    // This parameter is required.
    shared_ptr<string> metricType_ {};
    // The start UTC time in ISO 8601 format. If left empty, the job start time is used.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> startTime_ {};
    // The metric collection interval. Valid values: 1h, 30m, 5m, and 10s. h indicates hours, m indicates minutes, and s indicates seconds.
    shared_ptr<string> timeStep_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
