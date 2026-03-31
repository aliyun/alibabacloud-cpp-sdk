// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFreeUserEventsResponseBody() = default ;
    DescribeFreeUserEventsResponseBody(const DescribeFreeUserEventsResponseBody &) = default ;
    DescribeFreeUserEventsResponseBody(DescribeFreeUserEventsResponseBody &&) = default ;
    DescribeFreeUserEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventsResponseBody() = default ;
    DescribeFreeUserEventsResponseBody& operator=(const DescribeFreeUserEventsResponseBody &) = default ;
    DescribeFreeUserEventsResponseBody& operator=(DescribeFreeUserEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Event : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Event& obj) { 
        DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_TO_JSON(AttackIP, attackIP_);
        DARABONBA_PTR_TO_JSON(AttackTime, attackTime_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_TO_JSON(EventTag, eventTag_);
      };
      friend void from_json(const Darabonba::Json& j, Event& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_FROM_JSON(AttackIP, attackIP_);
        DARABONBA_PTR_FROM_JSON(AttackTime, attackTime_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
        DARABONBA_PTR_FROM_JSON(EventTag, eventTag_);
      };
      Event() = default ;
      Event(const Event &) = default ;
      Event(Event &&) = default ;
      Event(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Event() = default ;
      Event& operator=(const Event &) = default ;
      Event& operator=(Event &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiFormat_ == nullptr
        && this->attackIP_ == nullptr && this->attackTime_ == nullptr && this->domain_ == nullptr && this->eventLevel_ == nullptr && this->eventTag_ == nullptr; };
      // apiFormat Field Functions 
      bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
      void deleteApiFormat() { this->apiFormat_ = nullptr;};
      inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
      inline Event& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


      // attackIP Field Functions 
      bool hasAttackIP() const { return this->attackIP_ != nullptr;};
      void deleteAttackIP() { this->attackIP_ = nullptr;};
      inline string getAttackIP() const { DARABONBA_PTR_GET_DEFAULT(attackIP_, "") };
      inline Event& setAttackIP(string attackIP) { DARABONBA_PTR_SET_VALUE(attackIP_, attackIP) };


      // attackTime Field Functions 
      bool hasAttackTime() const { return this->attackTime_ != nullptr;};
      void deleteAttackTime() { this->attackTime_ = nullptr;};
      inline int64_t getAttackTime() const { DARABONBA_PTR_GET_DEFAULT(attackTime_, 0L) };
      inline Event& setAttackTime(int64_t attackTime) { DARABONBA_PTR_SET_VALUE(attackTime_, attackTime) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Event& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // eventLevel Field Functions 
      bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
      void deleteEventLevel() { this->eventLevel_ = nullptr;};
      inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
      inline Event& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


      // eventTag Field Functions 
      bool hasEventTag() const { return this->eventTag_ != nullptr;};
      void deleteEventTag() { this->eventTag_ = nullptr;};
      inline string getEventTag() const { DARABONBA_PTR_GET_DEFAULT(eventTag_, "") };
      inline Event& setEventTag(string eventTag) { DARABONBA_PTR_SET_VALUE(eventTag_, eventTag) };


    protected:
      // The API.
      shared_ptr<string> apiFormat_ {};
      // The attacker IP address.
      shared_ptr<string> attackIP_ {};
      // The time at which the attack was launched. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> attackTime_ {};
      // The domain name of the API.
      shared_ptr<string> domain_ {};
      // The severity level of the security event. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> eventLevel_ {};
      // The type of the security event.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of security events.
      shared_ptr<string> eventTag_ {};
    };

    virtual bool empty() const override { return this->event_ == nullptr
        && this->requestId_ == nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline const vector<DescribeFreeUserEventsResponseBody::Event> & getEvent() const { DARABONBA_PTR_GET_CONST(event_, vector<DescribeFreeUserEventsResponseBody::Event>) };
    inline vector<DescribeFreeUserEventsResponseBody::Event> getEvent() { DARABONBA_PTR_GET(event_, vector<DescribeFreeUserEventsResponseBody::Event>) };
    inline DescribeFreeUserEventsResponseBody& setEvent(const vector<DescribeFreeUserEventsResponseBody::Event> & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
    inline DescribeFreeUserEventsResponseBody& setEvent(vector<DescribeFreeUserEventsResponseBody::Event> && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFreeUserEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The security events on which basic detection is performed.
    shared_ptr<vector<DescribeFreeUserEventsResponseBody::Event>> event_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
