// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENTRANSITROUTERSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENTRANSITROUTERSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class OpenTransitRouterServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenTransitRouterServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenTransitRouterServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OpenTransitRouterServiceResponseBody() = default ;
    OpenTransitRouterServiceResponseBody(const OpenTransitRouterServiceResponseBody &) = default ;
    OpenTransitRouterServiceResponseBody(OpenTransitRouterServiceResponseBody &&) = default ;
    OpenTransitRouterServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenTransitRouterServiceResponseBody() = default ;
    OpenTransitRouterServiceResponseBody& operator=(const OpenTransitRouterServiceResponseBody &) = default ;
    OpenTransitRouterServiceResponseBody& operator=(OpenTransitRouterServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->requestId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline OpenTransitRouterServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenTransitRouterServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
