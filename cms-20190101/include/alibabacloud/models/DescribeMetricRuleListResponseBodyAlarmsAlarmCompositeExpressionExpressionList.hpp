// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMCOMPOSITEEXPRESSIONEXPRESSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULELISTRESPONSEBODYALARMSALARMCOMPOSITEEXPRESSIONEXPRESSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionListExpressionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList& obj) { 
      DARABONBA_PTR_TO_JSON(ExpressionList, expressionList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpressionList, expressionList_);
    };
    DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList(const DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList(DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList &&) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList() = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList& operator=(const DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList &) = default ;
    DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList& operator=(DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expressionList_ != nullptr; };
    // expressionList Field Functions 
    bool hasExpressionList() const { return this->expressionList_ != nullptr;};
    void deleteExpressionList() { this->expressionList_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionListExpressionList> & expressionList() const { DARABONBA_PTR_GET_CONST(expressionList_, vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionListExpressionList>) };
    inline vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionListExpressionList> expressionList() { DARABONBA_PTR_GET(expressionList_, vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionListExpressionList>) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList& setExpressionList(const vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionListExpressionList> & expressionList) { DARABONBA_PTR_SET_VALUE(expressionList_, expressionList) };
    inline DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionList& setExpressionList(vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionListExpressionList> && expressionList) { DARABONBA_PTR_SET_RVALUE(expressionList_, expressionList) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricRuleListResponseBodyAlarmsAlarmCompositeExpressionExpressionListExpressionList>> expressionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
