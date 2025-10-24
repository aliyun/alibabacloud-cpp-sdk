// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTSRESPONSEBODYEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTSRESPONSEBODYEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventsResponseBodyEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventsResponseBodyEvent& obj) { 
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(AttackIP, attackIP_);
      DARABONBA_PTR_TO_JSON(AttackTime, attackTime_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventTag, eventTag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventsResponseBodyEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(AttackIP, attackIP_);
      DARABONBA_PTR_FROM_JSON(AttackTime, attackTime_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventTag, eventTag_);
    };
    DescribeFreeUserEventsResponseBodyEvent() = default ;
    DescribeFreeUserEventsResponseBodyEvent(const DescribeFreeUserEventsResponseBodyEvent &) = default ;
    DescribeFreeUserEventsResponseBodyEvent(DescribeFreeUserEventsResponseBodyEvent &&) = default ;
    DescribeFreeUserEventsResponseBodyEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventsResponseBodyEvent() = default ;
    DescribeFreeUserEventsResponseBodyEvent& operator=(const DescribeFreeUserEventsResponseBodyEvent &) = default ;
    DescribeFreeUserEventsResponseBodyEvent& operator=(DescribeFreeUserEventsResponseBodyEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiFormat_ == nullptr
        && return this->attackIP_ == nullptr && return this->attackTime_ == nullptr && return this->domain_ == nullptr && return this->eventLevel_ == nullptr && return this->eventTag_ == nullptr; };
    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeFreeUserEventsResponseBodyEvent& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // attackIP Field Functions 
    bool hasAttackIP() const { return this->attackIP_ != nullptr;};
    void deleteAttackIP() { this->attackIP_ = nullptr;};
    inline string attackIP() const { DARABONBA_PTR_GET_DEFAULT(attackIP_, "") };
    inline DescribeFreeUserEventsResponseBodyEvent& setAttackIP(string attackIP) { DARABONBA_PTR_SET_VALUE(attackIP_, attackIP) };


    // attackTime Field Functions 
    bool hasAttackTime() const { return this->attackTime_ != nullptr;};
    void deleteAttackTime() { this->attackTime_ = nullptr;};
    inline int64_t attackTime() const { DARABONBA_PTR_GET_DEFAULT(attackTime_, 0L) };
    inline DescribeFreeUserEventsResponseBodyEvent& setAttackTime(int64_t attackTime) { DARABONBA_PTR_SET_VALUE(attackTime_, attackTime) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeFreeUserEventsResponseBodyEvent& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribeFreeUserEventsResponseBodyEvent& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventTag Field Functions 
    bool hasEventTag() const { return this->eventTag_ != nullptr;};
    void deleteEventTag() { this->eventTag_ = nullptr;};
    inline string eventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
    inline DescribeFreeUserEventsResponseBodyEvent& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


  protected:
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The attacker IP address.
    std::shared_ptr<string> attackIP_ = nullptr;
    // The time at which the attack was launched. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> attackTime_ = nullptr;
    // The domain name of the API.
    std::shared_ptr<string> domain_ = nullptr;
    // The severity level of the security event. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> eventLevel_ = nullptr;
    // The type of the security event.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of security events.
    std::shared_ptr<string> eventTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
