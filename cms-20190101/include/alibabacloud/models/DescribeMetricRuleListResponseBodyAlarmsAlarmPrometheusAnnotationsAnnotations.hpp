// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMPROMETHEUSANNOTATIONSANNOTATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMPROMETHEUSANNOTATIONSANNOTATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations(const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations(DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations &&) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations& operator=(const DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations& operator=(DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmPrometheusAnnotationsAnnotations& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the annotation.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the annotation.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
