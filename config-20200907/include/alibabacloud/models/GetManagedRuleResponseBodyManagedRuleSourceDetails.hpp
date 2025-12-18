// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODYMANAGEDRULESOURCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDRULERESPONSEBODYMANAGEDRULESOURCEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetManagedRuleResponseBodyManagedRuleSourceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedRuleResponseBodyManagedRuleSourceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedRuleResponseBodyManagedRuleSourceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
    };
    GetManagedRuleResponseBodyManagedRuleSourceDetails() = default ;
    GetManagedRuleResponseBodyManagedRuleSourceDetails(const GetManagedRuleResponseBodyManagedRuleSourceDetails &) = default ;
    GetManagedRuleResponseBodyManagedRuleSourceDetails(GetManagedRuleResponseBodyManagedRuleSourceDetails &&) = default ;
    GetManagedRuleResponseBodyManagedRuleSourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedRuleResponseBodyManagedRuleSourceDetails() = default ;
    GetManagedRuleResponseBodyManagedRuleSourceDetails& operator=(const GetManagedRuleResponseBodyManagedRuleSourceDetails &) = default ;
    GetManagedRuleResponseBodyManagedRuleSourceDetails& operator=(GetManagedRuleResponseBodyManagedRuleSourceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maximumExecutionFrequency_ == nullptr
        && return this->messageType_ == nullptr; };
    // maximumExecutionFrequency Field Functions 
    bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
    void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
    inline string maximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
    inline GetManagedRuleResponseBodyManagedRuleSourceDetails& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline GetManagedRuleResponseBodyManagedRuleSourceDetails& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


  protected:
    // The interval at which the rule is triggered. Valid values: Valid values:
    // 
    // *   One_Hour
    // *   Three_Hours
    // *   Six_Hours
    // *   Twelve_Hours
    // *   TwentyFour_Hours
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
