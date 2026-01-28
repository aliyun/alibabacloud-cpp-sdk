// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGORDERTRANSFERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORCREATINGORDERTRANSFERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForCreatingOrderTransferRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForCreatingOrderTransferRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PermitPremiumTransfer, permitPremiumTransfer_);
      DARABONBA_PTR_TO_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_TO_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForCreatingOrderTransferRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PermitPremiumTransfer, permitPremiumTransfer_);
      DARABONBA_PTR_FROM_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_FROM_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveSingleTaskForCreatingOrderTransferRequest() = default ;
    SaveSingleTaskForCreatingOrderTransferRequest(const SaveSingleTaskForCreatingOrderTransferRequest &) = default ;
    SaveSingleTaskForCreatingOrderTransferRequest(SaveSingleTaskForCreatingOrderTransferRequest &&) = default ;
    SaveSingleTaskForCreatingOrderTransferRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForCreatingOrderTransferRequest() = default ;
    SaveSingleTaskForCreatingOrderTransferRequest& operator=(const SaveSingleTaskForCreatingOrderTransferRequest &) = default ;
    SaveSingleTaskForCreatingOrderTransferRequest& operator=(SaveSingleTaskForCreatingOrderTransferRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationCode_ == nullptr
        && this->couponNo_ == nullptr && this->domainName_ == nullptr && this->lang_ == nullptr && this->permitPremiumTransfer_ == nullptr && this->promotionNo_ == nullptr
        && this->registrantProfileId_ == nullptr && this->useCoupon_ == nullptr && this->usePromotion_ == nullptr && this->userClientIp_ == nullptr; };
    // authorizationCode Field Functions 
    bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
    void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
    inline string getAuthorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // permitPremiumTransfer Field Functions 
    bool hasPermitPremiumTransfer() const { return this->permitPremiumTransfer_ != nullptr;};
    void deletePermitPremiumTransfer() { this->permitPremiumTransfer_ = nullptr;};
    inline bool getPermitPremiumTransfer() const { DARABONBA_PTR_GET_DEFAULT(permitPremiumTransfer_, false) };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setPermitPremiumTransfer(bool permitPremiumTransfer) { DARABONBA_PTR_SET_VALUE(permitPremiumTransfer_, permitPremiumTransfer) };


    // promotionNo Field Functions 
    bool hasPromotionNo() const { return this->promotionNo_ != nullptr;};
    void deletePromotionNo() { this->promotionNo_ = nullptr;};
    inline string getPromotionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionNo_, "") };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setPromotionNo(string promotionNo) { DARABONBA_PTR_SET_VALUE(promotionNo_, promotionNo) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // useCoupon Field Functions 
    bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
    void deleteUseCoupon() { this->useCoupon_ = nullptr;};
    inline bool getUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


    // usePromotion Field Functions 
    bool hasUsePromotion() const { return this->usePromotion_ != nullptr;};
    void deleteUsePromotion() { this->usePromotion_ = nullptr;};
    inline bool getUsePromotion() const { DARABONBA_PTR_GET_DEFAULT(usePromotion_, false) };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setUsePromotion(bool usePromotion) { DARABONBA_PTR_SET_VALUE(usePromotion_, usePromotion) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveSingleTaskForCreatingOrderTransferRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> authorizationCode_ {};
    shared_ptr<string> couponNo_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<bool> permitPremiumTransfer_ {};
    shared_ptr<string> promotionNo_ {};
    // This parameter is required.
    shared_ptr<int64_t> registrantProfileId_ {};
    shared_ptr<bool> useCoupon_ {};
    shared_ptr<bool> usePromotion_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
