// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainAttackEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAttackEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainAttackEvents, domainAttackEvents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAttackEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainAttackEvents, domainAttackEvents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainAttackEventsResponseBody() = default ;
    DescribeDomainAttackEventsResponseBody(const DescribeDomainAttackEventsResponseBody &) = default ;
    DescribeDomainAttackEventsResponseBody(DescribeDomainAttackEventsResponseBody &&) = default ;
    DescribeDomainAttackEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAttackEventsResponseBody() = default ;
    DescribeDomainAttackEventsResponseBody& operator=(const DescribeDomainAttackEventsResponseBody &) = default ;
    DescribeDomainAttackEventsResponseBody& operator=(DescribeDomainAttackEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainAttackEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainAttackEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, DomainAttackEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      DomainAttackEvents() = default ;
      DomainAttackEvents(const DomainAttackEvents &) = default ;
      DomainAttackEvents(DomainAttackEvents &&) = default ;
      DomainAttackEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainAttackEvents() = default ;
      DomainAttackEvents& operator=(const DomainAttackEvents &) = default ;
      DomainAttackEvents& operator=(DomainAttackEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->endTime_ == nullptr && this->maxQps_ == nullptr && this->startTime_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainAttackEvents& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline DomainAttackEvents& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // maxQps Field Functions 
      bool hasMaxQps() const { return this->maxQps_ != nullptr;};
      void deleteMaxQps() { this->maxQps_ = nullptr;};
      inline int64_t getMaxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
      inline DomainAttackEvents& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline DomainAttackEvents& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The attacked domain name.
      shared_ptr<string> domain_ {};
      // The time when the DDoS attack stopped. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> endTime_ {};
      // The peak attack QPS.
      shared_ptr<int64_t> maxQps_ {};
      // The time when the DDoS attack started. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->domainAttackEvents_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainAttackEvents Field Functions 
    bool hasDomainAttackEvents() const { return this->domainAttackEvents_ != nullptr;};
    void deleteDomainAttackEvents() { this->domainAttackEvents_ = nullptr;};
    inline const vector<DescribeDomainAttackEventsResponseBody::DomainAttackEvents> & getDomainAttackEvents() const { DARABONBA_PTR_GET_CONST(domainAttackEvents_, vector<DescribeDomainAttackEventsResponseBody::DomainAttackEvents>) };
    inline vector<DescribeDomainAttackEventsResponseBody::DomainAttackEvents> getDomainAttackEvents() { DARABONBA_PTR_GET(domainAttackEvents_, vector<DescribeDomainAttackEventsResponseBody::DomainAttackEvents>) };
    inline DescribeDomainAttackEventsResponseBody& setDomainAttackEvents(const vector<DescribeDomainAttackEventsResponseBody::DomainAttackEvents> & domainAttackEvents) { DARABONBA_PTR_SET_VALUE(domainAttackEvents_, domainAttackEvents) };
    inline DescribeDomainAttackEventsResponseBody& setDomainAttackEvents(vector<DescribeDomainAttackEventsResponseBody::DomainAttackEvents> && domainAttackEvents) { DARABONBA_PTR_SET_RVALUE(domainAttackEvents_, domainAttackEvents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainAttackEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainAttackEventsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the details of the DDoS attack event.
    shared_ptr<vector<DescribeDomainAttackEventsResponseBody::DomainAttackEvents>> domainAttackEvents_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned DDoS attack events.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
