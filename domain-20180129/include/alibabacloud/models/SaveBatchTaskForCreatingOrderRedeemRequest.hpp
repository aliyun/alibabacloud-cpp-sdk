// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERREDEEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERREDEEMREQUEST_HPP_
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
  class SaveBatchTaskForCreatingOrderRedeemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForCreatingOrderRedeemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderRedeemParam, orderRedeemParam_);
      DARABONBA_PTR_TO_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_TO_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForCreatingOrderRedeemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderRedeemParam, orderRedeemParam_);
      DARABONBA_PTR_FROM_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_FROM_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForCreatingOrderRedeemRequest() = default ;
    SaveBatchTaskForCreatingOrderRedeemRequest(const SaveBatchTaskForCreatingOrderRedeemRequest &) = default ;
    SaveBatchTaskForCreatingOrderRedeemRequest(SaveBatchTaskForCreatingOrderRedeemRequest &&) = default ;
    SaveBatchTaskForCreatingOrderRedeemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForCreatingOrderRedeemRequest() = default ;
    SaveBatchTaskForCreatingOrderRedeemRequest& operator=(const SaveBatchTaskForCreatingOrderRedeemRequest &) = default ;
    SaveBatchTaskForCreatingOrderRedeemRequest& operator=(SaveBatchTaskForCreatingOrderRedeemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderRedeemParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderRedeemParam& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentExpirationDate, currentExpirationDate_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      };
      friend void from_json(const Darabonba::Json& j, OrderRedeemParam& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentExpirationDate, currentExpirationDate_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      };
      OrderRedeemParam() = default ;
      OrderRedeemParam(const OrderRedeemParam &) = default ;
      OrderRedeemParam(OrderRedeemParam &&) = default ;
      OrderRedeemParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderRedeemParam() = default ;
      OrderRedeemParam& operator=(const OrderRedeemParam &) = default ;
      OrderRedeemParam& operator=(OrderRedeemParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentExpirationDate_ == nullptr
        && this->domainName_ == nullptr; };
      // currentExpirationDate Field Functions 
      bool hasCurrentExpirationDate() const { return this->currentExpirationDate_ != nullptr;};
      void deleteCurrentExpirationDate() { this->currentExpirationDate_ = nullptr;};
      inline int64_t getCurrentExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(currentExpirationDate_, 0L) };
      inline OrderRedeemParam& setCurrentExpirationDate(int64_t currentExpirationDate) { DARABONBA_PTR_SET_VALUE(currentExpirationDate_, currentExpirationDate) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline OrderRedeemParam& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    protected:
      shared_ptr<int64_t> currentExpirationDate_ {};
      shared_ptr<string> domainName_ {};
    };

    virtual bool empty() const override { return this->couponNo_ == nullptr
        && this->lang_ == nullptr && this->orderRedeemParam_ == nullptr && this->promotionNo_ == nullptr && this->useCoupon_ == nullptr && this->usePromotion_ == nullptr
        && this->userClientIp_ == nullptr; };
    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline SaveBatchTaskForCreatingOrderRedeemRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForCreatingOrderRedeemRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderRedeemParam Field Functions 
    bool hasOrderRedeemParam() const { return this->orderRedeemParam_ != nullptr;};
    void deleteOrderRedeemParam() { this->orderRedeemParam_ = nullptr;};
    inline const vector<SaveBatchTaskForCreatingOrderRedeemRequest::OrderRedeemParam> & getOrderRedeemParam() const { DARABONBA_PTR_GET_CONST(orderRedeemParam_, vector<SaveBatchTaskForCreatingOrderRedeemRequest::OrderRedeemParam>) };
    inline vector<SaveBatchTaskForCreatingOrderRedeemRequest::OrderRedeemParam> getOrderRedeemParam() { DARABONBA_PTR_GET(orderRedeemParam_, vector<SaveBatchTaskForCreatingOrderRedeemRequest::OrderRedeemParam>) };
    inline SaveBatchTaskForCreatingOrderRedeemRequest& setOrderRedeemParam(const vector<SaveBatchTaskForCreatingOrderRedeemRequest::OrderRedeemParam> & orderRedeemParam) { DARABONBA_PTR_SET_VALUE(orderRedeemParam_, orderRedeemParam) };
    inline SaveBatchTaskForCreatingOrderRedeemRequest& setOrderRedeemParam(vector<SaveBatchTaskForCreatingOrderRedeemRequest::OrderRedeemParam> && orderRedeemParam) { DARABONBA_PTR_SET_RVALUE(orderRedeemParam_, orderRedeemParam) };


    // promotionNo Field Functions 
    bool hasPromotionNo() const { return this->promotionNo_ != nullptr;};
    void deletePromotionNo() { this->promotionNo_ = nullptr;};
    inline string getPromotionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionNo_, "") };
    inline SaveBatchTaskForCreatingOrderRedeemRequest& setPromotionNo(string promotionNo) { DARABONBA_PTR_SET_VALUE(promotionNo_, promotionNo) };


    // useCoupon Field Functions 
    bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
    void deleteUseCoupon() { this->useCoupon_ = nullptr;};
    inline bool getUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
    inline SaveBatchTaskForCreatingOrderRedeemRequest& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


    // usePromotion Field Functions 
    bool hasUsePromotion() const { return this->usePromotion_ != nullptr;};
    void deleteUsePromotion() { this->usePromotion_ = nullptr;};
    inline bool getUsePromotion() const { DARABONBA_PTR_GET_DEFAULT(usePromotion_, false) };
    inline SaveBatchTaskForCreatingOrderRedeemRequest& setUsePromotion(bool usePromotion) { DARABONBA_PTR_SET_VALUE(usePromotion_, usePromotion) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForCreatingOrderRedeemRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> couponNo_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<vector<SaveBatchTaskForCreatingOrderRedeemRequest::OrderRedeemParam>> orderRedeemParam_ {};
    shared_ptr<string> promotionNo_ {};
    shared_ptr<bool> useCoupon_ {};
    shared_ptr<bool> usePromotion_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
