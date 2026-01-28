// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGORDERRENEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGORDERRENEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForCreatingOrderRenewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForCreatingOrderRenewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(CurrentExpirationDate, currentExpirationDate_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_TO_JSON(SubscriptionDuration, subscriptionDuration_);
      DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_TO_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForCreatingOrderRenewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(CurrentExpirationDate, currentExpirationDate_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDuration, subscriptionDuration_);
      DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_FROM_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveSingleTaskForCreatingOrderRenewRequest() = default ;
    SaveSingleTaskForCreatingOrderRenewRequest(const SaveSingleTaskForCreatingOrderRenewRequest &) = default ;
    SaveSingleTaskForCreatingOrderRenewRequest(SaveSingleTaskForCreatingOrderRenewRequest &&) = default ;
    SaveSingleTaskForCreatingOrderRenewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForCreatingOrderRenewRequest() = default ;
    SaveSingleTaskForCreatingOrderRenewRequest& operator=(const SaveSingleTaskForCreatingOrderRenewRequest &) = default ;
    SaveSingleTaskForCreatingOrderRenewRequest& operator=(SaveSingleTaskForCreatingOrderRenewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->couponNo_ == nullptr
        && this->currentExpirationDate_ == nullptr && this->domainName_ == nullptr && this->lang_ == nullptr && this->promotionNo_ == nullptr && this->subscriptionDuration_ == nullptr
        && this->useCoupon_ == nullptr && this->usePromotion_ == nullptr && this->userClientIp_ == nullptr; };
    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // currentExpirationDate Field Functions 
    bool hasCurrentExpirationDate() const { return this->currentExpirationDate_ != nullptr;};
    void deleteCurrentExpirationDate() { this->currentExpirationDate_ = nullptr;};
    inline int64_t getCurrentExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(currentExpirationDate_, 0L) };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setCurrentExpirationDate(int64_t currentExpirationDate) { DARABONBA_PTR_SET_VALUE(currentExpirationDate_, currentExpirationDate) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // promotionNo Field Functions 
    bool hasPromotionNo() const { return this->promotionNo_ != nullptr;};
    void deletePromotionNo() { this->promotionNo_ = nullptr;};
    inline string getPromotionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionNo_, "") };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setPromotionNo(string promotionNo) { DARABONBA_PTR_SET_VALUE(promotionNo_, promotionNo) };


    // subscriptionDuration Field Functions 
    bool hasSubscriptionDuration() const { return this->subscriptionDuration_ != nullptr;};
    void deleteSubscriptionDuration() { this->subscriptionDuration_ = nullptr;};
    inline int32_t getSubscriptionDuration() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDuration_, 0) };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setSubscriptionDuration(int32_t subscriptionDuration) { DARABONBA_PTR_SET_VALUE(subscriptionDuration_, subscriptionDuration) };


    // useCoupon Field Functions 
    bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
    void deleteUseCoupon() { this->useCoupon_ = nullptr;};
    inline bool getUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


    // usePromotion Field Functions 
    bool hasUsePromotion() const { return this->usePromotion_ != nullptr;};
    void deleteUsePromotion() { this->usePromotion_ = nullptr;};
    inline bool getUsePromotion() const { DARABONBA_PTR_GET_DEFAULT(usePromotion_, false) };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setUsePromotion(bool usePromotion) { DARABONBA_PTR_SET_VALUE(usePromotion_, usePromotion) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveSingleTaskForCreatingOrderRenewRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> couponNo_ {};
    // This parameter is required.
    shared_ptr<int64_t> currentExpirationDate_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> promotionNo_ {};
    // This parameter is required.
    shared_ptr<int32_t> subscriptionDuration_ {};
    shared_ptr<bool> useCoupon_ {};
    shared_ptr<bool> usePromotion_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
