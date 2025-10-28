// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULETRIGGERTRIGGERS_HPP_
#define ALIBABACLOUD_MODELS_ENABLEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULETRIGGERTRIGGERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers& obj) { 
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers() = default ;
    EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers(const EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers &) = default ;
    EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers(EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers &&) = default ;
    EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers() = default ;
    EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers& operator=(const EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers &) = default ;
    EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers& operator=(EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaData_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr; };
    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline string metaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
    inline EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline EnableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The metadata of the trigger.
    std::shared_ptr<string> metaData_ = nullptr;
    // The name of the trigger.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the trigger. Valid values: cron and app_metric.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
