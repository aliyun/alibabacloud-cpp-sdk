// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITIONCOMPARELIST_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITIONCOMPARELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleConditionCompareListValueLevelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleConditionCompareList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleConditionCompareList& obj) { 
      DARABONBA_PTR_TO_JSON(aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(baseUnit, baseUnit_);
      DARABONBA_PTR_TO_JSON(displayUnit, displayUnit_);
      DARABONBA_PTR_TO_JSON(oper, oper_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueLevelList, valueLevelList_);
      DARABONBA_PTR_TO_JSON(yoyTimeUnit, yoyTimeUnit_);
      DARABONBA_PTR_TO_JSON(yoyTimeValue, yoyTimeValue_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleConditionCompareList& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(baseUnit, baseUnit_);
      DARABONBA_PTR_FROM_JSON(displayUnit, displayUnit_);
      DARABONBA_PTR_FROM_JSON(oper, oper_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueLevelList, valueLevelList_);
      DARABONBA_PTR_FROM_JSON(yoyTimeUnit, yoyTimeUnit_);
      DARABONBA_PTR_FROM_JSON(yoyTimeValue, yoyTimeValue_);
    };
    AlertRuleConditionCompareList() = default ;
    AlertRuleConditionCompareList(const AlertRuleConditionCompareList &) = default ;
    AlertRuleConditionCompareList(AlertRuleConditionCompareList &&) = default ;
    AlertRuleConditionCompareList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleConditionCompareList() = default ;
    AlertRuleConditionCompareList& operator=(const AlertRuleConditionCompareList &) = default ;
    AlertRuleConditionCompareList& operator=(AlertRuleConditionCompareList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregate_ == nullptr
        && return this->baseUnit_ == nullptr && return this->displayUnit_ == nullptr && return this->oper_ == nullptr && return this->value_ == nullptr && return this->valueLevelList_ == nullptr
        && return this->yoyTimeUnit_ == nullptr && return this->yoyTimeValue_ == nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string aggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline AlertRuleConditionCompareList& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // baseUnit Field Functions 
    bool hasBaseUnit() const { return this->baseUnit_ != nullptr;};
    void deleteBaseUnit() { this->baseUnit_ = nullptr;};
    inline string baseUnit() const { DARABONBA_PTR_GET_DEFAULT(baseUnit_, "") };
    inline AlertRuleConditionCompareList& setBaseUnit(string baseUnit) { DARABONBA_PTR_SET_VALUE(baseUnit_, baseUnit) };


    // displayUnit Field Functions 
    bool hasDisplayUnit() const { return this->displayUnit_ != nullptr;};
    void deleteDisplayUnit() { this->displayUnit_ = nullptr;};
    inline string displayUnit() const { DARABONBA_PTR_GET_DEFAULT(displayUnit_, "") };
    inline AlertRuleConditionCompareList& setDisplayUnit(string displayUnit) { DARABONBA_PTR_SET_VALUE(displayUnit_, displayUnit) };


    // oper Field Functions 
    bool hasOper() const { return this->oper_ != nullptr;};
    void deleteOper() { this->oper_ = nullptr;};
    inline string oper() const { DARABONBA_PTR_GET_DEFAULT(oper_, "") };
    inline AlertRuleConditionCompareList& setOper(string oper) { DARABONBA_PTR_SET_VALUE(oper_, oper) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline AlertRuleConditionCompareList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueLevelList Field Functions 
    bool hasValueLevelList() const { return this->valueLevelList_ != nullptr;};
    void deleteValueLevelList() { this->valueLevelList_ = nullptr;};
    inline const vector<Models::AlertRuleConditionCompareListValueLevelList> & valueLevelList() const { DARABONBA_PTR_GET_CONST(valueLevelList_, vector<Models::AlertRuleConditionCompareListValueLevelList>) };
    inline vector<Models::AlertRuleConditionCompareListValueLevelList> valueLevelList() { DARABONBA_PTR_GET(valueLevelList_, vector<Models::AlertRuleConditionCompareListValueLevelList>) };
    inline AlertRuleConditionCompareList& setValueLevelList(const vector<Models::AlertRuleConditionCompareListValueLevelList> & valueLevelList) { DARABONBA_PTR_SET_VALUE(valueLevelList_, valueLevelList) };
    inline AlertRuleConditionCompareList& setValueLevelList(vector<Models::AlertRuleConditionCompareListValueLevelList> && valueLevelList) { DARABONBA_PTR_SET_RVALUE(valueLevelList_, valueLevelList) };


    // yoyTimeUnit Field Functions 
    bool hasYoyTimeUnit() const { return this->yoyTimeUnit_ != nullptr;};
    void deleteYoyTimeUnit() { this->yoyTimeUnit_ = nullptr;};
    inline string yoyTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(yoyTimeUnit_, "") };
    inline AlertRuleConditionCompareList& setYoyTimeUnit(string yoyTimeUnit) { DARABONBA_PTR_SET_VALUE(yoyTimeUnit_, yoyTimeUnit) };


    // yoyTimeValue Field Functions 
    bool hasYoyTimeValue() const { return this->yoyTimeValue_ != nullptr;};
    void deleteYoyTimeValue() { this->yoyTimeValue_ = nullptr;};
    inline int32_t yoyTimeValue() const { DARABONBA_PTR_GET_DEFAULT(yoyTimeValue_, 0) };
    inline AlertRuleConditionCompareList& setYoyTimeValue(int32_t yoyTimeValue) { DARABONBA_PTR_SET_VALUE(yoyTimeValue_, yoyTimeValue) };


  protected:
    std::shared_ptr<string> aggregate_ = nullptr;
    std::shared_ptr<string> baseUnit_ = nullptr;
    std::shared_ptr<string> displayUnit_ = nullptr;
    std::shared_ptr<string> oper_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
    std::shared_ptr<vector<Models::AlertRuleConditionCompareListValueLevelList>> valueLevelList_ = nullptr;
    std::shared_ptr<string> yoyTimeUnit_ = nullptr;
    std::shared_ptr<int32_t> yoyTimeValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
