// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILRESPONSEBODYMODULEDOMAINSPECIALBIZCONTACT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILRESPONSEBODYMODULEDOMAINSPECIALBIZCONTACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CCity, CCity_);
      DARABONBA_PTR_TO_JSON(CCompany, CCompany_);
      DARABONBA_PTR_TO_JSON(CCountry, CCountry_);
      DARABONBA_PTR_TO_JSON(CName, CName_);
      DARABONBA_PTR_TO_JSON(CProvince, CProvince_);
      DARABONBA_PTR_TO_JSON(CVenu, CVenu_);
      DARABONBA_PTR_TO_JSON(ECity, ECity_);
      DARABONBA_PTR_TO_JSON(ECompany, ECompany_);
      DARABONBA_PTR_TO_JSON(EName, EName_);
      DARABONBA_PTR_TO_JSON(EProvince, EProvince_);
      DARABONBA_PTR_TO_JSON(EVenu, EVenu_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(FaxArea, faxArea_);
      DARABONBA_PTR_TO_JSON(FaxExt, faxExt_);
      DARABONBA_PTR_TO_JSON(FaxMain, faxMain_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Postalcode, postalcode_);
      DARABONBA_PTR_TO_JSON(RegType, regType_);
      DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
      DARABONBA_PTR_TO_JSON(TelArea, telArea_);
      DARABONBA_PTR_TO_JSON(TelExt, telExt_);
      DARABONBA_PTR_TO_JSON(TelMain, telMain_);
      DARABONBA_PTR_TO_JSON(VspContactId, vspContactId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CCity, CCity_);
      DARABONBA_PTR_FROM_JSON(CCompany, CCompany_);
      DARABONBA_PTR_FROM_JSON(CCountry, CCountry_);
      DARABONBA_PTR_FROM_JSON(CName, CName_);
      DARABONBA_PTR_FROM_JSON(CProvince, CProvince_);
      DARABONBA_PTR_FROM_JSON(CVenu, CVenu_);
      DARABONBA_PTR_FROM_JSON(ECity, ECity_);
      DARABONBA_PTR_FROM_JSON(ECompany, ECompany_);
      DARABONBA_PTR_FROM_JSON(EName, EName_);
      DARABONBA_PTR_FROM_JSON(EProvince, EProvince_);
      DARABONBA_PTR_FROM_JSON(EVenu, EVenu_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(FaxArea, faxArea_);
      DARABONBA_PTR_FROM_JSON(FaxExt, faxExt_);
      DARABONBA_PTR_FROM_JSON(FaxMain, faxMain_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Postalcode, postalcode_);
      DARABONBA_PTR_FROM_JSON(RegType, regType_);
      DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
      DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
      DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
      DARABONBA_PTR_FROM_JSON(TelMain, telMain_);
      DARABONBA_PTR_FROM_JSON(VspContactId, vspContactId_);
    };
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact() = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact(const QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact &) = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact(QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact &&) = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact() = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& operator=(const QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact &) = default ;
    QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& operator=(QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->CCity_ == nullptr && return this->CCompany_ == nullptr && return this->CCountry_ == nullptr && return this->CName_ == nullptr && return this->CProvince_ == nullptr
        && return this->CVenu_ == nullptr && return this->ECity_ == nullptr && return this->ECompany_ == nullptr && return this->EName_ == nullptr && return this->EProvince_ == nullptr
        && return this->EVenu_ == nullptr && return this->email_ == nullptr && return this->extend_ == nullptr && return this->faxArea_ == nullptr && return this->faxExt_ == nullptr
        && return this->faxMain_ == nullptr && return this->mobile_ == nullptr && return this->postalcode_ == nullptr && return this->regType_ == nullptr && return this->registrantId_ == nullptr
        && return this->telArea_ == nullptr && return this->telExt_ == nullptr && return this->telMain_ == nullptr && return this->vspContactId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline int64_t bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // CCity Field Functions 
    bool hasCCity() const { return this->CCity_ != nullptr;};
    void deleteCCity() { this->CCity_ = nullptr;};
    inline string CCity() const { DARABONBA_PTR_GET_DEFAULT(CCity_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setCCity(string CCity) { DARABONBA_PTR_SET_VALUE(CCity_, CCity) };


    // CCompany Field Functions 
    bool hasCCompany() const { return this->CCompany_ != nullptr;};
    void deleteCCompany() { this->CCompany_ = nullptr;};
    inline string CCompany() const { DARABONBA_PTR_GET_DEFAULT(CCompany_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setCCompany(string CCompany) { DARABONBA_PTR_SET_VALUE(CCompany_, CCompany) };


    // CCountry Field Functions 
    bool hasCCountry() const { return this->CCountry_ != nullptr;};
    void deleteCCountry() { this->CCountry_ = nullptr;};
    inline string CCountry() const { DARABONBA_PTR_GET_DEFAULT(CCountry_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setCCountry(string CCountry) { DARABONBA_PTR_SET_VALUE(CCountry_, CCountry) };


    // CName Field Functions 
    bool hasCName() const { return this->CName_ != nullptr;};
    void deleteCName() { this->CName_ = nullptr;};
    inline string CName() const { DARABONBA_PTR_GET_DEFAULT(CName_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setCName(string CName) { DARABONBA_PTR_SET_VALUE(CName_, CName) };


    // CProvince Field Functions 
    bool hasCProvince() const { return this->CProvince_ != nullptr;};
    void deleteCProvince() { this->CProvince_ = nullptr;};
    inline string CProvince() const { DARABONBA_PTR_GET_DEFAULT(CProvince_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setCProvince(string CProvince) { DARABONBA_PTR_SET_VALUE(CProvince_, CProvince) };


    // CVenu Field Functions 
    bool hasCVenu() const { return this->CVenu_ != nullptr;};
    void deleteCVenu() { this->CVenu_ = nullptr;};
    inline string CVenu() const { DARABONBA_PTR_GET_DEFAULT(CVenu_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setCVenu(string CVenu) { DARABONBA_PTR_SET_VALUE(CVenu_, CVenu) };


    // ECity Field Functions 
    bool hasECity() const { return this->ECity_ != nullptr;};
    void deleteECity() { this->ECity_ = nullptr;};
    inline string ECity() const { DARABONBA_PTR_GET_DEFAULT(ECity_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setECity(string ECity) { DARABONBA_PTR_SET_VALUE(ECity_, ECity) };


    // ECompany Field Functions 
    bool hasECompany() const { return this->ECompany_ != nullptr;};
    void deleteECompany() { this->ECompany_ = nullptr;};
    inline string ECompany() const { DARABONBA_PTR_GET_DEFAULT(ECompany_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setECompany(string ECompany) { DARABONBA_PTR_SET_VALUE(ECompany_, ECompany) };


    // EName Field Functions 
    bool hasEName() const { return this->EName_ != nullptr;};
    void deleteEName() { this->EName_ = nullptr;};
    inline string EName() const { DARABONBA_PTR_GET_DEFAULT(EName_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setEName(string EName) { DARABONBA_PTR_SET_VALUE(EName_, EName) };


    // EProvince Field Functions 
    bool hasEProvince() const { return this->EProvince_ != nullptr;};
    void deleteEProvince() { this->EProvince_ = nullptr;};
    inline string EProvince() const { DARABONBA_PTR_GET_DEFAULT(EProvince_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setEProvince(string EProvince) { DARABONBA_PTR_SET_VALUE(EProvince_, EProvince) };


    // EVenu Field Functions 
    bool hasEVenu() const { return this->EVenu_ != nullptr;};
    void deleteEVenu() { this->EVenu_ = nullptr;};
    inline string EVenu() const { DARABONBA_PTR_GET_DEFAULT(EVenu_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setEVenu(string EVenu) { DARABONBA_PTR_SET_VALUE(EVenu_, EVenu) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // faxArea Field Functions 
    bool hasFaxArea() const { return this->faxArea_ != nullptr;};
    void deleteFaxArea() { this->faxArea_ = nullptr;};
    inline string faxArea() const { DARABONBA_PTR_GET_DEFAULT(faxArea_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setFaxArea(string faxArea) { DARABONBA_PTR_SET_VALUE(faxArea_, faxArea) };


    // faxExt Field Functions 
    bool hasFaxExt() const { return this->faxExt_ != nullptr;};
    void deleteFaxExt() { this->faxExt_ = nullptr;};
    inline string faxExt() const { DARABONBA_PTR_GET_DEFAULT(faxExt_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setFaxExt(string faxExt) { DARABONBA_PTR_SET_VALUE(faxExt_, faxExt) };


    // faxMain Field Functions 
    bool hasFaxMain() const { return this->faxMain_ != nullptr;};
    void deleteFaxMain() { this->faxMain_ = nullptr;};
    inline string faxMain() const { DARABONBA_PTR_GET_DEFAULT(faxMain_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setFaxMain(string faxMain) { DARABONBA_PTR_SET_VALUE(faxMain_, faxMain) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // postalcode Field Functions 
    bool hasPostalcode() const { return this->postalcode_ != nullptr;};
    void deletePostalcode() { this->postalcode_ = nullptr;};
    inline string postalcode() const { DARABONBA_PTR_GET_DEFAULT(postalcode_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setPostalcode(string postalcode) { DARABONBA_PTR_SET_VALUE(postalcode_, postalcode) };


    // regType Field Functions 
    bool hasRegType() const { return this->regType_ != nullptr;};
    void deleteRegType() { this->regType_ = nullptr;};
    inline int32_t regType() const { DARABONBA_PTR_GET_DEFAULT(regType_, 0) };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setRegType(int32_t regType) { DARABONBA_PTR_SET_VALUE(regType_, regType) };


    // registrantId Field Functions 
    bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
    void deleteRegistrantId() { this->registrantId_ = nullptr;};
    inline string registrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string telArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string telExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telMain Field Functions 
    bool hasTelMain() const { return this->telMain_ != nullptr;};
    void deleteTelMain() { this->telMain_ = nullptr;};
    inline string telMain() const { DARABONBA_PTR_GET_DEFAULT(telMain_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setTelMain(string telMain) { DARABONBA_PTR_SET_VALUE(telMain_, telMain) };


    // vspContactId Field Functions 
    bool hasVspContactId() const { return this->vspContactId_ != nullptr;};
    void deleteVspContactId() { this->vspContactId_ = nullptr;};
    inline string vspContactId() const { DARABONBA_PTR_GET_DEFAULT(vspContactId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact& setVspContactId(string vspContactId) { DARABONBA_PTR_SET_VALUE(vspContactId_, vspContactId) };


  protected:
    // The business ID.
    std::shared_ptr<int64_t> bizId_ = nullptr;
    // The city.
    std::shared_ptr<string> CCity_ = nullptr;
    // The organization name.
    std::shared_ptr<string> CCompany_ = nullptr;
    // The country code.
    std::shared_ptr<string> CCountry_ = nullptr;
    // The contact name.
    std::shared_ptr<string> CName_ = nullptr;
    // The province.
    std::shared_ptr<string> CProvince_ = nullptr;
    // The address.
    std::shared_ptr<string> CVenu_ = nullptr;
    // The city in English.
    std::shared_ptr<string> ECity_ = nullptr;
    // The organization name in English.
    std::shared_ptr<string> ECompany_ = nullptr;
    // The contact name in English.
    std::shared_ptr<string> EName_ = nullptr;
    // The province in English.
    std::shared_ptr<string> EProvince_ = nullptr;
    // The address in English.
    std::shared_ptr<string> EVenu_ = nullptr;
    // The email address.
    std::shared_ptr<string> email_ = nullptr;
    // The extended information.
    std::shared_ptr<string> extend_ = nullptr;
    // The fax country code.
    std::shared_ptr<string> faxArea_ = nullptr;
    // The fax extension number.
    std::shared_ptr<string> faxExt_ = nullptr;
    // The fax number with an area code or mobile number.
    std::shared_ptr<string> faxMain_ = nullptr;
    // The mobile number.
    std::shared_ptr<string> mobile_ = nullptr;
    // The zip code.
    std::shared_ptr<string> postalcode_ = nullptr;
    // The contact type. Valid values: 1: individual. 2: enterprise.
    std::shared_ptr<int32_t> regType_ = nullptr;
    // The registrant ID.
    std::shared_ptr<string> registrantId_ = nullptr;
    // The calling code of the country or region where the domain name contact is located.
    std::shared_ptr<string> telArea_ = nullptr;
    // The telephone extension number.
    std::shared_ptr<string> telExt_ = nullptr;
    // The landline number with an area code or mobile number.
    std::shared_ptr<string> telMain_ = nullptr;
    // The VSP contact ID.
    std::shared_ptr<string> vspContactId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
