// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITIONCOMPARELISTVALUELEVELLIST_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITIONCOMPARELISTVALUELEVELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleConditionCompareListValueLevelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleConditionCompareListValueLevelList& obj) { 
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleConditionCompareListValueLevelList& obj) { 
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    AlertRuleConditionCompareListValueLevelList() = default ;
    AlertRuleConditionCompareListValueLevelList(const AlertRuleConditionCompareListValueLevelList &) = default ;
    AlertRuleConditionCompareListValueLevelList(AlertRuleConditionCompareListValueLevelList &&) = default ;
    AlertRuleConditionCompareListValueLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleConditionCompareListValueLevelList() = default ;
    AlertRuleConditionCompareListValueLevelList& operator=(const AlertRuleConditionCompareListValueLevelList &) = default ;
    AlertRuleConditionCompareListValueLevelList& operator=(AlertRuleConditionCompareListValueLevelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->level_ != nullptr
        && this->value_ != nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline AlertRuleConditionCompareListValueLevelList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline AlertRuleConditionCompareListValueLevelList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
