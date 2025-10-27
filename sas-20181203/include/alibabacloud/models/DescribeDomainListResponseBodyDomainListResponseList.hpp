// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINLISTRESPONSEBODYDOMAINLISTRESPONSELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINLISTRESPONSEBODYDOMAINLISTRESPONSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainListResponseBodyDomainListResponseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainListResponseBodyDomainListResponseList& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainListResponseBodyDomainListResponseList& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
    };
    DescribeDomainListResponseBodyDomainListResponseList() = default ;
    DescribeDomainListResponseBodyDomainListResponseList(const DescribeDomainListResponseBodyDomainListResponseList &) = default ;
    DescribeDomainListResponseBodyDomainListResponseList(DescribeDomainListResponseBodyDomainListResponseList &&) = default ;
    DescribeDomainListResponseBodyDomainListResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainListResponseBodyDomainListResponseList() = default ;
    DescribeDomainListResponseBodyDomainListResponseList& operator=(const DescribeDomainListResponseBodyDomainListResponseList &) = default ;
    DescribeDomainListResponseBodyDomainListResponseList& operator=(DescribeDomainListResponseBodyDomainListResponseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->ipList_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainListResponseBodyDomainListResponseList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string ipList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline DescribeDomainListResponseBodyDomainListResponseList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


  protected:
    // The name of the domain or website.
    std::shared_ptr<string> domain_ = nullptr;
    // The IP addresses of the domain name.
    std::shared_ptr<string> ipList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
