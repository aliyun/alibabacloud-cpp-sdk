// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAYORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class PayOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PayOrderResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PayStatus, payStatus_);
      DARABONBA_PTR_TO_JSON(PayerId, payerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PayOrderResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PayStatus, payStatus_);
      DARABONBA_PTR_FROM_JSON(PayerId, payerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PayOrderResponseBody() = default ;
    PayOrderResponseBody(const PayOrderResponseBody &) = default ;
    PayOrderResponseBody(PayOrderResponseBody &&) = default ;
    PayOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PayOrderResponseBody() = default ;
    PayOrderResponseBody& operator=(const PayOrderResponseBody &) = default ;
    PayOrderResponseBody& operator=(PayOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metadata_ != nullptr
        && this->orderId_ != nullptr && this->payStatus_ != nullptr && this->payerId_ != nullptr && this->requestId_ != nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline PayOrderResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline PayOrderResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline PayOrderResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int64_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0L) };
    inline PayOrderResponseBody& setPayStatus(int64_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payerId Field Functions 
    bool hasPayerId() const { return this->payerId_ != nullptr;};
    void deletePayerId() { this->payerId_ = nullptr;};
    inline int64_t payerId() const { DARABONBA_PTR_GET_DEFAULT(payerId_, 0L) };
    inline PayOrderResponseBody& setPayerId(int64_t payerId) { DARABONBA_PTR_SET_VALUE(payerId_, payerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PayOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int64_t> payStatus_ = nullptr;
    std::shared_ptr<int64_t> payerId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
