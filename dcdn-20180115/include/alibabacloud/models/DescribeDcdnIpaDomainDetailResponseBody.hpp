// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnIpaDomainDetailResponseBodyDomainDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnIpaDomainDetailResponseBody() = default ;
    DescribeDcdnIpaDomainDetailResponseBody(const DescribeDcdnIpaDomainDetailResponseBody &) = default ;
    DescribeDcdnIpaDomainDetailResponseBody(DescribeDcdnIpaDomainDetailResponseBody &&) = default ;
    DescribeDcdnIpaDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaDomainDetailResponseBody() = default ;
    DescribeDcdnIpaDomainDetailResponseBody& operator=(const DescribeDcdnIpaDomainDetailResponseBody &) = default ;
    DescribeDcdnIpaDomainDetailResponseBody& operator=(DescribeDcdnIpaDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainDetail_ != nullptr
        && this->requestId_ != nullptr; };
    // domainDetail Field Functions 
    bool hasDomainDetail() const { return this->domainDetail_ != nullptr;};
    void deleteDomainDetail() { this->domainDetail_ = nullptr;};
    inline const DescribeDcdnIpaDomainDetailResponseBodyDomainDetail & domainDetail() const { DARABONBA_PTR_GET_CONST(domainDetail_, DescribeDcdnIpaDomainDetailResponseBodyDomainDetail) };
    inline DescribeDcdnIpaDomainDetailResponseBodyDomainDetail domainDetail() { DARABONBA_PTR_GET(domainDetail_, DescribeDcdnIpaDomainDetailResponseBodyDomainDetail) };
    inline DescribeDcdnIpaDomainDetailResponseBody& setDomainDetail(const DescribeDcdnIpaDomainDetailResponseBodyDomainDetail & domainDetail) { DARABONBA_PTR_SET_VALUE(domainDetail_, domainDetail) };
    inline DescribeDcdnIpaDomainDetailResponseBody& setDomainDetail(DescribeDcdnIpaDomainDetailResponseBodyDomainDetail && domainDetail) { DARABONBA_PTR_SET_RVALUE(domainDetail_, domainDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnIpaDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the accelerated domain name.
    std::shared_ptr<DescribeDcdnIpaDomainDetailResponseBodyDomainDetail> domainDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
