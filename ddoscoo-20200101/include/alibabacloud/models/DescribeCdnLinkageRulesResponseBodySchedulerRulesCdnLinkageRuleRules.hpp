// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULESCDNLINKAGERULERULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULESCDNLINKAGERULERULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& obj) { 
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules(const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules(DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules &&) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& operator=(const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& operator=(DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->priority_ == nullptr
        && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr && return this->valueType_ == nullptr; };
    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline int32_t valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, 0) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleRules& setValueType(int32_t valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<int32_t> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
