// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODYSCHEDULERRULESRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODYSCHEDULERRULESRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSchedulerRulesResponseBodySchedulerRulesRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchedulerRulesResponseBodySchedulerRulesRules& obj) { 
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RestoreDelay, restoreDelay_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchedulerRulesResponseBodySchedulerRulesRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RestoreDelay, restoreDelay_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    DescribeSchedulerRulesResponseBodySchedulerRulesRules() = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesRules(const DescribeSchedulerRulesResponseBodySchedulerRulesRules &) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesRules(DescribeSchedulerRulesResponseBodySchedulerRulesRules &&) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchedulerRulesResponseBodySchedulerRulesRules() = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesRules& operator=(const DescribeSchedulerRulesResponseBodySchedulerRulesRules &) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesRules& operator=(DescribeSchedulerRulesResponseBodySchedulerRulesRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->line_ != nullptr
        && this->priority_ != nullptr && this->regionId_ != nullptr && this->restoreDelay_ != nullptr && this->status_ != nullptr && this->type_ != nullptr
        && this->value_ != nullptr && this->valueType_ != nullptr; };
    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesRules& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesRules& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // restoreDelay Field Functions 
    bool hasRestoreDelay() const { return this->restoreDelay_ != nullptr;};
    void deleteRestoreDelay() { this->restoreDelay_ = nullptr;};
    inline int32_t restoreDelay() const { DARABONBA_PTR_GET_DEFAULT(restoreDelay_, 0) };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesRules& setRestoreDelay(int32_t restoreDelay) { DARABONBA_PTR_SET_VALUE(restoreDelay_, restoreDelay) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesRules& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline int32_t valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, 0) };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesRules& setValueType(int32_t valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<string> line_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> restoreDelay_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<int32_t> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
