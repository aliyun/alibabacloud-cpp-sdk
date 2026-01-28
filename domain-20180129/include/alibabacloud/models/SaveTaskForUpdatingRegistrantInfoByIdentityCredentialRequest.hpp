// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORUPDATINGREGISTRANTINFOBYIDENTITYCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORUPDATINGREGISTRANTINFOBYIDENTITYCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_TO_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(TelArea, telArea_);
      DARABONBA_PTR_TO_JSON(TelExt, telExt_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      DARABONBA_PTR_TO_JSON(TransferOutProhibited, transferOutProhibited_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_TO_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_TO_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IdentityCredential, identityCredential_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialNo, identityCredentialNo_);
      DARABONBA_PTR_FROM_JSON(IdentityCredentialType, identityCredentialType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
      DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(TransferOutProhibited, transferOutProhibited_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_FROM_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_FROM_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest() = default ;
    SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &) = default ;
    SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest(SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &&) = default ;
    SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest() = default ;
    SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& operator=(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &) = default ;
    SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& operator=(SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->city_ == nullptr && this->country_ == nullptr && this->domainName_ == nullptr && this->email_ == nullptr && this->identityCredential_ == nullptr
        && this->identityCredentialNo_ == nullptr && this->identityCredentialType_ == nullptr && this->lang_ == nullptr && this->postalCode_ == nullptr && this->province_ == nullptr
        && this->registrantName_ == nullptr && this->registrantOrganization_ == nullptr && this->registrantType_ == nullptr && this->telArea_ == nullptr && this->telExt_ == nullptr
        && this->telephone_ == nullptr && this->transferOutProhibited_ == nullptr && this->userClientIp_ == nullptr && this->zhAddress_ == nullptr && this->zhCity_ == nullptr
        && this->zhProvince_ == nullptr && this->zhRegistrantName_ == nullptr && this->zhRegistrantOrganization_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & getDomainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> getDomainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // identityCredential Field Functions 
    bool hasIdentityCredential() const { return this->identityCredential_ != nullptr;};
    void deleteIdentityCredential() { this->identityCredential_ = nullptr;};
    inline string getIdentityCredential() const { DARABONBA_PTR_GET_DEFAULT(identityCredential_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setIdentityCredential(string identityCredential) { DARABONBA_PTR_SET_VALUE(identityCredential_, identityCredential) };


    // identityCredentialNo Field Functions 
    bool hasIdentityCredentialNo() const { return this->identityCredentialNo_ != nullptr;};
    void deleteIdentityCredentialNo() { this->identityCredentialNo_ = nullptr;};
    inline string getIdentityCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialNo_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setIdentityCredentialNo(string identityCredentialNo) { DARABONBA_PTR_SET_VALUE(identityCredentialNo_, identityCredentialNo) };


    // identityCredentialType Field Functions 
    bool hasIdentityCredentialType() const { return this->identityCredentialType_ != nullptr;};
    void deleteIdentityCredentialType() { this->identityCredentialType_ = nullptr;};
    inline string getIdentityCredentialType() const { DARABONBA_PTR_GET_DEFAULT(identityCredentialType_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setIdentityCredentialType(string identityCredentialType) { DARABONBA_PTR_SET_VALUE(identityCredentialType_, identityCredentialType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string getRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string getRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string getTelArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string getTelExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // transferOutProhibited Field Functions 
    bool hasTransferOutProhibited() const { return this->transferOutProhibited_ != nullptr;};
    void deleteTransferOutProhibited() { this->transferOutProhibited_ = nullptr;};
    inline bool getTransferOutProhibited() const { DARABONBA_PTR_GET_DEFAULT(transferOutProhibited_, false) };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setTransferOutProhibited(bool transferOutProhibited) { DARABONBA_PTR_SET_VALUE(transferOutProhibited_, transferOutProhibited) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // zhAddress Field Functions 
    bool hasZhAddress() const { return this->zhAddress_ != nullptr;};
    void deleteZhAddress() { this->zhAddress_ = nullptr;};
    inline string getZhAddress() const { DARABONBA_PTR_GET_DEFAULT(zhAddress_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setZhAddress(string zhAddress) { DARABONBA_PTR_SET_VALUE(zhAddress_, zhAddress) };


    // zhCity Field Functions 
    bool hasZhCity() const { return this->zhCity_ != nullptr;};
    void deleteZhCity() { this->zhCity_ = nullptr;};
    inline string getZhCity() const { DARABONBA_PTR_GET_DEFAULT(zhCity_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setZhCity(string zhCity) { DARABONBA_PTR_SET_VALUE(zhCity_, zhCity) };


    // zhProvince Field Functions 
    bool hasZhProvince() const { return this->zhProvince_ != nullptr;};
    void deleteZhProvince() { this->zhProvince_ = nullptr;};
    inline string getZhProvince() const { DARABONBA_PTR_GET_DEFAULT(zhProvince_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setZhProvince(string zhProvince) { DARABONBA_PTR_SET_VALUE(zhProvince_, zhProvince) };


    // zhRegistrantName Field Functions 
    bool hasZhRegistrantName() const { return this->zhRegistrantName_ != nullptr;};
    void deleteZhRegistrantName() { this->zhRegistrantName_ = nullptr;};
    inline string getZhRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantName_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setZhRegistrantName(string zhRegistrantName) { DARABONBA_PTR_SET_VALUE(zhRegistrantName_, zhRegistrantName) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string getZhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> city_ {};
    shared_ptr<string> country_ {};
    // This parameter is required.
    shared_ptr<vector<string>> domainName_ {};
    shared_ptr<string> email_ {};
    // This parameter is required.
    shared_ptr<string> identityCredential_ {};
    // This parameter is required.
    shared_ptr<string> identityCredentialNo_ {};
    // This parameter is required.
    shared_ptr<string> identityCredentialType_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> postalCode_ {};
    shared_ptr<string> province_ {};
    shared_ptr<string> registrantName_ {};
    shared_ptr<string> registrantOrganization_ {};
    // This parameter is required.
    shared_ptr<string> registrantType_ {};
    // This parameter is required.
    shared_ptr<string> telArea_ {};
    shared_ptr<string> telExt_ {};
    // This parameter is required.
    shared_ptr<string> telephone_ {};
    // This parameter is required.
    shared_ptr<bool> transferOutProhibited_ {};
    shared_ptr<string> userClientIp_ {};
    shared_ptr<string> zhAddress_ {};
    shared_ptr<string> zhCity_ {};
    shared_ptr<string> zhProvince_ {};
    shared_ptr<string> zhRegistrantName_ {};
    shared_ptr<string> zhRegistrantOrganization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
