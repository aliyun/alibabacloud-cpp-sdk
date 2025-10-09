// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONTIMEOUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONTIMEOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAlertRuleRequestTriggerConditionExtensionTimeout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRuleRequestTriggerConditionExtensionTimeout& obj) { 
      DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRuleRequestTriggerConditionExtensionTimeout& obj) { 
      DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
    };
    UpdateAlertRuleRequestTriggerConditionExtensionTimeout() = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionTimeout(const UpdateAlertRuleRequestTriggerConditionExtensionTimeout &) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionTimeout(UpdateAlertRuleRequestTriggerConditionExtensionTimeout &&) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionTimeout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRuleRequestTriggerConditionExtensionTimeout() = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionTimeout& operator=(const UpdateAlertRuleRequestTriggerConditionExtensionTimeout &) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionTimeout& operator=(UpdateAlertRuleRequestTriggerConditionExtensionTimeout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timeoutInMinutes_ != nullptr; };
    // timeoutInMinutes Field Functions 
    bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
    void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
    inline int32_t timeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
    inline UpdateAlertRuleRequestTriggerConditionExtensionTimeout& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


  protected:
    // The timeout period. Unit: minutes.
    std::shared_ptr<int32_t> timeoutInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
