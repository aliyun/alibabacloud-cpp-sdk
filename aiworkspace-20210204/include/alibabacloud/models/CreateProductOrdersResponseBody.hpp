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
        && return this->message_ == nullptr && return this->orderId_ == nullptr && return this->productIds_ == nullptr && return this->requestId_ == nullptr; };
    // buyProductRequestId Field Functions 
    bool hasBuyProductRequestId() const { return this->buyProductRequestId_ != nullptr;};
    void deleteBuyProductRequestId() { this->buyProductRequestId_ = nullptr;};
    inline string buyProductRequestId() const { DARABONBA_PTR_GET_DEFAULT(buyProductRequestId_, "") };
    inline CreateProductOrdersResponseBody& setBuyProductRequestId(string buyProductRequestId) { DARABONBA_PTR_SET_VALUE(buyProductRequestId_, buyProductRequestId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateProductOrdersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateProductOrdersResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline const vector<string> & productIds() const { DARABONBA_PTR_GET_CONST(productIds_, vector<string>) };
    inline vector<string> productIds() { DARABONBA_PTR_GET(productIds_, vector<string>) };
    inline CreateProductOrdersResponseBody& setProductIds(const vector<string> & productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };
    inline CreateProductOrdersResponseBody& setProductIds(vector<string> && productIds) { DARABONBA_PTR_SET_RVALUE(productIds_, productIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProductOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the product purchase request.
    std::shared_ptr<string> buyProductRequestId_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The purchase order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<vector<string>> productIds_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
