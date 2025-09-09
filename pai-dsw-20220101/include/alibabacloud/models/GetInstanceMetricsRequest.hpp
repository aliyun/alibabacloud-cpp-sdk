// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeStep, timeStep_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeStep, timeStep_);
    };
    GetInstanceMetricsRequest() = default ;
    GetInstanceMetricsRequest(const GetInstanceMetricsRequest &) = default ;
    GetInstanceMetricsRequest(GetInstanceMetricsRequest &&) = default ;
    GetInstanceMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMetricsRequest() = default ;
    GetInstanceMetricsRequest& operator=(const GetInstanceMetricsRequest &) = default ;
    GetInstanceMetricsRequest& operator=(GetInstanceMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->metricType_ != nullptr && this->startTime_ != nullptr && this->timeStep_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetInstanceMetricsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline GetInstanceMetricsRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInstanceMetricsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeStep Field Functions 
    bool hasTimeStep() const { return this->timeStep_ != nullptr;};
    void deleteTimeStep() { this->timeStep_ = nullptr;};
    inline string timeStep() const { DARABONBA_PTR_GET_DEFAULT(timeStep_, "") };
    inline GetInstanceMetricsRequest& setTimeStep(string timeStep) { DARABONBA_PTR_SET_VALUE(timeStep_, timeStep) };


  protected:
    // The end of the time range to query.
    std::shared_ptr<string> endTime_ = nullptr;
    // The metric type. Valid values:
    // 
    // *   GpuCoreUsage: the GPU utilization.
    // *   GpuMemoryUsage: the GPU memory utilization.
    // *   CpuCoreUsage: the CPU utilization.
    // *   MemoryUsage: the memory utilization.
    // *   NetworkInputRate: the network ingress rate.
    // *   NetworkOutputRate: the network egress rate.
    // *   DiskReadRate: the disk read rate.
    // *   DiskWriteRate: the disk write rate.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricType_ = nullptr;
    // The beginning of the time range to query.
    std::shared_ptr<string> startTime_ = nullptr;
    // The interval at which metrics are returned. Unit: minutes.
    std::shared_ptr<string> timeStep_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
