// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEREGISTRANTPROFILEREALNAMEVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEREGISTRANTPROFILEREALNAMEVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveRegistrantProfileRealNameVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveRegistrantProfileRealNameVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileType, registrantProfileType_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(TelArea, telArea_);
      DARABONBA_PTR_TO_JSON(TelExt, telExt_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_TO_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_TO_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    friend void from_json(const Darabonba::Json& j, SaveRegistrantProfileRealNameVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileType, registrantProfileType_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
      DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_FROM_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_FROM_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    SaveRegistrantProfileRealNameVerificationRequest() = default ;
    SaveRegistrantProfileRealNameVerificationRequest(const SaveRegistrantProfileRealNameVerificationRequest &) = default ;
    SaveRegistrantProfileRealNameVerificationRequest(SaveRegistrantProfileRealNameVerificationRequest &&) = default ;
    SaveRegistrantProfileRealNameVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveRegistrantProfileRealNameVerificationRequest() = default ;
    SaveRegistrantProfileRealNameVerificationRequest& operator=(const SaveRegistrantProfileRealNameVerificationRequest &) = default ;
    SaveRegistrantProfileRealNameVerificationRequest& operator=(SaveRegistrantProfileRealNameVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->city_ == nullptr && return this->country_ == nullptr && return this->email_ == nullptr && return this->identityCredential_ == nullptr && return this->identityCredentialNo_ == nullptr
        && return this->identityCredentialType_ == nullptr && return this->lang_ == nullptr && return this->postalCode_ == nullptr && return this->province_ == nullptr && return this->registrantName_ == nullptr
        && return this->registrantOrganization_ == nullptr && return this->registrantProfileId_ == nullptr && return this->registrantProfileType_ == nullptr && return this->registrantType_ == nullptr && return this->telArea_ == nullptr
        && return this->telExt_ == nullptr && return this->telephone_ == nullptr && return this->userClientIp_ == nullptr && return this->zhAddress_ == nullptr && return this->zhCity_ == nullptr
        && return this->zhProvince_ == nullptr && return this->zhRegistrantName_ == nullptr && return this->zhRegistrantOrganization_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // identityCredential Field Functions 
    bool hasIdentityCredential() const { return this->identityCredential_ != nullptr;};
    void deleteIdentityCredential() { this->identityCredential_ = nullptr;};
    inline string identityCredential() const { DARABONBA_PTR_GET_DEFAULT(identityCredential_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setIdentityCredential(string identityCredential) { DARABONBA_PTR_SET_VALUE(identityCredential_, identityCredential) };


    // identityCredentialNo Field Functions 
    bool hasIdentityCredentialNo() const { return this->identityCredentialNo_ != nullptr;};
    void deleteIdentityCredentialNo() { this->identityCredentialNo_ = nullptr;};
    inline string identityCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialNo_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setIdentityCredentialNo(string identityCredentialNo) { DARABONBA_PTR_SET_VALUE(identityCredentialNo_, identityCredentialNo) };


    // identityCredentialType Field Functions 
    bool hasIdentityCredentialType() const { return this->identityCredentialType_ != nullptr;};
    void deleteIdentityCredentialType() { this->identityCredentialType_ = nullptr;};
    inline string identityCredentialType() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialType_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setIdentityCredentialType(string identityCredentialType) { DARABONBA_PTR_SET_VALUE(identityCredentialType_, identityCredentialType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string postalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string registrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string registrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t registrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveRegistrantProfileRealNameVerificationRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // registrantProfileType Field Functions 
    bool hasRegistrantProfileType() const { return this->registrantProfileType_ != nullptr;};
    void deleteRegistrantProfileType() { this->registrantProfileType_ = nullptr;};
    inline string registrantProfileType() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileType_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setRegistrantProfileType(string registrantProfileType) { DARABONBA_PTR_SET_VALUE(registrantProfileType_, registrantProfileType) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string registrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string telArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string telExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // zhAddress Field Functions 
    bool hasZhAddress() const { return this->zhAddress_ != nullptr;};
    void deleteZhAddress() { this->zhAddress_ = nullptr;};
    inline string zhAddress() const { DARABONBA_PTR_GET_DEFAULT(zhAddress_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setZhAddress(string zhAddress) { DARABONBA_PTR_SET_VALUE(zhAddress_, zhAddress) };


    // zhCity Field Functions 
    bool hasZhCity() const { return this->zhCity_ != nullptr;};
    void deleteZhCity() { this->zhCity_ = nullptr;};
    inline string zhCity() const { DARABONBA_PTR_GET_DEFAULT(zhCity_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setZhCity(string zhCity) { DARABONBA_PTR_SET_VALUE(zhCity_, zhCity) };


    // zhProvince Field Functions 
    bool hasZhProvince() const { return this->zhProvince_ != nullptr;};
    void deleteZhProvince() { this->zhProvince_ = nullptr;};
    inline string zhProvince() const { DARABONBA_PTR_GET_DEFAULT(zhProvince_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setZhProvince(string zhProvince) { DARABONBA_PTR_SET_VALUE(zhProvince_, zhProvince) };


    // zhRegistrantName Field Functions 
    bool hasZhRegistrantName() const { return this->zhRegistrantName_ != nullptr;};
    void deleteZhRegistrantName() { this->zhRegistrantName_ = nullptr;};
    inline string zhRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantName_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setZhRegistrantName(string zhRegistrantName) { DARABONBA_PTR_SET_VALUE(zhRegistrantName_, zhRegistrantName) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string zhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline SaveRegistrantProfileRealNameVerificationRequest& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> identityCredential_ = nullptr;
    std::shared_ptr<string> identityCredentialNo_ = nullptr;
    std::shared_ptr<string> identityCredentialType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> postalCode_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> registrantName_ = nullptr;
    std::shared_ptr<string> registrantOrganization_ = nullptr;
    std::shared_ptr<int64_t> registrantProfileId_ = nullptr;
    std::shared_ptr<string> registrantProfileType_ = nullptr;
    std::shared_ptr<string> registrantType_ = nullptr;
    std::shared_ptr<string> telArea_ = nullptr;
    std::shared_ptr<string> telExt_ = nullptr;
    std::shared_ptr<string> telephone_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
    std::shared_ptr<string> zhAddress_ = nullptr;
    std::shared_ptr<string> zhCity_ = nullptr;
    std::shared_ptr<string> zhProvince_ = nullptr;
    std::shared_ptr<string> zhRegistrantName_ = nullptr;
    std::shared_ptr<string> zhRegistrantOrganization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
