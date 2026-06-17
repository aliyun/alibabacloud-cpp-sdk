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
    // The end of the time range to query.
    // 
    // Unit: milliseconds.
    // 
    // > - Unix timestamp: the number of milliseconds that have elapsed since 00:00:00 on January 1, 1970. The value is in the YYYY-MM-DDThh:mm:ssZ format. For example, 2023-01-01T00:00:00Z indicates 00:00:00 on January 1, 2023 (GMT).
    // - If you do not specify an end time, the end time is unlimited. You do not need to specify this parameter when you export data in real time.
    // - The time to live (TTL) of monitoring data varies based on the statistical granularity in CloudMonitor. Configure a proper time range based on the TTL of the data that corresponds to the `Period` parameter.
    shared_ptr<string> endTime_ {};
    // The dimension information of the metric.
    shared_ptr<string> matchersShrink_ {};
    // The metric name of the cloud service.
    // 
    // For information about how to obtain the metric name of a cloud service, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> metric_ {};
    // The data namespace of the cloud service.
    // 
    // For information about how to obtain the data namespace of a cloud service, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The statistical period of the metric.
    // 
    // Unit: seconds.
    // 
    // > The statistical period of a metric is typically 60 seconds. For special values, see the `Period` parameter in [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The beginning of the time range to query.
    // 
    // The value is in the YYYY-MM-DDThh:mm:ssZ format. For example, 2023-01-01T00:00:00Z indicates 00:00:00 on January 1, 2023 (GMT).
    // 
    // > The time to live (TTL) of monitoring data varies based on the statistical granularity in CloudMonitor. Configure a proper time range based on the TTL of the data that corresponds to the `Period` parameter.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
