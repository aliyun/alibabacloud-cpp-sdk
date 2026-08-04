// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGWCONSUMERORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGWCONSUMERORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateGwConsumerOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGwConsumerOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreditToken, creditToken_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGwConsumerOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditToken, creditToken_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateGwConsumerOrderResponseBody() = default ;
    CreateGwConsumerOrderResponseBody(const CreateGwConsumerOrderResponseBody &) = default ;
    CreateGwConsumerOrderResponseBody(CreateGwConsumerOrderResponseBody &&) = default ;
    CreateGwConsumerOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGwConsumerOrderResponseBody() = default ;
    CreateGwConsumerOrderResponseBody& operator=(const CreateGwConsumerOrderResponseBody &) = default ;
    CreateGwConsumerOrderResponseBody& operator=(CreateGwConsumerOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creditToken_ == nullptr
        && this->expireTime_ == nullptr && this->gatewayId_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // creditToken Field Functions 
    bool hasCreditToken() const { return this->creditToken_ != nullptr;};
    void deleteCreditToken() { this->creditToken_ = nullptr;};
    inline string getCreditToken() const { DARABONBA_PTR_GET_DEFAULT(creditToken_, "") };
    inline CreateGwConsumerOrderResponseBody& setCreditToken(string creditToken) { DARABONBA_PTR_SET_VALUE(creditToken_, creditToken) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateGwConsumerOrderResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateGwConsumerOrderResponseBody& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateGwConsumerOrderResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGwConsumerOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The redemption code used for subsequent activation.
    shared_ptr<string> creditToken_ {};
    // The expiration time.
    shared_ptr<string> expireTime_ {};
    // The ID of the AI gateway instance.
    shared_ptr<string> gatewayId_ {};
    // The order ID returned after the order is placed.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
