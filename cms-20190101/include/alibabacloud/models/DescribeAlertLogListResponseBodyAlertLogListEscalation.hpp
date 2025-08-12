// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTESCALATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGLISTRESPONSEBODYALERTLOGLISTESCALATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogListResponseBodyAlertLogListEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogListResponseBodyAlertLogListEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogListResponseBodyAlertLogListEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    DescribeAlertLogListResponseBodyAlertLogListEscalation() = default ;
    DescribeAlertLogListResponseBodyAlertLogListEscalation(const DescribeAlertLogListResponseBodyAlertLogListEscalation &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListEscalation(DescribeAlertLogListResponseBodyAlertLogListEscalation &&) = default ;
    DescribeAlertLogListResponseBodyAlertLogListEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogListResponseBodyAlertLogListEscalation() = default ;
    DescribeAlertLogListResponseBodyAlertLogListEscalation& operator=(const DescribeAlertLogListResponseBodyAlertLogListEscalation &) = default ;
    DescribeAlertLogListResponseBodyAlertLogListEscalation& operator=(DescribeAlertLogListResponseBodyAlertLogListEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expression_ != nullptr
        && this->level_ != nullptr && this->times_ != nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListEscalation& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeAlertLogListResponseBodyAlertLogListEscalation& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline DescribeAlertLogListResponseBodyAlertLogListEscalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // The description of the alert rule.
    // 
    // >  The content of the alert rule. This parameter indicates the conditions that trigger an alert.
    std::shared_ptr<string> expression_ = nullptr;
    // The alert level and the methods that are used to send alert notifications. Valid values:
    // 
    // *   P4: Alert notifications are sent by using emails and DingTalk chatbots.
    // *   OK: No alert is generated.
    std::shared_ptr<string> level_ = nullptr;
    // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
