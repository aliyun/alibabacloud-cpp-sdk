// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALORDERDETAILQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MEALORDERDETAILQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealOrderDetailQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealOrderDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, MealOrderDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    MealOrderDetailQueryResponseBody() = default ;
    MealOrderDetailQueryResponseBody(const MealOrderDetailQueryResponseBody &) = default ;
    MealOrderDetailQueryResponseBody(MealOrderDetailQueryResponseBody &&) = default ;
    MealOrderDetailQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealOrderDetailQueryResponseBody() = default ;
    MealOrderDetailQueryResponseBody& operator=(const MealOrderDetailQueryResponseBody &) = default ;
    MealOrderDetailQueryResponseBody& operator=(MealOrderDetailQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
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
        DARABONBA_PTR_TO_JSON(receipt_image_urls, receiptImageUrls_);
        DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
        DARABONBA_PTR_TO_JSON(scene_name, sceneName_);
        DARABONBA_PTR_TO_JSON(settle_time, settleTime_);
        DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
        DARABONBA_PTR_TO_JSON(user_alipay_id, userAlipayId_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
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
        DARABONBA_PTR_FROM_JSON(receipt_image_urls, receiptImageUrls_);
        DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
        DARABONBA_PTR_FROM_JSON(scene_name, sceneName_);
        DARABONBA_PTR_FROM_JSON(settle_time, settleTime_);
        DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
        DARABONBA_PTR_FROM_JSON(user_alipay_id, userAlipayId_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->corpCodeOrderId_ == nullptr && this->corpId_ == nullptr && this->corpPayAmount_ == nullptr && this->corpRefundAmount_ == nullptr && this->mealReason_ == nullptr
        && this->merchantName_ == nullptr && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->orderSubStatus_ == nullptr && this->orderType_ == nullptr
        && this->payAmount_ == nullptr && this->payType_ == nullptr && this->personPayAmount_ == nullptr && this->personRefundAmount_ == nullptr && this->receiptImageUrls_ == nullptr
        && this->refundAmount_ == nullptr && this->sceneName_ == nullptr && this->settleTime_ == nullptr && this->thirdPartApplyId_ == nullptr && this->userAlipayId_ == nullptr
        && this->userId_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // corpCodeOrderId Field Functions 
      bool hasCorpCodeOrderId() const { return this->corpCodeOrderId_ != nullptr;};
      void deleteCorpCodeOrderId() { this->corpCodeOrderId_ = nullptr;};
      inline string getCorpCodeOrderId() const { DARABONBA_PTR_GET_DEFAULT(corpCodeOrderId_, "") };
      inline Module& setCorpCodeOrderId(string corpCodeOrderId) { DARABONBA_PTR_SET_VALUE(corpCodeOrderId_, corpCodeOrderId) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // corpPayAmount Field Functions 
      bool hasCorpPayAmount() const { return this->corpPayAmount_ != nullptr;};
      void deleteCorpPayAmount() { this->corpPayAmount_ = nullptr;};
      inline int64_t getCorpPayAmount() const { DARABONBA_PTR_GET_DEFAULT(corpPayAmount_, 0L) };
      inline Module& setCorpPayAmount(int64_t corpPayAmount) { DARABONBA_PTR_SET_VALUE(corpPayAmount_, corpPayAmount) };


      // corpRefundAmount Field Functions 
      bool hasCorpRefundAmount() const { return this->corpRefundAmount_ != nullptr;};
      void deleteCorpRefundAmount() { this->corpRefundAmount_ = nullptr;};
      inline int64_t getCorpRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(corpRefundAmount_, 0L) };
      inline Module& setCorpRefundAmount(int64_t corpRefundAmount) { DARABONBA_PTR_SET_VALUE(corpRefundAmount_, corpRefundAmount) };


      // mealReason Field Functions 
      bool hasMealReason() const { return this->mealReason_ != nullptr;};
      void deleteMealReason() { this->mealReason_ = nullptr;};
      inline string getMealReason() const { DARABONBA_PTR_GET_DEFAULT(mealReason_, "") };
      inline Module& setMealReason(string mealReason) { DARABONBA_PTR_SET_VALUE(mealReason_, mealReason) };


      // merchantName Field Functions 
      bool hasMerchantName() const { return this->merchantName_ != nullptr;};
      void deleteMerchantName() { this->merchantName_ = nullptr;};
      inline string getMerchantName() const { DARABONBA_PTR_GET_DEFAULT(merchantName_, "") };
      inline Module& setMerchantName(string merchantName) { DARABONBA_PTR_SET_VALUE(merchantName_, merchantName) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
      inline Module& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // orderSubStatus Field Functions 
      bool hasOrderSubStatus() const { return this->orderSubStatus_ != nullptr;};
      void deleteOrderSubStatus() { this->orderSubStatus_ = nullptr;};
      inline int32_t getOrderSubStatus() const { DARABONBA_PTR_GET_DEFAULT(orderSubStatus_, 0) };
      inline Module& setOrderSubStatus(int32_t orderSubStatus) { DARABONBA_PTR_SET_VALUE(orderSubStatus_, orderSubStatus) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline Module& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // payAmount Field Functions 
      bool hasPayAmount() const { return this->payAmount_ != nullptr;};
      void deletePayAmount() { this->payAmount_ = nullptr;};
      inline int64_t getPayAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0L) };
      inline Module& setPayAmount(int64_t payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
      inline Module& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // personPayAmount Field Functions 
      bool hasPersonPayAmount() const { return this->personPayAmount_ != nullptr;};
      void deletePersonPayAmount() { this->personPayAmount_ = nullptr;};
      inline int64_t getPersonPayAmount() const { DARABONBA_PTR_GET_DEFAULT(personPayAmount_, 0L) };
      inline Module& setPersonPayAmount(int64_t personPayAmount) { DARABONBA_PTR_SET_VALUE(personPayAmount_, personPayAmount) };


      // personRefundAmount Field Functions 
      bool hasPersonRefundAmount() const { return this->personRefundAmount_ != nullptr;};
      void deletePersonRefundAmount() { this->personRefundAmount_ = nullptr;};
      inline int64_t getPersonRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(personRefundAmount_, 0L) };
      inline Module& setPersonRefundAmount(int64_t personRefundAmount) { DARABONBA_PTR_SET_VALUE(personRefundAmount_, personRefundAmount) };


      // receiptImageUrls Field Functions 
      bool hasReceiptImageUrls() const { return this->receiptImageUrls_ != nullptr;};
      void deleteReceiptImageUrls() { this->receiptImageUrls_ = nullptr;};
      inline string getReceiptImageUrls() const { DARABONBA_PTR_GET_DEFAULT(receiptImageUrls_, "") };
      inline Module& setReceiptImageUrls(string receiptImageUrls) { DARABONBA_PTR_SET_VALUE(receiptImageUrls_, receiptImageUrls) };


      // refundAmount Field Functions 
      bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
      void deleteRefundAmount() { this->refundAmount_ = nullptr;};
      inline int64_t getRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0L) };
      inline Module& setRefundAmount(int64_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


      // sceneName Field Functions 
      bool hasSceneName() const { return this->sceneName_ != nullptr;};
      void deleteSceneName() { this->sceneName_ = nullptr;};
      inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
      inline Module& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


      // settleTime Field Functions 
      bool hasSettleTime() const { return this->settleTime_ != nullptr;};
      void deleteSettleTime() { this->settleTime_ = nullptr;};
      inline string getSettleTime() const { DARABONBA_PTR_GET_DEFAULT(settleTime_, "") };
      inline Module& setSettleTime(string settleTime) { DARABONBA_PTR_SET_VALUE(settleTime_, settleTime) };


      // thirdPartApplyId Field Functions 
      bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
      void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
      inline string getThirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
      inline Module& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


      // userAlipayId Field Functions 
      bool hasUserAlipayId() const { return this->userAlipayId_ != nullptr;};
      void deleteUserAlipayId() { this->userAlipayId_ = nullptr;};
      inline string getUserAlipayId() const { DARABONBA_PTR_GET_DEFAULT(userAlipayId_, "") };
      inline Module& setUserAlipayId(string userAlipayId) { DARABONBA_PTR_SET_VALUE(userAlipayId_, userAlipayId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int64_t> applyId_ {};
      shared_ptr<string> corpCodeOrderId_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<int64_t> corpPayAmount_ {};
      shared_ptr<int64_t> corpRefundAmount_ {};
      shared_ptr<string> mealReason_ {};
      shared_ptr<string> merchantName_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<int32_t> orderStatus_ {};
      shared_ptr<int32_t> orderSubStatus_ {};
      shared_ptr<string> orderType_ {};
      shared_ptr<int64_t> payAmount_ {};
      shared_ptr<int32_t> payType_ {};
      shared_ptr<int64_t> personPayAmount_ {};
      shared_ptr<int64_t> personRefundAmount_ {};
      shared_ptr<string> receiptImageUrls_ {};
      shared_ptr<int64_t> refundAmount_ {};
      shared_ptr<string> sceneName_ {};
      shared_ptr<string> settleTime_ {};
      shared_ptr<string> thirdPartApplyId_ {};
      shared_ptr<string> userAlipayId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MealOrderDetailQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MealOrderDetailQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const MealOrderDetailQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, MealOrderDetailQueryResponseBody::Module) };
    inline MealOrderDetailQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, MealOrderDetailQueryResponseBody::Module) };
    inline MealOrderDetailQueryResponseBody& setModule(const MealOrderDetailQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline MealOrderDetailQueryResponseBody& setModule(MealOrderDetailQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MealOrderDetailQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MealOrderDetailQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline MealOrderDetailQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<MealOrderDetailQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
