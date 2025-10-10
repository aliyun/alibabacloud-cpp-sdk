// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENEMASSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENEMASSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class OpenEmasServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenEmasServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenEmasServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OpenEmasServiceResponseBody() = default ;
    OpenEmasServiceResponseBody(const OpenEmasServiceResponseBody &) = default ;
    OpenEmasServiceResponseBody(OpenEmasServiceResponseBody &&) = default ;
    OpenEmasServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenEmasServiceResponseBody() = default ;
    OpenEmasServiceResponseBody& operator=(const OpenEmasServiceResponseBody &) = default ;
    OpenEmasServiceResponseBody& operator=(OpenEmasServiceResponseBody &&) = default ;
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
    inline OpenEmasServiceResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenEmasServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
