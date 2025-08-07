// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDOMAINRESPONSEBODYDOMAININFO_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDOMAINRESPONSEBODYDOMAININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDomainResponseBodyDomainInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDomainResponseBodyDomainInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDomainResponseBodyDomainInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
    };
    ModifyDomainResponseBodyDomainInfo() = default ;
    ModifyDomainResponseBodyDomainInfo(const ModifyDomainResponseBodyDomainInfo &) = default ;
    ModifyDomainResponseBodyDomainInfo(ModifyDomainResponseBodyDomainInfo &&) = default ;
    ModifyDomainResponseBodyDomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDomainResponseBodyDomainInfo() = default ;
    ModifyDomainResponseBodyDomainInfo& operator=(const ModifyDomainResponseBodyDomainInfo &) = default ;
    ModifyDomainResponseBodyDomainInfo& operator=(ModifyDomainResponseBodyDomainInfo &&) = default ;
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
    inline ModifyDomainResponseBodyDomainInfo& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyDomainResponseBodyDomainInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline ModifyDomainResponseBodyDomainInfo& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


  protected:
    // The CNAME that is assigned by WAF to the domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The domain name whose access configurations you modified.
    std::shared_ptr<string> domain_ = nullptr;
    // The ID of the domain name.
    std::shared_ptr<string> domainId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
