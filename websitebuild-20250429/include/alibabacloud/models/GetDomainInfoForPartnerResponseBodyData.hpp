// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAININFOFORPARTNERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAININFOFORPARTNERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDomainInfoForPartnerResponseBodyDataOwnership.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetDomainInfoForPartnerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainInfoForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NameServers, nameServers_);
      DARABONBA_PTR_TO_JSON(Ownership, ownership_);
      DARABONBA_PTR_TO_JSON(Registrar, registrar_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainInfoForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NameServers, nameServers_);
      DARABONBA_PTR_FROM_JSON(Ownership, ownership_);
      DARABONBA_PTR_FROM_JSON(Registrar, registrar_);
    };
    GetDomainInfoForPartnerResponseBodyData() = default ;
    GetDomainInfoForPartnerResponseBodyData(const GetDomainInfoForPartnerResponseBodyData &) = default ;
    GetDomainInfoForPartnerResponseBodyData(GetDomainInfoForPartnerResponseBodyData &&) = default ;
    GetDomainInfoForPartnerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainInfoForPartnerResponseBodyData() = default ;
    GetDomainInfoForPartnerResponseBodyData& operator=(const GetDomainInfoForPartnerResponseBodyData &) = default ;
    GetDomainInfoForPartnerResponseBodyData& operator=(GetDomainInfoForPartnerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->nameServers_ != nullptr && this->ownership_ != nullptr && this->registrar_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetDomainInfoForPartnerResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // nameServers Field Functions 
    bool hasNameServers() const { return this->nameServers_ != nullptr;};
    void deleteNameServers() { this->nameServers_ = nullptr;};
    inline string nameServers() const { DARABONBA_PTR_GET_DEFAULT(nameServers_, "") };
    inline GetDomainInfoForPartnerResponseBodyData& setNameServers(string nameServers) { DARABONBA_PTR_SET_VALUE(nameServers_, nameServers) };


    // ownership Field Functions 
    bool hasOwnership() const { return this->ownership_ != nullptr;};
    void deleteOwnership() { this->ownership_ = nullptr;};
    inline const Models::GetDomainInfoForPartnerResponseBodyDataOwnership & ownership() const { DARABONBA_PTR_GET_CONST(ownership_, Models::GetDomainInfoForPartnerResponseBodyDataOwnership) };
    inline Models::GetDomainInfoForPartnerResponseBodyDataOwnership ownership() { DARABONBA_PTR_GET(ownership_, Models::GetDomainInfoForPartnerResponseBodyDataOwnership) };
    inline GetDomainInfoForPartnerResponseBodyData& setOwnership(const Models::GetDomainInfoForPartnerResponseBodyDataOwnership & ownership) { DARABONBA_PTR_SET_VALUE(ownership_, ownership) };
    inline GetDomainInfoForPartnerResponseBodyData& setOwnership(Models::GetDomainInfoForPartnerResponseBodyDataOwnership && ownership) { DARABONBA_PTR_SET_RVALUE(ownership_, ownership) };


    // registrar Field Functions 
    bool hasRegistrar() const { return this->registrar_ != nullptr;};
    void deleteRegistrar() { this->registrar_ = nullptr;};
    inline string registrar() const { DARABONBA_PTR_GET_DEFAULT(registrar_, "") };
    inline GetDomainInfoForPartnerResponseBodyData& setRegistrar(string registrar) { DARABONBA_PTR_SET_VALUE(registrar_, registrar) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> nameServers_ = nullptr;
    std::shared_ptr<Models::GetDomainInfoForPartnerResponseBodyDataOwnership> ownership_ = nullptr;
    std::shared_ptr<string> registrar_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
