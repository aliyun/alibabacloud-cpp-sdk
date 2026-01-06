// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateProductOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuyProductRequestId, buyProductRequestId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ProductIds, productIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyProductRequestId, buyProductRequestId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ProductIds, productIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateProductOrdersResponseBody() = default ;
    CreateProductOrdersResponseBody(const CreateProductOrdersResponseBody &) = default ;
    CreateProductOrdersResponseBody(CreateProductOrdersResponseBody &&) = default ;
    CreateProductOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductOrdersResponseBody() = default ;
    CreateProductOrdersResponseBody& operator=(const CreateProductOrdersResponseBody &) = default ;
    CreateProductOrdersResponseBody& operator=(CreateProductOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyProductRequestId_ == nullptr
        && this->message_ == nullptr && this->orderId_ == nullptr && this->productIds_ == nullptr && this->requestId_ == nullptr; };
    // buyProductRequestId Field Functions 
    bool hasBuyProductRequestId() const { return this->buyProductRequestId_ != nullptr;};
    void deleteBuyProductRequestId() { this->buyProductRequestId_ = nullptr;};
    inline string getBuyProductRequestId() const { DARABONBA_PTR_GET_DEFAULT(buyProductRequestId_, "") };
    inline CreateProductOrdersResponseBody& setBuyProductRequestId(string buyProductRequestId) { DARABONBA_PTR_SET_VALUE(buyProductRequestId_, buyProductRequestId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateProductOrdersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateProductOrdersResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline const vector<string> & getProductIds() const { DARABONBA_PTR_GET_CONST(productIds_, vector<string>) };
    inline vector<string> getProductIds() { DARABONBA_PTR_GET(productIds_, vector<string>) };
    inline CreateProductOrdersResponseBody& setProductIds(const vector<string> & productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };
    inline CreateProductOrdersResponseBody& setProductIds(vector<string> && productIds) { DARABONBA_PTR_SET_RVALUE(productIds_, productIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProductOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the product purchase request.
    shared_ptr<string> buyProductRequestId_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The purchase order ID.
    shared_ptr<string> orderId_ {};
    shared_ptr<vector<string>> productIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
