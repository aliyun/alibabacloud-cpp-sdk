// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarm.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListResponseBodyAlarms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBodyAlarms& obj) { 
      DARABONBA_PTR_TO_JSON(Alarm, alarm_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBodyAlarms& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarm, alarm_);
    };
    DescribeMetricRuleListResponseBodyAlarms() = default ;
    DescribeMetricRuleListResponseBodyAlarms(const DescribeMetricRuleListResponseBodyAlarms &) = default ;
    DescribeMetricRuleListResponseBodyAlarms(DescribeMetricRuleListResponseBodyAlarms &&) = default ;
    DescribeMetricRuleListResponseBodyAlarms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBodyAlarms() = default ;
    DescribeMetricRuleListResponseBodyAlarms& operator=(const DescribeMetricRuleListResponseBodyAlarms &) = default ;
    DescribeMetricRuleListResponseBodyAlarms& operator=(DescribeMetricRuleListResponseBodyAlarms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarm_ != nullptr; };
    // alarm Field Functions 
    bool hasAlarm() const { return this->alarm_ != nullptr;};
    void deleteAlarm() { this->alarm_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarm> & alarm() const { DARABONBA_PTR_GET_CONST(alarm_, vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarm>) };
    inline vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarm> alarm() { DARABONBA_PTR_GET(alarm_, vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarm>) };
    inline DescribeMetricRuleListResponseBodyAlarms& setAlarm(const vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarm> & alarm) { DARABONBA_PTR_SET_VALUE(alarm_, alarm) };
    inline DescribeMetricRuleListResponseBodyAlarms& setAlarm(vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarm> && alarm) { DARABONBA_PTR_SET_RVALUE(alarm_, alarm) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarm>> alarm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
