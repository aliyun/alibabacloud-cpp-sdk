// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CURSORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CURSORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CursorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CursorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Matchers, matchersShrink_);
      DARABONBA_PTR_TO_JSON(Metric, metric_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CursorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Matchers, matchersShrink_);
      DARABONBA_PTR_FROM_JSON(Metric, metric_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CursorShrinkRequest() = default ;
    CursorShrinkRequest(const CursorShrinkRequest &) = default ;
    CursorShrinkRequest(CursorShrinkRequest &&) = default ;
    CursorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CursorShrinkRequest() = default ;
    CursorShrinkRequest& operator=(const CursorShrinkRequest &) = default ;
    CursorShrinkRequest& operator=(CursorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->matchersShrink_ == nullptr && this->metric_ == nullptr && this->namespace_ == nullptr && this->period_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CursorShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // matchersShrink Field Functions 
    bool hasMatchersShrink() const { return this->matchersShrink_ != nullptr;};
    void deleteMatchersShrink() { this->matchersShrink_ = nullptr;};
    inline string getMatchersShrink() const { DARABONBA_PTR_GET_DEFAULT(matchersShrink_, "") };
    inline CursorShrinkRequest& setMatchersShrink(string matchersShrink) { DARABONBA_PTR_SET_VALUE(matchersShrink_, matchersShrink) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline CursorShrinkRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CursorShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CursorShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CursorShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end timestamp.
    // 
    // Unit: milliseconds.
    // 
    // > - UNIX timestamp: the number of milliseconds that have elapsed since January 1, 1970. The format YYYY-MM-DDThh:mm:ssZ is supported. Example: 2023-01-01T00:00:00Z, which specifies 00:00:00 on January 1, 2023 (GMT).
    // - If you do not specify the end time, the end time is considered infinite. In real-time export scenarios, you can leave this parameter empty.
    // - The TTL of monitoring data in CloudMonitor varies with the time granularity. Refer to the data TTL corresponding to the Period request parameter to set a reasonable time interval.
    shared_ptr<string> endTime_ {};
    // The dimension information of the metric.
    shared_ptr<string> matchersShrink_ {};
    // The name of the metric for the cloud service.
    // 
    // For more information about how to obtain the metric name of a cloud service, see [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // The data namespace of the cloud service.
    // 
    // For more information about how to obtain the data namespace of a cloud service, see [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The time interval of the metric.
    // 
    // Unit: seconds.
    // 
    // > The time interval of a metric is typically 60 seconds. For special values, see the Period parameter in [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The start timestamp.
    // 
    // The format YYYY-MM-DDThh:mm:ssZ is supported. Example: 2023-01-01T00:00:00Z, which specifies 00:00:00 on January 1, 2023 (GMT).
    // 
    // > The time-to-live (TTL) of monitoring data in CloudMonitor varies with the time granularity. Refer to the data TTL corresponding to the Period request parameter to set a reasonable time interval.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
