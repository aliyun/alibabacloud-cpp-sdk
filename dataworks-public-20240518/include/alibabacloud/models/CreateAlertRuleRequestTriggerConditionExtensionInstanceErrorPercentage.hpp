// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONINSTANCEERRORPERCENTAGE_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONINSTANCEERRORPERCENTAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage& obj) { 
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage& obj) { 
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
    };
    CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage(const CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage(CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage &&) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage& operator=(const CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage& operator=(CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->percentage_ != nullptr; };
    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline CreateAlertRuleRequestTriggerConditionExtensionInstanceErrorPercentage& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


  protected:
    // The maximum percentage of instances on which an error occurs in the workspace to the total number of instances. Valid values: [1-100].
    std::shared_ptr<int32_t> percentage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
