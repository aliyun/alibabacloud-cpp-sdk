// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class EcIdAccountIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcIdAccountIds& obj) { 
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(EcId, ecId_);
      };
      friend void from_json(const Darabonba::Json& j, EcIdAccountIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(EcId, ecId_);
      };
      EcIdAccountIds() = default ;
      EcIdAccountIds(const EcIdAccountIds &) = default ;
      EcIdAccountIds(EcIdAccountIds &&) = default ;
      EcIdAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcIdAccountIds() = default ;
      EcIdAccountIds& operator=(const EcIdAccountIds &) = default ;
      EcIdAccountIds& operator=(EcIdAccountIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->ecId_ == nullptr; };
      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
      inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
      inline EcIdAccountIds& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline EcIdAccountIds& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // ecId Field Functions 
      bool hasEcId() const { return this->ecId_ != nullptr;};
      void deleteEcId() { this->ecId_ = nullptr;};
      inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
      inline EcIdAccountIds& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


    protected:
      shared_ptr<vector<int64_t>> accountIds_ {};
      shared_ptr<string> ecId_ {};
    };

    virtual bool empty() const override { return this->buyerId_ == nullptr
        && this->ecIdAccountIds_ == nullptr && this->nbid_ == nullptr && this->orderId_ == nullptr && this->paySubmitUid_ == nullptr && this->payerId_ == nullptr
        && this->token_ == nullptr; };
    // buyerId Field Functions 
    bool hasBuyerId() const { return this->buyerId_ != nullptr;};
    void deleteBuyerId() { this->buyerId_ = nullptr;};
    inline int64_t getBuyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, 0L) };
    inline PayOrderRequest& setBuyerId(int64_t buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<PayOrderRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<PayOrderRequest::EcIdAccountIds>) };
    inline vector<PayOrderRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<PayOrderRequest::EcIdAccountIds>) };
    inline PayOrderRequest& setEcIdAccountIds(const vector<PayOrderRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline PayOrderRequest& setEcIdAccountIds(vector<PayOrderRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline PayOrderRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline PayOrderRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // paySubmitUid Field Functions 
    bool hasPaySubmitUid() const { return this->paySubmitUid_ != nullptr;};
    void deletePaySubmitUid() { this->paySubmitUid_ = nullptr;};
    inline int64_t getPaySubmitUid() const { DARABONBA_PTR_GET_DEFAULT(paySubmitUid_, 0L) };
    inline PayOrderRequest& setPaySubmitUid(int64_t paySubmitUid) { DARABONBA_PTR_SET_VALUE(paySubmitUid_, paySubmitUid) };


    // payerId Field Functions 
    bool hasPayerId() const { return this->payerId_ != nullptr;};
    void deletePayerId() { this->payerId_ = nullptr;};
    inline int64_t getPayerId() const { DARABONBA_PTR_GET_DEFAULT(payerId_, 0L) };
    inline PayOrderRequest& setPayerId(int64_t payerId) { DARABONBA_PTR_SET_VALUE(payerId_, payerId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline PayOrderRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> buyerId_ {};
    shared_ptr<vector<PayOrderRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    shared_ptr<string> nbid_ {};
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // This parameter is required.
    shared_ptr<int64_t> paySubmitUid_ {};
    // This parameter is required.
    shared_ptr<int64_t> payerId_ {};
    // This parameter is required.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
