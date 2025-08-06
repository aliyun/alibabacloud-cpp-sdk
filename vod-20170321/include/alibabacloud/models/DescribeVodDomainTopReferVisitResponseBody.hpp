// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPREFERVISITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTOPREFERVISITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainTopReferVisitResponseBodyTopReferList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTopReferVisitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTopReferVisitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TopReferList, topReferList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTopReferVisitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TopReferList, topReferList_);
    };
    DescribeVodDomainTopReferVisitResponseBody() = default ;
    DescribeVodDomainTopReferVisitResponseBody(const DescribeVodDomainTopReferVisitResponseBody &) = default ;
    DescribeVodDomainTopReferVisitResponseBody(DescribeVodDomainTopReferVisitResponseBody &&) = default ;
    DescribeVodDomainTopReferVisitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTopReferVisitResponseBody() = default ;
    DescribeVodDomainTopReferVisitResponseBody& operator=(const DescribeVodDomainTopReferVisitResponseBody &) = default ;
    DescribeVodDomainTopReferVisitResponseBody& operator=(DescribeVodDomainTopReferVisitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->requestId_ != nullptr && this->startTime_ != nullptr && this->topReferList_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainTopReferVisitResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainTopReferVisitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainTopReferVisitResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // topReferList Field Functions 
    bool hasTopReferList() const { return this->topReferList_ != nullptr;};
    void deleteTopReferList() { this->topReferList_ = nullptr;};
    inline const DescribeVodDomainTopReferVisitResponseBodyTopReferList & topReferList() const { DARABONBA_PTR_GET_CONST(topReferList_, DescribeVodDomainTopReferVisitResponseBodyTopReferList) };
    inline DescribeVodDomainTopReferVisitResponseBodyTopReferList topReferList() { DARABONBA_PTR_GET(topReferList_, DescribeVodDomainTopReferVisitResponseBodyTopReferList) };
    inline DescribeVodDomainTopReferVisitResponseBody& setTopReferList(const DescribeVodDomainTopReferVisitResponseBodyTopReferList & topReferList) { DARABONBA_PTR_SET_VALUE(topReferList_, topReferList) };
    inline DescribeVodDomainTopReferVisitResponseBody& setTopReferList(DescribeVodDomainTopReferVisitResponseBodyTopReferList && topReferList) { DARABONBA_PTR_SET_RVALUE(topReferList_, topReferList) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<DescribeVodDomainTopReferVisitResponseBodyTopReferList> topReferList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
