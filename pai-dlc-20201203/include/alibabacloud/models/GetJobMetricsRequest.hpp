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
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->metricType_ == nullptr && this->startTime_ == nullptr && this->timeStep_ == nullptr && this->token_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetJobMetricsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline GetJobMetricsRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobMetricsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeStep Field Functions 
    bool hasTimeStep() const { return this->timeStep_ != nullptr;};
    void deleteTimeStep() { this->timeStep_ = nullptr;};
    inline string getTimeStep() const { DARABONBA_PTR_GET_DEFAULT(timeStep_, "") };
    inline GetJobMetricsRequest& setTimeStep(string timeStep) { DARABONBA_PTR_SET_VALUE(timeStep_, timeStep) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetJobMetricsRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The end time (UTC) of the time range for querying monitoring data. Default value: the current time.
    shared_ptr<string> endTime_ {};
    // The metric type of the monitoring data to query. Valid values:
    // 
    // - GpuCoreUsage: GPU utilization.
    // 
    // - GpuMemoryUsage: GPU memory usage.
    // 
    // - CpuCoreUsage: CPU utilization.
    // 
    // - MemoryUsage: memory usage.
    // 
    // - NetworkInputRate: network input rate.
    // 
    // - NetworkOutputRate: network output rate.
    // 
    // - DiskReadRate: disk read rate.
    // 
    // - DiskWriteRate: disk write rate.
    // 
    // This parameter is required.
    shared_ptr<string> metricType_ {};
    // The start time (UTC) of the time range for querying monitoring data. Default value: one hour before the current time.
    shared_ptr<string> startTime_ {};
    // The time interval at which monitoring data is returned. Default value: 5 minutes.
    shared_ptr<string> timeStep_ {};
    // The temporary token used for authentication.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
