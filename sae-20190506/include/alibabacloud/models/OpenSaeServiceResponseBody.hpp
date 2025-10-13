// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSAESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENSAESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class OpenSaeServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenSaeServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenSaeServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OpenSaeServiceResponseBody() = default ;
    OpenSaeServiceResponseBody(const OpenSaeServiceResponseBody &) = default ;
    OpenSaeServiceResponseBody(OpenSaeServiceResponseBody &&) = default ;
    OpenSaeServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenSaeServiceResponseBody() = default ;
    OpenSaeServiceResponseBody& operator=(const OpenSaeServiceResponseBody &) = default ;
    OpenSaeServiceResponseBody& operator=(OpenSaeServiceResponseBody &&) = default ;
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
    inline OpenSaeServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenSaeServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // PushEvent
    std::shared_ptr<string> orderId_ = nullptr;
    // enableWAF
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
