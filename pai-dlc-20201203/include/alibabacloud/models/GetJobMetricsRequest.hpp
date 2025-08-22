// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeStep, timeStep_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeStep, timeStep_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetJobMetricsRequest() = default ;
    GetJobMetricsRequest(const GetJobMetricsRequest &) = default ;
    GetJobMetricsRequest(GetJobMetricsRequest &&) = default ;
    GetJobMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobMetricsRequest() = default ;
    GetJobMetricsRequest& operator=(const GetJobMetricsRequest &) = default ;
    GetJobMetricsRequest& operator=(GetJobMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->metricType_ != nullptr && this->startTime_ != nullptr && this->timeStep_ != nullptr && this->token_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetJobMetricsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline GetJobMetricsRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobMetricsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeStep Field Functions 
    bool hasTimeStep() const { return this->timeStep_ != nullptr;};
    void deleteTimeStep() { this->timeStep_ = nullptr;};
    inline string timeStep() const { DARABONBA_PTR_GET_DEFAULT(timeStep_, "") };
    inline GetJobMetricsRequest& setTimeStep(string timeStep) { DARABONBA_PTR_SET_VALUE(timeStep_, timeStep) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetJobMetricsRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The end time of the time range to query monitoring data. The time is displayed in UTC. The default value is the current time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The type of the monitoring metrics. Valid values:
    // 
    // *   GpuCoreUsage: GPU utilization
    // *   GpuMemoryUsage: GPU memory utilization
    // *   CpuCoreUsage: CPU utilization
    // *   MemoryUsage: memory utilization
    // *   NetworkInputRate: the network write in rate.
    // *   NetworkOutputRate: the network write out rate
    // *   DiskReadRate: the disk read rate
    // *   DiskWriteRate: the disk write rate
    // 
    // This parameter is required.
    std::shared_ptr<string> metricType_ = nullptr;
    // The beginning of the time range to query monitoring data. The time is displayed in UTC. The default value is the time 1 hour before the current time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The interval at which monitoring data is returned. Default value: 5. Unit: minutes.
    std::shared_ptr<string> timeStep_ = nullptr;
    // The temporary token used for authentication.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
