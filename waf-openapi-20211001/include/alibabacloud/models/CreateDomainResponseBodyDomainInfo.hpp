// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINRESPONSEBODYDOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINRESPONSEBODYDOMAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDomainResponseBodyDomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainResponseBodyDomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainResponseBodyDomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
    };
    CreateDomainResponseBodyDomainInfo() = default ;
    CreateDomainResponseBodyDomainInfo(const CreateDomainResponseBodyDomainInfo &) = default ;
    CreateDomainResponseBodyDomainInfo(CreateDomainResponseBodyDomainInfo &&) = default ;
    CreateDomainResponseBodyDomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainResponseBodyDomainInfo() = default ;
    CreateDomainResponseBodyDomainInfo& operator=(const CreateDomainResponseBodyDomainInfo &) = default ;
    CreateDomainResponseBodyDomainInfo& operator=(CreateDomainResponseBodyDomainInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->domain_ != nullptr && this->domainId_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline CreateDomainResponseBodyDomainInfo& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateDomainResponseBodyDomainInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline CreateDomainResponseBodyDomainInfo& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


  protected:
    // The CNAME that is assigned by WAF to the domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The domain name that you added to WAF.
    std::shared_ptr<string> domain_ = nullptr;
    // The name of the protected object that is generated.
    std::shared_ptr<string> domainId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
