// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TIMERTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TIMERTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class TimerTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TimerTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, TimerTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
    };
    TimerTriggerConfig() = default ;
    TimerTriggerConfig(const TimerTriggerConfig &) = default ;
    TimerTriggerConfig(TimerTriggerConfig &&) = default ;
    TimerTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TimerTriggerConfig() = default ;
    TimerTriggerConfig& operator=(const TimerTriggerConfig &) = default ;
    TimerTriggerConfig& operator=(TimerTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cronExpression_ != nullptr
        && this->enable_ != nullptr && this->payload_ != nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline TimerTriggerConfig& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline TimerTriggerConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string payload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline TimerTriggerConfig& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


  protected:
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> payload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
