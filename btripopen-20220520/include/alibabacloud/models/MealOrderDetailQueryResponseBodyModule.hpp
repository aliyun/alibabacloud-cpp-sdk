// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALORDERDETAILQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_MEALORDERDETAILQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealOrderDetailQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealOrderDetailQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(corp_code_order_id, corpCodeOrderId_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(corp_pay_amount, corpPayAmount_);
      DARABONBA_PTR_TO_JSON(corp_refund_amount, corpRefundAmount_);
      DARABONBA_PTR_TO_JSON(meal_reason, mealReason_);
      DARABONBA_PTR_TO_JSON(merchant_name, merchantName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(order_sub_status, orderSubStatus_);
      DARABONBA_PTR_TO_JSON(order_type, orderType_);
      DARABONBA_PTR_TO_JSON(pay_amount, payAmount_);
      DARABONBA_PTR_TO_JSON(pay_type, payType_);
      DARABONBA_PTR_TO_JSON(person_pay_amount, personPayAmount_);
      DARABONBA_PTR_TO_JSON(person_refund_amount, personRefundAmount_);
      DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_TO_JSON(scene_name, sceneName_);
      DARABONBA_PTR_TO_JSON(settle_time, settleTime_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(user_alipay_id, userAlipayId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, MealOrderDetailQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(corp_code_order_id, corpCodeOrderId_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(corp_pay_amount, corpPayAmount_);
      DARABONBA_PTR_FROM_JSON(corp_refund_amount, corpRefundAmount_);
      DARABONBA_PTR_FROM_JSON(meal_reason, mealReason_);
      DARABONBA_PTR_FROM_JSON(merchant_name, merchantName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(order_sub_status, orderSubStatus_);
      DARABONBA_PTR_FROM_JSON(order_type, orderType_);
      DARABONBA_PTR_FROM_JSON(pay_amount, payAmount_);
      DARABONBA_PTR_FROM_JSON(pay_type, payType_);
      DARABONBA_PTR_FROM_JSON(person_pay_amount, personPayAmount_);
      DARABONBA_PTR_FROM_JSON(person_refund_amount, personRefundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_FROM_JSON(scene_name, sceneName_);
      DARABONBA_PTR_FROM_JSON(settle_time, settleTime_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(user_alipay_id, userAlipayId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    MealOrderDetailQueryResponseBodyModule() = default ;
    MealOrderDetailQueryResponseBodyModule(const MealOrderDetailQueryResponseBodyModule &) = default ;
    MealOrderDetailQueryResponseBodyModule(MealOrderDetailQueryResponseBodyModule &&) = default ;
    MealOrderDetailQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealOrderDetailQueryResponseBodyModule() = default ;
    MealOrderDetailQueryResponseBodyModule& operator=(const MealOrderDetailQueryResponseBodyModule &) = default ;
    MealOrderDetailQueryResponseBodyModule& operator=(MealOrderDetailQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->corpCodeOrderId_ != nullptr && this->corpId_ != nullptr && this->corpPayAmount_ != nullptr && this->corpRefundAmount_ != nullptr && this->mealReason_ != nullptr
        && this->merchantName_ != nullptr && this->orderId_ != nullptr && this->orderStatus_ != nullptr && this->orderSubStatus_ != nullptr && this->orderType_ != nullptr
        && this->payAmount_ != nullptr && this->payType_ != nullptr && this->personPayAmount_ != nullptr && this->personRefundAmount_ != nullptr && this->refundAmount_ != nullptr
        && this->sceneName_ != nullptr && this->settleTime_ != nullptr && this->thirdPartApplyId_ != nullptr && this->userAlipayId_ != nullptr && this->userId_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline MealOrderDetailQueryResponseBodyModule& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // corpCodeOrderId Field Functions 
    bool hasCorpCodeOrderId() const { return this->corpCodeOrderId_ != nullptr;};
    void deleteCorpCodeOrderId() { this->corpCodeOrderId_ = nullptr;};
    inline string corpCodeOrderId() const { DARABONBA_PTR_GET_DEFAULT(corpCodeOrderId_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setCorpCodeOrderId(string corpCodeOrderId) { DARABONBA_PTR_SET_VALUE(corpCodeOrderId_, corpCodeOrderId) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpPayAmount Field Functions 
    bool hasCorpPayAmount() const { return this->corpPayAmount_ != nullptr;};
    void deleteCorpPayAmount() { this->corpPayAmount_ = nullptr;};
    inline int64_t corpPayAmount() const { DARABONBA_PTR_GET_DEFAULT(corpPayAmount_, 0L) };
    inline MealOrderDetailQueryResponseBodyModule& setCorpPayAmount(int64_t corpPayAmount) { DARABONBA_PTR_SET_VALUE(corpPayAmount_, corpPayAmount) };


    // corpRefundAmount Field Functions 
    bool hasCorpRefundAmount() const { return this->corpRefundAmount_ != nullptr;};
    void deleteCorpRefundAmount() { this->corpRefundAmount_ = nullptr;};
    inline int64_t corpRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(corpRefundAmount_, 0L) };
    inline MealOrderDetailQueryResponseBodyModule& setCorpRefundAmount(int64_t corpRefundAmount) { DARABONBA_PTR_SET_VALUE(corpRefundAmount_, corpRefundAmount) };


    // mealReason Field Functions 
    bool hasMealReason() const { return this->mealReason_ != nullptr;};
    void deleteMealReason() { this->mealReason_ = nullptr;};
    inline string mealReason() const { DARABONBA_PTR_GET_DEFAULT(mealReason_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setMealReason(string mealReason) { DARABONBA_PTR_SET_VALUE(mealReason_, mealReason) };


    // merchantName Field Functions 
    bool hasMerchantName() const { return this->merchantName_ != nullptr;};
    void deleteMerchantName() { this->merchantName_ = nullptr;};
    inline string merchantName() const { DARABONBA_PTR_GET_DEFAULT(merchantName_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setMerchantName(string merchantName) { DARABONBA_PTR_SET_VALUE(merchantName_, merchantName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline MealOrderDetailQueryResponseBodyModule& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderSubStatus Field Functions 
    bool hasOrderSubStatus() const { return this->orderSubStatus_ != nullptr;};
    void deleteOrderSubStatus() { this->orderSubStatus_ = nullptr;};
    inline int32_t orderSubStatus() const { DARABONBA_PTR_GET_DEFAULT(orderSubStatus_, 0) };
    inline MealOrderDetailQueryResponseBodyModule& setOrderSubStatus(int32_t orderSubStatus) { DARABONBA_PTR_SET_VALUE(orderSubStatus_, orderSubStatus) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // payAmount Field Functions 
    bool hasPayAmount() const { return this->payAmount_ != nullptr;};
    void deletePayAmount() { this->payAmount_ = nullptr;};
    inline int64_t payAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0L) };
    inline MealOrderDetailQueryResponseBodyModule& setPayAmount(int64_t payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline int32_t payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
    inline MealOrderDetailQueryResponseBodyModule& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // personPayAmount Field Functions 
    bool hasPersonPayAmount() const { return this->personPayAmount_ != nullptr;};
    void deletePersonPayAmount() { this->personPayAmount_ = nullptr;};
    inline int64_t personPayAmount() const { DARABONBA_PTR_GET_DEFAULT(personPayAmount_, 0L) };
    inline MealOrderDetailQueryResponseBodyModule& setPersonPayAmount(int64_t personPayAmount) { DARABONBA_PTR_SET_VALUE(personPayAmount_, personPayAmount) };


    // personRefundAmount Field Functions 
    bool hasPersonRefundAmount() const { return this->personRefundAmount_ != nullptr;};
    void deletePersonRefundAmount() { this->personRefundAmount_ = nullptr;};
    inline int64_t personRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(personRefundAmount_, 0L) };
    inline MealOrderDetailQueryResponseBodyModule& setPersonRefundAmount(int64_t personRefundAmount) { DARABONBA_PTR_SET_VALUE(personRefundAmount_, personRefundAmount) };


    // refundAmount Field Functions 
    bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
    void deleteRefundAmount() { this->refundAmount_ = nullptr;};
    inline int64_t refundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0L) };
    inline MealOrderDetailQueryResponseBodyModule& setRefundAmount(int64_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // settleTime Field Functions 
    bool hasSettleTime() const { return this->settleTime_ != nullptr;};
    void deleteSettleTime() { this->settleTime_ = nullptr;};
    inline string settleTime() const { DARABONBA_PTR_GET_DEFAULT(settleTime_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setSettleTime(string settleTime) { DARABONBA_PTR_SET_VALUE(settleTime_, settleTime) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // userAlipayId Field Functions 
    bool hasUserAlipayId() const { return this->userAlipayId_ != nullptr;};
    void deleteUserAlipayId() { this->userAlipayId_ = nullptr;};
    inline string userAlipayId() const { DARABONBA_PTR_GET_DEFAULT(userAlipayId_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setUserAlipayId(string userAlipayId) { DARABONBA_PTR_SET_VALUE(userAlipayId_, userAlipayId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline MealOrderDetailQueryResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<string> corpCodeOrderId_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<int64_t> corpPayAmount_ = nullptr;
    std::shared_ptr<int64_t> corpRefundAmount_ = nullptr;
    std::shared_ptr<string> mealReason_ = nullptr;
    std::shared_ptr<string> merchantName_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<int32_t> orderSubStatus_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<int64_t> payAmount_ = nullptr;
    std::shared_ptr<int32_t> payType_ = nullptr;
    std::shared_ptr<int64_t> personPayAmount_ = nullptr;
    std::shared_ptr<int64_t> personRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> refundAmount_ = nullptr;
    std::shared_ptr<string> sceneName_ = nullptr;
    std::shared_ptr<string> settleTime_ = nullptr;
    std::shared_ptr<string> thirdPartApplyId_ = nullptr;
    std::shared_ptr<string> userAlipayId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
