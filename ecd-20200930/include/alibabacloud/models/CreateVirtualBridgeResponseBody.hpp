// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALBRIDGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALBRIDGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateVirtualBridgeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualBridgeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualBridgeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BridgeId, bridgeId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateVirtualBridgeResponseBody() = default ;
    CreateVirtualBridgeResponseBody(const CreateVirtualBridgeResponseBody &) = default ;
    CreateVirtualBridgeResponseBody(CreateVirtualBridgeResponseBody &&) = default ;
    CreateVirtualBridgeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualBridgeResponseBody() = default ;
    CreateVirtualBridgeResponseBody& operator=(const CreateVirtualBridgeResponseBody &) = default ;
    CreateVirtualBridgeResponseBody& operator=(CreateVirtualBridgeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bridgeId_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // bridgeId Field Functions 
    bool hasBridgeId() const { return this->bridgeId_ != nullptr;};
    void deleteBridgeId() { this->bridgeId_ = nullptr;};
    inline string getBridgeId() const { DARABONBA_PTR_GET_DEFAULT(bridgeId_, "") };
    inline CreateVirtualBridgeResponseBody& setBridgeId(string bridgeId) { DARABONBA_PTR_SET_VALUE(bridgeId_, bridgeId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateVirtualBridgeResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVirtualBridgeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The virtual bridge ID.
    shared_ptr<string> bridgeId_ {};
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
