// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONTIMEOUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONTIMEOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequestTriggerConditionExtensionTimeout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequestTriggerConditionExtensionTimeout& obj) { 
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequestTriggerConditionExtensionTimeout& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    CreateAlertRuleRequestTriggerConditionExtensionTimeout() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionTimeout(const CreateAlertRuleRequestTriggerConditionExtensionTimeout &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionTimeout(CreateAlertRuleRequestTriggerConditionExtensionTimeout &&) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionTimeout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequestTriggerConditionExtensionTimeout() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionTimeout& operator=(const CreateAlertRuleRequestTriggerConditionExtensionTimeout &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionTimeout& operator=(CreateAlertRuleRequestTriggerConditionExtensionTimeout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeoutInMinutes_ == nullptr; };
    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int32_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
    inline CreateAlertRuleRequestTriggerConditionExtensionTimeout& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The timeout period. Unit: minutes. Valid values: [1, 21600].
    std::shared_ptr<int32_t> timeoutInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
