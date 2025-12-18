// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULEMANAGEDRULESOURCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULEMANAGEDRULESOURCEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
      DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
      DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
    };
    GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() = default ;
    GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(const GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails &) = default ;
    GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails &&) = default ;
    GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() = default ;
    GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& operator=(const GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails &) = default ;
    GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& operator=(GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventSource_ == nullptr
        && return this->maximumExecutionFrequency_ == nullptr && return this->messageType_ == nullptr; };
    // eventSource Field Functions 
    bool hasEventSource() const { return this->eventSource_ != nullptr;};
    void deleteEventSource() { this->eventSource_ = nullptr;};
    inline string eventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
    inline GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


    // maximumExecutionFrequency Field Functions 
    bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
    void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
    inline string maximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
    inline GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline GetConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


  protected:
    // The event source.
    // 
    // >  Only aliyun.config is returned, which indicates that only events related to Cloud Config are supported.
    std::shared_ptr<string> eventSource_ = nullptr;
    // The interval at which the rule is triggered. Valid values:
    // 
    // *   One_Hour
    // *   Three_Hours
    // *   Six_Hours
    // *   Twelve_Hours
    // *   TwentyFour_Hours
    // 
    // >  This parameter is returned if the rule is periodically triggered.
    std::shared_ptr<string> maximumExecutionFrequency_ = nullptr;
    // The trigger type of the rule. Valid values:
    // 
    // *   ConfigurationItemChangeNotification: The rule is triggered by configuration changes.
    // *   ScheduledNotification: The rule is periodically triggered.
    std::shared_ptr<string> messageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
