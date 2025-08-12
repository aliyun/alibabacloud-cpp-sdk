// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMLABELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMLABELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmLabelsLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListResponseBodyAlarmsAlarmLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBodyAlarmsAlarmLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBodyAlarmsAlarmLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    DescribeMetricRuleListResponseBodyAlarmsAlarmLabels() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmLabels(const DescribeMetricRuleListResponseBodyAlarmsAlarmLabels &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmLabels(DescribeMetricRuleListResponseBodyAlarmsAlarmLabels &&) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBodyAlarmsAlarmLabels() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmLabels& operator=(const DescribeMetricRuleListResponseBodyAlarmsAlarmLabels &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmLabels& operator=(DescribeMetricRuleListResponseBodyAlarmsAlarmLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabelsLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabelsLabels>) };
    inline vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabelsLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabelsLabels>) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmLabels& setLabels(const vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabelsLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmLabels& setLabels(vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabelsLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmLabelsLabels>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
