// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYDATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODYDATAPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeActiveMetricRuleListResponseBodyDatapointsAlarm.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeActiveMetricRuleListResponseBodyDatapoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveMetricRuleListResponseBodyDatapoints& obj) { 
      DARABONBA_PTR_TO_JSON(Alarm, alarm_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveMetricRuleListResponseBodyDatapoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarm, alarm_);
    };
    DescribeActiveMetricRuleListResponseBodyDatapoints() = default ;
    DescribeActiveMetricRuleListResponseBodyDatapoints(const DescribeActiveMetricRuleListResponseBodyDatapoints &) = default ;
    DescribeActiveMetricRuleListResponseBodyDatapoints(DescribeActiveMetricRuleListResponseBodyDatapoints &&) = default ;
    DescribeActiveMetricRuleListResponseBodyDatapoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveMetricRuleListResponseBodyDatapoints() = default ;
    DescribeActiveMetricRuleListResponseBodyDatapoints& operator=(const DescribeActiveMetricRuleListResponseBodyDatapoints &) = default ;
    DescribeActiveMetricRuleListResponseBodyDatapoints& operator=(DescribeActiveMetricRuleListResponseBodyDatapoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarm_ == nullptr; };
    // alarm Field Functions 
    bool hasAlarm() const { return this->alarm_ != nullptr;};
    void deleteAlarm() { this->alarm_ = nullptr;};
    inline const vector<Models::DescribeActiveMetricRuleListResponseBodyDatapointsAlarm> & alarm() const { DARABONBA_PTR_GET_CONST(alarm_, vector<Models::DescribeActiveMetricRuleListResponseBodyDatapointsAlarm>) };
    inline vector<Models::DescribeActiveMetricRuleListResponseBodyDatapointsAlarm> alarm() { DARABONBA_PTR_GET(alarm_, vector<Models::DescribeActiveMetricRuleListResponseBodyDatapointsAlarm>) };
    inline DescribeActiveMetricRuleListResponseBodyDatapoints& setAlarm(const vector<Models::DescribeActiveMetricRuleListResponseBodyDatapointsAlarm> & alarm) { DARABONBA_PTR_SET_VALUE(alarm_, alarm) };
    inline DescribeActiveMetricRuleListResponseBodyDatapoints& setAlarm(vector<Models::DescribeActiveMetricRuleListResponseBodyDatapointsAlarm> && alarm) { DARABONBA_PTR_SET_RVALUE(alarm_, alarm) };


  protected:
    std::shared_ptr<vector<Models::DescribeActiveMetricRuleListResponseBodyDatapointsAlarm>> alarm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
