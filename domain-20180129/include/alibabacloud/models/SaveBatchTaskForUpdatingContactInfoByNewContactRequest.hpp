// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORUPDATINGCONTACTINFOBYNEWCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORUPDATINGCONTACTINFOBYNEWCONTACTREQUEST_HPP_
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
  class SaveBatchTaskForUpdatingContactInfoByNewContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForUpdatingContactInfoByNewContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
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
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForUpdatingContactInfoByNewContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
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
    SaveBatchTaskForUpdatingContactInfoByNewContactRequest() = default ;
    SaveBatchTaskForUpdatingContactInfoByNewContactRequest(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &) = default ;
    SaveBatchTaskForUpdatingContactInfoByNewContactRequest(SaveBatchTaskForUpdatingContactInfoByNewContactRequest &&) = default ;
    SaveBatchTaskForUpdatingContactInfoByNewContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForUpdatingContactInfoByNewContactRequest() = default ;
    SaveBatchTaskForUpdatingContactInfoByNewContactRequest& operator=(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &) = default ;
    SaveBatchTaskForUpdatingContactInfoByNewContactRequest& operator=(SaveBatchTaskForUpdatingContactInfoByNewContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->city_ == nullptr && return this->contactType_ == nullptr && return this->country_ == nullptr && return this->domainName_ == nullptr && return this->email_ == nullptr
        && return this->lang_ == nullptr && return this->postalCode_ == nullptr && return this->province_ == nullptr && return this->registrantName_ == nullptr && return this->registrantOrganization_ == nullptr
        && return this->registrantType_ == nullptr && return this->telArea_ == nullptr && return this->telExt_ == nullptr && return this->telephone_ == nullptr && return this->transferOutProhibited_ == nullptr
        && return this->userClientIp_ == nullptr && return this->zhAddress_ == nullptr && return this->zhCity_ == nullptr && return this->zhProvince_ == nullptr && return this->zhRegistrantName_ == nullptr
        && return this->zhRegistrantOrganization_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & domainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> domainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string postalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string registrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string registrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string registrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string telArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string telExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // transferOutProhibited Field Functions 
    bool hasTransferOutProhibited() const { return this->transferOutProhibited_ != nullptr;};
    void deleteTransferOutProhibited() { this->transferOutProhibited_ = nullptr;};
    inline bool transferOutProhibited() const { DARABONBA_PTR_GET_DEFAULT(transferOutProhibited_, false) };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setTransferOutProhibited(bool transferOutProhibited) { DARABONBA_PTR_SET_VALUE(transferOutProhibited_, transferOutProhibited) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // zhAddress Field Functions 
    bool hasZhAddress() const { return this->zhAddress_ != nullptr;};
    void deleteZhAddress() { this->zhAddress_ = nullptr;};
    inline string zhAddress() const { DARABONBA_PTR_GET_DEFAULT(zhAddress_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setZhAddress(string zhAddress) { DARABONBA_PTR_SET_VALUE(zhAddress_, zhAddress) };


    // zhCity Field Functions 
    bool hasZhCity() const { return this->zhCity_ != nullptr;};
    void deleteZhCity() { this->zhCity_ = nullptr;};
    inline string zhCity() const { DARABONBA_PTR_GET_DEFAULT(zhCity_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setZhCity(string zhCity) { DARABONBA_PTR_SET_VALUE(zhCity_, zhCity) };


    // zhProvince Field Functions 
    bool hasZhProvince() const { return this->zhProvince_ != nullptr;};
    void deleteZhProvince() { this->zhProvince_ = nullptr;};
    inline string zhProvince() const { DARABONBA_PTR_GET_DEFAULT(zhProvince_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setZhProvince(string zhProvince) { DARABONBA_PTR_SET_VALUE(zhProvince_, zhProvince) };


    // zhRegistrantName Field Functions 
    bool hasZhRegistrantName() const { return this->zhRegistrantName_ != nullptr;};
    void deleteZhRegistrantName() { this->zhRegistrantName_ = nullptr;};
    inline string zhRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantName_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setZhRegistrantName(string zhRegistrantName) { DARABONBA_PTR_SET_VALUE(zhRegistrantName_, zhRegistrantName) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string zhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByNewContactRequest& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactType_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> domainName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> postalCode_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> registrantName_ = nullptr;
    std::shared_ptr<string> registrantOrganization_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> registrantType_ = nullptr;
    std::shared_ptr<string> telArea_ = nullptr;
    std::shared_ptr<string> telExt_ = nullptr;
    std::shared_ptr<string> telephone_ = nullptr;
    std::shared_ptr<bool> transferOutProhibited_ = nullptr;
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
