// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESRESPONSEBODYREGISTRANTPROFILESREGISTRANTPROFILE_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESRESPONSEBODYREGISTRANTPROFILESREGISTRANTPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(DefaultRegistrantProfile, defaultRegistrantProfile_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmailVerificationStatus, emailVerificationStatus_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RealNameStatus, realNameStatus_);
      DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileType, registrantProfileType_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TelArea, telArea_);
      DARABONBA_PTR_TO_JSON(TelExt, telExt_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_TO_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_TO_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CredentialNo, credentialNo_);
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(DefaultRegistrantProfile, defaultRegistrantProfile_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmailVerificationStatus, emailVerificationStatus_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RealNameStatus, realNameStatus_);
      DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileType, registrantProfileType_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
      DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_FROM_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_FROM_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile() = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile(const QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile &) = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile(QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile &&) = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile() = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& operator=(const QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile &) = default ;
    QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& operator=(QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->city_ == nullptr && return this->country_ == nullptr && return this->createTime_ == nullptr && return this->credentialNo_ == nullptr && return this->credentialType_ == nullptr
        && return this->defaultRegistrantProfile_ == nullptr && return this->email_ == nullptr && return this->emailVerificationStatus_ == nullptr && return this->params_ == nullptr && return this->postalCode_ == nullptr
        && return this->province_ == nullptr && return this->realNameStatus_ == nullptr && return this->registrantName_ == nullptr && return this->registrantOrganization_ == nullptr && return this->registrantProfileId_ == nullptr
        && return this->registrantProfileType_ == nullptr && return this->registrantType_ == nullptr && return this->remark_ == nullptr && return this->telArea_ == nullptr && return this->telExt_ == nullptr
        && return this->telephone_ == nullptr && return this->updateTime_ == nullptr && return this->zhAddress_ == nullptr && return this->zhCity_ == nullptr && return this->zhProvince_ == nullptr
        && return this->zhRegistrantName_ == nullptr && return this->zhRegistrantOrganization_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // credentialNo Field Functions 
    bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
    void deleteCredentialNo() { this->credentialNo_ = nullptr;};
    inline string credentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string credentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // defaultRegistrantProfile Field Functions 
    bool hasDefaultRegistrantProfile() const { return this->defaultRegistrantProfile_ != nullptr;};
    void deleteDefaultRegistrantProfile() { this->defaultRegistrantProfile_ = nullptr;};
    inline bool defaultRegistrantProfile() const { DARABONBA_PTR_GET_DEFAULT(defaultRegistrantProfile_, false) };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setDefaultRegistrantProfile(bool defaultRegistrantProfile) { DARABONBA_PTR_SET_VALUE(defaultRegistrantProfile_, defaultRegistrantProfile) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerificationStatus Field Functions 
    bool hasEmailVerificationStatus() const { return this->emailVerificationStatus_ != nullptr;};
    void deleteEmailVerificationStatus() { this->emailVerificationStatus_ = nullptr;};
    inline int32_t emailVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationStatus_, 0) };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setEmailVerificationStatus(int32_t emailVerificationStatus) { DARABONBA_PTR_SET_VALUE(emailVerificationStatus_, emailVerificationStatus) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string postalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // realNameStatus Field Functions 
    bool hasRealNameStatus() const { return this->realNameStatus_ != nullptr;};
    void deleteRealNameStatus() { this->realNameStatus_ = nullptr;};
    inline string realNameStatus() const { DARABONBA_PTR_GET_DEFAULT(realNameStatus_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setRealNameStatus(string realNameStatus) { DARABONBA_PTR_SET_VALUE(realNameStatus_, realNameStatus) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string registrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string registrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t registrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // registrantProfileType Field Functions 
    bool hasRegistrantProfileType() const { return this->registrantProfileType_ != nullptr;};
    void deleteRegistrantProfileType() { this->registrantProfileType_ = nullptr;};
    inline string registrantProfileType() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileType_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setRegistrantProfileType(string registrantProfileType) { DARABONBA_PTR_SET_VALUE(registrantProfileType_, registrantProfileType) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string registrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string telArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string telExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // zhAddress Field Functions 
    bool hasZhAddress() const { return this->zhAddress_ != nullptr;};
    void deleteZhAddress() { this->zhAddress_ = nullptr;};
    inline string zhAddress() const { DARABONBA_PTR_GET_DEFAULT(zhAddress_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setZhAddress(string zhAddress) { DARABONBA_PTR_SET_VALUE(zhAddress_, zhAddress) };


    // zhCity Field Functions 
    bool hasZhCity() const { return this->zhCity_ != nullptr;};
    void deleteZhCity() { this->zhCity_ = nullptr;};
    inline string zhCity() const { DARABONBA_PTR_GET_DEFAULT(zhCity_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setZhCity(string zhCity) { DARABONBA_PTR_SET_VALUE(zhCity_, zhCity) };


    // zhProvince Field Functions 
    bool hasZhProvince() const { return this->zhProvince_ != nullptr;};
    void deleteZhProvince() { this->zhProvince_ = nullptr;};
    inline string zhProvince() const { DARABONBA_PTR_GET_DEFAULT(zhProvince_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setZhProvince(string zhProvince) { DARABONBA_PTR_SET_VALUE(zhProvince_, zhProvince) };


    // zhRegistrantName Field Functions 
    bool hasZhRegistrantName() const { return this->zhRegistrantName_ != nullptr;};
    void deleteZhRegistrantName() { this->zhRegistrantName_ = nullptr;};
    inline string zhRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantName_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setZhRegistrantName(string zhRegistrantName) { DARABONBA_PTR_SET_VALUE(zhRegistrantName_, zhRegistrantName) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string zhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline QueryRegistrantProfilesResponseBodyRegistrantProfilesRegistrantProfile& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    // The address of the domain name registrant.
    std::shared_ptr<string> address_ = nullptr;
    // The city where the domain name registrant is located, in English.
    std::shared_ptr<string> city_ = nullptr;
    // The code of the country or region where the domain name registrant is located, such as **CN** or **US**.
    std::shared_ptr<string> country_ = nullptr;
    // The time when the registrant profile was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The certificate number.
    std::shared_ptr<string> credentialNo_ = nullptr;
    // The certificate type.
    std::shared_ptr<string> credentialType_ = nullptr;
    // Indicates whether the template is the default template. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // Default value: **false**.
    std::shared_ptr<bool> defaultRegistrantProfile_ = nullptr;
    // The email address of the domain name registrant.
    std::shared_ptr<string> email_ = nullptr;
    // The status of the verification for the email address. Valid values:
    // 
    // *   **0**: not verified
    // *   **1**: verified
    std::shared_ptr<int32_t> emailVerificationStatus_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    // The postal code of the region where the domain name registrant is located.
    std::shared_ptr<string> postalCode_ = nullptr;
    // The province where the domain name registrant is located.
    std::shared_ptr<string> province_ = nullptr;
    // The state of real-name verification for the domain name registrant. Valid values:
    // 
    // *   **FAILED**: Real-name verification for the domain name fails.
    // *   **SUCCEED**: Real-name verification for the domain name is successful.
    // *   **NONAUDIT**: Real-name verification for the domain name is not performed.
    // *   **AUDITING**: Real-name verification for the domain name is in progress.
    std::shared_ptr<string> realNameStatus_ = nullptr;
    // The name of the domain name contact.
    std::shared_ptr<string> registrantName_ = nullptr;
    // The name of the domain name registrant.
    std::shared_ptr<string> registrantOrganization_ = nullptr;
    // The ID of the registrant profile.
    std::shared_ptr<int64_t> registrantProfileId_ = nullptr;
    // The type of the registrant profile. Valid values:
    // 
    // *   **common**: common profile.
    // *   **cnnic**: CNNIC profile.
    // 
    // >  Only the Alibaba Cloud international site (alibabacloud.com) supports CNNIC profiles. To register domain names provided by CNNIC such as the .cn and . domain names on the Alibaba Cloud international site, you must use a CNNIC profile. To register other domain names, use a common profile.
    std::shared_ptr<string> registrantProfileType_ = nullptr;
    // The type of the domain name registrant. Valid values:
    // 
    // *   **1**: individual.
    // *   **2**: enterprise.
    // 
    // Default value: **1**.
    std::shared_ptr<string> registrantType_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // The international dialing code of the country or region where the domain name contact is located. For example, the international dialing code of China is **86**.
    std::shared_ptr<string> telArea_ = nullptr;
    // The extension of the phone number.
    std::shared_ptr<string> telExt_ = nullptr;
    // The phone number.
    std::shared_ptr<string> telephone_ = nullptr;
    // The time when the registrant profile was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The address of the domain name registrant, in Chinese.
    std::shared_ptr<string> zhAddress_ = nullptr;
    // The city where the domain name registrant is located, in Chinese.
    std::shared_ptr<string> zhCity_ = nullptr;
    // The province where the domain name registrant is located, in Chinese.
    std::shared_ptr<string> zhProvince_ = nullptr;
    // The Chinese name of the domain name contact.
    std::shared_ptr<string> zhRegistrantName_ = nullptr;
    // The Chinese name of the domain name registrant.
    std::shared_ptr<string> zhRegistrantOrganization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
