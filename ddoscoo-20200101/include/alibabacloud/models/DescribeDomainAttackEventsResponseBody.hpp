// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainAttackEventsResponseBodyDomainAttackEvents.hpp>
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
    virtual bool empty() const override { return this->domainAttackEvents_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // domainAttackEvents Field Functions 
    bool hasDomainAttackEvents() const { return this->domainAttackEvents_ != nullptr;};
    void deleteDomainAttackEvents() { this->domainAttackEvents_ = nullptr;};
    inline const vector<DescribeDomainAttackEventsResponseBodyDomainAttackEvents> & domainAttackEvents() const { DARABONBA_PTR_GET_CONST(domainAttackEvents_, vector<DescribeDomainAttackEventsResponseBodyDomainAttackEvents>) };
    inline vector<DescribeDomainAttackEventsResponseBodyDomainAttackEvents> domainAttackEvents() { DARABONBA_PTR_GET(domainAttackEvents_, vector<DescribeDomainAttackEventsResponseBodyDomainAttackEvents>) };
    inline DescribeDomainAttackEventsResponseBody& setDomainAttackEvents(const vector<DescribeDomainAttackEventsResponseBodyDomainAttackEvents> & domainAttackEvents) { DARABONBA_PTR_SET_VALUE(domainAttackEvents_, domainAttackEvents) };
    inline DescribeDomainAttackEventsResponseBody& setDomainAttackEvents(vector<DescribeDomainAttackEventsResponseBodyDomainAttackEvents> && domainAttackEvents) { DARABONBA_PTR_SET_RVALUE(domainAttackEvents_, domainAttackEvents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainAttackEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainAttackEventsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the details of the DDoS attack event.
    std::shared_ptr<vector<DescribeDomainAttackEventsResponseBodyDomainAttackEvents>> domainAttackEvents_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned DDoS attack events.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
