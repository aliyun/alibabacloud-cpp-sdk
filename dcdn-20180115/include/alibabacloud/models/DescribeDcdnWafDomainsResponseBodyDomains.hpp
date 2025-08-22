// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpTag, clientIpTag_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PolicyCount, policyCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpTag, clientIpTag_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PolicyCount, policyCount_);
    };
    DescribeDcdnWafDomainsResponseBodyDomains() = default ;
    DescribeDcdnWafDomainsResponseBodyDomains(const DescribeDcdnWafDomainsResponseBodyDomains &) = default ;
    DescribeDcdnWafDomainsResponseBodyDomains(DescribeDcdnWafDomainsResponseBodyDomains &&) = default ;
    DescribeDcdnWafDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDomainsResponseBodyDomains() = default ;
    DescribeDcdnWafDomainsResponseBodyDomains& operator=(const DescribeDcdnWafDomainsResponseBodyDomains &) = default ;
    DescribeDcdnWafDomainsResponseBodyDomains& operator=(DescribeDcdnWafDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIpTag_ != nullptr
        && this->domainName_ != nullptr && this->policyCount_ != nullptr; };
    // clientIpTag Field Functions 
    bool hasClientIpTag() const { return this->clientIpTag_ != nullptr;};
    void deleteClientIpTag() { this->clientIpTag_ = nullptr;};
    inline string clientIpTag() const { DARABONBA_PTR_GET_DEFAULT(clientIpTag_, "") };
    inline DescribeDcdnWafDomainsResponseBodyDomains& setClientIpTag(string clientIpTag) { DARABONBA_PTR_SET_VALUE(clientIpTag_, clientIpTag) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnWafDomainsResponseBodyDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // policyCount Field Functions 
    bool hasPolicyCount() const { return this->policyCount_ != nullptr;};
    void deletePolicyCount() { this->policyCount_ = nullptr;};
    inline int32_t policyCount() const { DARABONBA_PTR_GET_DEFAULT(policyCount_, 0) };
    inline DescribeDcdnWafDomainsResponseBodyDomains& setPolicyCount(int32_t policyCount) { DARABONBA_PTR_SET_VALUE(policyCount_, policyCount) };


  protected:
    // The header of IP address of the client that is connected to the point of presence (POP).
    std::shared_ptr<string> clientIpTag_ = nullptr;
    // The protected domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The number of protection policies that were configured for the protected domain name.
    std::shared_ptr<int32_t> policyCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
