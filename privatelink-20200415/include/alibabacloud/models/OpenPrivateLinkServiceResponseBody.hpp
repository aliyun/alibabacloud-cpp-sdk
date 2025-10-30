// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENPRIVATELINKSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENPRIVATELINKSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class OpenPrivateLinkServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenPrivateLinkServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenPrivateLinkServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OpenPrivateLinkServiceResponseBody() = default ;
    OpenPrivateLinkServiceResponseBody(const OpenPrivateLinkServiceResponseBody &) = default ;
    OpenPrivateLinkServiceResponseBody(OpenPrivateLinkServiceResponseBody &&) = default ;
    OpenPrivateLinkServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenPrivateLinkServiceResponseBody() = default ;
    OpenPrivateLinkServiceResponseBody& operator=(const OpenPrivateLinkServiceResponseBody &) = default ;
    OpenPrivateLinkServiceResponseBody& operator=(OpenPrivateLinkServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline OpenPrivateLinkServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenPrivateLinkServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
