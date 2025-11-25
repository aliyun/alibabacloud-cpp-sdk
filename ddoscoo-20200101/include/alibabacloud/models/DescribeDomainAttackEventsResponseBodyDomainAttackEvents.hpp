// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKEVENTSRESPONSEBODYDOMAINATTACKEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKEVENTSRESPONSEBODYDOMAINATTACKEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainAttackEventsResponseBodyDomainAttackEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAttackEventsResponseBodyDomainAttackEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAttackEventsResponseBodyDomainAttackEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainAttackEventsResponseBodyDomainAttackEvents() = default ;
    DescribeDomainAttackEventsResponseBodyDomainAttackEvents(const DescribeDomainAttackEventsResponseBodyDomainAttackEvents &) = default ;
    DescribeDomainAttackEventsResponseBodyDomainAttackEvents(DescribeDomainAttackEventsResponseBodyDomainAttackEvents &&) = default ;
    DescribeDomainAttackEventsResponseBodyDomainAttackEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAttackEventsResponseBodyDomainAttackEvents() = default ;
    DescribeDomainAttackEventsResponseBodyDomainAttackEvents& operator=(const DescribeDomainAttackEventsResponseBodyDomainAttackEvents &) = default ;
    DescribeDomainAttackEventsResponseBodyDomainAttackEvents& operator=(DescribeDomainAttackEventsResponseBodyDomainAttackEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->endTime_ == nullptr && return this->maxQps_ == nullptr && return this->startTime_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainAttackEventsResponseBodyDomainAttackEvents& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDomainAttackEventsResponseBodyDomainAttackEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxQps Field Functions 
    bool hasMaxQps() const { return this->maxQps_ != nullptr;};
    void deleteMaxQps() { this->maxQps_ = nullptr;};
    inline int64_t maxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
    inline DescribeDomainAttackEventsResponseBodyDomainAttackEvents& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDomainAttackEventsResponseBodyDomainAttackEvents& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The attacked domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The time when the DDoS attack stopped. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The peak attack QPS.
    std::shared_ptr<int64_t> maxQps_ = nullptr;
    // The time when the DDoS attack started. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
