// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTORENEWINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_AUTORENEWINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AutoRenewInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoRenewInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_TO_JSON(EmrAutoRenewDuration, emrAutoRenewDuration_);
      DARABONBA_PTR_TO_JSON(EmrAutoRenewDurationUnit, emrAutoRenewDurationUnit_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AutoRenewInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_FROM_JSON(EmrAutoRenewDuration, emrAutoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(EmrAutoRenewDurationUnit, emrAutoRenewDurationUnit_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    AutoRenewInstance() = default ;
    AutoRenewInstance(const AutoRenewInstance &) = default ;
    AutoRenewInstance(AutoRenewInstance &&) = default ;
    AutoRenewInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoRenewInstance() = default ;
    AutoRenewInstance& operator=(const AutoRenewInstance &) = default ;
    AutoRenewInstance& operator=(AutoRenewInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->autoRenewDuration_ == nullptr && return this->autoRenewDurationUnit_ == nullptr && return this->emrAutoRenewDuration_ == nullptr && return this->emrAutoRenewDurationUnit_ == nullptr && return this->instanceId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline AutoRenewInstance& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t autoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline AutoRenewInstance& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewDurationUnit Field Functions 
    bool hasAutoRenewDurationUnit() const { return this->autoRenewDurationUnit_ != nullptr;};
    void deleteAutoRenewDurationUnit() { this->autoRenewDurationUnit_ = nullptr;};
    inline string autoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDurationUnit_, "") };
    inline AutoRenewInstance& setAutoRenewDurationUnit(string autoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(autoRenewDurationUnit_, autoRenewDurationUnit) };


    // emrAutoRenewDuration Field Functions 
    bool hasEmrAutoRenewDuration() const { return this->emrAutoRenewDuration_ != nullptr;};
    void deleteEmrAutoRenewDuration() { this->emrAutoRenewDuration_ = nullptr;};
    inline int32_t emrAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(emrAutoRenewDuration_, 0) };
    inline AutoRenewInstance& setEmrAutoRenewDuration(int32_t emrAutoRenewDuration) { DARABONBA_PTR_SET_VALUE(emrAutoRenewDuration_, emrAutoRenewDuration) };


    // emrAutoRenewDurationUnit Field Functions 
    bool hasEmrAutoRenewDurationUnit() const { return this->emrAutoRenewDurationUnit_ != nullptr;};
    void deleteEmrAutoRenewDurationUnit() { this->emrAutoRenewDurationUnit_ = nullptr;};
    inline string emrAutoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(emrAutoRenewDurationUnit_, "") };
    inline AutoRenewInstance& setEmrAutoRenewDurationUnit(string emrAutoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(emrAutoRenewDurationUnit_, emrAutoRenewDurationUnit) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AutoRenewInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 自动续费。
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // 自动续费时长。
    std::shared_ptr<int32_t> autoRenewDuration_ = nullptr;
    // 自动付费时长单位。
    std::shared_ptr<string> autoRenewDurationUnit_ = nullptr;
    // emr实例自动续费时长。
    std::shared_ptr<int32_t> emrAutoRenewDuration_ = nullptr;
    // emr实例自动续费时长单位。
    std::shared_ptr<string> emrAutoRenewDurationUnit_ = nullptr;
    // 节点ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
