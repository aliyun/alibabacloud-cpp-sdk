// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTBRIDGETRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_EVENTBRIDGETRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EventSinkConfig.hpp>
#include <alibabacloud/models/EventSourceConfig.hpp>
#include <alibabacloud/models/RunOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class EventBridgeTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventBridgeTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(asyncInvocationType, asyncInvocationType_);
      DARABONBA_PTR_TO_JSON(eventRuleFilterPattern, eventRuleFilterPattern_);
      DARABONBA_PTR_TO_JSON(eventSinkConfig, eventSinkConfig_);
      DARABONBA_PTR_TO_JSON(eventSourceConfig, eventSourceConfig_);
      DARABONBA_PTR_TO_JSON(runOptions, runOptions_);
      DARABONBA_PTR_TO_JSON(triggerEnable, triggerEnable_);
    };
    friend void from_json(const Darabonba::Json& j, EventBridgeTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(asyncInvocationType, asyncInvocationType_);
      DARABONBA_PTR_FROM_JSON(eventRuleFilterPattern, eventRuleFilterPattern_);
      DARABONBA_PTR_FROM_JSON(eventSinkConfig, eventSinkConfig_);
      DARABONBA_PTR_FROM_JSON(eventSourceConfig, eventSourceConfig_);
      DARABONBA_PTR_FROM_JSON(runOptions, runOptions_);
      DARABONBA_PTR_FROM_JSON(triggerEnable, triggerEnable_);
    };
    EventBridgeTriggerConfig() = default ;
    EventBridgeTriggerConfig(const EventBridgeTriggerConfig &) = default ;
    EventBridgeTriggerConfig(EventBridgeTriggerConfig &&) = default ;
    EventBridgeTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventBridgeTriggerConfig() = default ;
    EventBridgeTriggerConfig& operator=(const EventBridgeTriggerConfig &) = default ;
    EventBridgeTriggerConfig& operator=(EventBridgeTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncInvocationType_ == nullptr
        && this->eventRuleFilterPattern_ == nullptr && this->eventSinkConfig_ == nullptr && this->eventSourceConfig_ == nullptr && this->runOptions_ == nullptr && this->triggerEnable_ == nullptr; };
    // asyncInvocationType Field Functions 
    bool hasAsyncInvocationType() const { return this->asyncInvocationType_ != nullptr;};
    void deleteAsyncInvocationType() { this->asyncInvocationType_ = nullptr;};
    inline bool getAsyncInvocationType() const { DARABONBA_PTR_GET_DEFAULT(asyncInvocationType_, false) };
    inline EventBridgeTriggerConfig& setAsyncInvocationType(bool asyncInvocationType) { DARABONBA_PTR_SET_VALUE(asyncInvocationType_, asyncInvocationType) };


    // eventRuleFilterPattern Field Functions 
    bool hasEventRuleFilterPattern() const { return this->eventRuleFilterPattern_ != nullptr;};
    void deleteEventRuleFilterPattern() { this->eventRuleFilterPattern_ = nullptr;};
    inline string getEventRuleFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(eventRuleFilterPattern_, "") };
    inline EventBridgeTriggerConfig& setEventRuleFilterPattern(string eventRuleFilterPattern) { DARABONBA_PTR_SET_VALUE(eventRuleFilterPattern_, eventRuleFilterPattern) };


    // eventSinkConfig Field Functions 
    bool hasEventSinkConfig() const { return this->eventSinkConfig_ != nullptr;};
    void deleteEventSinkConfig() { this->eventSinkConfig_ = nullptr;};
    inline const EventSinkConfig & getEventSinkConfig() const { DARABONBA_PTR_GET_CONST(eventSinkConfig_, EventSinkConfig) };
    inline EventSinkConfig getEventSinkConfig() { DARABONBA_PTR_GET(eventSinkConfig_, EventSinkConfig) };
    inline EventBridgeTriggerConfig& setEventSinkConfig(const EventSinkConfig & eventSinkConfig) { DARABONBA_PTR_SET_VALUE(eventSinkConfig_, eventSinkConfig) };
    inline EventBridgeTriggerConfig& setEventSinkConfig(EventSinkConfig && eventSinkConfig) { DARABONBA_PTR_SET_RVALUE(eventSinkConfig_, eventSinkConfig) };


    // eventSourceConfig Field Functions 
    bool hasEventSourceConfig() const { return this->eventSourceConfig_ != nullptr;};
    void deleteEventSourceConfig() { this->eventSourceConfig_ = nullptr;};
    inline const EventSourceConfig & getEventSourceConfig() const { DARABONBA_PTR_GET_CONST(eventSourceConfig_, EventSourceConfig) };
    inline EventSourceConfig getEventSourceConfig() { DARABONBA_PTR_GET(eventSourceConfig_, EventSourceConfig) };
    inline EventBridgeTriggerConfig& setEventSourceConfig(const EventSourceConfig & eventSourceConfig) { DARABONBA_PTR_SET_VALUE(eventSourceConfig_, eventSourceConfig) };
    inline EventBridgeTriggerConfig& setEventSourceConfig(EventSourceConfig && eventSourceConfig) { DARABONBA_PTR_SET_RVALUE(eventSourceConfig_, eventSourceConfig) };


    // runOptions Field Functions 
    bool hasRunOptions() const { return this->runOptions_ != nullptr;};
    void deleteRunOptions() { this->runOptions_ = nullptr;};
    inline const RunOptions & getRunOptions() const { DARABONBA_PTR_GET_CONST(runOptions_, RunOptions) };
    inline RunOptions getRunOptions() { DARABONBA_PTR_GET(runOptions_, RunOptions) };
    inline EventBridgeTriggerConfig& setRunOptions(const RunOptions & runOptions) { DARABONBA_PTR_SET_VALUE(runOptions_, runOptions) };
    inline EventBridgeTriggerConfig& setRunOptions(RunOptions && runOptions) { DARABONBA_PTR_SET_RVALUE(runOptions_, runOptions) };


    // triggerEnable Field Functions 
    bool hasTriggerEnable() const { return this->triggerEnable_ != nullptr;};
    void deleteTriggerEnable() { this->triggerEnable_ = nullptr;};
    inline bool getTriggerEnable() const { DARABONBA_PTR_GET_DEFAULT(triggerEnable_, false) };
    inline EventBridgeTriggerConfig& setTriggerEnable(bool triggerEnable) { DARABONBA_PTR_SET_VALUE(triggerEnable_, triggerEnable) };


  protected:
    // Whether to invoke the function in asynchronous mode. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  The default value is **false**.
    shared_ptr<bool> asyncInvocationType_ {};
    // The event pattern. The value is in the JSON format. For more information, see [Event patterns](https://help.aliyun.com/document_detail/181432.html).
    shared_ptr<string> eventRuleFilterPattern_ {};
    // The event destination configurations.
    shared_ptr<EventSinkConfig> eventSinkConfig_ {};
    // The event source configurations.
    shared_ptr<EventSourceConfig> eventSourceConfig_ {};
    // The runtime configurations.
    shared_ptr<RunOptions> runOptions_ {};
    // Whether to enable the trigger. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  The default value is **true**.
    shared_ptr<bool> triggerEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
