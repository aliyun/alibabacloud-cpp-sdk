// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULEMANAGEDRULESOURCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULEMANAGEDRULESOURCEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
      DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
      DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
    };
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(const GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails &&) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails() = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& operator=(const GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& operator=(GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails &&) = default ;
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
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


    // maximumExecutionFrequency Field Functions 
    bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
    void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
    inline string maximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleManagedRuleSourceDetails& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


  protected:
    // The event source of the managed rule.
    // 
    // >  Only events related to Cloud Config are supported. The value is fixed to aliyun.config.
    std::shared_ptr<string> eventSource_ = nullptr;
    // The intervals at which the managed rule is triggered. Valid values:
    // 
    // *   One_Hour: 1 hour.
    // *   Three_Hours: 3 hours.
    // *   Six_Hours: 6 hours.
    // *   Twelve_Hours: 12 hours
    // *   TwentyFour_Hours: 24 hours
    std::shared_ptr<string> maximumExecutionFrequency_ = nullptr;
    // The trigger type of the rule. Valid values:
    // 
    // *   ConfigurationItemChangeNotification: The managed rule is triggered by configuration changes.
    // *   ScheduledNotification: The managed rule is periodically triggered.
    std::shared_ptr<string> messageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
