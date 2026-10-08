// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERRENEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERRENEWREQUEST_HPP_
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
  class SaveBatchTaskForCreatingOrderRenewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForCreatingOrderRenewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderRenewParam, orderRenewParam_);
      DARABONBA_PTR_TO_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_TO_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForCreatingOrderRenewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderRenewParam, orderRenewParam_);
      DARABONBA_PTR_FROM_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_FROM_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForCreatingOrderRenewRequest() = default ;
    SaveBatchTaskForCreatingOrderRenewRequest(const SaveBatchTaskForCreatingOrderRenewRequest &) = default ;
    SaveBatchTaskForCreatingOrderRenewRequest(SaveBatchTaskForCreatingOrderRenewRequest &&) = default ;
    SaveBatchTaskForCreatingOrderRenewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForCreatingOrderRenewRequest() = default ;
    SaveBatchTaskForCreatingOrderRenewRequest& operator=(const SaveBatchTaskForCreatingOrderRenewRequest &) = default ;
    SaveBatchTaskForCreatingOrderRenewRequest& operator=(SaveBatchTaskForCreatingOrderRenewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderRenewParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderRenewParam& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentExpirationDate, currentExpirationDate_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(PermitPremiumRenew, permitPremiumRenew_);
        DARABONBA_PTR_TO_JSON(SubscriptionDuration, subscriptionDuration_);
      };
      friend void from_json(const Darabonba::Json& j, OrderRenewParam& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentExpirationDate, currentExpirationDate_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(PermitPremiumRenew, permitPremiumRenew_);
        DARABONBA_PTR_FROM_JSON(SubscriptionDuration, subscriptionDuration_);
      };
      OrderRenewParam() = default ;
      OrderRenewParam(const OrderRenewParam &) = default ;
      OrderRenewParam(OrderRenewParam &&) = default ;
      OrderRenewParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderRenewParam() = default ;
      OrderRenewParam& operator=(const OrderRenewParam &) = default ;
      OrderRenewParam& operator=(OrderRenewParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentExpirationDate_ == nullptr
        && this->domainName_ == nullptr && this->permitPremiumRenew_ == nullptr && this->subscriptionDuration_ == nullptr; };
      // currentExpirationDate Field Functions 
      bool hasCurrentExpirationDate() const { return this->currentExpirationDate_ != nullptr;};
      void deleteCurrentExpirationDate() { this->currentExpirationDate_ = nullptr;};
      inline int64_t getCurrentExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(currentExpirationDate_, 0L) };
      inline OrderRenewParam& setCurrentExpirationDate(int64_t currentExpirationDate) { DARABONBA_PTR_SET_VALUE(currentExpirationDate_, currentExpirationDate) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline OrderRenewParam& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // permitPremiumRenew Field Functions 
      bool hasPermitPremiumRenew() const { return this->permitPremiumRenew_ != nullptr;};
      void deletePermitPremiumRenew() { this->permitPremiumRenew_ = nullptr;};
      inline bool getPermitPremiumRenew() const { DARABONBA_PTR_GET_DEFAULT(permitPremiumRenew_, false) };
      inline OrderRenewParam& setPermitPremiumRenew(bool permitPremiumRenew) { DARABONBA_PTR_SET_VALUE(permitPremiumRenew_, permitPremiumRenew) };


      // subscriptionDuration Field Functions 
      bool hasSubscriptionDuration() const { return this->subscriptionDuration_ != nullptr;};
      void deleteSubscriptionDuration() { this->subscriptionDuration_ = nullptr;};
      inline int32_t getSubscriptionDuration() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDuration_, 0) };
      inline OrderRenewParam& setSubscriptionDuration(int32_t subscriptionDuration) { DARABONBA_PTR_SET_VALUE(subscriptionDuration_, subscriptionDuration) };


    protected:
      // The current expiration date of the domain name, expressed in milliseconds since 00:00:00 UTC on January 1, 1970.
      shared_ptr<int64_t> currentExpirationDate_ {};
      // The domain name that you want to renew. You can obtain a list of your domain names by calling the [QueryDomainList](https://help.aliyun.com/document_detail/67712.html) operation.
      shared_ptr<string> domainName_ {};
      // Specifies whether to allow the renewal of premium domain names. Default value: false.
      shared_ptr<bool> permitPremiumRenew_ {};
      // The renewal duration, in years. Default value: **1**. Valid values: **1** to **10**.
      shared_ptr<int32_t> subscriptionDuration_ {};
    };

    virtual bool empty() const override { return this->couponNo_ == nullptr
        && this->lang_ == nullptr && this->orderRenewParam_ == nullptr && this->promotionNo_ == nullptr && this->useCoupon_ == nullptr && this->usePromotion_ == nullptr
        && this->userClientIp_ == nullptr; };
    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline SaveBatchTaskForCreatingOrderRenewRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForCreatingOrderRenewRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderRenewParam Field Functions 
    bool hasOrderRenewParam() const { return this->orderRenewParam_ != nullptr;};
    void deleteOrderRenewParam() { this->orderRenewParam_ = nullptr;};
    inline const vector<SaveBatchTaskForCreatingOrderRenewRequest::OrderRenewParam> & getOrderRenewParam() const { DARABONBA_PTR_GET_CONST(orderRenewParam_, vector<SaveBatchTaskForCreatingOrderRenewRequest::OrderRenewParam>) };
    inline vector<SaveBatchTaskForCreatingOrderRenewRequest::OrderRenewParam> getOrderRenewParam() { DARABONBA_PTR_GET(orderRenewParam_, vector<SaveBatchTaskForCreatingOrderRenewRequest::OrderRenewParam>) };
    inline SaveBatchTaskForCreatingOrderRenewRequest& setOrderRenewParam(const vector<SaveBatchTaskForCreatingOrderRenewRequest::OrderRenewParam> & orderRenewParam) { DARABONBA_PTR_SET_VALUE(orderRenewParam_, orderRenewParam) };
    inline SaveBatchTaskForCreatingOrderRenewRequest& setOrderRenewParam(vector<SaveBatchTaskForCreatingOrderRenewRequest::OrderRenewParam> && orderRenewParam) { DARABONBA_PTR_SET_RVALUE(orderRenewParam_, orderRenewParam) };


    // promotionNo Field Functions 
    bool hasPromotionNo() const { return this->promotionNo_ != nullptr;};
    void deletePromotionNo() { this->promotionNo_ = nullptr;};
    inline string getPromotionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionNo_, "") };
    inline SaveBatchTaskForCreatingOrderRenewRequest& setPromotionNo(string promotionNo) { DARABONBA_PTR_SET_VALUE(promotionNo_, promotionNo) };


    // useCoupon Field Functions 
    bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
    void deleteUseCoupon() { this->useCoupon_ = nullptr;};
    inline bool getUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
    inline SaveBatchTaskForCreatingOrderRenewRequest& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


    // usePromotion Field Functions 
    bool hasUsePromotion() const { return this->usePromotion_ != nullptr;};
    void deleteUsePromotion() { this->usePromotion_ = nullptr;};
    inline bool getUsePromotion() const { DARABONBA_PTR_GET_DEFAULT(usePromotion_, false) };
    inline SaveBatchTaskForCreatingOrderRenewRequest& setUsePromotion(bool usePromotion) { DARABONBA_PTR_SET_VALUE(usePromotion_, usePromotion) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForCreatingOrderRenewRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The coupon ID.
    shared_ptr<string> couponNo_ {};
    // The language of the error messages. Valid values:
    // 
    // - **zh**: Chinese.
    // 
    // - **en**: English.
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // The parameters for each domain name to be renewed.
    // 
    // This parameter is required.
    shared_ptr<vector<SaveBatchTaskForCreatingOrderRenewRequest::OrderRenewParam>> orderRenewParam_ {};
    // The promotion ID.
    shared_ptr<string> promotionNo_ {};
    // Specifies whether to use a coupon. Valid values:
    // 
    // - **false**: Do not use a coupon.
    // 
    // - **true**: Use a coupon.
    shared_ptr<bool> useCoupon_ {};
    // Specifies whether to use a promotion. Valid values:
    // 
    // - **false**: Do not use a promotion.
    // 
    // - **true**: Use a promotion.
    shared_ptr<bool> usePromotion_ {};
    // The user\\"s IP address. You can set this parameter to **127.0.0.1**.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
