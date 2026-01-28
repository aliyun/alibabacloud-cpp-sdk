// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGORDERACTIVATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGORDERACTIVATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForCreatingOrderActivateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForCreatingOrderActivateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AliyunDns, aliyunDns_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(Dns1, dns1_);
      DARABONBA_PTR_TO_JSON(Dns2, dns2_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EnableDomainProxy, enableDomainProxy_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PermitPremiumActivation, permitPremiumActivation_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(PromotionNo, promotionNo_);
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
      DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_TO_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_TO_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_TO_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForCreatingOrderActivateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AliyunDns, aliyunDns_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(Dns1, dns1_);
      DARABONBA_PTR_FROM_JSON(Dns2, dns2_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EnableDomainProxy, enableDomainProxy_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PermitPremiumActivation, permitPremiumActivation_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(PromotionNo, promotionNo_);
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
      DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_FROM_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(ZhAddress, zhAddress_);
      DARABONBA_PTR_FROM_JSON(ZhCity, zhCity_);
      DARABONBA_PTR_FROM_JSON(ZhProvince, zhProvince_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    SaveSingleTaskForCreatingOrderActivateRequest() = default ;
    SaveSingleTaskForCreatingOrderActivateRequest(const SaveSingleTaskForCreatingOrderActivateRequest &) = default ;
    SaveSingleTaskForCreatingOrderActivateRequest(SaveSingleTaskForCreatingOrderActivateRequest &&) = default ;
    SaveSingleTaskForCreatingOrderActivateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForCreatingOrderActivateRequest() = default ;
    SaveSingleTaskForCreatingOrderActivateRequest& operator=(const SaveSingleTaskForCreatingOrderActivateRequest &) = default ;
    SaveSingleTaskForCreatingOrderActivateRequest& operator=(SaveSingleTaskForCreatingOrderActivateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->aliyunDns_ == nullptr && this->city_ == nullptr && this->country_ == nullptr && this->couponNo_ == nullptr && this->dns1_ == nullptr
        && this->dns2_ == nullptr && this->domainName_ == nullptr && this->email_ == nullptr && this->enableDomainProxy_ == nullptr && this->lang_ == nullptr
        && this->permitPremiumActivation_ == nullptr && this->postalCode_ == nullptr && this->promotionNo_ == nullptr && this->province_ == nullptr && this->registrantName_ == nullptr
        && this->registrantOrganization_ == nullptr && this->registrantProfileId_ == nullptr && this->registrantType_ == nullptr && this->resourceGroupId_ == nullptr && this->subscriptionDuration_ == nullptr
        && this->telArea_ == nullptr && this->telExt_ == nullptr && this->telephone_ == nullptr && this->trademarkDomainActivation_ == nullptr && this->useCoupon_ == nullptr
        && this->usePromotion_ == nullptr && this->userClientIp_ == nullptr && this->zhAddress_ == nullptr && this->zhCity_ == nullptr && this->zhProvince_ == nullptr
        && this->zhRegistrantName_ == nullptr && this->zhRegistrantOrganization_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // aliyunDns Field Functions 
    bool hasAliyunDns() const { return this->aliyunDns_ != nullptr;};
    void deleteAliyunDns() { this->aliyunDns_ = nullptr;};
    inline bool getAliyunDns() const { DARABONBA_PTR_GET_DEFAULT(aliyunDns_, false) };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setAliyunDns(bool aliyunDns) { DARABONBA_PTR_SET_VALUE(aliyunDns_, aliyunDns) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // dns1 Field Functions 
    bool hasDns1() const { return this->dns1_ != nullptr;};
    void deleteDns1() { this->dns1_ = nullptr;};
    inline string getDns1() const { DARABONBA_PTR_GET_DEFAULT(dns1_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setDns1(string dns1) { DARABONBA_PTR_SET_VALUE(dns1_, dns1) };


    // dns2 Field Functions 
    bool hasDns2() const { return this->dns2_ != nullptr;};
    void deleteDns2() { this->dns2_ = nullptr;};
    inline string getDns2() const { DARABONBA_PTR_GET_DEFAULT(dns2_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setDns2(string dns2) { DARABONBA_PTR_SET_VALUE(dns2_, dns2) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // enableDomainProxy Field Functions 
    bool hasEnableDomainProxy() const { return this->enableDomainProxy_ != nullptr;};
    void deleteEnableDomainProxy() { this->enableDomainProxy_ = nullptr;};
    inline bool getEnableDomainProxy() const { DARABONBA_PTR_GET_DEFAULT(enableDomainProxy_, false) };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setEnableDomainProxy(bool enableDomainProxy) { DARABONBA_PTR_SET_VALUE(enableDomainProxy_, enableDomainProxy) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // permitPremiumActivation Field Functions 
    bool hasPermitPremiumActivation() const { return this->permitPremiumActivation_ != nullptr;};
    void deletePermitPremiumActivation() { this->permitPremiumActivation_ = nullptr;};
    inline bool getPermitPremiumActivation() const { DARABONBA_PTR_GET_DEFAULT(permitPremiumActivation_, false) };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setPermitPremiumActivation(bool permitPremiumActivation) { DARABONBA_PTR_SET_VALUE(permitPremiumActivation_, permitPremiumActivation) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // promotionNo Field Functions 
    bool hasPromotionNo() const { return this->promotionNo_ != nullptr;};
    void deletePromotionNo() { this->promotionNo_ = nullptr;};
    inline string getPromotionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionNo_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setPromotionNo(string promotionNo) { DARABONBA_PTR_SET_VALUE(promotionNo_, promotionNo) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string getRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string getRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscriptionDuration Field Functions 
    bool hasSubscriptionDuration() const { return this->subscriptionDuration_ != nullptr;};
    void deleteSubscriptionDuration() { this->subscriptionDuration_ = nullptr;};
    inline int32_t getSubscriptionDuration() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDuration_, 0) };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setSubscriptionDuration(int32_t subscriptionDuration) { DARABONBA_PTR_SET_VALUE(subscriptionDuration_, subscriptionDuration) };


    // telArea Field Functions 
    bool hasTelArea() const { return this->telArea_ != nullptr;};
    void deleteTelArea() { this->telArea_ = nullptr;};
    inline string getTelArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


    // telExt Field Functions 
    bool hasTelExt() const { return this->telExt_ != nullptr;};
    void deleteTelExt() { this->telExt_ = nullptr;};
    inline string getTelExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // trademarkDomainActivation Field Functions 
    bool hasTrademarkDomainActivation() const { return this->trademarkDomainActivation_ != nullptr;};
    void deleteTrademarkDomainActivation() { this->trademarkDomainActivation_ = nullptr;};
    inline bool getTrademarkDomainActivation() const { DARABONBA_PTR_GET_DEFAULT(trademarkDomainActivation_, false) };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setTrademarkDomainActivation(bool trademarkDomainActivation) { DARABONBA_PTR_SET_VALUE(trademarkDomainActivation_, trademarkDomainActivation) };


    // useCoupon Field Functions 
    bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
    void deleteUseCoupon() { this->useCoupon_ = nullptr;};
    inline bool getUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


    // usePromotion Field Functions 
    bool hasUsePromotion() const { return this->usePromotion_ != nullptr;};
    void deleteUsePromotion() { this->usePromotion_ = nullptr;};
    inline bool getUsePromotion() const { DARABONBA_PTR_GET_DEFAULT(usePromotion_, false) };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setUsePromotion(bool usePromotion) { DARABONBA_PTR_SET_VALUE(usePromotion_, usePromotion) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // zhAddress Field Functions 
    bool hasZhAddress() const { return this->zhAddress_ != nullptr;};
    void deleteZhAddress() { this->zhAddress_ = nullptr;};
    inline string getZhAddress() const { DARABONBA_PTR_GET_DEFAULT(zhAddress_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setZhAddress(string zhAddress) { DARABONBA_PTR_SET_VALUE(zhAddress_, zhAddress) };


    // zhCity Field Functions 
    bool hasZhCity() const { return this->zhCity_ != nullptr;};
    void deleteZhCity() { this->zhCity_ = nullptr;};
    inline string getZhCity() const { DARABONBA_PTR_GET_DEFAULT(zhCity_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setZhCity(string zhCity) { DARABONBA_PTR_SET_VALUE(zhCity_, zhCity) };


    // zhProvince Field Functions 
    bool hasZhProvince() const { return this->zhProvince_ != nullptr;};
    void deleteZhProvince() { this->zhProvince_ = nullptr;};
    inline string getZhProvince() const { DARABONBA_PTR_GET_DEFAULT(zhProvince_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setZhProvince(string zhProvince) { DARABONBA_PTR_SET_VALUE(zhProvince_, zhProvince) };


    // zhRegistrantName Field Functions 
    bool hasZhRegistrantName() const { return this->zhRegistrantName_ != nullptr;};
    void deleteZhRegistrantName() { this->zhRegistrantName_ = nullptr;};
    inline string getZhRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantName_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setZhRegistrantName(string zhRegistrantName) { DARABONBA_PTR_SET_VALUE(zhRegistrantName_, zhRegistrantName) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string getZhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline SaveSingleTaskForCreatingOrderActivateRequest& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<bool> aliyunDns_ {};
    shared_ptr<string> city_ {};
    shared_ptr<string> country_ {};
    shared_ptr<string> couponNo_ {};
    shared_ptr<string> dns1_ {};
    shared_ptr<string> dns2_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> email_ {};
    shared_ptr<bool> enableDomainProxy_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<bool> permitPremiumActivation_ {};
    shared_ptr<string> postalCode_ {};
    shared_ptr<string> promotionNo_ {};
    shared_ptr<string> province_ {};
    shared_ptr<string> registrantName_ {};
    shared_ptr<string> registrantOrganization_ {};
    shared_ptr<int64_t> registrantProfileId_ {};
    shared_ptr<string> registrantType_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int32_t> subscriptionDuration_ {};
    shared_ptr<string> telArea_ {};
    shared_ptr<string> telExt_ {};
    shared_ptr<string> telephone_ {};
    shared_ptr<bool> trademarkDomainActivation_ {};
    shared_ptr<bool> useCoupon_ {};
    shared_ptr<bool> usePromotion_ {};
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
