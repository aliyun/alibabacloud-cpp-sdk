// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CURSORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CURSORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Matcher.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CursorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CursorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Matchers, matchers_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CursorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Matchers, matchers_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CursorRequest() = default ;
    CursorRequest(const CursorRequest &) = default ;
    CursorRequest(CursorRequest &&) = default ;
    CursorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CursorRequest() = default ;
    CursorRequest& operator=(const CursorRequest &) = default ;
    CursorRequest& operator=(CursorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->matchers_ != nullptr && this->metric_ != nullptr && this->namespace_ != nullptr && this->period_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CursorRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // matchers Field Functions 
    bool hasMatchers() const { return this->matchers_ != nullptr;};
    void deleteMatchers() { this->matchers_ = nullptr;};
    inline const vector<Matcher> & matchers() const { DARABONBA_PTR_GET_CONST(matchers_, vector<Matcher>) };
    inline vector<Matcher> matchers() { DARABONBA_PTR_GET(matchers_, vector<Matcher>) };
    inline CursorRequest& setMatchers(const vector<Matcher> & matchers) { DARABONBA_PTR_SET_VALUE(matchers_, matchers) };
    inline CursorRequest& setMatchers(vector<Matcher> && matchers) { DARABONBA_PTR_SET_RVALUE(matchers_, matchers) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline CursorRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CursorRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CursorRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CursorRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query.
    // 
    // Unit: milliseconds.
    // 
    // > 
    // 
    // *   This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. For example, 2023-01-01T00:00:00Z indicates January 1, 2023, 00:00:00 UTC.
    // 
    // *   If you do not set the end time, the end time is infinite. You can leave this parameter empty in real-time export scenarios.
    // *   In CloudMonitor, the TTL of monitoring data varies with the time granularity. Specify a proper time interval based on the TTL corresponding to the value of the `Period` parameter.
    std::shared_ptr<string> endTime_ = nullptr;
    // The dimension information of the metric.
    std::shared_ptr<vector<Matcher>> matchers_ = nullptr;
    // The metric that is used to monitor the cloud service.
    // 
    // For more information about the metrics of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metric_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The time interval based on which the metric value is measured.
    // 
    // Unit: seconds.
    // 
    // >  Generally, the time interval is 60 seconds. For more information about specific values, see the `Period` parameter in [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. For example, 2023-01-01T00:00:00Z indicates January 1, 2023, 00:00:00 UTC.
    // 
    // >  In CloudMonitor, the TTL of monitoring data varies with the time granularity. Specify a proper time interval based on the TTL corresponding to the value of the `Period` parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
