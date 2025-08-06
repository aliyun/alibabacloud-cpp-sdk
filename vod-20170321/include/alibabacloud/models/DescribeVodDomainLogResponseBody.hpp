// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainLogResponseBodyDomainLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainLogResponseBody() = default ;
    DescribeVodDomainLogResponseBody(const DescribeVodDomainLogResponseBody &) = default ;
    DescribeVodDomainLogResponseBody(DescribeVodDomainLogResponseBody &&) = default ;
    DescribeVodDomainLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainLogResponseBody() = default ;
    DescribeVodDomainLogResponseBody& operator=(const DescribeVodDomainLogResponseBody &) = default ;
    DescribeVodDomainLogResponseBody& operator=(DescribeVodDomainLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainLogDetails_ != nullptr
        && this->requestId_ != nullptr; };
    // domainLogDetails Field Functions 
    bool hasDomainLogDetails() const { return this->domainLogDetails_ != nullptr;};
    void deleteDomainLogDetails() { this->domainLogDetails_ = nullptr;};
    inline const DescribeVodDomainLogResponseBodyDomainLogDetails & domainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, DescribeVodDomainLogResponseBodyDomainLogDetails) };
    inline DescribeVodDomainLogResponseBodyDomainLogDetails domainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, DescribeVodDomainLogResponseBodyDomainLogDetails) };
    inline DescribeVodDomainLogResponseBody& setDomainLogDetails(const DescribeVodDomainLogResponseBodyDomainLogDetails & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeVodDomainLogResponseBody& setDomainLogDetails(DescribeVodDomainLogResponseBodyDomainLogDetails && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of CDN logs.
    std::shared_ptr<DescribeVodDomainLogResponseBodyDomainLogDetails> domainLogDetails_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
