// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUESTPROMETHEUS_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUESTPROMETHEUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutResourceMetricRuleRequestPrometheusAnnotations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRuleRequestPrometheus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRuleRequestPrometheus& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PromQL, promQL_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleRequestPrometheus& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    PutResourceMetricRuleRequestPrometheus() = default ;
    PutResourceMetricRuleRequestPrometheus(const PutResourceMetricRuleRequestPrometheus &) = default ;
    PutResourceMetricRuleRequestPrometheus(PutResourceMetricRuleRequestPrometheus &&) = default ;
    PutResourceMetricRuleRequestPrometheus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRuleRequestPrometheus() = default ;
    PutResourceMetricRuleRequestPrometheus& operator=(const PutResourceMetricRuleRequestPrometheus &) = default ;
    PutResourceMetricRuleRequestPrometheus& operator=(PutResourceMetricRuleRequestPrometheus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->annotations_ != nullptr
        && this->level_ != nullptr && this->promQL_ != nullptr && this->times_ != nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<Models::PutResourceMetricRuleRequestPrometheusAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Models::PutResourceMetricRuleRequestPrometheusAnnotations>) };
    inline vector<Models::PutResourceMetricRuleRequestPrometheusAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<Models::PutResourceMetricRuleRequestPrometheusAnnotations>) };
    inline PutResourceMetricRuleRequestPrometheus& setAnnotations(const vector<Models::PutResourceMetricRuleRequestPrometheusAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline PutResourceMetricRuleRequestPrometheus& setAnnotations(vector<Models::PutResourceMetricRuleRequestPrometheusAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PutResourceMetricRuleRequestPrometheus& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // promQL Field Functions 
    bool hasPromQL() const { return this->promQL_ != nullptr;};
    void deletePromQL() { this->promQL_ = nullptr;};
    inline string promQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
    inline PutResourceMetricRuleRequestPrometheus& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline PutResourceMetricRuleRequestPrometheus& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // The annotations of the Prometheus alert rule. When a Prometheus alert is triggered, the system renders the annotated keys and values to help you understand the metrics and alert rule.
    // 
    // >  This parameter is equivalent to the annotations parameter of open source Prometheus.
    std::shared_ptr<vector<Models::PutResourceMetricRuleRequestPrometheusAnnotations>> annotations_ = nullptr;
    // The alert level. Valid values:
    // 
    // *   Critical
    // *   Warn
    // *   Info
    std::shared_ptr<string> level_ = nullptr;
    // PromQL statements are supported.
    // 
    // >  The data obtained by using the PromQL query statement is the monitoring data. You must include the alert threshold in this statement.
    std::shared_ptr<string> promQL_ = nullptr;
    // The number of consecutive triggers. If the number of times that the metric values meet the trigger conditions reaches the value of this parameter, CloudMonitor sends alert notifications.
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
