// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntlMarket20250812
{
namespace Models
{
  class CreateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(OrderSouce, orderSouce_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(OrderSouce, orderSouce_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
    };
    CreateOrderRequest() = default ;
    CreateOrderRequest(const CreateOrderRequest &) = default ;
    CreateOrderRequest(CreateOrderRequest &&) = default ;
    CreateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderRequest() = default ;
    CreateOrderRequest& operator=(const CreateOrderRequest &) = default ;
    CreateOrderRequest& operator=(CreateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->commodity_ != nullptr && this->orderSouce_ != nullptr && this->orderType_ != nullptr && this->ownerId_ != nullptr && this->paymentType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOrderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline string commodity() const { DARABONBA_PTR_GET_DEFAULT(commodity_, "") };
    inline CreateOrderRequest& setCommodity(string commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };


    // orderSouce Field Functions 
    bool hasOrderSouce() const { return this->orderSouce_ != nullptr;};
    void deleteOrderSouce() { this->orderSouce_ = nullptr;};
    inline string orderSouce() const { DARABONBA_PTR_GET_DEFAULT(orderSouce_, "") };
    inline CreateOrderRequest& setOrderSouce(string orderSouce) { DARABONBA_PTR_SET_VALUE(orderSouce_, orderSouce) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline CreateOrderRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateOrderRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateOrderRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commodity_ = nullptr;
    std::shared_ptr<string> orderSouce_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> paymentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntlMarket20250812
#endif
