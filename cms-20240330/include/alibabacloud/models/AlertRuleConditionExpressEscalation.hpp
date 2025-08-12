// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITIONEXPRESSESCALATION_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITIONEXPRESSESCALATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleConditionExpressEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleConditionExpressEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(rawExpression, rawExpression_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleConditionExpressEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(rawExpression, rawExpression_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    AlertRuleConditionExpressEscalation() = default ;
    AlertRuleConditionExpressEscalation(const AlertRuleConditionExpressEscalation &) = default ;
    AlertRuleConditionExpressEscalation(AlertRuleConditionExpressEscalation &&) = default ;
    AlertRuleConditionExpressEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleConditionExpressEscalation() = default ;
    AlertRuleConditionExpressEscalation& operator=(const AlertRuleConditionExpressEscalation &) = default ;
    AlertRuleConditionExpressEscalation& operator=(AlertRuleConditionExpressEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->level_ != nullptr
        && this->rawExpression_ != nullptr && this->times_ != nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline AlertRuleConditionExpressEscalation& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // rawExpression Field Functions 
    bool hasRawExpression() const { return this->rawExpression_ != nullptr;};
    void deleteRawExpression() { this->rawExpression_ = nullptr;};
    inline string rawExpression() const { DARABONBA_PTR_GET_DEFAULT(rawExpression_, "") };
    inline AlertRuleConditionExpressEscalation& setRawExpression(string rawExpression) { DARABONBA_PTR_SET_VALUE(rawExpression_, rawExpression) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline AlertRuleConditionExpressEscalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> rawExpression_ = nullptr;
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
