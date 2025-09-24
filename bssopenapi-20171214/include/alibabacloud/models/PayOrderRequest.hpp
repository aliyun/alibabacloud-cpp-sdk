// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PayOrderRequestEcIdAccountIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class PayOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PayOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuyerId, buyerId_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PaySubmitUid, paySubmitUid_);
      DARABONBA_PTR_TO_JSON(PayerId, payerId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, PayOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyerId, buyerId_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PaySubmitUid, paySubmitUid_);
      DARABONBA_PTR_FROM_JSON(PayerId, payerId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    PayOrderRequest() = default ;
    PayOrderRequest(const PayOrderRequest &) = default ;
    PayOrderRequest(PayOrderRequest &&) = default ;
    PayOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PayOrderRequest() = default ;
    PayOrderRequest& operator=(const PayOrderRequest &) = default ;
    PayOrderRequest& operator=(PayOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buyerId_ != nullptr
        && this->ecIdAccountIds_ != nullptr && this->nbid_ != nullptr && this->orderId_ != nullptr && this->paySubmitUid_ != nullptr && this->payerId_ != nullptr
        && this->token_ != nullptr; };
    // buyerId Field Functions 
    bool hasBuyerId() const { return this->buyerId_ != nullptr;};
    void deleteBuyerId() { this->buyerId_ = nullptr;};
    inline int64_t buyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, 0L) };
    inline PayOrderRequest& setBuyerId(int64_t buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<PayOrderRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<PayOrderRequestEcIdAccountIds>) };
    inline vector<PayOrderRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<PayOrderRequestEcIdAccountIds>) };
    inline PayOrderRequest& setEcIdAccountIds(const vector<PayOrderRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline PayOrderRequest& setEcIdAccountIds(vector<PayOrderRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline PayOrderRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline PayOrderRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // paySubmitUid Field Functions 
    bool hasPaySubmitUid() const { return this->paySubmitUid_ != nullptr;};
    void deletePaySubmitUid() { this->paySubmitUid_ = nullptr;};
    inline int64_t paySubmitUid() const { DARABONBA_PTR_GET_DEFAULT(paySubmitUid_, 0L) };
    inline PayOrderRequest& setPaySubmitUid(int64_t paySubmitUid) { DARABONBA_PTR_SET_VALUE(paySubmitUid_, paySubmitUid) };


    // payerId Field Functions 
    bool hasPayerId() const { return this->payerId_ != nullptr;};
    void deletePayerId() { this->payerId_ = nullptr;};
    inline int64_t payerId() const { DARABONBA_PTR_GET_DEFAULT(payerId_, 0L) };
    inline PayOrderRequest& setPayerId(int64_t payerId) { DARABONBA_PTR_SET_VALUE(payerId_, payerId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline PayOrderRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> buyerId_ = nullptr;
    std::shared_ptr<vector<PayOrderRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> paySubmitUid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> payerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
