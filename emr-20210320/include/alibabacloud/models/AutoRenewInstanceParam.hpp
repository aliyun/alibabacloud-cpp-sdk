// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTORENEWINSTANCEPARAM_HPP_
#define ALIBABACLOUD_MODELS_AUTORENEWINSTANCEPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AutoRenewInstanceParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoRenewInstanceParam& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AutoRenewInstanceParam& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AutoRenewInstanceParam() = default ;
    AutoRenewInstanceParam(const AutoRenewInstanceParam &) = default ;
    AutoRenewInstanceParam(AutoRenewInstanceParam &&) = default ;
    AutoRenewInstanceParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoRenewInstanceParam() = default ;
    AutoRenewInstanceParam& operator=(const AutoRenewInstanceParam &) = default ;
    AutoRenewInstanceParam& operator=(AutoRenewInstanceParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->autoRenewDuration_ != nullptr && this->autoRenewDurationUnit_ != nullptr && this->instanceId_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline AutoRenewInstanceParam& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline string autoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, "") };
    inline AutoRenewInstanceParam& setAutoRenewDuration(string autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewDurationUnit Field Functions 
    bool hasAutoRenewDurationUnit() const { return this->autoRenewDurationUnit_ != nullptr;};
    void deleteAutoRenewDurationUnit() { this->autoRenewDurationUnit_ = nullptr;};
    inline string autoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDurationUnit_, "") };
    inline AutoRenewInstanceParam& setAutoRenewDurationUnit(string autoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(autoRenewDurationUnit_, autoRenewDurationUnit) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AutoRenewInstanceParam& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> autoRenew_ = nullptr;
    std::shared_ptr<string> autoRenewDuration_ = nullptr;
    std::shared_ptr<string> autoRenewDurationUnit_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
