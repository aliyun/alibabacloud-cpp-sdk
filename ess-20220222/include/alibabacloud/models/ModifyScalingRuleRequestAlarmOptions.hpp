// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUESTALARMOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUESTALARMOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingRuleRequestAlarmOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingRuleRequestAlarmOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Period, period_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingRuleRequestAlarmOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Period, period_);
    };
    ModifyScalingRuleRequestAlarmOptions() = default ;
    ModifyScalingRuleRequestAlarmOptions(const ModifyScalingRuleRequestAlarmOptions &) = default ;
    ModifyScalingRuleRequestAlarmOptions(ModifyScalingRuleRequestAlarmOptions &&) = default ;
    ModifyScalingRuleRequestAlarmOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingRuleRequestAlarmOptions() = default ;
    ModifyScalingRuleRequestAlarmOptions& operator=(const ModifyScalingRuleRequestAlarmOptions &) = default ;
    ModifyScalingRuleRequestAlarmOptions& operator=(ModifyScalingRuleRequestAlarmOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->period_ == nullptr; };
    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyScalingRuleRequestAlarmOptions& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    // The statistical period of the metric data in the target tracking scaling rule. Unit: seconds. Valid values:
    // 
    // *   15
    // *   60
    // *   120
    // *   300
    // *   900
    // 
    // >  Default value: 60.
    std::shared_ptr<int32_t> period_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
