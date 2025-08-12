// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMPROMETHEUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMPROMETHEUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PromQL, promQL_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus(const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus(DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus &&) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& operator=(const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& operator=(DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->annotations_ != nullptr
        && this->level_ != nullptr && this->promQL_ != nullptr && this->times_ != nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations) };
    inline Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations annotations() { DARABONBA_PTR_GET(annotations_, Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& setAnnotations(const Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& setAnnotations(Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // promQL Field Functions 
    bool hasPromQL() const { return this->promQL_ != nullptr;};
    void deletePromQL() { this->promQL_ = nullptr;};
    inline string promQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int64_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0L) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheus& setTimes(int64_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // The annotations of the Prometheus alert rule. When a Prometheus alert is triggered, the system renders the annotated keys and values to help you understand the metrics and alert rule.
    // 
    // >  This parameter is equivalent to the annotations parameter of open source Prometheus.
    std::shared_ptr<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations> annotations_ = nullptr;
    // The alert level. Valid values:
    // 
    // *   CRITICAL
    // *   WARN
    // *   INFO
    std::shared_ptr<string> level_ = nullptr;
    // The PromQL query statement.
    // 
    // >  The data obtained by using the PromQL query statement is the monitoring data. You must include the alert threshold in this statement.
    std::shared_ptr<string> promQL_ = nullptr;
    // The number of consecutive triggers. If the number of times that the metric values meet the trigger conditions reaches the value of this parameter, CloudMonitor sends alert notifications.
    std::shared_ptr<int64_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
