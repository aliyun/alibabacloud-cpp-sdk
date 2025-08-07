// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCESPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateServiceInstanceSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateServiceInstanceSpecResponseBody() = default ;
    UpdateServiceInstanceSpecResponseBody(const UpdateServiceInstanceSpecResponseBody &) = default ;
    UpdateServiceInstanceSpecResponseBody(UpdateServiceInstanceSpecResponseBody &&) = default ;
    UpdateServiceInstanceSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceSpecResponseBody() = default ;
    UpdateServiceInstanceSpecResponseBody& operator=(const UpdateServiceInstanceSpecResponseBody &) = default ;
    UpdateServiceInstanceSpecResponseBody& operator=(UpdateServiceInstanceSpecResponseBody &&) = default ;
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
    inline UpdateServiceInstanceSpecResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateServiceInstanceSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
