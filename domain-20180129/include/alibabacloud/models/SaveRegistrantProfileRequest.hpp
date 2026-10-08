// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEREGISTRANTPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEREGISTRANTPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveRegistrantProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveRegistrantProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(DefaultRegistrantProfile, defaultRegistrantProfile_);
      DARABONBA_PTR_TO_JSON(Email, email_);
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
    friend void from_json(const Darabonba::Json& j, SaveRegistrantProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(DefaultRegistrantProfile, defaultRegistrantProfile_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
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
    SaveRegistrantProfileRequest() = default ;
    SaveRegistrantProfileRequest(const SaveRegistrantProfileRequest &) = default ;
    SaveRegistrantProfileRequest(SaveRegistrantProfileRequest &&) = default ;
    SaveRegistrantProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveRegistrantProfileRequest() = default ;
    SaveRegistrantProfileRequest& operator=(const SaveRegistrantProfileRequest &) = default ;
    SaveRegistrantProfileRequest& operator=(SaveRegistrantProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->city_ == nullptr && this->country_ == nullptr && this->defaultRegistrantProfile_ == nullptr && this->email_ == nullptr && this->lang_ == nullptr
        && this->postalCode_ == nullptr && this->province_ == nullptr && this->registrantName_ == nullptr && this->registrantOrganization_ == nullptr && this->registrantProfileId_ == nullptr
        && this->registrantProfileType_ == nullptr && this->registrantType_ == nullptr && this->telArea_ == nullptr && this->telExt_ == nullptr && this->telephone_ == nullptr
        && this->userClientIp_ == nullptr && this->zhAddress_ == nullptr && this->zhCity_ == nullptr && this->zhProvince_ == nullptr && this->zhRegistrantName_ == nullptr
        && this->zhRegistrantOrganization_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline SaveRegistrantProfileRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline SaveRegistrantProfileRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline SaveRegistrantProfileRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // defaultRegistrantProfile Field Functions 
    bool hasDefaultRegistrantProfile() const { return this->defaultRegistrantProfile_ != nullptr;};
    void deleteDefaultRegistrantProfile() { this->defaultRegistrantProfile_ = nullptr;};
    inline bool getDefaultRegistrantProfile() const { DARABONBA_PTR_GET_DEFAULT(defaultRegistrantProfile_, false) };
    inline SaveRegistrantProfileRequest& setDefaultRegistrantProfile(bool defaultRegistrantProfile) { DARABONBA_PTR_SET_VALUE(defaultRegistrantProfile_, defaultRegistrantProfile) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SaveRegistrantProfileRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveRegistrantProfileRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline SaveRegistrantProfileRequest& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline SaveRegistrantProfileRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string getRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline SaveRegistrantProfileRequest& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string getRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline SaveRegistrantProfileRequest& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveRegistrantProfileRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // registrantProfileType Field Functions 
    bool hasRegistrantProfileType() const { return this->registrantProfileType_ != nullptr;};
    void deleteRegistrantProfileType() { this->registrantProfileType_ = nullptr;};
    inline string getRegistrantProfileType() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileType_, "") };
    inline SaveRegistrantProfileRequest& setRegistrantProfileType(string registrantProfileType) { DARABONBA_PTR_SET_VALUE(registrantProfileType_, registrantProfileType) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline SaveRegistrantProfileRequest& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string getTelArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline SaveRegistrantProfileRequest& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string getTelExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline SaveRegistrantProfileRequest& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline SaveRegistrantProfileRequest& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveRegistrantProfileRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // zhAddress Field Functions 
    bool hasZhAddress() const { return this->zhAddress_ != nullptr;};
    void deleteZhAddress() { this->zhAddress_ = nullptr;};
    inline string getZhAddress() const { DARABONBA_PTR_GET_DEFAULT(zhAddress_, "") };
    inline SaveRegistrantProfileRequest& setZhAddress(string zhAddress) { DARABONBA_PTR_SET_VALUE(zhAddress_, zhAddress) };


    // zhCity Field Functions 
    bool hasZhCity() const { return this->zhCity_ != nullptr;};
    void deleteZhCity() { this->zhCity_ = nullptr;};
    inline string getZhCity() const { DARABONBA_PTR_GET_DEFAULT(zhCity_, "") };
    inline SaveRegistrantProfileRequest& setZhCity(string zhCity) { DARABONBA_PTR_SET_VALUE(zhCity_, zhCity) };


    // zhProvince Field Functions 
    bool hasZhProvince() const { return this->zhProvince_ != nullptr;};
    void deleteZhProvince() { this->zhProvince_ = nullptr;};
    inline string getZhProvince() const { DARABONBA_PTR_GET_DEFAULT(zhProvince_, "") };
    inline SaveRegistrantProfileRequest& setZhProvince(string zhProvince) { DARABONBA_PTR_SET_VALUE(zhProvince_, zhProvince) };


    // zhRegistrantName Field Functions 
    bool hasZhRegistrantName() const { return this->zhRegistrantName_ != nullptr;};
    void deleteZhRegistrantName() { this->zhRegistrantName_ = nullptr;};
    inline string getZhRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantName_, "") };
    inline SaveRegistrantProfileRequest& setZhRegistrantName(string zhRegistrantName) { DARABONBA_PTR_SET_VALUE(zhRegistrantName_, zhRegistrantName) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string getZhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline SaveRegistrantProfileRequest& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    // Street address (English).
    shared_ptr<string> address_ {};
    // City (English). Enter the name of the city where the registrant is located.  
    // 
    // > Include the word “shi” (meaning “city”) in the city name. For example, if the registrant is in Hangzhou, enter “hang zhou shi”.
    shared_ptr<string> city_ {};
    // Country code. For example, **CN** represents China and **US** represents the United States.
    shared_ptr<string> country_ {};
    // Whether to set this profile as the default template. Valid values:  
    // - **true**: Default template.  
    // - **false**: Non-default template.  
    // 
    // Default value: **false**.
    shared_ptr<bool> defaultRegistrantProfile_ {};
    // Mailbox.
    shared_ptr<string> email_ {};
    // Language of the error message returned by the API. Valid values:  
    // - **zh**: Chinese.  
    // - **en**: English.  
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // Postal code.
    shared_ptr<string> postalCode_ {};
    // Province (in English). Enter the name of the province where the registrant resides.
    // 
    // > Enter only the province name without the word "Province." For example, if the registrant is in Zhejiang Province, enter "zhe jiang" for this parameter.
    shared_ptr<string> province_ {};
    // Contact name (in English).
    shared_ptr<string> registrantName_ {};
    // Registrant name (in English).
    shared_ptr<string> registrantOrganization_ {};
    // The information template ID, which is automatically generated by the system after the information template is successfully created.
    // 
    // > You must specify this parameter when updating an information template. After the information template is successfully created, you can invoke the [QueryRegistrantProfiles](~~QueryRegistrantProfiles~~) API to query the information template ID.
    shared_ptr<int64_t> registrantProfileId_ {};
    // Information template type. Valid values:
    // - **common**: Common template.
    // - **cnnic**: CNNIC template.
    // 
    // > The CNNIC template is supported only on the Alibaba Cloud international site (alibabacloud.com). Domain names such as ".cn" and ".中国" registered under the CNNIC domain name registry on the Alibaba Cloud international site require the CNNIC template. All other domain names use the common template.
    shared_ptr<string> registrantProfileType_ {};
    // Registrant type. Valid values:  
    // - **1**: Individual.  
    // - **2**: Organization.  
    // 
    // Default value: **1**.
    shared_ptr<string> registrantType_ {};
    // Telephone country code. For example, the telephone country code for China is **86**.
    shared_ptr<string> telArea_ {};
    // Extension number.
    shared_ptr<string> telExt_ {};
    // Telephone number.
    shared_ptr<string> telephone_ {};
    // User IP address. You can set it to 127.0.0.1.
    shared_ptr<string> userClientIp_ {};
    // Detailed address (in Chinese).
    shared_ptr<string> zhAddress_ {};
    // City (in Chinese). Enter the name of the city where the registrant resides.
    // 
    // > Include the word "City" in the city name. For example, if the registrant is in Hangzhou, enter "杭州市" for this parameter.
    shared_ptr<string> zhCity_ {};
    // Province (Chinese). Enter the name of the province where the registrant is located.  
    // 
    // > Enter only the province name without the word “省”. For example, if the registrant is in Zhejiang Province, enter “浙江”.
    shared_ptr<string> zhProvince_ {};
    // Contact name (Chinese).
    shared_ptr<string> zhRegistrantName_ {};
    // Registrant name (in Chinese).
    shared_ptr<string> zhRegistrantOrganization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
