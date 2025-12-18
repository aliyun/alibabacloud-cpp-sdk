// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULESOURCESOURCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULERESPONSEBODYCONFIGRULESOURCESOURCEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleResponseBodyConfigRuleSourceSourceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleResponseBodyConfigRuleSourceSourceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
      DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleResponseBodyConfigRuleSourceSourceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
      DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
    };
    GetConfigRuleResponseBodyConfigRuleSourceSourceDetails() = default ;
    GetConfigRuleResponseBodyConfigRuleSourceSourceDetails(const GetConfigRuleResponseBodyConfigRuleSourceSourceDetails &) = default ;
    GetConfigRuleResponseBodyConfigRuleSourceSourceDetails(GetConfigRuleResponseBodyConfigRuleSourceSourceDetails &&) = default ;
    GetConfigRuleResponseBodyConfigRuleSourceSourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleResponseBodyConfigRuleSourceSourceDetails() = default ;
    GetConfigRuleResponseBodyConfigRuleSourceSourceDetails& operator=(const GetConfigRuleResponseBodyConfigRuleSourceSourceDetails &) = default ;
    GetConfigRuleResponseBodyConfigRuleSourceSourceDetails& operator=(GetConfigRuleResponseBodyConfigRuleSourceSourceDetails &&) = default ;
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
    inline GetConfigRuleResponseBodyConfigRuleSourceSourceDetails& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


    // maximumExecutionFrequency Field Functions 
    bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
    void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
    inline string maximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
    inline GetConfigRuleResponseBodyConfigRuleSourceSourceDetails& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline GetConfigRuleResponseBodyConfigRuleSourceSourceDetails& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


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
