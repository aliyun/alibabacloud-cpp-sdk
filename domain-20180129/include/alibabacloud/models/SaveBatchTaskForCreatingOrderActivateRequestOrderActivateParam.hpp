// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERACTIVATEREQUESTORDERACTIVATEPARAM_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERACTIVATEREQUESTORDERACTIVATEPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AliyunDns, aliyunDns_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Dns1, dns1_);
      DARABONBA_PTR_TO_JSON(Dns2, dns2_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EnableDomainProxy, enableDomainProxy_);
      DARABONBA_PTR_TO_JSON(PermitPremiumActivation, permitPremiumActivation_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubscriptionDuration, subscriptionDuration_);
      DARABONBA_PTR_TO_JSON(TelArea, telArea_);
      DARABONBA_PTR_TO_JSON(TelExt, telExt_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      DARABONBA_PTR_TO_JSON(TrademarkDomainActivation, trademarkDomainActivation_);
      DARABONBA_PTR_TO_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_TO_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_TO_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AliyunDns, aliyunDns_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Dns1, dns1_);
      DARABONBA_PTR_FROM_JSON(Dns2, dns2_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EnableDomainProxy, enableDomainProxy_);
      DARABONBA_PTR_FROM_JSON(PermitPremiumActivation, permitPremiumActivation_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDuration, subscriptionDuration_);
      DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
      DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(TrademarkDomainActivation, trademarkDomainActivation_);
      DARABONBA_PTR_FROM_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_FROM_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_FROM_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam() = default ;
    SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam(const SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam &) = default ;
    SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam(SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam &&) = default ;
    SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam() = default ;
    SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& operator=(const SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam &) = default ;
    SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& operator=(SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->aliyunDns_ == nullptr && return this->city_ == nullptr && return this->country_ == nullptr && return this->dns1_ == nullptr && return this->dns2_ == nullptr
        && return this->domainName_ == nullptr && return this->email_ == nullptr && return this->enableDomainProxy_ == nullptr && return this->permitPremiumActivation_ == nullptr && return this->postalCode_ == nullptr
        && return this->province_ == nullptr && return this->registrantName_ == nullptr && return this->registrantOrganization_ == nullptr && return this->registrantProfileId_ == nullptr && return this->registrantType_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->subscriptionDuration_ == nullptr && return this->telArea_ == nullptr && return this->telExt_ == nullptr && return this->telephone_ == nullptr
        && return this->trademarkDomainActivation_ == nullptr && return this->zhAddress_ == nullptr && return this->zhCity_ == nullptr && return this->zhProvince_ == nullptr && return this->zhRegistrantName_ == nullptr
        && return this->zhRegistrantOrganization_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // aliyunDns Field Functions 
    bool hasAliyunDns() const { return this->aliyunDns_ != nullptr;};
    void deleteAliyunDns() { this->aliyunDns_ = nullptr;};
    inline bool aliyunDns() const { DARABONBA_PTR_GET_DEFAULT(aliyunDns_, false) };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setAliyunDns(bool aliyunDns) { DARABONBA_PTR_SET_VALUE(aliyunDns_, aliyunDns) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // dns1 Field Functions 
    bool hasDns1() const { return this->dns1_ != nullptr;};
    void deleteDns1() { this->dns1_ = nullptr;};
    inline string dns1() const { DARABONBA_PTR_GET_DEFAULT(dns1_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setDns1(string dns1) { DARABONBA_PTR_SET_VALUE(dns1_, dns1) };


    // dns2 Field Functions 
    bool hasDns2() const { return this->dns2_ != nullptr;};
    void deleteDns2() { this->dns2_ = nullptr;};
    inline string dns2() const { DARABONBA_PTR_GET_DEFAULT(dns2_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setDns2(string dns2) { DARABONBA_PTR_SET_VALUE(dns2_, dns2) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // enableDomainProxy Field Functions 
    bool hasEnableDomainProxy() const { return this->enableDomainProxy_ != nullptr;};
    void deleteEnableDomainProxy() { this->enableDomainProxy_ = nullptr;};
    inline bool enableDomainProxy() const { DARABONBA_PTR_GET_DEFAULT(enableDomainProxy_, false) };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setEnableDomainProxy(bool enableDomainProxy) { DARABONBA_PTR_SET_VALUE(enableDomainProxy_, enableDomainProxy) };


    // permitPremiumActivation Field Functions 
    bool hasPermitPremiumActivation() const { return this->permitPremiumActivation_ != nullptr;};
    void deletePermitPremiumActivation() { this->permitPremiumActivation_ = nullptr;};
    inline bool permitPremiumActivation() const { DARABONBA_PTR_GET_DEFAULT(permitPremiumActivation_, false) };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setPermitPremiumActivation(bool permitPremiumActivation) { DARABONBA_PTR_SET_VALUE(permitPremiumActivation_, permitPremiumActivation) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string postalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string registrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string registrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t registrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string registrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionDuration Field Functions 
    bool hasSubscriptionDuration() const { return this->subscriptionDuration_ != nullptr;};
    void deleteSubscriptionDuration() { this->subscriptionDuration_ = nullptr;};
    inline int32_t subscriptionDuration() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDuration_, 0) };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setSubscriptionDuration(int32_t subscriptionDuration) { DARABONBA_PTR_SET_VALUE(subscriptionDuration_, subscriptionDuration) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string telArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string telExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // trademarkDomainActivation Field Functions 
    bool hasTrademarkDomainActivation() const { return this->trademarkDomainActivation_ != nullptr;};
    void deleteTrademarkDomainActivation() { this->trademarkDomainActivation_ = nullptr;};
    inline bool trademarkDomainActivation() const { DARABONBA_PTR_GET_DEFAULT(trademarkDomainActivation_, false) };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setTrademarkDomainActivation(bool trademarkDomainActivation) { DARABONBA_PTR_SET_VALUE(trademarkDomainActivation_, trademarkDomainActivation) };


    // zhAddress Field Functions 
    bool hasZhAddress() const { return this->zhAddress_ != nullptr;};
    void deleteZhAddress() { this->zhAddress_ = nullptr;};
    inline string zhAddress() const { DARABONBA_PTR_GET_DEFAULT(zhAddress_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setZhAddress(string zhAddress) { DARABONBA_PTR_SET_VALUE(zhAddress_, zhAddress) };


    // zhCity Field Functions 
    bool hasZhCity() const { return this->zhCity_ != nullptr;};
    void deleteZhCity() { this->zhCity_ = nullptr;};
    inline string zhCity() const { DARABONBA_PTR_GET_DEFAULT(zhCity_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setZhCity(string zhCity) { DARABONBA_PTR_SET_VALUE(zhCity_, zhCity) };


    // zhProvince Field Functions 
    bool hasZhProvince() const { return this->zhProvince_ != nullptr;};
    void deleteZhProvince() { this->zhProvince_ = nullptr;};
    inline string zhProvince() const { DARABONBA_PTR_GET_DEFAULT(zhProvince_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setZhProvince(string zhProvince) { DARABONBA_PTR_SET_VALUE(zhProvince_, zhProvince) };


    // zhRegistrantName Field Functions 
    bool hasZhRegistrantName() const { return this->zhRegistrantName_ != nullptr;};
    void deleteZhRegistrantName() { this->zhRegistrantName_ = nullptr;};
    inline string zhRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantName_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setZhRegistrantName(string zhRegistrantName) { DARABONBA_PTR_SET_VALUE(zhRegistrantName_, zhRegistrantName) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string zhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<bool> aliyunDns_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> dns1_ = nullptr;
    std::shared_ptr<string> dns2_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<bool> enableDomainProxy_ = nullptr;
    std::shared_ptr<bool> permitPremiumActivation_ = nullptr;
    std::shared_ptr<string> postalCode_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> registrantName_ = nullptr;
    std::shared_ptr<string> registrantOrganization_ = nullptr;
    std::shared_ptr<int64_t> registrantProfileId_ = nullptr;
    std::shared_ptr<string> registrantType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int32_t> subscriptionDuration_ = nullptr;
    std::shared_ptr<string> telArea_ = nullptr;
    std::shared_ptr<string> telExt_ = nullptr;
    std::shared_ptr<string> telephone_ = nullptr;
    std::shared_ptr<bool> trademarkDomainActivation_ = nullptr;
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
