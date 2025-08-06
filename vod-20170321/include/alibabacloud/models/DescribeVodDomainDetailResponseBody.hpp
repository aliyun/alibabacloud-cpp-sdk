// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodDomainDetailResponseBodyDomainDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainDetailResponseBody() = default ;
    DescribeVodDomainDetailResponseBody(const DescribeVodDomainDetailResponseBody &) = default ;
    DescribeVodDomainDetailResponseBody(DescribeVodDomainDetailResponseBody &&) = default ;
    DescribeVodDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainDetailResponseBody() = default ;
    DescribeVodDomainDetailResponseBody& operator=(const DescribeVodDomainDetailResponseBody &) = default ;
    DescribeVodDomainDetailResponseBody& operator=(DescribeVodDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // domainDetail Field Functions 
    bool hasDomainDetail() const { return this->domainDetail_ != nullptr;};
    void deleteDomainDetail() { this->domainDetail_ = nullptr;};
    inline const DescribeVodDomainDetailResponseBodyDomainDetail & domainDetail() const { DARABONBA_PTR_GET_CONST(domainDetail_, DescribeVodDomainDetailResponseBodyDomainDetail) };
    inline DescribeVodDomainDetailResponseBodyDomainDetail domainDetail() { DARABONBA_PTR_GET(domainDetail_, DescribeVodDomainDetailResponseBodyDomainDetail) };
    inline DescribeVodDomainDetailResponseBody& setDomainDetail(const DescribeVodDomainDetailResponseBodyDomainDetail & domainDetail) { DARABONBA_PTR_SET_VALUE(domainDetail_, domainDetail) };
    inline DescribeVodDomainDetailResponseBody& setDomainDetail(DescribeVodDomainDetailResponseBodyDomainDetail && domainDetail) { DARABONBA_PTR_SET_RVALUE(domainDetail_, domainDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic information about the domain name for CDN.
    std::shared_ptr<DescribeVodDomainDetailResponseBodyDomainDetail> domainDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
