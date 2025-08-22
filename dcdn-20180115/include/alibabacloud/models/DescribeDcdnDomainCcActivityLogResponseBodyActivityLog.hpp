// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCCACTIVITYLOGRESPONSEBODYACTIVITYLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCCACTIVITYLOGRESPONSEBODYACTIVITYLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainCcActivityLogResponseBodyActivityLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TriggerObject, triggerObject_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TriggerObject, triggerObject_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDcdnDomainCcActivityLogResponseBodyActivityLog() = default ;
    DescribeDcdnDomainCcActivityLogResponseBodyActivityLog(const DescribeDcdnDomainCcActivityLogResponseBodyActivityLog &) = default ;
    DescribeDcdnDomainCcActivityLogResponseBodyActivityLog(DescribeDcdnDomainCcActivityLogResponseBodyActivityLog &&) = default ;
    DescribeDcdnDomainCcActivityLogResponseBodyActivityLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainCcActivityLogResponseBodyActivityLog() = default ;
    DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& operator=(const DescribeDcdnDomainCcActivityLogResponseBodyActivityLog &) = default ;
    DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& operator=(DescribeDcdnDomainCcActivityLogResponseBodyActivityLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->domainName_ != nullptr && this->ruleName_ != nullptr && this->timeStamp_ != nullptr && this->triggerObject_ != nullptr && this->ttl_ != nullptr
        && this->value_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // triggerObject Field Functions 
    bool hasTriggerObject() const { return this->triggerObject_ != nullptr;};
    void deleteTriggerObject() { this->triggerObject_ = nullptr;};
    inline string triggerObject() const { DARABONBA_PTR_GET_DEFAULT(triggerObject_, "") };
    inline DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& setTriggerObject(string triggerObject) { DARABONBA_PTR_SET_VALUE(triggerObject_, triggerObject) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDcdnDomainCcActivityLogResponseBodyActivityLog& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The action that was triggered.
    std::shared_ptr<string> action_ = nullptr;
    // The accelerated domain name whose ICP filing status you want to update.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the rule that was triggered.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The object that triggered the blocking event.
    std::shared_ptr<string> triggerObject_ = nullptr;
    // The period of time during which rate limiting remains effective.
    std::shared_ptr<int64_t> ttl_ = nullptr;
    // The value of the trigger for rate limiting.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
