// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnWafDomainDetailResponseBodyDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafDomainDetailResponseBody() = default ;
    DescribeDcdnWafDomainDetailResponseBody(const DescribeDcdnWafDomainDetailResponseBody &) = default ;
    DescribeDcdnWafDomainDetailResponseBody(DescribeDcdnWafDomainDetailResponseBody &&) = default ;
    DescribeDcdnWafDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDomainDetailResponseBody() = default ;
    DescribeDcdnWafDomainDetailResponseBody& operator=(const DescribeDcdnWafDomainDetailResponseBody &) = default ;
    DescribeDcdnWafDomainDetailResponseBody& operator=(DescribeDcdnWafDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->requestId_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const DescribeDcdnWafDomainDetailResponseBodyDomain & domain() const { DARABONBA_PTR_GET_CONST(domain_, DescribeDcdnWafDomainDetailResponseBodyDomain) };
    inline DescribeDcdnWafDomainDetailResponseBodyDomain domain() { DARABONBA_PTR_GET(domain_, DescribeDcdnWafDomainDetailResponseBodyDomain) };
    inline DescribeDcdnWafDomainDetailResponseBody& setDomain(const DescribeDcdnWafDomainDetailResponseBodyDomain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline DescribeDcdnWafDomainDetailResponseBody& setDomain(DescribeDcdnWafDomainDetailResponseBodyDomain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the accelerated domain name.
    std::shared_ptr<DescribeDcdnWafDomainDetailResponseBodyDomain> domain_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
