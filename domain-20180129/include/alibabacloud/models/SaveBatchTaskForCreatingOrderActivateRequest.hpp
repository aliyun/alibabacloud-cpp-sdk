// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERACTIVATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERACTIVATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForCreatingOrderActivateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForCreatingOrderActivateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderActivateParam, orderActivateParam_);
      DARABONBA_PTR_TO_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_TO_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForCreatingOrderActivateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderActivateParam, orderActivateParam_);
      DARABONBA_PTR_FROM_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_FROM_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForCreatingOrderActivateRequest() = default ;
    SaveBatchTaskForCreatingOrderActivateRequest(const SaveBatchTaskForCreatingOrderActivateRequest &) = default ;
    SaveBatchTaskForCreatingOrderActivateRequest(SaveBatchTaskForCreatingOrderActivateRequest &&) = default ;
    SaveBatchTaskForCreatingOrderActivateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForCreatingOrderActivateRequest() = default ;
    SaveBatchTaskForCreatingOrderActivateRequest& operator=(const SaveBatchTaskForCreatingOrderActivateRequest &) = default ;
    SaveBatchTaskForCreatingOrderActivateRequest& operator=(SaveBatchTaskForCreatingOrderActivateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->couponNo_ == nullptr
        && return this->lang_ == nullptr && return this->orderActivateParam_ == nullptr && return this->promotionNo_ == nullptr && return this->useCoupon_ == nullptr && return this->usePromotion_ == nullptr
        && return this->userClientIp_ == nullptr; };
    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string couponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderActivateParam Field Functions 
    bool hasOrderActivateParam() const { return this->orderActivateParam_ != nullptr;};
    void deleteOrderActivateParam() { this->orderActivateParam_ = nullptr;};
    inline const vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam> & orderActivateParam() const { DARABONBA_PTR_GET_CONST(orderActivateParam_, vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam>) };
    inline vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam> orderActivateParam() { DARABONBA_PTR_GET(orderActivateParam_, vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam>) };
    inline SaveBatchTaskForCreatingOrderActivateRequest& setOrderActivateParam(const vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam> & orderActivateParam) { DARABONBA_PTR_SET_VALUE(orderActivateParam_, orderActivateParam) };
    inline SaveBatchTaskForCreatingOrderActivateRequest& setOrderActivateParam(vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam> && orderActivateParam) { DARABONBA_PTR_SET_RVALUE(orderActivateParam_, orderActivateParam) };


    // promotionNo Field Functions 
    bool hasPromotionNo() const { return this->promotionNo_ != nullptr;};
    void deletePromotionNo() { this->promotionNo_ = nullptr;};
    inline string promotionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionNo_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequest& setPromotionNo(string promotionNo) { DARABONBA_PTR_SET_VALUE(promotionNo_, promotionNo) };


    // useCoupon Field Functions 
    bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
    void deleteUseCoupon() { this->useCoupon_ = nullptr;};
    inline bool useCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
    inline SaveBatchTaskForCreatingOrderActivateRequest& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


    // usePromotion Field Functions 
    bool hasUsePromotion() const { return this->usePromotion_ != nullptr;};
    void deleteUsePromotion() { this->usePromotion_ = nullptr;};
    inline bool usePromotion() const { DARABONBA_PTR_GET_DEFAULT(usePromotion_, false) };
    inline SaveBatchTaskForCreatingOrderActivateRequest& setUsePromotion(bool usePromotion) { DARABONBA_PTR_SET_VALUE(usePromotion_, usePromotion) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForCreatingOrderActivateRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<string> couponNo_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam>> orderActivateParam_ = nullptr;
    std::shared_ptr<string> promotionNo_ = nullptr;
    std::shared_ptr<bool> useCoupon_ = nullptr;
    std::shared_ptr<bool> usePromotion_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
