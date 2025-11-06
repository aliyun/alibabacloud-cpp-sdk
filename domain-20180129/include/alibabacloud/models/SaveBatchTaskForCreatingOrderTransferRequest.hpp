// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERTRANSFERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERTRANSFERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForCreatingOrderTransferRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForCreatingOrderTransferRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderTransferParam, orderTransferParam_);
      DARABONBA_PTR_TO_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_TO_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_TO_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForCreatingOrderTransferRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderTransferParam, orderTransferParam_);
      DARABONBA_PTR_FROM_JSON(PromotionNo, promotionNo_);
      DARABONBA_PTR_FROM_JSON(UseCoupon, useCoupon_);
      DARABONBA_PTR_FROM_JSON(UsePromotion, usePromotion_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForCreatingOrderTransferRequest() = default ;
    SaveBatchTaskForCreatingOrderTransferRequest(const SaveBatchTaskForCreatingOrderTransferRequest &) = default ;
    SaveBatchTaskForCreatingOrderTransferRequest(SaveBatchTaskForCreatingOrderTransferRequest &&) = default ;
    SaveBatchTaskForCreatingOrderTransferRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForCreatingOrderTransferRequest() = default ;
    SaveBatchTaskForCreatingOrderTransferRequest& operator=(const SaveBatchTaskForCreatingOrderTransferRequest &) = default ;
    SaveBatchTaskForCreatingOrderTransferRequest& operator=(SaveBatchTaskForCreatingOrderTransferRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->couponNo_ == nullptr
        && return this->lang_ == nullptr && return this->orderTransferParam_ == nullptr && return this->promotionNo_ == nullptr && return this->useCoupon_ == nullptr && return this->usePromotion_ == nullptr
        && return this->userClientIp_ == nullptr; };
    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string couponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline SaveBatchTaskForCreatingOrderTransferRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForCreatingOrderTransferRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderTransferParam Field Functions 
    bool hasOrderTransferParam() const { return this->orderTransferParam_ != nullptr;};
    void deleteOrderTransferParam() { this->orderTransferParam_ = nullptr;};
    inline const vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam> & orderTransferParam() const { DARABONBA_PTR_GET_CONST(orderTransferParam_, vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam>) };
    inline vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam> orderTransferParam() { DARABONBA_PTR_GET(orderTransferParam_, vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam>) };
    inline SaveBatchTaskForCreatingOrderTransferRequest& setOrderTransferParam(const vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam> & orderTransferParam) { DARABONBA_PTR_SET_VALUE(orderTransferParam_, orderTransferParam) };
    inline SaveBatchTaskForCreatingOrderTransferRequest& setOrderTransferParam(vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam> && orderTransferParam) { DARABONBA_PTR_SET_RVALUE(orderTransferParam_, orderTransferParam) };


    // promotionNo Field Functions 
    bool hasPromotionNo() const { return this->promotionNo_ != nullptr;};
    void deletePromotionNo() { this->promotionNo_ = nullptr;};
    inline string promotionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionNo_, "") };
    inline SaveBatchTaskForCreatingOrderTransferRequest& setPromotionNo(string promotionNo) { DARABONBA_PTR_SET_VALUE(promotionNo_, promotionNo) };


    // useCoupon Field Functions 
    bool hasUseCoupon() const { return this->useCoupon_ != nullptr;};
    void deleteUseCoupon() { this->useCoupon_ = nullptr;};
    inline bool useCoupon() const { DARABONBA_PTR_GET_DEFAULT(useCoupon_, false) };
    inline SaveBatchTaskForCreatingOrderTransferRequest& setUseCoupon(bool useCoupon) { DARABONBA_PTR_SET_VALUE(useCoupon_, useCoupon) };


    // usePromotion Field Functions 
    bool hasUsePromotion() const { return this->usePromotion_ != nullptr;};
    void deleteUsePromotion() { this->usePromotion_ = nullptr;};
    inline bool usePromotion() const { DARABONBA_PTR_GET_DEFAULT(usePromotion_, false) };
    inline SaveBatchTaskForCreatingOrderTransferRequest& setUsePromotion(bool usePromotion) { DARABONBA_PTR_SET_VALUE(usePromotion_, usePromotion) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForCreatingOrderTransferRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<string> couponNo_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam>> orderTransferParam_ = nullptr;
    std::shared_ptr<string> promotionNo_ = nullptr;
    std::shared_ptr<bool> useCoupon_ = nullptr;
    std::shared_ptr<bool> usePromotion_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
