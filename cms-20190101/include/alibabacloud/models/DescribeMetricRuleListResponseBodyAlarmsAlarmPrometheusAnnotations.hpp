// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMPROMETHEUSANNOTATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMPROMETHEUSANNOTATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
    };
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations(const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations(DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations &&) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations& operator=(const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations& operator=(DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations>) };
    inline vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations>) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations& setAnnotations(const vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotations& setAnnotations(vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations>> annotations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
