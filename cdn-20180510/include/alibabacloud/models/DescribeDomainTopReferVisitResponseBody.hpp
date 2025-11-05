// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERVISITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERVISITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainTopReferVisitResponseBodyTopReferList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopReferVisitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopReferVisitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TopReferList, topReferList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopReferVisitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TopReferList, topReferList_);
    };
    DescribeDomainTopReferVisitResponseBody() = default ;
    DescribeDomainTopReferVisitResponseBody(const DescribeDomainTopReferVisitResponseBody &) = default ;
    DescribeDomainTopReferVisitResponseBody(DescribeDomainTopReferVisitResponseBody &&) = default ;
    DescribeDomainTopReferVisitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopReferVisitResponseBody() = default ;
    DescribeDomainTopReferVisitResponseBody& operator=(const DescribeDomainTopReferVisitResponseBody &) = default ;
    DescribeDomainTopReferVisitResponseBody& operator=(DescribeDomainTopReferVisitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->requestId_ == nullptr && return this->startTime_ == nullptr && return this->topReferList_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainTopReferVisitResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopReferVisitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainTopReferVisitResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // topReferList Field Functions 
    bool hasTopReferList() const { return this->topReferList_ != nullptr;};
    void deleteTopReferList() { this->topReferList_ = nullptr;};
    inline const DescribeDomainTopReferVisitResponseBodyTopReferList & topReferList() const { DARABONBA_PTR_GET_CONST(topReferList_, DescribeDomainTopReferVisitResponseBodyTopReferList) };
    inline DescribeDomainTopReferVisitResponseBodyTopReferList topReferList() { DARABONBA_PTR_GET(topReferList_, DescribeDomainTopReferVisitResponseBodyTopReferList) };
    inline DescribeDomainTopReferVisitResponseBody& setTopReferList(const DescribeDomainTopReferVisitResponseBodyTopReferList & topReferList) { DARABONBA_PTR_SET_VALUE(topReferList_, topReferList) };
    inline DescribeDomainTopReferVisitResponseBody& setTopReferList(DescribeDomainTopReferVisitResponseBodyTopReferList && topReferList) { DARABONBA_PTR_SET_RVALUE(topReferList_, topReferList) };


  protected:
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range that was queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The most frequently requested web pages.
    std::shared_ptr<DescribeDomainTopReferVisitResponseBodyTopReferList> topReferList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
